# Script zum Verschicken von OSC-Messages via osc4py3 an das Faust-Programm: "BASIS_pulse"

import osc4py3
from osc4py3.as_eventloop import *

import numpy as np
import time
import pandas as pd

from edit_dataset import edit
from scipy.interpolate import interp1d
import matplotlib.pyplot as plt

'''global parameter'''
ip_YesNo = "yes"  # doing interpolation?
ipRes = 3000  # interpolated resolution
sleepTime = 0.1  # time (in sec) between the steps: numb * sleepTime = running time


'''reading data'''
# path = '/Users/thomas/Documents/TU-Berlin/Faecher/Semester2/Sound-Synthesis/SoundSynthesis_Git/SoundSynthesis'
path = '/home/nils/tubCloud/Akt/Sem6/Synth/git_thomas/SoundSynthesis/CSV'
df = pd.read_csv(path + '/RKI_COVID19.csv')  # path + file name
data, params, BL, idx = edit(df, path)

'''data[parameters, Bundeslaender, days]'''
data = data[:, :, 20:]  # cut out the first days because of no information

'''INFO: parameter 
    'AnzahlFall', 'AnzahlGenesen', 'AnzahlTodesfall', 'Female', 'Unknown',
    'Male', 'A00-A04', 'A05-A14', 'A15-A34', 'A35-A59', 'A60-A79', 'A80+',
    'A_unknown']
   states:
    [0'Baden-Wuerttemberg', 1'Bayern', 2'Berlin', 3'Brandenburg', 4'Bremen', 5'Hamburg', 
    6'Hessen', 7'Mecklenburg-Vorpommern', 8'Niedersachsen', 9'Nordrhein-Westfalen', 
    10'Rheinland-Pfalz', 11'Saarland', 12'Sachsen', 13'Sachsen-Anhalt', 14'Schleswig-Holstein', 15'Thueringen']'''

'''Fälle pro 100.000 Einwohner'''
BL_ew = np.array([11100394, 13124737, 3669491, 2521893, 681202, 1847253, 6288080, 1608138, 7993608,
                  17947221, 4093903, 986887, 4071971, 2194782, 2903773, 2133378])
BL_ew = BL_ew / 100000

data_norm = data

'''Normalization of each state'''
for i in range(len(BL_ew)):
    data_norm[:, i, :] = data_norm[:, i, :]/BL_ew[i]

data = data_norm.copy()

'''Generate a frequency array based on the sum of cases for each state'''
freq_BL = []
for i in range(data.shape[1]):
    freq_BL.append(np.sum(data[0, i]))

freq_BL_sort = np.sort(freq_BL)
freq_invert = freq_BL_sort[::-1]

j = 0
for i in np.argsort(freq_BL):
    freq_BL[i] = freq_invert[j]
    j += 1

'''Interpolation'''
steps = np.linspace(0, data.shape[2], num=data.shape[2], endpoint=True)
stepsIp = np.linspace(0, data.shape[2], num=ipRes, endpoint=True)

# interpolation for all parameters
dataIp = np.zeros([data.shape[0], data.shape[1], ipRes])
for p in range(data.shape[0]):
    for bl in range(data.shape[1]):
        y = data[p, bl, :]
        f2 = interp1d(steps, y, kind='cubic')
        dataIp[p, bl, :] = f2(stepsIp)

# # Plotting
# fig, axs = plt.subplots(2)
# fig.suptitle('Vertically stacked subplots')
# axs[0].plot(steps, data[3, 0, :], 'o')
# axs[1].plot(stepsIp, dataIp[3, 0, :], '*')
# plt.show()

if ip_YesNo == "yes":
    data = dataIp.clip(min=0)


'''adjust data for current FAUST-program'''
# scales of sound-synth. parameters
freq_val = [100, 200]
gain_val = [0, 1]
duty_val = [0.1, 0.8]
cutoff_Pulse = [100, 3000]
noLfoFreq_val = [0.5, 7]
noVol_val = [0, 6]
noise_CO_val = range(300, 1000, 100)
print(noise_CO_val)
# (INFO) overview of statistical data for all parameters
for i in range(data.shape[0]):
    print(f"max{i}", np.amax(data[i, :, :]))
    # print(f"min{i}", np.amin(data[i, :, :]))

