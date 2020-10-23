"""                             Sending OSC-Messages via osc4py3 to Faust: "BASIS_pulse"
                  ----------------------Structure of the dataset for one day----------------------------------
                  |faustParam| BW | BY | BE | BB | HB | HH | HE | MV | NI | NW | RP | SL | SN | ST | SH | TH |
[0]AnzahlFall-----|squaCutoff|  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |
------------------|   gain   |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |
[1]AnzahlGenesen--|----------|  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |
[2]AnzahlTodesfall|noisVolFrq|  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |
[3]Female---------|squareDuty|  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |
[4]Unknown--------|squareDuty|  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |
[5]Male-----------|squareDuty|  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |
[6]A00-A04--------|gainTriang|  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |
[7]A05-A14--------|gainTriang|  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |
[8]A15-A34--------| gainSine |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |
[9]A35-A59--------| gainPulse|  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |
[10]A60-A79-------| gainSaw  |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |
[10]A80+----------| gainSaw  |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |
[11]A_unknown-----| gainSaw  |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |  x |
"""

import osc4py3
from osc4py3.as_eventloop import *
import numpy as np
import time
import pandas as pd
from edit_dataset import edit
from scipy.interpolate import interp1d
from pathlib import *
import os


'''global parameter'''
ip_YesNo = "yes"  # doing interpolation?
ipRes = 300  # interpolated resolution
sleepTime = 0.1  # time (in sec) between the steps: numb * sleepTime = running time

'''reading data'''
path = os.getcwd() + '/RKI_COVID19.csv'  # current working directory + file name
df = pd.read_csv(path)
data, params, BL, idx = edit(df, path)

'''data[parameters, states, days]'''
data = data[:, :, 20:]  # cut out the first days with no information

'''cases per 100,000'''
BL_ew = np.array([11100394, 13124737, 3669491, 2521893, 681202, 1847253, 6288080, 1608138, 7993608,
                  17947221, 4093903, 986887, 4071971, 2194782, 2903773, 2133378])
BL_ew = BL_ew / 100000

'''Normalization of each state'''
data_norm = data
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
gain_val = [0, 5]
duty_val = [0.1, 0.8]
cutoff_Pulse_val = [0, 3000]
noLfoFreq_val = [0.5, 7]
noVol_val = [0, 6]
noise_CO_val = range(300, 1000, 100)

# ' ' --> square freq (row 1 in data will be replaced)
for i in range(data.shape[2]):
    data[1, :, i] = freq_BL

# 'AnzahlFall' --> square cutoff-freq
copy0 = data[0, :].copy()
data[0, :] = data[0, :]/data[0, :].max()  # normalization
data[0, :] = (cutoff_Pulse_val[0] + (cutoff_Pulse_val[1] - cutoff_Pulse_val[0]) * data[0, :]) + data[1, :]  # linear scale transformation

# 'AnzahlFall' --> gain
data[9, :] = copy0/copy0.max()  # normalization
data[9, :] = (gain_val[0] + (gain_val[1] - gain_val[0]) * data[9, :])

# 'AnzahlTodesfall' --> noise Volume + noise LFO freq
for i in range(data.shape[2]):
    data[2, :, i] = sum(data[2, :, i])
data[2, :] = data[2, :]/data[2, :].max()  # normalization

# 'Geschlecht' --> square duty
data[3, :] = data[3, :]/(data[3, :]+data[4, :]+data[5, :])  # female / (female+male+unknown)
data[3, :] = np.nan_to_num(data[3, :])
data[3, :] = duty_val[0] + (duty_val[1] - duty_val[0]) * data[3, :]

# 'Altersgruppen' --> gain waveforms
# Grouping and normalization of ages
for i in range(data.shape[2]):  # all days
    for j in range(data.shape[1]):  # all states
        data[5, j, i] = np.sum(data[6:8, j, i])  # sum of cases for ages 0-14
        data[6, j, i] = data[8, j, i]  # cases for ages 15-34
        data[7, j, i] = data[9, j, i]  # cases for ages 35-59
        data[8, j, i] = np.sum(data[10:, j, i])  # sum of cases for ages 60+


