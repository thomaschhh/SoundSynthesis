import("stdfaust.lib");

noiseGroup(x) = vgroup("Noise", x);
noiseVol = noiseGroup(nentry("noiseVo[style:knob]l", 1, 0, 8, 0.001) : si.smoo);
noiseCO = noiseGroup(nentry("noiseCO[style:knob]", 100, 100, 2000, 0.1) : si.smoo);
//noiseLfoFreq = noiseGroup(vslider("noiseLfoFreq", 0, 0, 1000, 0.01) : si.smoo);
noiseLFO = os.lf_saw(noiseLfoFreq);
//noise = noiseVol * noiseLFO * no.noise : fi.lowpass(6, noiseCO);
noise = noiseVol * no.noise : fi.lowpass(6, noiseCO);
maxLevel = 0.4;


process = 
  	//(hgroup("SINUS", par(i, 16, partial(i))):>/(2), noise :>_) 
(hgroup("SINUS", par(i, 16, partial(i))):>/(2)) 
*noiseGroup(vslider("volume", 0, 0, 1, 0.01)) * maxLevel
  :>_<:_,_
	with {
		k = j;
  		partial(j) = vgroup("[%k]BL%j", (os.osc(freq) + noise) * gain * env : ef.echo(maxDur, dur, fb))
	with {
		freq = nentry("[0]freq[style:knob]", 200, 60, 1000, 0.01) : si.smoo;
		//attack = vslider("[2]attack[style:knob]", 0.5, 0, 5, 0.01) : si.smoo;
		//release = vslider("[3]release[style:knob]",0.5, 0, 8, 0.01) : si.smoo;
		//gate = nentry("[4]gate[style:knob]", 0, 0, 1, 1) : si.smoo;
		gain = vslider("[1]gain",0 ,0 ,1 , 0.001) :ba.log2LinGain: si.smoo;
		k = j+10;
		env = en.ar(att, rel, t);
		att = nentry("[2]attack[style:knob]", 0.5, 0.01, 5, 0.01);
		rel = nentry("[3]rel[style:knob]", 0.5, 0.01, 5, 0.01);
		t = button("play");
	  	maxDur = nentry("[6]maxDur[style:knob]", 0, 0, 3, 0.1);
		dur = nentry("[4]dur[style:knob]", 0, 0, 3, 0.1);
		fb = nentry("[5]fb[style:knob]", 0, 0, 1, 0.1);
		//t = nentry("trigger", 0, 0, 1, 1);
		
	};
};