# Script zum Verschicken von OSC-Messages via osc4py3 an das Faust-Programm: "BASIS_seq"

import osc4py3
from osc4py3.as_eventloop import *

import numpy as np
import time
import pandas as pd

from edit_dataset import edit
from scipy.interpolate import interp1d
import matplotlib.pyplot as plt


'''global parameter'''
ip_YesNo = "no"  # doing interpolation?
ipRes = 1000  # interpolated resolution
sleepTime = 0.1  # time (in sec) between the steps: numb * sleepTime = running time
bpm = 90

t_Now = time.localtime()
current_time = time.strftime("%S", t_Now)
print(current_time)

'''reading data'''
# path = '/Users/thomas/Documents/TU-Berlin/Faecher/Semester2/Sound-Synthesis/SoundSynthesis_Git/SoundSynthesis/CSV'
path = '/home/nils/tubCloud/Akt/Sem6/Synth/git_thomas/SoundSynthesis/CSV'
df = pd.read_csv(path + '/RKI_COVID19.csv')  # path + file name
data, params, BL, idx_datum = edit(df, path)

start = 50
data = data[:, :, start:]  # cut out the first days because of no information
idx_datum = idx_datum[start:]
data_orig = data.copy()

# data = data_orig.copy()

'''INFO: parameter 
    'AnzahlFall', 'AnzahlGenesen', 'AnzahlTodesfall', 'Female', 'Unknown',
    'Male', 'A00-A04', 'A05-A14', 'A15-A34', 'A35-A59', 'A60-A79', 'A80+',
    'A_unknown']
   states:
    ['Baden-Wuerttemberg', 'Bayern', 'Berlin', 'Brandenburg', 'Bremen', 'Hamburg', 
    'Hessen', 'Mecklenburg-Vorpommern', 'Niedersachsen', 'Nordrhein-Westfalen', 
    'Rheinland-Pfalz', 'Saarland', 'Sachsen', 'Sachsen-Anhalt', 'Schleswig-Holstein', 'Thueringen']'''


'''Fälle pro 100.000 Einwohner'''
BL_ew = np.array([11100394, 13124737, 3669491, 2521893, 681202, 1847253, 6288080, 1608138, 7993608,
                  17947221, 4093903, 986887, 4071971, 2194782, 2903773, 2133378])
BL_ew = BL_ew / 100000

data_norm = data

for i in range(len(BL_ew)):
    data_norm[:, i, :] = data_norm[:, i, :]/BL_ew[i]

data = data_norm.copy()

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
freq_val = [150, 200]
gain_val = [0, 1]
noLfoFreq_val = [0, 10]
noVol_val = [1, 6]
att_val = [0.001, 1]
rel_val = [0.01, 1]
cutoff_val = [160, 700]

# (INFO) overview of statistical data for all parameters
for i in range(data.shape[0]):
    print(f"max{i}", np.amax(data[i, :, :]))
    # print(f"min{i}", np.amin(data[i, :, :]))


# # 'AnzahlFall' --> sinus gain
# data[0, :] = data[0, :]/data[0, :].max()  # Normierung
# data[0, :] = gain_val[0] + (gain_val[1] - gain_val[0]) * data[0, :]

# 'AnzahlFall' --> square cutoff-freq
data[0, :] = data[0, :]/data[0, :].max()  # Normierung
data[0, :] = cutoff_val[0] + (cutoff_val[1] - cutoff_val[0]) * data[0, :]

# # ' ' --> sinus freq (row 1 in data will be replaced)
x = freq_val[0]
y = 0
for i in range(data.shape[2]):
    # data[1, :, i] = np.array([60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200, 210])
    data[1, :, i] = np.array([x, x-y, x, x-y, x, x-y, x, x-y, x, x-y, x, x-y, x, x-y, x, x-y])
    # data[1, :, i] = np.linspace(freq_val[0], freq_val[1], data.shape[1])


# 'AnzahlTodesfall' --> rel
data[2, :] = data[2, :]/data[2, :].max()  # Normierung
data[2, :] = rel_val[0] + (rel_val[1] - rel_val[0]) * data[2, :]

# 'Geschlecht' --> square duty
data[3, :] = data[3, :]/(data[3, :]+data[4, :]+data[5, :])
data[3, :] = np.nan_to_num(data[3, :])

# 'Female' --> rel
# data[3, :] = data[3, :]/data[3, :].max()  # Normierung
# data[3, :] = rel_val[0] + (rel_val[1] - rel_val[0]) * data[3, :]


