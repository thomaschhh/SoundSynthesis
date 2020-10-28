import("stdfaust.lib");

noiseGroup(x) = hgroup("[0]Noise", x);
noiseVol = noiseGroup(vslider("noiseVol", 0, 0, 2, 0.001) : si.smoo);
noiseCO = noiseGroup(vslider("noiseCO", 100, 100, 2000, 0.1) : si.smoo);
noiseLfoFreq = noiseGroup(vslider("noiseLfoFreq", 0, 0, 7, 0.01) : si.smoo);
noiseLFO = os.lf_saw(noiseLfoFreq);
noise = noiseVol * noiseLFO * no.noise : fi.lowpass(4, noiseCO);
masterVol = noiseGroup(vslider("Volume", 0, 0, 1, 0.01));

process = 	
(hgroup("Channels", par(i, 16, partial(i))), (noise <: _,_) :> *(masterVol),*(masterVol))
	with {
  		partial(j) = vgroup("[%2j]BL%j", ((os.pulsetrain(freq, duty)*gainPulse, os.osc(freq)*gainSine, os.triangle(freq)*gainTriang, os.sawtooth(freq)*gainSaw) :> fi.lowpass(2, cutoff) * gain * 1/16) * (1-checkbox("[9]Mute"))  <: *(1-pan),*(pan))
	with {
		freq = nentry("[0]freq", 200, 60, 1000, 0.01) : si.smoo;
		gain = vslider("[3]gain[scale:exp]",0.5 ,0 ,1 , 0.001) : si.smoo;
		duty = nentry("[2]duty[style:knob]", 0.5, 0.001, 0.999, 0.001) : si.smoo;
		cutoff = vslider("[4]cutoff", 500, 60, 3000, 1) : si.smoo;
		pan = nentry("[1]pan", 0.5, 0.0, 1, 0.001) : si.smoo;
		gainPulse = nentry("[7]gainPulse[style:knob]",0.5 ,0 ,1 , 0.001) : si.smoo;
		gainSine = nentry("[6]gainSine[style:knob]",0.5 ,0 ,1 , 0.001) : si.smoo;
		gainTriang = nentry("[5]gainTriang[style:knob]",0.5 ,0 ,1 , 0.001) : si.smoo;
		gainSaw = nentry("[8]gainSaw[style:knob]",0.5 ,0 ,1 , 0.001) : si.smoo;
	};
};