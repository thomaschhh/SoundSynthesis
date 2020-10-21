"""                             Sending OSC-Messages via osc4py3 to Faust: "BASIS_pulse"
-------------------------------------Stucture of the dataset for one day-------------------------------------
---------------|BadWu|Bay|Berlin|Brand|Bre|Ham|Hes|MeckVor|Nieder|NRW|RheiPfa|Saar|Sach|SachAn|SchleHo|Thuer|
AnzahlFall-----|  x  | x |   x  |  x  | x | x | x |   x   |   x  | x |   x   | x  | x  |  x   |   x   |  x  |
AnzahlGenesen--|  x  | x |   x  |  x  | x | x | x |   x   |   x  | x |   x   | x  | x  |  x   |   x   |  x  |
AnzahlTodesfall|  x  | x |   x  |  x  | x | x | x |   x   |   x  | x |   x   | x  | x  |  x   |   x   |  x  |
Female---------|  x  | x |   x  |  x  | x | x | x |   x   |   x  | x |   x   | x  | x  |  x   |   x   |  x  |
Unknown--------|  x  | x |   x  |  x  | x | x | x |   x   |   x  | x |   x   | x  | x  |  x   |   x   |  x  |
Male-----------|  x  | x |   x  |  x  | x | x | x |   x   |   x  | x |   x   | x  | x  |  x   |   x   |  x  |
A00-A04--------|  x  | x |   x  |  x  | x | x | x |   x   |   x  | x |   x   | x  | x  |  x   |   x   |  x  |
A05-A14--------|  x  | x |   x  |  x  | x | x | x |   x   |   x  | x |   x   | x  | x  |  x   |   x   |  x  |
A15-A34--------|  x  | x |   x  |  x  | x | x | x |   x   |   x  | x |   x   | x  | x  |  x   |   x   |  x  |
A35-A59--------|  x  | x |   x  |  x  | x | x | x |   x   |   x  | x |   x   | x  | x  |  x   |   x   |  x  |
A80+-----------|  x  | x |   x  |  x  | x | x | x |   x   |   x  | x |   x   | x  | x  |  x   |   x   |  x  |
A_unknown------|  x  | x |   x  |  x  | x | x | x |   x   |   x  | x |   x   | x  | x  |  x   |   x   |  x  |
"""

import osc4py3
from osc4py3.as_eventloop import *
import numpy as np
import time
import pandas as pd
from edit_dataset import edit
from scipy.interpolate import interp1d

'''global parameter'''
ip_YesNo = "yes"  # doing interpolation?
ipRes = 3000  # interpolated resolution
sleepTime = 0.1  # time (in sec) between the steps: numb * sleepTime = running time

'''reading data'''
path = '/Users/thomas/Documents/TU-Berlin/Faecher/Semester2/Sound-Synthesis/SoundSynthesis_Git/SoundSynthesis'
# path = '/home/nils/tubCloud/Akt/Sem6/Synth/git_thomas/SoundSynthesis/CSV'
df = pd.read_csv(path + '/RKI_COVID19.csv')  # path + file name
data, params, BL, idx = edit(df, path)

'''data[parameters, states, days]'''
data = data[:, :, 20:]  # cut out the first days with no information

'''cases per 100,000'''
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

# (INFO) overview of statistical data for all parameters
for i in range(data.shape[0]):
    print(f"max{i}", np.amax(data[i, :, :]))
    # print(f"min{i}", np.amin(data[i, :, :]))

# 'AnzahlFall' --> square cutoff-freq
data[0, :] = data[0, :]/data[0, :].max()  # normalization
data[0, :] = cutoff_Pulse[0] + (cutoff_Pulse[1] - cutoff_Pulse[0]) * data[0, :]  # linear scale transformation

# ' ' --> square freq (row 1 in data will be replaced)
for i in range(data.shape[2]):
    data[1, :, i] = freq_BL

# 'AnzahlTodesfall' --> noise Volume + noise LFO freq
for i in range(data.shape[2]):
    data[2, :, i] = sum(data[2, :, i])
