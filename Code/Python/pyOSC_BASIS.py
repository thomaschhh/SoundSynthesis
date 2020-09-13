# Script zum Verschicken von OSC-Messages via osc4py3 an ein Faust-Programm

from osc4py3 import oscbuildparse
from osc4py3.as_eventloop import *

import numpy as np
import time

### Beispiel-Daten generieren
# Struktur Vorschlag:
# 1.D = Orte
# 2.D = Parameter
# 3.D = Zeit
freqMin = 100
freqMax = 500
sleepTime = 9 # in Sekunden
anzTage = 7

data = np.random.uniform(freqMin, freqMax, size=(5, 16, anzTage))  # Zeile 0: freq, 1: gain, 2: gate;
data[1, :] = data[1, :] / freqMax
for i in range(data.shape[1]):
    for j in range(data.shape[2]):
        data[2, i, j] = np.random.choice([0, 1])
data[3, :] = data[3, :] / freqMax * 3
data[4, :] = data[4, :] / freqMax * 6
print(data)


### Faust-Parameter
# OSC-Port
port = 5510
# Synth-Name
synthName = "BASIS"
# Titel der h-Groups
hgroups = ["SINUS", "volume"]
# Parameter
params = ["freq", "gain", "gate", "attack", "release"] # Reihenfolge muss mit der im Datensatz
# Titel der v-Groups
vgroups = ["BL"]


### Schreiben der OSC-Messages
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
            msgList[j] = oscbuildparse.OSCMessage(oscAddress + str(jj) + "/" + params[k], None, [float(data[k, i, l])])
            j += 1
            jj += 1
    bun = oscbuildparse.OSCBundle(oscbuildparse.OSC_IMMEDIATELY, msgList)
    osc_send(bun, "TEST")
    osc_process()
    print("Tag" + str(l))
    time.sleep(sleepTime)

    # Gate wieder auf 0 setzen, damit Envelope funktioniert
    msgList2 = [''] * data.shape[1]
    for n in range(data.shape[1]):
        msgList2[n] = oscbuildparse.OSCMessage(oscAddress + str(n) + "/" + "gate", None, [float(0)])
    bun = oscbuildparse.OSCBundle(oscbuildparse.OSC_IMMEDIATELY, msgList2)
    osc_send(bun, "TEST")
    osc_process()
print("Ende der Aufzeichnung")
# osc_terminate()

