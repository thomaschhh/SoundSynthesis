# Corona Sonification

This sonification was developed in the 2nd semester of 2020 as a final project in the class Sound Synthesis: Building Instruments with Faust.

The basis for the sonifcation is the [RKI COVID19 dataset](https://npgeo-corona-npgeo-de.hub.arcgis.com/datasets/dd4580c810204019a7b8eb3e0b329dd6_0). With the aid of the script [edit_dataset.py](https://github.com/thomaschhh/SoundSynthesis/blob/master/Code/Python/edit_dataset.py) the above mentioned dataset was edited. After that, the data are sent to the [Faust script](https://github.com/thomaschhh/SoundSynthesis/blob/master/Code/Faust/synth_BASIS/BASIS.dsp) via OSC using the [pyOSC_Basis.py](https://github.com/thomaschhh/SoundSynthesis/blob/master/Code/Python/pyOSC_BASIS.py) script.
