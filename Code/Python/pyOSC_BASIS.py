# Script zum Verschicken von OSC-Messages via osc4py3 an ein Faust-Programm

import osc4py3
from osc4py3.as_eventloop import *

import numpy as np
import time
import pandas as pd

from edit_dataset import edit
from scipy.interpolate import interp1d
import matplotlib.pyplot as plt

sleepTime = 0.1  # in seconds

'''Beispiel-Daten generieren
# Struktur Vorschlag:
# 1.D = Orte
# 2.D = Parameter
# 3.D = Zeit
freqMin = 60
freqMax = 500
sleepTime = 9  # in Sekunden
anzTage = 10

data = np.random.uniform(freqMin, freqMax, size=(5, 16, anzTage))  # Zeile 0: freq, 1: gain, 2: gate;
data[1, :] = data[1, :] / freqMax
for i in range(data.shape[1]):
    for j in range(data.shape[2]):
        data[2, i, j] = np.random.choice([0, 1])
data[3, :] = data[3, :] / freqMax * 3
data[4, :] = data[4, :] / freqMax * 6
# print(data)
'''

'''reading data'''
# path = '/Users/thomas/Documents/TU-Berlin/Faecher/Semester2/Sound-Synthesis/SoundSynthesis_Git/SoundSynthesis/CSV'
path = '/home/nilsm/tubCloud/Akt/Sem6/Synth/git_thomas/SoundSynthesis/CSV'
df = pd.read_csv(path + '/RKI_COVID19.csv')  # path + file name
data, params, bl, idx = edit(df, path)



'''parameter: 
    'AnzahlFall', 'AnzahlGenesen', 'AnzahlTodesfall', 'Female', 'Unknown',
    'Male', 'A00-A04', 'A05-A14', 'A15-A34', 'A35-A59', 'A60-A79', 'A80+',
    'A_unknown']
   states:
    ['Baden-Wuerttemberg', 'Bayern', 'Berlin', 'Brandenburg', 'Bremen', 'Hamburg', 
    'Hessen', 'Mecklenburg-Vorpommern', 'Niedersachsen', 'Nordrhein-Westfalen', 
    'Rheinland-Pfalz', 'Saarland', 'Sachsen', 'Sachsen-Anhalt', 'Schleswig-Holstein', 'Thueringen']'''

'''Interpolation'''

# l_param = ['gain', 'freq']
# y = data[0, 0, :]
# x = np.linspace(0, y.shape[0], num=numb, endpoint=True)
#
# f2 = interp1d(x, y, kind='cubic')
# plt.plot(x, f2(x), '*')
#
# plt.show()

# numb = data.shape[2]
numb = 500

x = np.linspace(0, data.shape[2], num=data.shape[2], endpoint=True)
xnew = np.linspace(0, data.shape[2], num=numb, endpoint=True)

dataInt = np.zeros([data.shape[0], data.shape[1], numb])
for j in range(data.shape[0]):
    for i in range(data.shape[1]):
        y = data[0, i, :]
        f2 = interp1d(x, y, kind='cubic')
        dataInt[j, i, :] = f2(xnew)

'''Plotting'''
fig, axs = plt.subplots(2)
fig.suptitle('Vertically stacked subplots')
axs[0].plot(x, data[0, 0, :], 'o')
axs[1].plot(xnew, dataInt[0, 0, :], '*')
plt.show()

'''adjust data for current FAUST-program'''
data = dataInt

data = data[:2, :, :]
freqVal = [60, 300]
gainVal = [0, 1]

data[0, :] = data[0, :]/data[0, :].max()

# data[1, :] = data[1, :]/data[1, :].max() * freqVal[1]
np.linspace(60, 400, 16)
for i in range(data.shape[2]):
    # data[1, :, i] = np.array([60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200, 210])
    data[1, :, i] = np.linspace(60, 250, 16)

'''FAUST-Parameter'''
# OSC-Port
port = 5510
# Synth-Name
synthName = "BASIS"
# Titel der h-Groups
hgroups = ["SINUS", "volume"]
# Parameter
# params = ["freq", "gain", "gate", "attack", "release"]  # Reihenfolge muss mit der im Datensatz übereinstimmen
# params = ["gain", "freq", "gate", "attack", "release"]
params = ["gain", "freq"]
# Titel der v-Groups
vgroups = ["BL"]


'''Schreiben der OSC-Messages'''
oscAddress = "/" + synthName + "/" + hgroups[0] + "/" + vgroups[0]

# Start the OSC-system.
osc_startup()
osc_udp_client('127.0.0.1', port, "TEST")  # "127.0.0.1" --> IP LocalHost

msgList = [''] * data.shape[1] * data.shape[0]  # leere Liste zum Sammeln der OSC-Messages

# 3-fach Schleife:
# Zuweisung OSC-Addresse + Parameter-Wert
# Schreiben der OSC-Message
for l in range(data.shape[2]):
    j = 0
    for k in range(data.shape[0]):
        jj = 0
        for i in range(data.shape[1]):
            # msgList[j] = oscbuildparse.OSCMessage(oscAddress[k] + params[k] + str(jj), None, [float(data[k, i, l])])
            msgList[j] = osc4py3.oscbuildparse.OSCMessage(oscAddress + str(jj) + "/" + params[k],
                                                          None, [float(data[k, i, l])])
            j += 1
            jj += 1
    bun = osc4py3.oscbuildparse.OSCBundle(osc4py3.oscbuildparse.OSC_IMMEDIATELY, msgList)
    osc_send(bun, "TEST")
    osc_process()
    # print("Tag" + str(l))
    # print(idx[l])
    print(l)
    print(data[0, :, l])
    time.sleep(sleepTime)

    # Gate wieder auf 0 setzen, damit Envelope funktioniert
    msgList2 = [''] * data.shape[1]
    for n in range(data.shape[1]):
        msgList2[n] = osc4py3.oscbuildparse.OSCMessage(oscAddress + str(n) + "/" + "gate", None, [float(0)])
    bun = osc4py3.oscbuildparse.OSCBundle(osc4py3.oscbuildparse.OSC_IMMEDIATELY, msgList2)
    osc_send(bun, "TEST")
    osc_process()
print("Ende der Aufzeichnung")
# osc_terminate()