data[2, :] = data[2, :]/data[2, :].max()  # normalization

# 'Geschlecht' --> square duty
data[3, :] = data[3, :]/(data[3, :]+data[4, :]+data[5, :])  # female / (female+male+unknown)
data[3, :] = np.nan_to_num(data[3, :])
data[3, :] = duty_val[0] + (duty_val[1] - duty_val[0]) * data[3, :]

'''Grouping of ages'''
for i in range(data.shape[2]):  # all days
    for j in range(data.shape[1]):  # all states
        data[6, j, i] = np.sum(data[6:8, j, i])  # sum of cases for ages 0-14
        data[7, j, i] = data[8, j, i]  # cases for ages 15-34
        data[8, j, i] = data[9, j, i]  # cases for ages 35-59
        data[9, j, i] = np.sum(data[10:, j, i])  # sum of cases for ages 60+

sampleDay = 50
print(f'Ages 0 - 14 | Cases -> {data[6, :, sampleDay]}')
print(f'Ages 15 - 34 | Cases -> {data[7, :, sampleDay]}')
print(f'Ages 35 - 59 | Cases -> {data[8, :, sampleDay]}')
print(f'Ages 60+ | Cases -> {data[9, :, sampleDay]}')

'''INFO: Mapping
-   [0] AnzahlFall        = square cutoff-freq
-   [1] AnzahlGenesen     = -
-   [2] AnzahlTodesfall   = noise Volume + noise LFO freq
-       Geschlecht        
    [3]     'Female'      = square duty
    [4]     'Unknown'
    [5]     'Male'
-       Altersgruppe      = portion of waves
    [6]     'A00-A04'
    [7]     'A05-A14'
    [8]     'A15-A34'
    [9]     'A35-A59'
    [10]    'A60-A79'
    [11]    'A80+'
    [12]    'A_unknown'
'''

'''connecting to FAUST'''
port = 5510  # OSC-Port
synthName = "BASIS_pulse"  # Synth-Name
hGroups = ["square", "Noise"]  # title of h-Groups

# Linking the data with FAUST parameters
# params = ["freq", "gain", "gate", "attack", "release"]
# params = ["gain", "freq"]
# params = ["cutoff", "freq", ["noiseLfoFreq", "noiseVol"], "duty", "leer", "leer", "noiseCO"]  # Pay attention to the order
params = ["cutoff", "freq", ["noiseLfoFreq", "noiseVol"], "duty", "leer", "leer", "noiseCO"]
params_info = [0, 0, 1, 0, 0, 0, 2]  # type !=0 if parameter needs adjustments in triple-loop

data = data[:len(params), :, :]  # keep the interesting data

# title of v-Groups
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

'''triple-loop to query the values for each day [1], parameter [2] and each BL(/ all BL) [3]
and for writing OSC messages '''
# Layer: day
for t in range(data.shape[2]):
    msgList = []  # list to collect OSC-msg (each day a new one)

    # Layer: parameter
    for p in range(data.shape[0]):
        if params_info[p] == 0:  # Query whether parameters for each BL / summed over all BL

            # Layer: state
            for bl in range(data.shape[1]):
                # Create OSC-message for day X / Parameter X / BL X
                message = osc4py3.oscbuildparse.OSCMessage(oscAddress[0] + str(bl) + "/" + params[p],
                                                           None, [float(data[p, bl, t])])
                msgList.append(message)

        elif params_info[p] == 1:  # adjustments for 'AnzahlTodesfall' --> noise Volume + noise LFO freq
            val = data[p, 0, t] * (noLfoFreq_val[1] - noLfoFreq_val[0]) + noLfoFreq_val[0]  # scale transformation LFO-Freq
            # Create OSC-message for day X / Parameter X / BL Gesamt
            message = osc4py3.oscbuildparse.OSCMessage(oscAddress[1] + "/" + params[p][0],
                                                       None, [float(val)])
            msgList.append(message)
            val = data[p, 0, t] * (noVol_val[1] - noVol_val[0]) + noVol_val[0]  # scale transformation LFO-Vol
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

print("End of the dataset")
# osc_terminate()