# 'AnzahlFall' --> square cutoff-freq
data[0, :] = data[0, :]/data[0, :].max()  # Normierung
data[0, :] = cutoff_Pulse[0] + (cutoff_Pulse[1] - cutoff_Pulse[0]) * data[0, :]  # lineare Skalentransformation

# ' ' --> square freq (row 1 in data will be replaced)
for i in range(data.shape[2]):
    data[1, :, i] = freq_BL

# 'AnzahlTodesfall' --> noise Volume + noise LFO freq
for i in range(data.shape[2]):
    data[2, :, i] = sum(data[2, :, i])
data[2, :] = data[2, :]/data[2, :].max()

# 'Geschlecht' --> square duty
data[3, :] = data[3, :]/(data[3, :]+data[4, :]+data[5, :])
data[3, :] = np.nan_to_num(data[3, :])
data[3, :] = duty_val[0] + (duty_val[1] - duty_val[0]) * data[3, :]

'''Noice CutOff Freq'''
array_7ages = np.zeros([7, 1, data.shape[2]])  # 7 age groups, one max value, all days
index = range(6, 13)
age_max = []

for i in range(data.shape[2]):  # all days
    for j in range(array_7ages.shape[0]):  # all age groups
        array_7ages[j, :, i] = np.sum(data[index[j], :, i])  # age group, one column, day

    age_max = np.argmax(array_7ages[:, :, i])

    if age_max == 0:
        data[6, :, i] = noise_CO_val[0]
    elif age_max == 1:
        data[6, :, i] = noise_CO_val[1]
    elif age_max == 2:
        data[6, :, i] = noise_CO_val[2]
    elif age_max == 3:
        data[6, :, i] = noise_CO_val[3]
    elif age_max == 4:
        data[6, :, i] = noise_CO_val[4]
    elif age_max == 5:
        data[6, :, i] = noise_CO_val[5]
    elif age_max == 6:
        data[6, :, i] = noise_CO_val[6]

# print(f'array_7ages {array_7ages[:, :, 1000]}')
# print(f'array_max {age_max}')
print(f'CO Array {data[6, :, 50]}')


'''INFO: Mapping
-   [0] AnzahlFall        = square cutoff-freq
-   [1] AnzahlGenesen     = -
-   [2] AnzahlTodesfall   = noise Volume + noise LFO freq
-       Geschlecht        
    [3]     'Female'      = square duty
    [4]     'Unknown'
    [5]     'Male'
-       Altersgruppe      = - (stereo?)
    [6]     'A00-A04'
    [7]     'A05-A14'
    [8]     'A15-A34'
    [9]     'A35-A59'
    [10]    'A60-A79'
    [11]    'A80+'
    [12]    'A_unknown'
'''

'''connecting to FAUST'''
# OSC-Port
port = 5510

# Synth-Name
synthName = "BASIS_pulse"

# Titel der h-Groups
hGroups = ["square", "Noise"]

# Verknüpfung der Daten mit FAUST-Parameter
# params = ["freq", "gain", "gate", "attack", "release"]
# params = ["gain", "freq"]
# params = ["cutoff", "freq", ["noiseLfoFreq", "noiseVol"], "duty", "leer", "leer", "noiseCO"]  # Reihenfolge beachten
params = ["cutoff", "freq", ["noiseLfoFreq", "noiseVol"], "duty", "leer", "leer", "noiseCO"]
params_info = [0, 0, 1, 0, 0, 0, 2]  # type !=0 if parameter needs adjustments in triple-loop

data = data[:len(params), :, :]  # keep the interesting data

# Titel der v-Groups
vGroups = ["BL"]