copy5 = data[5, :].copy()
copy6 = data[6, :].copy()
copy7 = data[7, :].copy()
copy8 = data[8, :].copy()
data[5, :] = data[5, :]/(copy5+copy6+copy7+copy8)  #
data[5, :] = np.nan_to_num(data[5, :])

data[6, :] = data[6, :]/(copy5+copy6+copy7+copy8)  #
data[6, :] = np.nan_to_num(data[6, :])

data[7, :] = data[7, :]/(copy5+copy6+copy7+copy8)   #
data[7, :] = np.nan_to_num(data[7, :])

data[8, :] = data[8, :]/(copy5+copy6+copy7+copy8)   #
data[8, :] = np.nan_to_num(data[8, :])

# panorama
for i in range(data.shape[2]):
    data[4, :, i] = np.linspace(0, 1, 16)

'''connecting to FAUST'''
port = 5510  # OSC-Port
synthName = "BASIS_pulse"  # Synth-Name
hGroups = ["square", "Noise"]  # title of h-Groups

# Linking the data with FAUST parameters
params = ["cutoff", "freq", ["noiseLfoFreq", "noiseVol"], "duty", "pan", "gainTriang", "gainSine", "gainPulse",
          "gainSaw", "gain"]  # Pay attention to the order
params_info = [0, 0, 1, 0, 0, 0, 0, 0, 0, 0] # type !=0 if parameter needs adjustments in triple-loop

data = data[:len(params), :, :]  # keep the interesting data

# title of v-Groups
vGroups = ["BL"]

# Start the OSC-system
osc_startup()
osc_udp_client('127.0.0.1', port, "aclientname")  # "127.0.0.1" --> IP LocalHost

'''writing OSC-Messages'''
oscAddress = [''] * len(hGroups)
oscAddress[0] = "/" + synthName + "/" + hGroups[0] + "/" + vGroups[0]  # address for modul 'square'
oscAddress[1] = "/" + synthName + "/" + hGroups[1]  # address for modul 'noise'

# Start-Values for non changeable parameter
params_nc = [[1, "volume", 0.5, 1]]  # [hGroup, parameter-name, value, allBL_yesNo]

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
osc_send(bun, "aclientname")
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
            # Create OSC-message for day X / Parameter X / BL total
            message = osc4py3.oscbuildparse.OSCMessage(oscAddress[1] + "/" + params[p][0],
                                                       None, [float(val)])
            msgList.append(message)
            val = data[p, 0, t] * (noVol_val[1] - noVol_val[0]) + noVol_val[0]  # scale transformation LFO-Vol
            message = osc4py3.oscbuildparse.OSCMessage(oscAddress[1] + "/" + params[p][1],
                                                       None, [float(val)])
            msgList.append(message)

        elif params_info[p] == 2:
            val = data[p, 0, t]
            message = osc4py3.oscbuildparse.OSCMessage(oscAddress[1] + "/" + params[p],
                                                       None, [float(val)])
            msgList.append(message)

    pointer = round(len(msgList)/2)
    bun = osc4py3.oscbuildparse.OSCBundle(osc4py3.oscbuildparse.OSC_IMMEDIATELY, msgList[:pointer])
    osc_send(bun, "aclientname")
    osc_process()
    bun = osc4py3.oscbuildparse.OSCBundle(osc4py3.oscbuildparse.OSC_IMMEDIATELY, msgList[pointer:])
    osc_send(bun, "aclientname")
    osc_process()
    # print(idx[l])
    print(t)  # counter interpolation
    time.sleep(sleepTime)

# set the main-volume to zero
sleepTime_end = 0.5
for i in np.linspace(1, 0, 20):
    message = osc4py3.oscbuildparse.OSCMessage(oscAddress[1] + "/" + "volume", None, [float(i)])
    osc_send(message, "aclientname")
    osc_process()
    time.sleep(sleepTime_end)

print("End of the dataset")

