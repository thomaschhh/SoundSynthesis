import("stdfaust.lib");

process = hgroup("SINUS", sum(i, 16, partial(i))) * hgroup("volume", hslider("volume",0,0,1,0.01)) * 0.4  <:_,_
	with {
	//partial(j) = vgroup("[%j]BL%j", os.osc(freq) * en.ar(attack, release, gate) * gain)
	//partial(j) = vgroup("[%0j]BL%j", os.osc(freq) * gain * gate)
	partial(j) = vgroup("[%j]BL%j", os.osc(freq) * gain)
	with {
		freq = nentry("[0]freq[style:knob]",200, 60, 1000, 0.01) : si.smoo;
		//attack = vslider("[2]attack[style:knob]", 0.5, 0, 5, 0.01) : si.smoo;
		//release = vslider("[3]release[style:knob]",0.5, 0, 8, 0.01) : si.smoo;
		//gate = nentry("[4]gate[style:knob]", 0, 0, 1, 1) : si.smoo;
		gain = vslider("[1]gain",0 ,0 ,1 , 0.001) : si.smoo;
	};
};