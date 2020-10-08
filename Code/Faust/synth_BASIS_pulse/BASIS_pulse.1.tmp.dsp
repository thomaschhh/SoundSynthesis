import("stdfaust.lib");

noiseGroup(x) = hgroup("Noise", x);
noiseVol = noiseGroup(vslider("noiseVol", 1, 0, 8, 0.001) : si.smoo);
noiseCO = noiseGroup(vslider("noiseCO", 100, 100, 2000, 0.1) : si.smoo);
noiseLfoFreq = noiseGroup(vslider("noiseLfoFreq", 0, 0, 1000, 0.01) : si.smoo);
noiseLFO = os.lf_saw(noiseLfoFreq);


process = 	
(
	(hgroup("square", sum(i, 16, partial(i)))) 
  	+   (noiseVol * noiseLFO * no.noise : fi.lowpass(6, noiseCO))
 ) 
  //vgroup("Noise",  noiseVol*(os.lf_squarewave(1000)+0.2) * no.noise : fi.lowpass(6, noiseCO))) 
  * 
(
noiseGroup(vslider("volume", 0, 0, 1, 0.01))
) * 0.4  <:_,_
	with {
		k = j;
  		partial(j) = vgroup("[%k]BL%j", os.pulsetrain(freq, duty) : fi.lowpass(6, cutoff) * gain)
	with {
		freq = nentry("[1]freq[style:knob]", 200, 60, 1000, 0.01) : si.smoo;
		//attack = vslider("[2]attack[style:knob]", 0.5, 0, 5, 0.01) : si.smoo;
		//release = vslider("[3]release[style:knob]",0.5, 0, 8, 0.01) : si.smoo;
		//gate = nentry("[4]gate[style:knob]", 0, 0, 1, 1) : si.smoo;
		gain = vslider("[2]gain[scale:exp]",0 ,0 ,1 , 0.001) : si.smoo;
		duty = nentry("[0]duty[style:knob]", 0.5, 0.001, 0.999, 0.001) : si.smoo;
		cutoff = nentry("[3]cutoff[style:knob]", 500, 60, 1000, 1) : si.smoo;
		k = j+10;
	};
};