'''INFO: Mapping
-   [0] AnzahlFall        = cutoff freq
-   [1] AnzahlGenesen     = 
-   [2] AnzahlTodesfall   = release
-       Geschlecht        = 
    [3]     'Female'
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
synthName = "BASIS_seq"

# Titel der h-Groups
hGroups = ["SINUS", "Noise"]

# Verknüpfung der Daten mit FAUST-Parameter
# params = ["freq", "gain", "gate", "attack", "release"]
params = ["cutoff", "freq", "rel", "duty"]
# params = ["gain", "freq", ["noiseLfoFreq", "noiseVol"]]  # Reihenfolge beachten
# params = ["gain"]
params_info = [0]  # type !=0 if parameter needs adjustments in triple-loop

data = data[:len(params), :, :]  # keep the interesting data

# Titel der v-Groups
vGroups = ["BL"]

# Start the OSC-system
osc_startup()
osc_udp_client('127.0.0.1', port, "TEST")  # "127.0.0.1" --> IP LocalHost


'''writing OSC-Messages'''
oscAddress = [''] * len(hGroups)
oscAddress[0] = "/" + synthName + "/" + hGroups[0] + "/" + vGroups[0]
oscAddress[1] = "/" + synthName + "/" + hGroups[1]

# Start-Values for non changeable parameter
# (hier bin ich ein bisschen ausgerastet, SPIELEREI)
params_nc = [[0, "attack", 0.005, 0], [0, "noiseVol", 0, 0], [0, "gain", 0.5, 0], [0, "rel", 0.05, 0]]  # [hGroup, parameter-name, value, allBL_yesNo]

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

timeBar = 4/bpm*60
timeStep = timeBar*1/16

stepper = [15] + list(range(15))


# Ebene: Tag
for t in range(data.shape[2]):
    msgList = []  # Liste zum Sammeln der OSC-msg (für jeden Tag neu)
    # print(f'step{t}')
    print(idx_datum[t])
    # print('test', data_norm[1, :, t])
    # print('test', data_orig[0, :, t])
    print('test', data[1, :, t])
    # for i in range(data.shape[1]):
    #     message = osc4py3.oscbuildparse.OSCMessage(oscAddress[0] + str(i) + "/" + "trigger", None, [float(0)])
    #     msgList.append(message)
    # bun = osc4py3.oscbuildparse.OSCBundle(osc4py3.oscbuildparse.OSC_IMMEDIATELY, msgList)
    # osc_send(bun, "TEST")
    # osc_process()
    # time.sleep(0.5*timeStep)
    # msgList = []
    # Ebene: Parameter

    # Ebene: Bundesland
    for bl in range(data.shape[1]):
        # Erzeuge OSC-message für Tag X / Parameter X / BL X
        # message = osc4py3.oscbuildparse.OSCMessage(oscAddress[0] + str(bl) + "/" + params[p],
        #                                            None, [float(data[p, bl, t])])
        # msgList.append(message)

        for p in range(data.shape[0]):
            message = osc4py3.oscbuildparse.OSCMessage(oscAddress[0] + str(bl) + "/" + params[p],
                                                       None, [float(data[p, bl, t])])
            # print(message)
            msgList.append(message)

        message = osc4py3.oscbuildparse.OSCMessage(oscAddress[0] + str(bl) + "/" + "play",
                                                   None, [float(1)])
        # print(message)
        msgList.append(message)

        message = osc4py3.oscbuildparse.OSCMessage(oscAddress[0] + str(stepper[bl]) + "/" + "play",
                                                   None, [float(0)])
        # print(message)
        msgList.append(message)

        bun = osc4py3.oscbuildparse.OSCBundle(osc4py3.oscbuildparse.OSC_IMMEDIATELY, msgList)
        osc_send(bun, "TEST")
        osc_process()

        # message = osc4py3.oscbuildparse.OSCMessage(oscAddress[0] + str(bl) + "/" + "trigger",
        #                                            None, [float(0)])
        # # msgList.append(message)
        #
        # # bun = osc4py3.oscbuildparse.OSCBundle(osc4py3.oscbuildparse.OSC_IMMEDIATELY, msgList)
        # osc_send(message, "TEST")
        # osc_process()

        time.sleep(timeStep)

    # bun = osc4py3.oscbuildparse.OSCBundle(osc4py3.oscbuildparse.OSC_IMMEDIATELY, msgList)
    # osc_send(bun, "TEST")
    # osc_process()
    # print(idx[t])
    # print(t)
    # print(data[0, :, t])
    # time.sleep(sleepTime)

# set the main-volume to zero
# message = osc4py3.oscbuildparse.OSCMessage(oscAddress[1] + "/" + "volume", None, [float(0)])
# osc_send(message, "TEST")
# osc_process()

print("Ende der Aufzeichnung")
# osc_terminate()

