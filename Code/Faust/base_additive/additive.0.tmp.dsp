import("stdfaust.lib");

fMax = 1000;

freq(0) = nentry("[00]freq0[style:knob]",200,60,fMax,0.01) : si.smoo;
freq(1) = nentry("[01]freq1[style:knob]",200,60,fMax,0.01) : si.smoo;
freq(2) = nentry("[02]freq2[style:knob]",200,60,fMax,0.01) : si.smoo;
freq(3) = nentry("[03]freq3[style:knob]",200,60,fMax,0.01) : si.smoo;
freq(4) = nentry("[04]freq4[style:knob]",200,60,fMax,0.01) : si.smoo;
freq(5) = nentry("[05]freq5[style:knob]",200,60,fMax,0.01) : si.smoo;
freq(6) = nentry("[06]freq6[style:knob]",200,60,fMax,0.01) : si.smoo;
freq(7) = nentry("[07]freq7[style:knob]",200,60,fMax,0.01) : si.smoo;
freq(8) = nentry("[08]freq8[style:knob]",200,60,fMax,0.01) : si.smoo;
freq(9) = nentry("[09]freq9[style:knob]",200,60,fMax,0.01) : si.smoo;
freq(10) = nentry("[10]freq10[style:knob]",200,60,fMax,0.01) : si.smoo;
freq(11) = nentry("[11]freq11[style:knob]",200,60,fMax,0.01) : si.smoo;
freq(12) = nentry("[12]freq12[style:knob]",200,60,fMax,0.01) : si.smoo;
freq(13) = nentry("[13]freq13[style:knob]",200,60,fMax,0.01) : si.smoo;
freq(14) = nentry("[14]freq14[style:knob]",200,60,fMax,0.01) : si.smoo;
freq(15) = nentry("[15]freq15[style:knob]",200,60,fMax,0.01) : si.smoo;

gain(0) = vslider("[00]gain0",0,0,1,0.1) : si.smoo;
gain(1) = vslider("[01]gain1",0,0,1,0.1) : si.smoo;
gain(2) = vslider("[02]gain2",0,0,1,0.1) : si.smoo;
gain(3) = vslider("[03]gain3",0,0,1,0.1) : si.smoo;
gain(4) = vslider("[04]gain4",0,0,1,0.1) : si.smoo;
gain(5) = vslider("[05]gain5",0,0,1,0.1) : si.smoo;
gain(6) = vslider("[06]gain6",0,0,1,0.1) : si.smoo;
gain(7) = vslider("[07]gain7",0,0,1,0.1) : si.smoo;
gain(8) = vslider("[08]gain8",0,0,1,0.1) : si.smoo;
gain(9) = vslider("[09]gain9",0,0,1,0.1) : si.smoo;
gain(10) = vslider("[10]gain10",0,0,1,0.1) : si.smoo;
gain(11) = vslider("[11]gain11",0,0,1,0.1) : si.smoo;
gain(12) = vslider("[12]gain12",0,0,1,0.1) : si.smoo;
gain(13) = vslider("[13]gain13",0,0,1,0.1) : si.smoo;
gain(14) = vslider("[14]gain14",0,0,1,0.1) : si.smoo;
gain(15) = vslider("[15]gain15",0,0,1,0.1) : si.smoo;

gate(0) = nentry("[00]gate0[style:knob]",0,0,1,1) : si.smoo;
gate(1) = nentry("[01]gate1[style:knob]",0,0,1,1) : si.smoo;
gate(2) = nentry("[02]gate2[style:knob]",0,0,1,1) : si.smoo;
gate(3) = nentry("[03]gate3[style:knob]",0,0,1,1) : si.smoo;
gate(4) = nentry("[04]gate4[style:knob]",0,0,1,1) : si.smoo;
gate(5) = nentry("[05]gate5[style:knob]",0,0,1,1) : si.smoo;
gate(6) = nentry("[06]gate6[style:knob]",0,0,1,1) : si.smoo;
gate(7) = nentry("[07]gate7[style:knob]",0,0,1,1) : si.smoo;
gate(8) = nentry("[08]gate8[style:knob]",0,0,1,1) : si.smoo;
gate(9) = nentry("[09]gate9[style:knob]",0,0,1,1) : si.smoo;
gate(10) = nentry("[10]gate10[style:knob]",0,0,1,1) : si.smoo;
gate(11) = nentry("[11]gate11[style:knob]",0,0,1,1) : si.smoo;
gate(12) = nentry("[12]gate12[style:knob]",0,0,1,1) : si.smoo;
gate(13) = nentry("[13]gate13[style:knob]",0,0,1,1) : si.smoo;
gate(14) = nentry("[14]gate14[style:knob]",0,0,1,1) : si.smoo;
gate(15) = nentry("[15]gate15[style:knob]",0,0,1,1) : si.smoo;

//attack = vslider("[0]attack[style:knob]",0.5,0,1,0.01);
//decay = vslider("[1]decay[style:knob]",0.5,0,1,0.01);
//sustain = vslider("[2]sustain[style:knob]",0.5,0,1,0.01);
//release = vslider("[3]release",0.5,0,5,0.01);
//envelope = en.adsr(attack,decay,sustain,release,0);

partial(i) = os.osc(hgroup("freq",freq(i))) * hgroup("gain",gain(i)) * hgroup("gate",gate(i));

process = sum(i, 16, partial(i))*hgroup("volume", hslider("volume",0,0,1,0.01)) *0.2 <:_,_;