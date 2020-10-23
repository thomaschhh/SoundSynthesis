import("stdfaust.lib");

noiseGroup(x) = hgroup("Noise", x);
noiseVol = noiseGroup(vslider("noiseVol", 0, 0, 10, 0.001) : si.smoo);
noiseCO = noiseGroup(vslider("noiseCO", 100, 100, 2000, 0.1) : si.smoo);
noiseLfoFreq = noiseGroup(vslider("noiseLfoFreq", 0, 0, 1000, 0.01) : si.smoo);
noiseLFO = os.lf_saw(noiseLfoFreq);
noise = noiseVol * noiseLFO * no.noise : fi.lowpass(4, noiseCO);
maxLevel = 1;
masterVol = noiseGroup(vslider("volume", 0, 0, 1, 0.01));

process = 	
(hgroup("square", par(i, 16, partial(i))), (noise <: _,_) :> *(masterVol),*(masterVol))
//* noiseGroup(vslider("volume", 0, 0, 1, 0.01))
  //vgroup("Noise",  noiseVol*(os.lf_squarewave(1000)+0.2) * no.noise : fi.lowpass(6, noiseCO))) 

	with {
		k = j;
  		partial(j) = vgroup("[%k]BL%j", (os.pulsetrain(freq, duty) : fi.lowpass(4, cutoff) * gain * 1/16) * (1-checkbox("mute")) <: *(1-pan),*(pan))
							//<: *(1-pan),*(pan)
	with {
		freq = nentry("[2]freq[style:knob]", 200, 60, 1000, 0.01) : si.smoo;
		//attack = vslider("[2]attack[style:knob]", 0.5, 0, 5, 0.01) : si.smoo;
		//release = vslider("[3]release[style:knob]",0.5, 0, 8, 0.01) : si.smoo;
		//gate = nentry("[4]gate[style:knob]", 0, 0, 1, 1) : si.smoo;
		gain = vslider("[3]gain[scale:exp]",0.5 ,0 ,1 , 0.001) : si.smoo;
		duty = nentry("[1]duty[style:knob]", 0.5, 0.001, 0.999, 0.001) : si.smoo;
		cutoff = vslider("[4]cutoff", 500, 60, 3000, 1) : si.smoo;
		pan = nentry("[0]pan[style:knob]", 0.5, 0.0, 1, 0.001) : si.smoo;
		k = j+10;
	};
};