# Start the OSC-system
osc_startup()
osc_udp_client('127.0.0.1', port, "TEST")  # "127.0.0.1" --> IP LocalHost

'''writing OSC-Messages'''
oscAddress = [''] * len(hGroups)
oscAddress[0] = "/" + synthName + "/" + hGroups[0] + "/" + vGroups[0]  # address for modul 'square'
oscAddress[1] = "/" + synthName + "/" + hGroups[1]  # address for modul 'noise'

# Start-Values for non changeable parameter
# (hier bin ich ein bisschen ausgerastet, SPIELEREI)
params_nc = [[0, "gain", 1, 0]]  # [hGroup, parameter-name, value, allBL_yesNo]

msgList = []
for j in range(len(params_nc)):
    if params_nc[j][3] == 0:
        for i in range(data.shape[1]):
            message = osc4py3.oscbuildparse.OSCMessage(oscAddress[params_nc[j][0]] + str(i) + "/" + params_nc[j][1],
                                                       None, [float(params_nc[j][2])])
            msgList.append(message)
    elif params_nc[j][3] == 1:
        message = osc4py3.oscbuildparse.OSCMessage(oscAddress[params_nc[j][0]] + "/" + params_nc[j][1],
                                                   None, [float(params_nc[j][2])])
        msgList.append(message)
bun = osc4py3.oscbuildparse.OSCBundle(osc4py3.oscbuildparse.OSC_IMMEDIATELY, msgList)
osc_send(bun, "TEST")
osc_process()


# triple-loop zum Abfragen der Values für jeden Tag[1], Parameter[2] und jedes BL(/ alle BL)[3]
# und zum Schreiben der OSC-messages

# Ebene: Tag
for t in range(data.shape[2]):
    msgList = []  # Liste zum Sammeln der OSC-msg (für jeden Tag neu)

    # Ebene: Parameter
    for p in range(data.shape[0]):

        if params_info[p] == 0:  # Abfrage ob Parameter für jedes BL / über alle BL summiert

            # Ebene: Bundesland
            for bl in range(data.shape[1]):
                # Erzeuge OSC-message für Tag X / Parameter X / BL X
                message = osc4py3.oscbuildparse.OSCMessage(oscAddress[0] + str(bl) + "/" + params[p],
                                                           None, [float(data[p, bl, t])])

                msgList.append(message)

        elif params_info[p] == 1:  # adjustments for 'AnzahlTodesfall' --> noise Volume + noise LFO freq
            val = data[p, 0, t] * (noLfoFreq_val[1] - noLfoFreq_val[0]) + noLfoFreq_val[0]  # Skalentransformation LFO-Freq
            # Erzeuge OSC-message für Tag X / Parameter X / BL Gesamt
            message = osc4py3.oscbuildparse.OSCMessage(oscAddress[1] + "/" + params[p][0],
                                                       None, [float(val)])
            msgList.append(message)
            val = data[p, 0, t] * (noVol_val[1] - noVol_val[0]) + noVol_val[0]  # Skalentransformation LFO-Vol
            print(val)
            message = osc4py3.oscbuildparse.OSCMessage(oscAddress[1] + "/" + params[p][1],
                                                       None, [float(val)])
            msgList.append(message)

        elif params_info[p] == 2:
            val = data[p, 0, t]
            message = osc4py3.oscbuildparse.OSCMessage(oscAddress[1] + "/" + params[p],
                                                       None, [float(val)])
            msgList.append(message)

    bun = osc4py3.oscbuildparse.OSCBundle(osc4py3.oscbuildparse.OSC_IMMEDIATELY, msgList)
    osc_send(bun, "TEST")
    osc_process()
    # print(idx[l])
    print(t)
    # print(data[0, :, t])
    time.sleep(sleepTime)

# set the main-volume to zero
message = osc4py3.oscbuildparse.OSCMessage(oscAddress[1] + "/" + "volume", None, [float(0)])
osc_send(message, "TEST")
osc_process()

print("Ende der Aufzeichnung")
# osc_terminate()

