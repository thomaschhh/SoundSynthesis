/* ------------------------------------------------------------
name: "BASIS_seq.0.tmp"
Code generated with Faust 2.20.2 (https://faust.grame.fr)
Compilation options: -lang cpp -scal -ftz 0
------------------------------------------------------------ */

#ifndef  __mydsp_H__
#define  __mydsp_H__

#ifndef FAUSTFLOAT
#define FAUSTFLOAT float
#endif 

#include <algorithm>
#include <cmath>
#include <math.h>

static float mydsp_faustpower2_f(float value) {
	return (value * value);
}

#ifndef FAUSTCLASS 
#define FAUSTCLASS mydsp
#endif

#ifdef __APPLE__ 
#define exp10f __exp10f
#define exp10 __exp10
#endif

class mydsp : public dsp {
	
 private:
	
	FAUSTFLOAT fVslider0;
	FAUSTFLOAT fEntry0;
	int fSampleRate;
	float fConst0;
	FAUSTFLOAT fEntry1;
	FAUSTFLOAT fEntry2;
	int iVec0[2];
	FAUSTFLOAT fVslider1;
	float fRec1[2];
	float fConst1;
	float fConst2;
	FAUSTFLOAT fEntry3;
	float fRec6[2];
	float fVec1[2];
	float fRec5[2];
	float fVec2[2];
	int IOTA;
	float fVec3[4096];
	FAUSTFLOAT fEntry4;
	float fRec7[2];
	float fConst3;
	FAUSTFLOAT fVslider2;
	float fRec8[2];
	float fRec4[3];
	float fRec3[3];
	float fRec2[3];
	FAUSTFLOAT fEntry5;
	FAUSTFLOAT fButton0;
	float fVec4[2];
	int iRec9[2];
	FAUSTFLOAT fEntry6;
	float fRec0[1048576];
	FAUSTFLOAT fEntry7;
	FAUSTFLOAT fEntry8;
	FAUSTFLOAT fEntry9;
	FAUSTFLOAT fVslider3;
	float fRec11[2];
	FAUSTFLOAT fEntry10;
	float fRec16[2];
	float fVec5[2];
	float fRec15[2];
	float fVec6[2];
	float fVec7[4096];
	FAUSTFLOAT fEntry11;
	float fRec17[2];
	FAUSTFLOAT fVslider4;
	float fRec18[2];
	float fRec14[3];
	float fRec13[3];
	float fRec12[3];
	FAUSTFLOAT fEntry12;
	FAUSTFLOAT fButton1;
	float fVec8[2];
	int iRec19[2];
	FAUSTFLOAT fEntry13;
	float fRec10[1048576];
	FAUSTFLOAT fEntry14;
	FAUSTFLOAT fEntry15;
	FAUSTFLOAT fEntry16;
	FAUSTFLOAT fVslider5;
	float fRec21[2];
	FAUSTFLOAT fEntry17;
	float fRec26[2];
	float fVec9[2];
	float fRec25[2];
	float fVec10[2];
	float fVec11[4096];
	FAUSTFLOAT fEntry18;
	float fRec27[2];
	FAUSTFLOAT fVslider6;
	float fRec28[2];
	float fRec24[3];
	float fRec23[3];
	float fRec22[3];
	FAUSTFLOAT fEntry19;
	FAUSTFLOAT fButton2;
	float fVec12[2];
	int iRec29[2];
	FAUSTFLOAT fEntry20;
	float fRec20[1048576];
	FAUSTFLOAT fEntry21;
	FAUSTFLOAT fEntry22;
	FAUSTFLOAT fEntry23;
	FAUSTFLOAT fVslider7;
	float fRec31[2];
	FAUSTFLOAT fEntry24;
	float fRec36[2];
	float fVec13[2];
	float fRec35[2];
	float fVec14[2];
	float fVec15[4096];
	FAUSTFLOAT fEntry25;
	float fRec37[2];
	FAUSTFLOAT fVslider8;
	float fRec38[2];
	float fRec34[3];
	float fRec33[3];
	float fRec32[3];
	FAUSTFLOAT fEntry26;
	FAUSTFLOAT fButton3;
	float fVec16[2];
	int iRec39[2];
	FAUSTFLOAT fEntry27;
	float fRec30[1048576];
	FAUSTFLOAT fEntry28;
	FAUSTFLOAT fEntry29;
	FAUSTFLOAT fEntry30;
	FAUSTFLOAT fVslider9;
	float fRec41[2];
	FAUSTFLOAT fEntry31;
	float fRec46[2];
	float fVec17[2];
	float fRec45[2];
	float fVec18[2];
	float fVec19[4096];
	FAUSTFLOAT fEntry32;
	float fRec47[2];
	FAUSTFLOAT fVslider10;
	float fRec48[2];
	float fRec44[3];
	float fRec43[3];
	float fRec42[3];
	FAUSTFLOAT fEntry33;
	FAUSTFLOAT fButton4;
	float fVec20[2];
	int iRec49[2];
	FAUSTFLOAT fEntry34;
	float fRec40[1048576];
	FAUSTFLOAT fEntry35;
	FAUSTFLOAT fEntry36;
	FAUSTFLOAT fEntry37;
	FAUSTFLOAT fVslider11;
	float fRec51[2];
	FAUSTFLOAT fEntry38;
	float fRec56[2];
	float fVec21[2];
	float fRec55[2];
	float fVec22[2];
	float fVec23[4096];
	FAUSTFLOAT fEntry39;
	float fRec57[2];
	FAUSTFLOAT fVslider12;
	float fRec58[2];
	float fRec54[3];
	float fRec53[3];
	float fRec52[3];
	FAUSTFLOAT fEntry40;
	FAUSTFLOAT fButton5;
	float fVec24[2];
	int iRec59[2];
	FAUSTFLOAT fEntry41;
	float fRec50[1048576];
	FAUSTFLOAT fEntry42;
	FAUSTFLOAT fEntry43;
	FAUSTFLOAT fEntry44;
	FAUSTFLOAT fVslider13;
	float fRec61[2];
	FAUSTFLOAT fEntry45;
	float fRec66[2];
	float fVec25[2];
	float fRec65[2];
	float fVec26[2];
	float fVec27[4096];
	FAUSTFLOAT fEntry46;
	float fRec67[2];
	FAUSTFLOAT fVslider14;
	float fRec68[2];
	float fRec64[3];
	float fRec63[3];
	float fRec62[3];
	FAUSTFLOAT fEntry47;
	FAUSTFLOAT fButton6;
	float fVec28[2];
	int iRec69[2];
	FAUSTFLOAT fEntry48;
	float fRec60[1048576];
	FAUSTFLOAT fEntry49;
	FAUSTFLOAT fEntry50;
	FAUSTFLOAT fEntry51;
	FAUSTFLOAT fVslider15;
	float fRec71[2];
	FAUSTFLOAT fEntry52;
	float fRec76[2];
	float fVec29[2];
	float fRec75[2];
	float fVec30[2];
	float fVec31[4096];
	FAUSTFLOAT fEntry53;
	float fRec77[2];
	FAUSTFLOAT fVslider16;
	float fRec78[2];
	float fRec74[3];
	float fRec73[3];
	float fRec72[3];
	FAUSTFLOAT fEntry54;
	FAUSTFLOAT fButton7;
	float fVec32[2];
	int iRec79[2];
	FAUSTFLOAT fEntry55;
	float fRec70[1048576];
	FAUSTFLOAT fEntry56;
	FAUSTFLOAT fEntry57;
	FAUSTFLOAT fEntry58;
	FAUSTFLOAT fVslider17;
	float fRec81[2];
	FAUSTFLOAT fEntry59;
	float fRec86[2];
	float fVec33[2];
	float fRec85[2];
	float fVec34[2];
	float fVec35[4096];
	FAUSTFLOAT fEntry60;
	float fRec87[2];
	FAUSTFLOAT fVslider18;
	float fRec88[2];
	float fRec84[3];
	float fRec83[3];
	float fRec82[3];
	FAUSTFLOAT fEntry61;
	FAUSTFLOAT fButton8;
	float fVec36[2];
	int iRec89[2];
	FAUSTFLOAT fEntry62;
	float fRec80[1048576];
	FAUSTFLOAT fEntry63;
	FAUSTFLOAT fEntry64;
	FAUSTFLOAT fEntry65;
	FAUSTFLOAT fVslider19;
	float fRec91[2];
	FAUSTFLOAT fEntry66;
	float fRec96[2];
	float fVec37[2];
	float fRec95[2];
	float fVec38[2];
	float fVec39[4096];
	FAUSTFLOAT fEntry67;
	float fRec97[2];
	FAUSTFLOAT fVslider20;
	float fRec98[2];
	float fRec94[3];
	float fRec93[3];
	float fRec92[3];
	FAUSTFLOAT fEntry68;
	FAUSTFLOAT fButton9;
	float fVec40[2];
	int iRec99[2];
	FAUSTFLOAT fEntry69;
	float fRec90[1048576];
	FAUSTFLOAT fEntry70;
	FAUSTFLOAT fEntry71;
	FAUSTFLOAT fEntry72;
	FAUSTFLOAT fVslider21;
	float fRec101[2];
	FAUSTFLOAT fEntry73;
	float fRec106[2];
	float fVec41[2];
	float fRec105[2];
	float fVec42[2];
	float fVec43[4096];
	FAUSTFLOAT fEntry74;
	float fRec107[2];
	FAUSTFLOAT fVslider22;
	float fRec108[2];
	float fRec104[3];
	float fRec103[3];
	float fRec102[3];
	FAUSTFLOAT fEntry75;
	FAUSTFLOAT fButton10;
	float fVec44[2];
	int iRec109[2];
	FAUSTFLOAT fEntry76;
	float fRec100[1048576];
	FAUSTFLOAT fEntry77;
	FAUSTFLOAT fEntry78;
	FAUSTFLOAT fEntry79;
	FAUSTFLOAT fVslider23;
	float fRec111[2];
	FAUSTFLOAT fEntry80;
	float fRec116[2];
	float fVec45[2];
	float fRec115[2];
	float fVec46[2];
	float fVec47[4096];
	FAUSTFLOAT fEntry81;
	float fRec117[2];
	FAUSTFLOAT fVslider24;
	float fRec118[2];
	float fRec114[3];
	float fRec113[3];
	float fRec112[3];
	FAUSTFLOAT fEntry82;
	FAUSTFLOAT fButton11;
	float fVec48[2];
	int iRec119[2];
	FAUSTFLOAT fEntry83;
	float fRec110[1048576];
	FAUSTFLOAT fEntry84;
	FAUSTFLOAT fEntry85;
	FAUSTFLOAT fEntry86;
	FAUSTFLOAT fVslider25;
	float fRec121[2];
	FAUSTFLOAT fEntry87;
	float fRec126[2];
	float fVec49[2];
	float fRec125[2];
	float fVec50[2];
	float fVec51[4096];
	FAUSTFLOAT fEntry88;
	float fRec127[2];
	FAUSTFLOAT fVslider26;
	float fRec128[2];
	float fRec124[3];
	float fRec123[3];
	float fRec122[3];
	FAUSTFLOAT fEntry89;
	FAUSTFLOAT fButton12;
	float fVec52[2];
	int iRec129[2];
	FAUSTFLOAT fEntry90;
	float fRec120[1048576];
	FAUSTFLOAT fEntry91;
	FAUSTFLOAT fEntry92;
	FAUSTFLOAT fEntry93;
	FAUSTFLOAT fVslider27;
	float fRec131[2];
	FAUSTFLOAT fEntry94;
	float fRec136[2];
	float fVec53[2];
	float fRec135[2];
	float fVec54[2];
	float fVec55[4096];
	FAUSTFLOAT fEntry95;
	float fRec137[2];
	FAUSTFLOAT fVslider28;
	float fRec138[2];
	float fRec134[3];
	float fRec133[3];
	float fRec132[3];
	FAUSTFLOAT fEntry96;
	FAUSTFLOAT fButton13;
	float fVec56[2];
	int iRec139[2];
	FAUSTFLOAT fEntry97;
	float fRec130[1048576];
	FAUSTFLOAT fEntry98;
	FAUSTFLOAT fEntry99;
	FAUSTFLOAT fEntry100;
	FAUSTFLOAT fVslider29;
	float fRec141[2];
	FAUSTFLOAT fEntry101;
	float fRec146[2];
	float fVec57[2];
	float fRec145[2];
	float fVec58[2];
	float fVec59[4096];
	FAUSTFLOAT fEntry102;
	float fRec147[2];
	FAUSTFLOAT fVslider30;
	float fRec148[2];
	float fRec144[3];
	float fRec143[3];
	float fRec142[3];
	FAUSTFLOAT fEntry103;
	FAUSTFLOAT fButton14;
	float fVec60[2];
	int iRec149[2];
	FAUSTFLOAT fEntry104;
	float fRec140[1048576];
	FAUSTFLOAT fEntry105;
	FAUSTFLOAT fEntry106;
	FAUSTFLOAT fEntry107;
	FAUSTFLOAT fVslider31;
	float fRec151[2];
	FAUSTFLOAT fEntry108;
	float fRec156[2];
	float fVec61[2];
	float fRec155[2];
	float fVec62[2];
	float fVec63[4096];
	FAUSTFLOAT fEntry109;
	float fRec157[2];
	FAUSTFLOAT fVslider32;
	float fRec158[2];
	float fRec154[3];
	float fRec153[3];
	float fRec152[3];
	FAUSTFLOAT fEntry110;
	FAUSTFLOAT fButton15;
	float fVec64[2];
	int iRec159[2];
	FAUSTFLOAT fEntry111;
	float fRec150[1048576];
	
 public:
	
	void metadata(Meta* m) { 
		m->declare("basics.lib/name", "Faust Basic Element Library");
		m->declare("basics.lib/version", "0.1");
		m->declare("delays.lib/name", "Faust Delay Library");
		m->declare("delays.lib/version", "0.1");
		m->declare("envelopes.lib/ar:author", "Yann Orlarey, Stéphane Letz");
		m->declare("envelopes.lib/author", "GRAME");
		m->declare("envelopes.lib/copyright", "GRAME");
		m->declare("envelopes.lib/license", "LGPL with exception");
		m->declare("envelopes.lib/name", "Faust Envelope Library");
		m->declare("envelopes.lib/version", "0.0");
		m->declare("filename", "BASIS_seq.0.tmp.dsp");
		m->declare("filters.lib/fir:author", "Julius O. Smith III");
		m->declare("filters.lib/fir:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/fir:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/iir:author", "Julius O. Smith III");
		m->declare("filters.lib/iir:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/iir:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/lowpass0_highpass1", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/lowpass0_highpass1:author", "Julius O. Smith III");
		m->declare("filters.lib/lowpass:author", "Julius O. Smith III");
		m->declare("filters.lib/lowpass:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/lowpass:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/name", "Faust Filters Library");
		m->declare("filters.lib/tf2:author", "Julius O. Smith III");
		m->declare("filters.lib/tf2:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/tf2:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/tf2s:author", "Julius O. Smith III");
		m->declare("filters.lib/tf2s:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/tf2s:license", "MIT-style STK-4.3 license");
		m->declare("maths.lib/author", "GRAME");
		m->declare("maths.lib/copyright", "GRAME");
		m->declare("maths.lib/license", "LGPL with exception");
		m->declare("maths.lib/name", "Faust Math Library");
		m->declare("maths.lib/version", "2.1");
		m->declare("misceffects.lib/name", "Faust Math Library");
		m->declare("misceffects.lib/version", "2.0");
		m->declare("name", "BASIS_seq.0.tmp");
		m->declare("oscillators.lib/name", "Faust Oscillator Library");
		m->declare("oscillators.lib/version", "0.0");
		m->declare("signals.lib/name", "Faust Signal Routing Library");
		m->declare("signals.lib/version", "0.0");
	}

	virtual int getNumInputs() {
		return 0;
	}
	virtual int getNumOutputs() {
		return 2;
	}
	virtual int getInputRate(int channel) {
		int rate;
		switch ((channel)) {
			default: {
				rate = -1;
				break;
			}
		}
		return rate;
	}
	virtual int getOutputRate(int channel) {
		int rate;
		switch ((channel)) {
			case 0: {
				rate = 1;
				break;
			}
			case 1: {
				rate = 1;
				break;
			}
			default: {
				rate = -1;
				break;
			}
		}
		return rate;
	}
	
	static void classInit(int sample_rate) {
	}
	
	virtual void instanceConstants(int sample_rate) {
		fSampleRate = sample_rate;
		fConst0 = std::min<float>(192000.0f, std::max<float>(1.0f, float(fSampleRate)));
		fConst1 = (0.25f * fConst0);
		fConst2 = (1.0f / fConst0);
		fConst3 = (3.14159274f / fConst0);
	}
	
	virtual void instanceResetUserInterface() {
		fVslider0 = FAUSTFLOAT(0.0f);
		fEntry0 = FAUSTFLOAT(0.0f);
		fEntry1 = FAUSTFLOAT(0.0f);
		fEntry2 = FAUSTFLOAT(0.0f);
		fVslider1 = FAUSTFLOAT(0.0f);
		fEntry3 = FAUSTFLOAT(200.0f);
		fEntry4 = FAUSTFLOAT(0.5f);
		fVslider2 = FAUSTFLOAT(500.0f);
		fEntry5 = FAUSTFLOAT(0.5f);
		fButton0 = FAUSTFLOAT(0.0f);
		fEntry6 = FAUSTFLOAT(0.5f);
		fEntry7 = FAUSTFLOAT(0.0f);
		fEntry8 = FAUSTFLOAT(0.0f);
		fEntry9 = FAUSTFLOAT(0.0f);
		fVslider3 = FAUSTFLOAT(0.0f);
		fEntry10 = FAUSTFLOAT(200.0f);
		fEntry11 = FAUSTFLOAT(0.5f);
		fVslider4 = FAUSTFLOAT(500.0f);
		fEntry12 = FAUSTFLOAT(0.5f);
		fButton1 = FAUSTFLOAT(0.0f);
		fEntry13 = FAUSTFLOAT(0.5f);
		fEntry14 = FAUSTFLOAT(0.0f);
		fEntry15 = FAUSTFLOAT(0.0f);
		fEntry16 = FAUSTFLOAT(0.0f);
		fVslider5 = FAUSTFLOAT(0.0f);
		fEntry17 = FAUSTFLOAT(200.0f);
		fEntry18 = FAUSTFLOAT(0.5f);
		fVslider6 = FAUSTFLOAT(500.0f);
		fEntry19 = FAUSTFLOAT(0.5f);
		fButton2 = FAUSTFLOAT(0.0f);
		fEntry20 = FAUSTFLOAT(0.5f);
		fEntry21 = FAUSTFLOAT(0.0f);
		fEntry22 = FAUSTFLOAT(0.0f);
		fEntry23 = FAUSTFLOAT(0.0f);
		fVslider7 = FAUSTFLOAT(0.0f);
		fEntry24 = FAUSTFLOAT(200.0f);
		fEntry25 = FAUSTFLOAT(0.5f);
		fVslider8 = FAUSTFLOAT(500.0f);
		fEntry26 = FAUSTFLOAT(0.5f);
		fButton3 = FAUSTFLOAT(0.0f);
		fEntry27 = FAUSTFLOAT(0.5f);
		fEntry28 = FAUSTFLOAT(0.0f);
		fEntry29 = FAUSTFLOAT(0.0f);
		fEntry30 = FAUSTFLOAT(0.0f);
		fVslider9 = FAUSTFLOAT(0.0f);
		fEntry31 = FAUSTFLOAT(200.0f);
		fEntry32 = FAUSTFLOAT(0.5f);
		fVslider10 = FAUSTFLOAT(500.0f);
		fEntry33 = FAUSTFLOAT(0.5f);
		fButton4 = FAUSTFLOAT(0.0f);
		fEntry34 = FAUSTFLOAT(0.5f);
		fEntry35 = FAUSTFLOAT(0.0f);
		fEntry36 = FAUSTFLOAT(0.0f);
		fEntry37 = FAUSTFLOAT(0.0f);
		fVslider11 = FAUSTFLOAT(0.0f);
		fEntry38 = FAUSTFLOAT(200.0f);
		fEntry39 = FAUSTFLOAT(0.5f);
		fVslider12 = FAUSTFLOAT(500.0f);
		fEntry40 = FAUSTFLOAT(0.5f);
		fButton5 = FAUSTFLOAT(0.0f);
		fEntry41 = FAUSTFLOAT(0.5f);
		fEntry42 = FAUSTFLOAT(0.0f);
		fEntry43 = FAUSTFLOAT(0.0f);
		fEntry44 = FAUSTFLOAT(0.0f);
		fVslider13 = FAUSTFLOAT(0.0f);
		fEntry45 = FAUSTFLOAT(200.0f);
		fEntry46 = FAUSTFLOAT(0.5f);
		fVslider14 = FAUSTFLOAT(500.0f);
		fEntry47 = FAUSTFLOAT(0.5f);
		fButton6 = FAUSTFLOAT(0.0f);
		fEntry48 = FAUSTFLOAT(0.5f);
		fEntry49 = FAUSTFLOAT(0.0f);
		fEntry50 = FAUSTFLOAT(0.0f);
		fEntry51 = FAUSTFLOAT(0.0f);
		fVslider15 = FAUSTFLOAT(0.0f);
		fEntry52 = FAUSTFLOAT(200.0f);
		fEntry53 = FAUSTFLOAT(0.5f);
		fVslider16 = FAUSTFLOAT(500.0f);
		fEntry54 = FAUSTFLOAT(0.5f);
		fButton7 = FAUSTFLOAT(0.0f);
		fEntry55 = FAUSTFLOAT(0.5f);
		fEntry56 = FAUSTFLOAT(0.0f);
		fEntry57 = FAUSTFLOAT(0.0f);
		fEntry58 = FAUSTFLOAT(0.0f);
		fVslider17 = FAUSTFLOAT(0.0f);
		fEntry59 = FAUSTFLOAT(200.0f);
		fEntry60 = FAUSTFLOAT(0.5f);
		fVslider18 = FAUSTFLOAT(500.0f);
		fEntry61 = FAUSTFLOAT(0.5f);
		fButton8 = FAUSTFLOAT(0.0f);
		fEntry62 = FAUSTFLOAT(0.5f);
		fEntry63 = FAUSTFLOAT(0.0f);
		fEntry64 = FAUSTFLOAT(0.0f);
		fEntry65 = FAUSTFLOAT(0.0f);
		fVslider19 = FAUSTFLOAT(0.0f);
		fEntry66 = FAUSTFLOAT(200.0f);
		fEntry67 = FAUSTFLOAT(0.5f);
		fVslider20 = FAUSTFLOAT(500.0f);
		fEntry68 = FAUSTFLOAT(0.5f);
		fButton9 = FAUSTFLOAT(0.0f);
		fEntry69 = FAUSTFLOAT(0.5f);
		fEntry70 = FAUSTFLOAT(0.0f);
		fEntry71 = FAUSTFLOAT(0.0f);
		fEntry72 = FAUSTFLOAT(0.0f);
		fVslider21 = FAUSTFLOAT(0.0f);
		fEntry73 = FAUSTFLOAT(200.0f);
		fEntry74 = FAUSTFLOAT(0.5f);
		fVslider22 = FAUSTFLOAT(500.0f);
		fEntry75 = FAUSTFLOAT(0.5f);
		fButton10 = FAUSTFLOAT(0.0f);
		fEntry76 = FAUSTFLOAT(0.5f);
		fEntry77 = FAUSTFLOAT(0.0f);
		fEntry78 = FAUSTFLOAT(0.0f);
		fEntry79 = FAUSTFLOAT(0.0f);
		fVslider23 = FAUSTFLOAT(0.0f);
		fEntry80 = FAUSTFLOAT(200.0f);
		fEntry81 = FAUSTFLOAT(0.5f);
		fVslider24 = FAUSTFLOAT(500.0f);
		fEntry82 = FAUSTFLOAT(0.5f);
		fButton11 = FAUSTFLOAT(0.0f);
		fEntry83 = FAUSTFLOAT(0.5f);
		fEntry84 = FAUSTFLOAT(0.0f);
		fEntry85 = FAUSTFLOAT(0.0f);
		fEntry86 = FAUSTFLOAT(0.0f);
		fVslider25 = FAUSTFLOAT(0.0f);
		fEntry87 = FAUSTFLOAT(200.0f);
		fEntry88 = FAUSTFLOAT(0.5f);
		fVslider26 = FAUSTFLOAT(500.0f);
		fEntry89 = FAUSTFLOAT(0.5f);
		fButton12 = FAUSTFLOAT(0.0f);
		fEntry90 = FAUSTFLOAT(0.5f);
		fEntry91 = FAUSTFLOAT(0.0f);
		fEntry92 = FAUSTFLOAT(0.0f);
		fEntry93 = FAUSTFLOAT(0.0f);
		fVslider27 = FAUSTFLOAT(0.0f);
		fEntry94 = FAUSTFLOAT(200.0f);
		fEntry95 = FAUSTFLOAT(0.5f);
		fVslider28 = FAUSTFLOAT(500.0f);
		fEntry96 = FAUSTFLOAT(0.5f);
		fButton13 = FAUSTFLOAT(0.0f);
		fEntry97 = FAUSTFLOAT(0.5f);
		fEntry98 = FAUSTFLOAT(0.0f);
		fEntry99 = FAUSTFLOAT(0.0f);
		fEntry100 = FAUSTFLOAT(0.0f);
		fVslider29 = FAUSTFLOAT(0.0f);
		fEntry101 = FAUSTFLOAT(200.0f);
		fEntry102 = FAUSTFLOAT(0.5f);
		fVslider30 = FAUSTFLOAT(500.0f);
		fEntry103 = FAUSTFLOAT(0.5f);
		fButton14 = FAUSTFLOAT(0.0f);
		fEntry104 = FAUSTFLOAT(0.5f);
		fEntry105 = FAUSTFLOAT(0.0f);
		fEntry106 = FAUSTFLOAT(0.0f);
		fEntry107 = FAUSTFLOAT(0.0f);
		fVslider31 = FAUSTFLOAT(0.0f);
		fEntry108 = FAUSTFLOAT(200.0f);
		fEntry109 = FAUSTFLOAT(0.5f);
		fVslider32 = FAUSTFLOAT(500.0f);
		fEntry110 = FAUSTFLOAT(0.5f);
		fButton15 = FAUSTFLOAT(0.0f);
		fEntry111 = FAUSTFLOAT(0.5f);
	}
	
	virtual void instanceClear() {
		for (int l0 = 0; (l0 < 2); l0 = (l0 + 1)) {
			iVec0[l0] = 0;
		}
		for (int l1 = 0; (l1 < 2); l1 = (l1 + 1)) {
			fRec1[l1] = 0.0f;
		}
		for (int l2 = 0; (l2 < 2); l2 = (l2 + 1)) {
			fRec6[l2] = 0.0f;
		}
		for (int l3 = 0; (l3 < 2); l3 = (l3 + 1)) {
			fVec1[l3] = 0.0f;
		}
		for (int l4 = 0; (l4 < 2); l4 = (l4 + 1)) {
			fRec5[l4] = 0.0f;
		}
		for (int l5 = 0; (l5 < 2); l5 = (l5 + 1)) {
			fVec2[l5] = 0.0f;
		}
		IOTA = 0;
		for (int l6 = 0; (l6 < 4096); l6 = (l6 + 1)) {
			fVec3[l6] = 0.0f;
		}
		for (int l7 = 0; (l7 < 2); l7 = (l7 + 1)) {
			fRec7[l7] = 0.0f;
		}
		for (int l8 = 0; (l8 < 2); l8 = (l8 + 1)) {
			fRec8[l8] = 0.0f;
		}
		for (int l9 = 0; (l9 < 3); l9 = (l9 + 1)) {
			fRec4[l9] = 0.0f;
		}
		for (int l10 = 0; (l10 < 3); l10 = (l10 + 1)) {
			fRec3[l10] = 0.0f;
		}
		for (int l11 = 0; (l11 < 3); l11 = (l11 + 1)) {
			fRec2[l11] = 0.0f;
		}
		for (int l12 = 0; (l12 < 2); l12 = (l12 + 1)) {
			fVec4[l12] = 0.0f;
		}
		for (int l13 = 0; (l13 < 2); l13 = (l13 + 1)) {
			iRec9[l13] = 0;
		}
		for (int l14 = 0; (l14 < 1048576); l14 = (l14 + 1)) {
			fRec0[l14] = 0.0f;
		}
		for (int l15 = 0; (l15 < 2); l15 = (l15 + 1)) {
			fRec11[l15] = 0.0f;
		}
		for (int l16 = 0; (l16 < 2); l16 = (l16 + 1)) {
			fRec16[l16] = 0.0f;
		}
		for (int l17 = 0; (l17 < 2); l17 = (l17 + 1)) {
			fVec5[l17] = 0.0f;
		}
		for (int l18 = 0; (l18 < 2); l18 = (l18 + 1)) {
			fRec15[l18] = 0.0f;
		}
		for (int l19 = 0; (l19 < 2); l19 = (l19 + 1)) {
			fVec6[l19] = 0.0f;
		}
		for (int l20 = 0; (l20 < 4096); l20 = (l20 + 1)) {
			fVec7[l20] = 0.0f;
		}
		for (int l21 = 0; (l21 < 2); l21 = (l21 + 1)) {
			fRec17[l21] = 0.0f;
		}
		for (int l22 = 0; (l22 < 2); l22 = (l22 + 1)) {
			fRec18[l22] = 0.0f;
		}
		for (int l23 = 0; (l23 < 3); l23 = (l23 + 1)) {
			fRec14[l23] = 0.0f;
		}
		for (int l24 = 0; (l24 < 3); l24 = (l24 + 1)) {
			fRec13[l24] = 0.0f;
		}
		for (int l25 = 0; (l25 < 3); l25 = (l25 + 1)) {
			fRec12[l25] = 0.0f;
		}
		for (int l26 = 0; (l26 < 2); l26 = (l26 + 1)) {
			fVec8[l26] = 0.0f;
		}
		for (int l27 = 0; (l27 < 2); l27 = (l27 + 1)) {
			iRec19[l27] = 0;
		}
		for (int l28 = 0; (l28 < 1048576); l28 = (l28 + 1)) {
			fRec10[l28] = 0.0f;
		}
		for (int l29 = 0; (l29 < 2); l29 = (l29 + 1)) {
			fRec21[l29] = 0.0f;
		}
		for (int l30 = 0; (l30 < 2); l30 = (l30 + 1)) {
			fRec26[l30] = 0.0f;
		}
		for (int l31 = 0; (l31 < 2); l31 = (l31 + 1)) {
			fVec9[l31] = 0.0f;
		}
		for (int l32 = 0; (l32 < 2); l32 = (l32 + 1)) {
			fRec25[l32] = 0.0f;
		}
		for (int l33 = 0; (l33 < 2); l33 = (l33 + 1)) {
			fVec10[l33] = 0.0f;
		}
		for (int l34 = 0; (l34 < 4096); l34 = (l34 + 1)) {
			fVec11[l34] = 0.0f;
		}
		for (int l35 = 0; (l35 < 2); l35 = (l35 + 1)) {
			fRec27[l35] = 0.0f;
		}
		for (int l36 = 0; (l36 < 2); l36 = (l36 + 1)) {
			fRec28[l36] = 0.0f;
		}
		for (int l37 = 0; (l37 < 3); l37 = (l37 + 1)) {
			fRec24[l37] = 0.0f;
		}
		for (int l38 = 0; (l38 < 3); l38 = (l38 + 1)) {
			fRec23[l38] = 0.0f;
		}
		for (int l39 = 0; (l39 < 3); l39 = (l39 + 1)) {
			fRec22[l39] = 0.0f;
		}
		for (int l40 = 0; (l40 < 2); l40 = (l40 + 1)) {
			fVec12[l40] = 0.0f;
		}
		for (int l41 = 0; (l41 < 2); l41 = (l41 + 1)) {
			iRec29[l41] = 0;
		}
		for (int l42 = 0; (l42 < 1048576); l42 = (l42 + 1)) {
			fRec20[l42] = 0.0f;
		}
		for (int l43 = 0; (l43 < 2); l43 = (l43 + 1)) {
			fRec31[l43] = 0.0f;
		}
		for (int l44 = 0; (l44 < 2); l44 = (l44 + 1)) {
			fRec36[l44] = 0.0f;
		}
		for (int l45 = 0; (l45 < 2); l45 = (l45 + 1)) {
			fVec13[l45] = 0.0f;
		}
		for (int l46 = 0; (l46 < 2); l46 = (l46 + 1)) {
			fRec35[l46] = 0.0f;
		}
		for (int l47 = 0; (l47 < 2); l47 = (l47 + 1)) {
			fVec14[l47] = 0.0f;
		}
		for (int l48 = 0; (l48 < 4096); l48 = (l48 + 1)) {
			fVec15[l48] = 0.0f;
		}
		for (int l49 = 0; (l49 < 2); l49 = (l49 + 1)) {
			fRec37[l49] = 0.0f;
		}
		for (int l50 = 0; (l50 < 2); l50 = (l50 + 1)) {
			fRec38[l50] = 0.0f;
		}
		for (int l51 = 0; (l51 < 3); l51 = (l51 + 1)) {
			fRec34[l51] = 0.0f;
		}
		for (int l52 = 0; (l52 < 3); l52 = (l52 + 1)) {
			fRec33[l52] = 0.0f;
		}
		for (int l53 = 0; (l53 < 3); l53 = (l53 + 1)) {
			fRec32[l53] = 0.0f;
		}
		for (int l54 = 0; (l54 < 2); l54 = (l54 + 1)) {
			fVec16[l54] = 0.0f;
		}
		for (int l55 = 0; (l55 < 2); l55 = (l55 + 1)) {
			iRec39[l55] = 0;
		}
		for (int l56 = 0; (l56 < 1048576); l56 = (l56 + 1)) {
			fRec30[l56] = 0.0f;
		}
		for (int l57 = 0; (l57 < 2); l57 = (l57 + 1)) {
			fRec41[l57] = 0.0f;
		}
		for (int l58 = 0; (l58 < 2); l58 = (l58 + 1)) {
			fRec46[l58] = 0.0f;
		}
		for (int l59 = 0; (l59 < 2); l59 = (l59 + 1)) {
			fVec17[l59] = 0.0f;
		}
		for (int l60 = 0; (l60 < 2); l60 = (l60 + 1)) {
			fRec45[l60] = 0.0f;
		}
		for (int l61 = 0; (l61 < 2); l61 = (l61 + 1)) {
			fVec18[l61] = 0.0f;
		}
		for (int l62 = 0; (l62 < 4096); l62 = (l62 + 1)) {
			fVec19[l62] = 0.0f;
		}
		for (int l63 = 0; (l63 < 2); l63 = (l63 + 1)) {
			fRec47[l63] = 0.0f;
		}
		for (int l64 = 0; (l64 < 2); l64 = (l64 + 1)) {
			fRec48[l64] = 0.0f;
		}
		for (int l65 = 0; (l65 < 3); l65 = (l65 + 1)) {
			fRec44[l65] = 0.0f;
		}
		for (int l66 = 0; (l66 < 3); l66 = (l66 + 1)) {
			fRec43[l66] = 0.0f;
		}
		for (int l67 = 0; (l67 < 3); l67 = (l67 + 1)) {
			fRec42[l67] = 0.0f;
		}
		for (int l68 = 0; (l68 < 2); l68 = (l68 + 1)) {
			fVec20[l68] = 0.0f;
		}
		for (int l69 = 0; (l69 < 2); l69 = (l69 + 1)) {
			iRec49[l69] = 0;
		}
		for (int l70 = 0; (l70 < 1048576); l70 = (l70 + 1)) {
			fRec40[l70] = 0.0f;
		}
		for (int l71 = 0; (l71 < 2); l71 = (l71 + 1)) {
			fRec51[l71] = 0.0f;
		}
		for (int l72 = 0; (l72 < 2); l72 = (l72 + 1)) {
			fRec56[l72] = 0.0f;
		}
		for (int l73 = 0; (l73 < 2); l73 = (l73 + 1)) {
			fVec21[l73] = 0.0f;
		}
		for (int l74 = 0; (l74 < 2); l74 = (l74 + 1)) {
			fRec55[l74] = 0.0f;
		}
		for (int l75 = 0; (l75 < 2); l75 = (l75 + 1)) {
			fVec22[l75] = 0.0f;
		}
		for (int l76 = 0; (l76 < 4096); l76 = (l76 + 1)) {
			fVec23[l76] = 0.0f;
		}
		for (int l77 = 0; (l77 < 2); l77 = (l77 + 1)) {
			fRec57[l77] = 0.0f;
		}
		for (int l78 = 0; (l78 < 2); l78 = (l78 + 1)) {
			fRec58[l78] = 0.0f;
		}
		for (int l79 = 0; (l79 < 3); l79 = (l79 + 1)) {
			fRec54[l79] = 0.0f;
		}
		for (int l80 = 0; (l80 < 3); l80 = (l80 + 1)) {
			fRec53[l80] = 0.0f;
		}
		for (int l81 = 0; (l81 < 3); l81 = (l81 + 1)) {
			fRec52[l81] = 0.0f;
		}
		for (int l82 = 0; (l82 < 2); l82 = (l82 + 1)) {
			fVec24[l82] = 0.0f;
		}
		for (int l83 = 0; (l83 < 2); l83 = (l83 + 1)) {
			iRec59[l83] = 0;
		}
		for (int l84 = 0; (l84 < 1048576); l84 = (l84 + 1)) {
			fRec50[l84] = 0.0f;
		}
		for (int l85 = 0; (l85 < 2); l85 = (l85 + 1)) {
			fRec61[l85] = 0.0f;
		}
		for (int l86 = 0; (l86 < 2); l86 = (l86 + 1)) {
			fRec66[l86] = 0.0f;
		}
		for (int l87 = 0; (l87 < 2); l87 = (l87 + 1)) {
			fVec25[l87] = 0.0f;
		}
		for (int l88 = 0; (l88 < 2); l88 = (l88 + 1)) {
			fRec65[l88] = 0.0f;
		}
		for (int l89 = 0; (l89 < 2); l89 = (l89 + 1)) {
			fVec26[l89] = 0.0f;
		}
		for (int l90 = 0; (l90 < 4096); l90 = (l90 + 1)) {
			fVec27[l90] = 0.0f;
		}
		for (int l91 = 0; (l91 < 2); l91 = (l91 + 1)) {
			fRec67[l91] = 0.0f;
		}
		for (int l92 = 0; (l92 < 2); l92 = (l92 + 1)) {
			fRec68[l92] = 0.0f;
		}
		for (int l93 = 0; (l93 < 3); l93 = (l93 + 1)) {
			fRec64[l93] = 0.0f;
		}
		for (int l94 = 0; (l94 < 3); l94 = (l94 + 1)) {
			fRec63[l94] = 0.0f;
		}
		for (int l95 = 0; (l95 < 3); l95 = (l95 + 1)) {
			fRec62[l95] = 0.0f;
		}
		for (int l96 = 0; (l96 < 2); l96 = (l96 + 1)) {
			fVec28[l96] = 0.0f;
		}
		for (int l97 = 0; (l97 < 2); l97 = (l97 + 1)) {
			iRec69[l97] = 0;
		}
		for (int l98 = 0; (l98 < 1048576); l98 = (l98 + 1)) {
			fRec60[l98] = 0.0f;
		}
		for (int l99 = 0; (l99 < 2); l99 = (l99 + 1)) {
			fRec71[l99] = 0.0f;
		}
		for (int l100 = 0; (l100 < 2); l100 = (l100 + 1)) {
			fRec76[l100] = 0.0f;
		}
		for (int l101 = 0; (l101 < 2); l101 = (l101 + 1)) {
			fVec29[l101] = 0.0f;
		}
		for (int l102 = 0; (l102 < 2); l102 = (l102 + 1)) {
			fRec75[l102] = 0.0f;
		}
		for (int l103 = 0; (l103 < 2); l103 = (l103 + 1)) {
			fVec30[l103] = 0.0f;
		}
		for (int l104 = 0; (l104 < 4096); l104 = (l104 + 1)) {
			fVec31[l104] = 0.0f;
		}
		for (int l105 = 0; (l105 < 2); l105 = (l105 + 1)) {
			fRec77[l105] = 0.0f;
		}
		for (int l106 = 0; (l106 < 2); l106 = (l106 + 1)) {
			fRec78[l106] = 0.0f;
		}
		for (int l107 = 0; (l107 < 3); l107 = (l107 + 1)) {
			fRec74[l107] = 0.0f;
		}
		for (int l108 = 0; (l108 < 3); l108 = (l108 + 1)) {
			fRec73[l108] = 0.0f;
		}
		for (int l109 = 0; (l109 < 3); l109 = (l109 + 1)) {
			fRec72[l109] = 0.0f;
		}
		for (int l110 = 0; (l110 < 2); l110 = (l110 + 1)) {
			fVec32[l110] = 0.0f;
		}
		for (int l111 = 0; (l111 < 2); l111 = (l111 + 1)) {
			iRec79[l111] = 0;
		}
		for (int l112 = 0; (l112 < 1048576); l112 = (l112 + 1)) {
			fRec70[l112] = 0.0f;
		}
		for (int l113 = 0; (l113 < 2); l113 = (l113 + 1)) {
			fRec81[l113] = 0.0f;
		}
		for (int l114 = 0; (l114 < 2); l114 = (l114 + 1)) {
			fRec86[l114] = 0.0f;
		}
		for (int l115 = 0; (l115 < 2); l115 = (l115 + 1)) {
			fVec33[l115] = 0.0f;
		}
		for (int l116 = 0; (l116 < 2); l116 = (l116 + 1)) {
			fRec85[l116] = 0.0f;
		}
		for (int l117 = 0; (l117 < 2); l117 = (l117 + 1)) {
			fVec34[l117] = 0.0f;
		}
		for (int l118 = 0; (l118 < 4096); l118 = (l118 + 1)) {
			fVec35[l118] = 0.0f;
		}
		for (int l119 = 0; (l119 < 2); l119 = (l119 + 1)) {
			fRec87[l119] = 0.0f;
		}
		for (int l120 = 0; (l120 < 2); l120 = (l120 + 1)) {
			fRec88[l120] = 0.0f;
		}
		for (int l121 = 0; (l121 < 3); l121 = (l121 + 1)) {
			fRec84[l121] = 0.0f;
		}
		for (int l122 = 0; (l122 < 3); l122 = (l122 + 1)) {
			fRec83[l122] = 0.0f;
		}
		for (int l123 = 0; (l123 < 3); l123 = (l123 + 1)) {
			fRec82[l123] = 0.0f;
		}
		for (int l124 = 0; (l124 < 2); l124 = (l124 + 1)) {
			fVec36[l124] = 0.0f;
		}
		for (int l125 = 0; (l125 < 2); l125 = (l125 + 1)) {
			iRec89[l125] = 0;
		}
		for (int l126 = 0; (l126 < 1048576); l126 = (l126 + 1)) {
			fRec80[l126] = 0.0f;
		}
		for (int l127 = 0; (l127 < 2); l127 = (l127 + 1)) {
			fRec91[l127] = 0.0f;
		}
		for (int l128 = 0; (l128 < 2); l128 = (l128 + 1)) {
			fRec96[l128] = 0.0f;
		}
		for (int l129 = 0; (l129 < 2); l129 = (l129 + 1)) {
			fVec37[l129] = 0.0f;
		}
		for (int l130 = 0; (l130 < 2); l130 = (l130 + 1)) {
			fRec95[l130] = 0.0f;
		}
		for (int l131 = 0; (l131 < 2); l131 = (l131 + 1)) {
			fVec38[l131] = 0.0f;
		}
		for (int l132 = 0; (l132 < 4096); l132 = (l132 + 1)) {
			fVec39[l132] = 0.0f;
		}
		for (int l133 = 0; (l133 < 2); l133 = (l133 + 1)) {
			fRec97[l133] = 0.0f;
		}
		for (int l134 = 0; (l134 < 2); l134 = (l134 + 1)) {
			fRec98[l134] = 0.0f;
		}
		for (int l135 = 0; (l135 < 3); l135 = (l135 + 1)) {
			fRec94[l135] = 0.0f;
		}
		for (int l136 = 0; (l136 < 3); l136 = (l136 + 1)) {
			fRec93[l136] = 0.0f;
		}
		for (int l137 = 0; (l137 < 3); l137 = (l137 + 1)) {
			fRec92[l137] = 0.0f;
		}
		for (int l138 = 0; (l138 < 2); l138 = (l138 + 1)) {
			fVec40[l138] = 0.0f;
		}
		for (int l139 = 0; (l139 < 2); l139 = (l139 + 1)) {
			iRec99[l139] = 0;
		}
		for (int l140 = 0; (l140 < 1048576); l140 = (l140 + 1)) {
			fRec90[l140] = 0.0f;
		}
		for (int l141 = 0; (l141 < 2); l141 = (l141 + 1)) {
			fRec101[l141] = 0.0f;
		}
		for (int l142 = 0; (l142 < 2); l142 = (l142 + 1)) {
			fRec106[l142] = 0.0f;
		}
		for (int l143 = 0; (l143 < 2); l143 = (l143 + 1)) {
			fVec41[l143] = 0.0f;
		}
		for (int l144 = 0; (l144 < 2); l144 = (l144 + 1)) {
			fRec105[l144] = 0.0f;
		}
		for (int l145 = 0; (l145 < 2); l145 = (l145 + 1)) {
			fVec42[l145] = 0.0f;
		}
		for (int l146 = 0; (l146 < 4096); l146 = (l146 + 1)) {
			fVec43[l146] = 0.0f;
		}
		for (int l147 = 0; (l147 < 2); l147 = (l147 + 1)) {
			fRec107[l147] = 0.0f;
		}
		for (int l148 = 0; (l148 < 2); l148 = (l148 + 1)) {
			fRec108[l148] = 0.0f;
		}
		for (int l149 = 0; (l149 < 3); l149 = (l149 + 1)) {
			fRec104[l149] = 0.0f;
		}
		for (int l150 = 0; (l150 < 3); l150 = (l150 + 1)) {
			fRec103[l150] = 0.0f;
		}
		for (int l151 = 0; (l151 < 3); l151 = (l151 + 1)) {
			fRec102[l151] = 0.0f;
		}
		for (int l152 = 0; (l152 < 2); l152 = (l152 + 1)) {
			fVec44[l152] = 0.0f;
		}
		for (int l153 = 0; (l153 < 2); l153 = (l153 + 1)) {
			iRec109[l153] = 0;
		}
		for (int l154 = 0; (l154 < 1048576); l154 = (l154 + 1)) {
			fRec100[l154] = 0.0f;
		}
		for (int l155 = 0; (l155 < 2); l155 = (l155 + 1)) {
			fRec111[l155] = 0.0f;
		}
		for (int l156 = 0; (l156 < 2); l156 = (l156 + 1)) {
			fRec116[l156] = 0.0f;
		}
		for (int l157 = 0; (l157 < 2); l157 = (l157 + 1)) {
			fVec45[l157] = 0.0f;
		}
		for (int l158 = 0; (l158 < 2); l158 = (l158 + 1)) {
			fRec115[l158] = 0.0f;
		}
		for (int l159 = 0; (l159 < 2); l159 = (l159 + 1)) {
			fVec46[l159] = 0.0f;
		}
		for (int l160 = 0; (l160 < 4096); l160 = (l160 + 1)) {
			fVec47[l160] = 0.0f;
		}
		for (int l161 = 0; (l161 < 2); l161 = (l161 + 1)) {
			fRec117[l161] = 0.0f;
		}
		for (int l162 = 0; (l162 < 2); l162 = (l162 + 1)) {
			fRec118[l162] = 0.0f;
		}
		for (int l163 = 0; (l163 < 3); l163 = (l163 + 1)) {
			fRec114[l163] = 0.0f;
		}
		for (int l164 = 0; (l164 < 3); l164 = (l164 + 1)) {
			fRec113[l164] = 0.0f;
		}
		for (int l165 = 0; (l165 < 3); l165 = (l165 + 1)) {
			fRec112[l165] = 0.0f;
		}
		for (int l166 = 0; (l166 < 2); l166 = (l166 + 1)) {
			fVec48[l166] = 0.0f;
		}
		for (int l167 = 0; (l167 < 2); l167 = (l167 + 1)) {
			iRec119[l167] = 0;
		}
		for (int l168 = 0; (l168 < 1048576); l168 = (l168 + 1)) {
			fRec110[l168] = 0.0f;
		}
		for (int l169 = 0; (l169 < 2); l169 = (l169 + 1)) {
			fRec121[l169] = 0.0f;
		}
		for (int l170 = 0; (l170 < 2); l170 = (l170 + 1)) {
			fRec126[l170] = 0.0f;
		}
		for (int l171 = 0; (l171 < 2); l171 = (l171 + 1)) {
			fVec49[l171] = 0.0f;
		}
		for (int l172 = 0; (l172 < 2); l172 = (l172 + 1)) {
			fRec125[l172] = 0.0f;
		}
		for (int l173 = 0; (l173 < 2); l173 = (l173 + 1)) {
			fVec50[l173] = 0.0f;
		}
		for (int l174 = 0; (l174 < 4096); l174 = (l174 + 1)) {
			fVec51[l174] = 0.0f;
		}
		for (int l175 = 0; (l175 < 2); l175 = (l175 + 1)) {
			fRec127[l175] = 0.0f;
		}
		for (int l176 = 0; (l176 < 2); l176 = (l176 + 1)) {
			fRec128[l176] = 0.0f;
		}
		for (int l177 = 0; (l177 < 3); l177 = (l177 + 1)) {
			fRec124[l177] = 0.0f;
		}
		for (int l178 = 0; (l178 < 3); l178 = (l178 + 1)) {
			fRec123[l178] = 0.0f;
		}
		for (int l179 = 0; (l179 < 3); l179 = (l179 + 1)) {
			fRec122[l179] = 0.0f;
		}
		for (int l180 = 0; (l180 < 2); l180 = (l180 + 1)) {
			fVec52[l180] = 0.0f;
		}
		for (int l181 = 0; (l181 < 2); l181 = (l181 + 1)) {
			iRec129[l181] = 0;
		}
		for (int l182 = 0; (l182 < 1048576); l182 = (l182 + 1)) {
			fRec120[l182] = 0.0f;
		}
		for (int l183 = 0; (l183 < 2); l183 = (l183 + 1)) {
			fRec131[l183] = 0.0f;
		}
		for (int l184 = 0; (l184 < 2); l184 = (l184 + 1)) {
			fRec136[l184] = 0.0f;
		}
		for (int l185 = 0; (l185 < 2); l185 = (l185 + 1)) {
			fVec53[l185] = 0.0f;
		}
		for (int l186 = 0; (l186 < 2); l186 = (l186 + 1)) {
			fRec135[l186] = 0.0f;
		}
		for (int l187 = 0; (l187 < 2); l187 = (l187 + 1)) {
			fVec54[l187] = 0.0f;
		}
		for (int l188 = 0; (l188 < 4096); l188 = (l188 + 1)) {
			fVec55[l188] = 0.0f;
		}
		for (int l189 = 0; (l189 < 2); l189 = (l189 + 1)) {
			fRec137[l189] = 0.0f;
		}
		for (int l190 = 0; (l190 < 2); l190 = (l190 + 1)) {
			fRec138[l190] = 0.0f;
		}
		for (int l191 = 0; (l191 < 3); l191 = (l191 + 1)) {
			fRec134[l191] = 0.0f;
		}
		for (int l192 = 0; (l192 < 3); l192 = (l192 + 1)) {
			fRec133[l192] = 0.0f;
		}
		for (int l193 = 0; (l193 < 3); l193 = (l193 + 1)) {
			fRec132[l193] = 0.0f;
		}
		for (int l194 = 0; (l194 < 2); l194 = (l194 + 1)) {
			fVec56[l194] = 0.0f;
		}
		for (int l195 = 0; (l195 < 2); l195 = (l195 + 1)) {
			iRec139[l195] = 0;
		}
		for (int l196 = 0; (l196 < 1048576); l196 = (l196 + 1)) {
			fRec130[l196] = 0.0f;
		}
		for (int l197 = 0; (l197 < 2); l197 = (l197 + 1)) {
			fRec141[l197] = 0.0f;
		}
		for (int l198 = 0; (l198 < 2); l198 = (l198 + 1)) {
			fRec146[l198] = 0.0f;
		}
		for (int l199 = 0; (l199 < 2); l199 = (l199 + 1)) {
			fVec57[l199] = 0.0f;
		}
		for (int l200 = 0; (l200 < 2); l200 = (l200 + 1)) {
			fRec145[l200] = 0.0f;
		}
		for (int l201 = 0; (l201 < 2); l201 = (l201 + 1)) {
			fVec58[l201] = 0.0f;
		}
		for (int l202 = 0; (l202 < 4096); l202 = (l202 + 1)) {
			fVec59[l202] = 0.0f;
		}
		for (int l203 = 0; (l203 < 2); l203 = (l203 + 1)) {
			fRec147[l203] = 0.0f;
		}
		for (int l204 = 0; (l204 < 2); l204 = (l204 + 1)) {
			fRec148[l204] = 0.0f;
		}
		for (int l205 = 0; (l205 < 3); l205 = (l205 + 1)) {
			fRec144[l205] = 0.0f;
		}
		for (int l206 = 0; (l206 < 3); l206 = (l206 + 1)) {
			fRec143[l206] = 0.0f;
		}
		for (int l207 = 0; (l207 < 3); l207 = (l207 + 1)) {
			fRec142[l207] = 0.0f;
		}
		for (int l208 = 0; (l208 < 2); l208 = (l208 + 1)) {
			fVec60[l208] = 0.0f;
		}
		for (int l209 = 0; (l209 < 2); l209 = (l209 + 1)) {
			iRec149[l209] = 0;
		}
		for (int l210 = 0; (l210 < 1048576); l210 = (l210 + 1)) {
			fRec140[l210] = 0.0f;
		}
		for (int l211 = 0; (l211 < 2); l211 = (l211 + 1)) {
			fRec151[l211] = 0.0f;
		}
		for (int l212 = 0; (l212 < 2); l212 = (l212 + 1)) {
			fRec156[l212] = 0.0f;
		}
		for (int l213 = 0; (l213 < 2); l213 = (l213 + 1)) {
			fVec61[l213] = 0.0f;
		}
		for (int l214 = 0; (l214 < 2); l214 = (l214 + 1)) {
			fRec155[l214] = 0.0f;
		}
		for (int l215 = 0; (l215 < 2); l215 = (l215 + 1)) {
			fVec62[l215] = 0.0f;
		}
		for (int l216 = 0; (l216 < 4096); l216 = (l216 + 1)) {
			fVec63[l216] = 0.0f;
		}
		for (int l217 = 0; (l217 < 2); l217 = (l217 + 1)) {
			fRec157[l217] = 0.0f;
		}
		for (int l218 = 0; (l218 < 2); l218 = (l218 + 1)) {
			fRec158[l218] = 0.0f;
		}
		for (int l219 = 0; (l219 < 3); l219 = (l219 + 1)) {
			fRec154[l219] = 0.0f;
		}
		for (int l220 = 0; (l220 < 3); l220 = (l220 + 1)) {
			fRec153[l220] = 0.0f;
		}
		for (int l221 = 0; (l221 < 3); l221 = (l221 + 1)) {
			fRec152[l221] = 0.0f;
		}
		for (int l222 = 0; (l222 < 2); l222 = (l222 + 1)) {
			fVec64[l222] = 0.0f;
		}
		for (int l223 = 0; (l223 < 2); l223 = (l223 + 1)) {
			iRec159[l223] = 0;
		}
		for (int l224 = 0; (l224 < 1048576); l224 = (l224 + 1)) {
			fRec150[l224] = 0.0f;
		}
	}
	
	virtual void init(int sample_rate) {
		classInit(sample_rate);
		instanceInit(sample_rate);
	}
	virtual void instanceInit(int sample_rate) {
		instanceConstants(sample_rate);
		instanceResetUserInterface();
		instanceClear();
	}
	
	virtual mydsp* clone() {
		return new mydsp();
	}
	
	virtual int getSampleRate() {
		return fSampleRate;
	}
	
	virtual void buildUserInterface(UI* ui_interface) {
		ui_interface->openVerticalBox("BASIS_seq.0.tmp");
		ui_interface->openVerticalBox("Noise");
		ui_interface->addVerticalSlider("volume", &fVslider0, 0.0f, 0.0f, 1.0f, 0.00999999978f);
		ui_interface->closeBox();
		ui_interface->openHorizontalBox("SINUS");
		ui_interface->declare(0, "10", "");
		ui_interface->openVerticalBox("BL0");
		ui_interface->declare(&fEntry4, "0", "");
		ui_interface->declare(&fEntry4, "style", "knob");
		ui_interface->addNumEntry("duty", &fEntry4, 0.5f, 0.00100000005f, 0.999000013f, 0.00100000005f);
		ui_interface->declare(&fEntry3, "0", "");
		ui_interface->declare(&fEntry3, "style", "knob");
		ui_interface->addNumEntry("freq", &fEntry3, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fVslider1, "1", "");
		ui_interface->addVerticalSlider("gain", &fVslider1, 0.0f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry5, "2", "");
		ui_interface->declare(&fEntry5, "style", "knob");
		ui_interface->addNumEntry("attack", &fEntry5, 0.5f, 0.00100000005f, 5.0f, 0.00100000005f);
		ui_interface->declare(&fVslider2, "3", "");
		ui_interface->addVerticalSlider("cutoff", &fVslider2, 500.0f, 60.0f, 3000.0f, 1.0f);
		ui_interface->declare(&fEntry6, "3", "");
		ui_interface->declare(&fEntry6, "style", "knob");
		ui_interface->addNumEntry("rel", &fEntry6, 0.5f, 0.00999999978f, 5.0f, 0.00999999978f);
		ui_interface->declare(&fEntry2, "4", "");
		ui_interface->declare(&fEntry2, "style", "knob");
		ui_interface->addNumEntry("dur", &fEntry2, 0.0f, 0.0f, 3.0f, 0.100000001f);
		ui_interface->declare(&fEntry0, "5", "");
		ui_interface->declare(&fEntry0, "style", "knob");
		ui_interface->addNumEntry("fb", &fEntry0, 0.0f, 0.0f, 1.0f, 0.100000001f);
		ui_interface->declare(&fEntry1, "6", "");
		ui_interface->declare(&fEntry1, "style", "knob");
		ui_interface->addNumEntry("maxDur", &fEntry1, 0.0f, 0.0f, 3.0f, 0.100000001f);
		ui_interface->addButton("play", &fButton0);
		ui_interface->closeBox();
		ui_interface->declare(0, "11", "");
		ui_interface->openVerticalBox("BL1");
		ui_interface->declare(&fEntry11, "0", "");
		ui_interface->declare(&fEntry11, "style", "knob");
		ui_interface->addNumEntry("duty", &fEntry11, 0.5f, 0.00100000005f, 0.999000013f, 0.00100000005f);
		ui_interface->declare(&fEntry10, "0", "");
		ui_interface->declare(&fEntry10, "style", "knob");
		ui_interface->addNumEntry("freq", &fEntry10, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fVslider3, "1", "");
		ui_interface->addVerticalSlider("gain", &fVslider3, 0.0f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry12, "2", "");
		ui_interface->declare(&fEntry12, "style", "knob");
		ui_interface->addNumEntry("attack", &fEntry12, 0.5f, 0.00100000005f, 5.0f, 0.00100000005f);
		ui_interface->declare(&fVslider4, "3", "");
		ui_interface->addVerticalSlider("cutoff", &fVslider4, 500.0f, 60.0f, 3000.0f, 1.0f);
		ui_interface->declare(&fEntry13, "3", "");
		ui_interface->declare(&fEntry13, "style", "knob");
		ui_interface->addNumEntry("rel", &fEntry13, 0.5f, 0.00999999978f, 5.0f, 0.00999999978f);
		ui_interface->declare(&fEntry9, "4", "");
		ui_interface->declare(&fEntry9, "style", "knob");
		ui_interface->addNumEntry("dur", &fEntry9, 0.0f, 0.0f, 3.0f, 0.100000001f);
		ui_interface->declare(&fEntry7, "5", "");
		ui_interface->declare(&fEntry7, "style", "knob");
		ui_interface->addNumEntry("fb", &fEntry7, 0.0f, 0.0f, 1.0f, 0.100000001f);
		ui_interface->declare(&fEntry8, "6", "");
		ui_interface->declare(&fEntry8, "style", "knob");
		ui_interface->addNumEntry("maxDur", &fEntry8, 0.0f, 0.0f, 3.0f, 0.100000001f);
		ui_interface->addButton("play", &fButton1);
		ui_interface->closeBox();
		ui_interface->declare(0, "12", "");
		ui_interface->openVerticalBox("BL2");
		ui_interface->declare(&fEntry18, "0", "");
		ui_interface->declare(&fEntry18, "style", "knob");
		ui_interface->addNumEntry("duty", &fEntry18, 0.5f, 0.00100000005f, 0.999000013f, 0.00100000005f);
		ui_interface->declare(&fEntry17, "0", "");
		ui_interface->declare(&fEntry17, "style", "knob");
		ui_interface->addNumEntry("freq", &fEntry17, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fVslider5, "1", "");
		ui_interface->addVerticalSlider("gain", &fVslider5, 0.0f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry19, "2", "");
		ui_interface->declare(&fEntry19, "style", "knob");
		ui_interface->addNumEntry("attack", &fEntry19, 0.5f, 0.00100000005f, 5.0f, 0.00100000005f);
		ui_interface->declare(&fVslider6, "3", "");
		ui_interface->addVerticalSlider("cutoff", &fVslider6, 500.0f, 60.0f, 3000.0f, 1.0f);
		ui_interface->declare(&fEntry20, "3", "");
		ui_interface->declare(&fEntry20, "style", "knob");
		ui_interface->addNumEntry("rel", &fEntry20, 0.5f, 0.00999999978f, 5.0f, 0.00999999978f);
		ui_interface->declare(&fEntry16, "4", "");
		ui_interface->declare(&fEntry16, "style", "knob");
		ui_interface->addNumEntry("dur", &fEntry16, 0.0f, 0.0f, 3.0f, 0.100000001f);
		ui_interface->declare(&fEntry14, "5", "");
		ui_interface->declare(&fEntry14, "style", "knob");
		ui_interface->addNumEntry("fb", &fEntry14, 0.0f, 0.0f, 1.0f, 0.100000001f);
		ui_interface->declare(&fEntry15, "6", "");
		ui_interface->declare(&fEntry15, "style", "knob");
		ui_interface->addNumEntry("maxDur", &fEntry15, 0.0f, 0.0f, 3.0f, 0.100000001f);
		ui_interface->addButton("play", &fButton2);
		ui_interface->closeBox();
		ui_interface->declare(0, "13", "");
		ui_interface->openVerticalBox("BL3");
		ui_interface->declare(&fEntry25, "0", "");
		ui_interface->declare(&fEntry25, "style", "knob");
		ui_interface->addNumEntry("duty", &fEntry25, 0.5f, 0.00100000005f, 0.999000013f, 0.00100000005f);
		ui_interface->declare(&fEntry24, "0", "");
		ui_interface->declare(&fEntry24, "style", "knob");
		ui_interface->addNumEntry("freq", &fEntry24, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fVslider7, "1", "");
		ui_interface->addVerticalSlider("gain", &fVslider7, 0.0f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry26, "2", "");
		ui_interface->declare(&fEntry26, "style", "knob");
		ui_interface->addNumEntry("attack", &fEntry26, 0.5f, 0.00100000005f, 5.0f, 0.00100000005f);
		ui_interface->declare(&fVslider8, "3", "");
		ui_interface->addVerticalSlider("cutoff", &fVslider8, 500.0f, 60.0f, 3000.0f, 1.0f);
		ui_interface->declare(&fEntry27, "3", "");
		ui_interface->declare(&fEntry27, "style", "knob");
		ui_interface->addNumEntry("rel", &fEntry27, 0.5f, 0.00999999978f, 5.0f, 0.00999999978f);
		ui_interface->declare(&fEntry23, "4", "");
		ui_interface->declare(&fEntry23, "style", "knob");
		ui_interface->addNumEntry("dur", &fEntry23, 0.0f, 0.0f, 3.0f, 0.100000001f);
		ui_interface->declare(&fEntry21, "5", "");
		ui_interface->declare(&fEntry21, "style", "knob");
		ui_interface->addNumEntry("fb", &fEntry21, 0.0f, 0.0f, 1.0f, 0.100000001f);
		ui_interface->declare(&fEntry22, "6", "");
		ui_interface->declare(&fEntry22, "style", "knob");
		ui_interface->addNumEntry("maxDur", &fEntry22, 0.0f, 0.0f, 3.0f, 0.100000001f);
		ui_interface->addButton("play", &fButton3);
		ui_interface->closeBox();
		ui_interface->declare(0, "14", "");
		ui_interface->openVerticalBox("BL4");
		ui_interface->declare(&fEntry32, "0", "");
		ui_interface->declare(&fEntry32, "style", "knob");
		ui_interface->addNumEntry("duty", &fEntry32, 0.5f, 0.00100000005f, 0.999000013f, 0.00100000005f);
		ui_interface->declare(&fEntry31, "0", "");
		ui_interface->declare(&fEntry31, "style", "knob");
		ui_interface->addNumEntry("freq", &fEntry31, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fVslider9, "1", "");
		ui_interface->addVerticalSlider("gain", &fVslider9, 0.0f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry33, "2", "");
		ui_interface->declare(&fEntry33, "style", "knob");
		ui_interface->addNumEntry("attack", &fEntry33, 0.5f, 0.00100000005f, 5.0f, 0.00100000005f);
		ui_interface->declare(&fVslider10, "3", "");
		ui_interface->addVerticalSlider("cutoff", &fVslider10, 500.0f, 60.0f, 3000.0f, 1.0f);
		ui_interface->declare(&fEntry34, "3", "");
		ui_interface->declare(&fEntry34, "style", "knob");
		ui_interface->addNumEntry("rel", &fEntry34, 0.5f, 0.00999999978f, 5.0f, 0.00999999978f);
		ui_interface->declare(&fEntry30, "4", "");
		ui_interface->declare(&fEntry30, "style", "knob");
		ui_interface->addNumEntry("dur", &fEntry30, 0.0f, 0.0f, 3.0f, 0.100000001f);
		ui_interface->declare(&fEntry28, "5", "");
		ui_interface->declare(&fEntry28, "style", "knob");
		ui_interface->addNumEntry("fb", &fEntry28, 0.0f, 0.0f, 1.0f, 0.100000001f);
		ui_interface->declare(&fEntry29, "6", "");
		ui_interface->declare(&fEntry29, "style", "knob");
		ui_interface->addNumEntry("maxDur", &fEntry29, 0.0f, 0.0f, 3.0f, 0.100000001f);
		ui_interface->addButton("play", &fButton4);
		ui_interface->closeBox();
		ui_interface->declare(0, "15", "");
		ui_interface->openVerticalBox("BL5");
		ui_interface->declare(&fEntry39, "0", "");
		ui_interface->declare(&fEntry39, "style", "knob");
		ui_interface->addNumEntry("duty", &fEntry39, 0.5f, 0.00100000005f, 0.999000013f, 0.00100000005f);
		ui_interface->declare(&fEntry38, "0", "");
		ui_interface->declare(&fEntry38, "style", "knob");
		ui_interface->addNumEntry("freq", &fEntry38, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fVslider11, "1", "");
		ui_interface->addVerticalSlider("gain", &fVslider11, 0.0f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry40, "2", "");
		ui_interface->declare(&fEntry40, "style", "knob");
		ui_interface->addNumEntry("attack", &fEntry40, 0.5f, 0.00100000005f, 5.0f, 0.00100000005f);
		ui_interface->declare(&fVslider12, "3", "");
		ui_interface->addVerticalSlider("cutoff", &fVslider12, 500.0f, 60.0f, 3000.0f, 1.0f);
		ui_interface->declare(&fEntry41, "3", "");
		ui_interface->declare(&fEntry41, "style", "knob");
		ui_interface->addNumEntry("rel", &fEntry41, 0.5f, 0.00999999978f, 5.0f, 0.00999999978f);
		ui_interface->declare(&fEntry37, "4", "");
		ui_interface->declare(&fEntry37, "style", "knob");
		ui_interface->addNumEntry("dur", &fEntry37, 0.0f, 0.0f, 3.0f, 0.100000001f);
		ui_interface->declare(&fEntry35, "5", "");
		ui_interface->declare(&fEntry35, "style", "knob");
		ui_interface->addNumEntry("fb", &fEntry35, 0.0f, 0.0f, 1.0f, 0.100000001f);
		ui_interface->declare(&fEntry36, "6", "");
		ui_interface->declare(&fEntry36, "style", "knob");
		ui_interface->addNumEntry("maxDur", &fEntry36, 0.0f, 0.0f, 3.0f, 0.100000001f);
		ui_interface->addButton("play", &fButton5);
		ui_interface->closeBox();
		ui_interface->declare(0, "16", "");
		ui_interface->openVerticalBox("BL6");
		ui_interface->declare(&fEntry46, "0", "");
		ui_interface->declare(&fEntry46, "style", "knob");
		ui_interface->addNumEntry("duty", &fEntry46, 0.5f, 0.00100000005f, 0.999000013f, 0.00100000005f);
		ui_interface->declare(&fEntry45, "0", "");
		ui_interface->declare(&fEntry45, "style", "knob");
		ui_interface->addNumEntry("freq", &fEntry45, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fVslider13, "1", "");
		ui_interface->addVerticalSlider("gain", &fVslider13, 0.0f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry47, "2", "");
		ui_interface->declare(&fEntry47, "style", "knob");
		ui_interface->addNumEntry("attack", &fEntry47, 0.5f, 0.00100000005f, 5.0f, 0.00100000005f);
		ui_interface->declare(&fVslider14, "3", "");
		ui_interface->addVerticalSlider("cutoff", &fVslider14, 500.0f, 60.0f, 3000.0f, 1.0f);
		ui_interface->declare(&fEntry48, "3", "");
		ui_interface->declare(&fEntry48, "style", "knob");
		ui_interface->addNumEntry("rel", &fEntry48, 0.5f, 0.00999999978f, 5.0f, 0.00999999978f);
		ui_interface->declare(&fEntry44, "4", "");
		ui_interface->declare(&fEntry44, "style", "knob");
		ui_interface->addNumEntry("dur", &fEntry44, 0.0f, 0.0f, 3.0f, 0.100000001f);
		ui_interface->declare(&fEntry42, "5", "");
		ui_interface->declare(&fEntry42, "style", "knob");
		ui_interface->addNumEntry("fb", &fEntry42, 0.0f, 0.0f, 1.0f, 0.100000001f);
		ui_interface->declare(&fEntry43, "6", "");
		ui_interface->declare(&fEntry43, "style", "knob");
		ui_interface->addNumEntry("maxDur", &fEntry43, 0.0f, 0.0f, 3.0f, 0.100000001f);
		ui_interface->addButton("play", &fButton6);
		ui_interface->closeBox();
		ui_interface->declare(0, "17", "");
		ui_interface->openVerticalBox("BL7");
		ui_interface->declare(&fEntry53, "0", "");
		ui_interface->declare(&fEntry53, "style", "knob");
		ui_interface->addNumEntry("duty", &fEntry53, 0.5f, 0.00100000005f, 0.999000013f, 0.00100000005f);
		ui_interface->declare(&fEntry52, "0", "");
		ui_interface->declare(&fEntry52, "style", "knob");
		ui_interface->addNumEntry("freq", &fEntry52, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fVslider15, "1", "");
		ui_interface->addVerticalSlider("gain", &fVslider15, 0.0f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry54, "2", "");
		ui_interface->declare(&fEntry54, "style", "knob");
		ui_interface->addNumEntry("attack", &fEntry54, 0.5f, 0.00100000005f, 5.0f, 0.00100000005f);
		ui_interface->declare(&fVslider16, "3", "");
		ui_interface->addVerticalSlider("cutoff", &fVslider16, 500.0f, 60.0f, 3000.0f, 1.0f);
		ui_interface->declare(&fEntry55, "3", "");
		ui_interface->declare(&fEntry55, "style", "knob");
		ui_interface->addNumEntry("rel", &fEntry55, 0.5f, 0.00999999978f, 5.0f, 0.00999999978f);
		ui_interface->declare(&fEntry51, "4", "");
		ui_interface->declare(&fEntry51, "style", "knob");
		ui_interface->addNumEntry("dur", &fEntry51, 0.0f, 0.0f, 3.0f, 0.100000001f);
		ui_interface->declare(&fEntry49, "5", "");
		ui_interface->declare(&fEntry49, "style", "knob");
		ui_interface->addNumEntry("fb", &fEntry49, 0.0f, 0.0f, 1.0f, 0.100000001f);
		ui_interface->declare(&fEntry50, "6", "");
		ui_interface->declare(&fEntry50, "style", "knob");
		ui_interface->addNumEntry("maxDur", &fEntry50, 0.0f, 0.0f, 3.0f, 0.100000001f);
		ui_interface->addButton("play", &fButton7);
		ui_interface->closeBox();
		ui_interface->declare(0, "18", "");
		ui_interface->openVerticalBox("BL8");
		ui_interface->declare(&fEntry60, "0", "");
		ui_interface->declare(&fEntry60, "style", "knob");
		ui_interface->addNumEntry("duty", &fEntry60, 0.5f, 0.00100000005f, 0.999000013f, 0.00100000005f);
		ui_interface->declare(&fEntry59, "0", "");
		ui_interface->declare(&fEntry59, "style", "knob");
		ui_interface->addNumEntry("freq", &fEntry59, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fVslider17, "1", "");
		ui_interface->addVerticalSlider("gain", &fVslider17, 0.0f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry61, "2", "");
		ui_interface->declare(&fEntry61, "style", "knob");
		ui_interface->addNumEntry("attack", &fEntry61, 0.5f, 0.00100000005f, 5.0f, 0.00100000005f);
		ui_interface->declare(&fVslider18, "3", "");
		ui_interface->addVerticalSlider("cutoff", &fVslider18, 500.0f, 60.0f, 3000.0f, 1.0f);
		ui_interface->declare(&fEntry62, "3", "");
		ui_interface->declare(&fEntry62, "style", "knob");
		ui_interface->addNumEntry("rel", &fEntry62, 0.5f, 0.00999999978f, 5.0f, 0.00999999978f);
		ui_interface->declare(&fEntry58, "4", "");
		ui_interface->declare(&fEntry58, "style", "knob");
		ui_interface->addNumEntry("dur", &fEntry58, 0.0f, 0.0f, 3.0f, 0.100000001f);
		ui_interface->declare(&fEntry56, "5", "");
		ui_interface->declare(&fEntry56, "style", "knob");
		ui_interface->addNumEntry("fb", &fEntry56, 0.0f, 0.0f, 1.0f, 0.100000001f);
		ui_interface->declare(&fEntry57, "6", "");
		ui_interface->declare(&fEntry57, "style", "knob");
		ui_interface->addNumEntry("maxDur", &fEntry57, 0.0f, 0.0f, 3.0f, 0.100000001f);
		ui_interface->addButton("play", &fButton8);
		ui_interface->closeBox();
		ui_interface->declare(0, "19", "");
		ui_interface->openVerticalBox("BL9");
		ui_interface->declare(&fEntry67, "0", "");
		ui_interface->declare(&fEntry67, "style", "knob");
		ui_interface->addNumEntry("duty", &fEntry67, 0.5f, 0.00100000005f, 0.999000013f, 0.00100000005f);
		ui_interface->declare(&fEntry66, "0", "");
		ui_interface->declare(&fEntry66, "style", "knob");
		ui_interface->addNumEntry("freq", &fEntry66, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fVslider19, "1", "");
		ui_interface->addVerticalSlider("gain", &fVslider19, 0.0f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry68, "2", "");
		ui_interface->declare(&fEntry68, "style", "knob");
		ui_interface->addNumEntry("attack", &fEntry68, 0.5f, 0.00100000005f, 5.0f, 0.00100000005f);
		ui_interface->declare(&fVslider20, "3", "");
		ui_interface->addVerticalSlider("cutoff", &fVslider20, 500.0f, 60.0f, 3000.0f, 1.0f);
		ui_interface->declare(&fEntry69, "3", "");
		ui_interface->declare(&fEntry69, "style", "knob");
		ui_interface->addNumEntry("rel", &fEntry69, 0.5f, 0.00999999978f, 5.0f, 0.00999999978f);
		ui_interface->declare(&fEntry65, "4", "");
		ui_interface->declare(&fEntry65, "style", "knob");
		ui_interface->addNumEntry("dur", &fEntry65, 0.0f, 0.0f, 3.0f, 0.100000001f);
		ui_interface->declare(&fEntry63, "5", "");
		ui_interface->declare(&fEntry63, "style", "knob");
		ui_interface->addNumEntry("fb", &fEntry63, 0.0f, 0.0f, 1.0f, 0.100000001f);
		ui_interface->declare(&fEntry64, "6", "");
		ui_interface->declare(&fEntry64, "style", "knob");
		ui_interface->addNumEntry("maxDur", &fEntry64, 0.0f, 0.0f, 3.0f, 0.100000001f);
		ui_interface->addButton("play", &fButton9);
		ui_interface->closeBox();
		ui_interface->declare(0, "20", "");
		ui_interface->openVerticalBox("BL10");
		ui_interface->declare(&fEntry74, "0", "");
		ui_interface->declare(&fEntry74, "style", "knob");
		ui_interface->addNumEntry("duty", &fEntry74, 0.5f, 0.00100000005f, 0.999000013f, 0.00100000005f);
		ui_interface->declare(&fEntry73, "0", "");
		ui_interface->declare(&fEntry73, "style", "knob");
		ui_interface->addNumEntry("freq", &fEntry73, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fVslider21, "1", "");
		ui_interface->addVerticalSlider("gain", &fVslider21, 0.0f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry75, "2", "");
		ui_interface->declare(&fEntry75, "style", "knob");
		ui_interface->addNumEntry("attack", &fEntry75, 0.5f, 0.00100000005f, 5.0f, 0.00100000005f);
		ui_interface->declare(&fVslider22, "3", "");
		ui_interface->addVerticalSlider("cutoff", &fVslider22, 500.0f, 60.0f, 3000.0f, 1.0f);
		ui_interface->declare(&fEntry76, "3", "");
		ui_interface->declare(&fEntry76, "style", "knob");
		ui_interface->addNumEntry("rel", &fEntry76, 0.5f, 0.00999999978f, 5.0f, 0.00999999978f);
		ui_interface->declare(&fEntry72, "4", "");
		ui_interface->declare(&fEntry72, "style", "knob");
		ui_interface->addNumEntry("dur", &fEntry72, 0.0f, 0.0f, 3.0f, 0.100000001f);
		ui_interface->declare(&fEntry70, "5", "");
		ui_interface->declare(&fEntry70, "style", "knob");
		ui_interface->addNumEntry("fb", &fEntry70, 0.0f, 0.0f, 1.0f, 0.100000001f);
		ui_interface->declare(&fEntry71, "6", "");
		ui_interface->declare(&fEntry71, "style", "knob");
		ui_interface->addNumEntry("maxDur", &fEntry71, 0.0f, 0.0f, 3.0f, 0.100000001f);
		ui_interface->addButton("play", &fButton10);
		ui_interface->closeBox();
		ui_interface->declare(0, "21", "");
		ui_interface->openVerticalBox("BL11");
		ui_interface->declare(&fEntry81, "0", "");
		ui_interface->declare(&fEntry81, "style", "knob");
		ui_interface->addNumEntry("duty", &fEntry81, 0.5f, 0.00100000005f, 0.999000013f, 0.00100000005f);
		ui_interface->declare(&fEntry80, "0", "");
		ui_interface->declare(&fEntry80, "style", "knob");
		ui_interface->addNumEntry("freq", &fEntry80, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fVslider23, "1", "");
		ui_interface->addVerticalSlider("gain", &fVslider23, 0.0f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry82, "2", "");
		ui_interface->declare(&fEntry82, "style", "knob");
		ui_interface->addNumEntry("attack", &fEntry82, 0.5f, 0.00100000005f, 5.0f, 0.00100000005f);
		ui_interface->declare(&fVslider24, "3", "");
		ui_interface->addVerticalSlider("cutoff", &fVslider24, 500.0f, 60.0f, 3000.0f, 1.0f);
		ui_interface->declare(&fEntry83, "3", "");
		ui_interface->declare(&fEntry83, "style", "knob");
		ui_interface->addNumEntry("rel", &fEntry83, 0.5f, 0.00999999978f, 5.0f, 0.00999999978f);
		ui_interface->declare(&fEntry79, "4", "");
		ui_interface->declare(&fEntry79, "style", "knob");
		ui_interface->addNumEntry("dur", &fEntry79, 0.0f, 0.0f, 3.0f, 0.100000001f);
		ui_interface->declare(&fEntry77, "5", "");
		ui_interface->declare(&fEntry77, "style", "knob");
		ui_interface->addNumEntry("fb", &fEntry77, 0.0f, 0.0f, 1.0f, 0.100000001f);
		ui_interface->declare(&fEntry78, "6", "");
		ui_interface->declare(&fEntry78, "style", "knob");
		ui_interface->addNumEntry("maxDur", &fEntry78, 0.0f, 0.0f, 3.0f, 0.100000001f);
		ui_interface->addButton("play", &fButton11);
		ui_interface->closeBox();
		ui_interface->declare(0, "22", "");
		ui_interface->openVerticalBox("BL12");
		ui_interface->declare(&fEntry88, "0", "");
		ui_interface->declare(&fEntry88, "style", "knob");
		ui_interface->addNumEntry("duty", &fEntry88, 0.5f, 0.00100000005f, 0.999000013f, 0.00100000005f);
		ui_interface->declare(&fEntry87, "0", "");
		ui_interface->declare(&fEntry87, "style", "knob");
		ui_interface->addNumEntry("freq", &fEntry87, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fVslider25, "1", "");
		ui_interface->addVerticalSlider("gain", &fVslider25, 0.0f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry89, "2", "");
		ui_interface->declare(&fEntry89, "style", "knob");
		ui_interface->addNumEntry("attack", &fEntry89, 0.5f, 0.00100000005f, 5.0f, 0.00100000005f);
		ui_interface->declare(&fVslider26, "3", "");
		ui_interface->addVerticalSlider("cutoff", &fVslider26, 500.0f, 60.0f, 3000.0f, 1.0f);
		ui_interface->declare(&fEntry90, "3", "");
		ui_interface->declare(&fEntry90, "style", "knob");
		ui_interface->addNumEntry("rel", &fEntry90, 0.5f, 0.00999999978f, 5.0f, 0.00999999978f);
		ui_interface->declare(&fEntry86, "4", "");
		ui_interface->declare(&fEntry86, "style", "knob");
		ui_interface->addNumEntry("dur", &fEntry86, 0.0f, 0.0f, 3.0f, 0.100000001f);
		ui_interface->declare(&fEntry84, "5", "");
		ui_interface->declare(&fEntry84, "style", "knob");
		ui_interface->addNumEntry("fb", &fEntry84, 0.0f, 0.0f, 1.0f, 0.100000001f);
		ui_interface->declare(&fEntry85, "6", "");
		ui_interface->declare(&fEntry85, "style", "knob");
		ui_interface->addNumEntry("maxDur", &fEntry85, 0.0f, 0.0f, 3.0f, 0.100000001f);
		ui_interface->addButton("play", &fButton12);
		ui_interface->closeBox();
		ui_interface->declare(0, "23", "");
		ui_interface->openVerticalBox("BL13");
		ui_interface->declare(&fEntry95, "0", "");
		ui_interface->declare(&fEntry95, "style", "knob");
		ui_interface->addNumEntry("duty", &fEntry95, 0.5f, 0.00100000005f, 0.999000013f, 0.00100000005f);
		ui_interface->declare(&fEntry94, "0", "");
		ui_interface->declare(&fEntry94, "style", "knob");
		ui_interface->addNumEntry("freq", &fEntry94, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fVslider27, "1", "");
		ui_interface->addVerticalSlider("gain", &fVslider27, 0.0f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry96, "2", "");
		ui_interface->declare(&fEntry96, "style", "knob");
		ui_interface->addNumEntry("attack", &fEntry96, 0.5f, 0.00100000005f, 5.0f, 0.00100000005f);
		ui_interface->declare(&fVslider28, "3", "");
		ui_interface->addVerticalSlider("cutoff", &fVslider28, 500.0f, 60.0f, 3000.0f, 1.0f);
		ui_interface->declare(&fEntry97, "3", "");
		ui_interface->declare(&fEntry97, "style", "knob");
		ui_interface->addNumEntry("rel", &fEntry97, 0.5f, 0.00999999978f, 5.0f, 0.00999999978f);
		ui_interface->declare(&fEntry93, "4", "");
		ui_interface->declare(&fEntry93, "style", "knob");
		ui_interface->addNumEntry("dur", &fEntry93, 0.0f, 0.0f, 3.0f, 0.100000001f);
		ui_interface->declare(&fEntry91, "5", "");
		ui_interface->declare(&fEntry91, "style", "knob");
		ui_interface->addNumEntry("fb", &fEntry91, 0.0f, 0.0f, 1.0f, 0.100000001f);
		ui_interface->declare(&fEntry92, "6", "");
		ui_interface->declare(&fEntry92, "style", "knob");
		ui_interface->addNumEntry("maxDur", &fEntry92, 0.0f, 0.0f, 3.0f, 0.100000001f);
		ui_interface->addButton("play", &fButton13);
		ui_interface->closeBox();
		ui_interface->declare(0, "24", "");
		ui_interface->openVerticalBox("BL14");
		ui_interface->declare(&fEntry102, "0", "");
		ui_interface->declare(&fEntry102, "style", "knob");
		ui_interface->addNumEntry("duty", &fEntry102, 0.5f, 0.00100000005f, 0.999000013f, 0.00100000005f);
		ui_interface->declare(&fEntry101, "0", "");
		ui_interface->declare(&fEntry101, "style", "knob");
		ui_interface->addNumEntry("freq", &fEntry101, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fVslider29, "1", "");
		ui_interface->addVerticalSlider("gain", &fVslider29, 0.0f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry103, "2", "");
		ui_interface->declare(&fEntry103, "style", "knob");
		ui_interface->addNumEntry("attack", &fEntry103, 0.5f, 0.00100000005f, 5.0f, 0.00100000005f);
		ui_interface->declare(&fVslider30, "3", "");
		ui_interface->addVerticalSlider("cutoff", &fVslider30, 500.0f, 60.0f, 3000.0f, 1.0f);
		ui_interface->declare(&fEntry104, "3", "");
		ui_interface->declare(&fEntry104, "style", "knob");
		ui_interface->addNumEntry("rel", &fEntry104, 0.5f, 0.00999999978f, 5.0f, 0.00999999978f);
		ui_interface->declare(&fEntry100, "4", "");
		ui_interface->declare(&fEntry100, "style", "knob");
		ui_interface->addNumEntry("dur", &fEntry100, 0.0f, 0.0f, 3.0f, 0.100000001f);
		ui_interface->declare(&fEntry98, "5", "");
		ui_interface->declare(&fEntry98, "style", "knob");
		ui_interface->addNumEntry("fb", &fEntry98, 0.0f, 0.0f, 1.0f, 0.100000001f);
		ui_interface->declare(&fEntry99, "6", "");
		ui_interface->declare(&fEntry99, "style", "knob");
		ui_interface->addNumEntry("maxDur", &fEntry99, 0.0f, 0.0f, 3.0f, 0.100000001f);
		ui_interface->addButton("play", &fButton14);
		ui_interface->closeBox();
		ui_interface->declare(0, "25", "");
		ui_interface->openVerticalBox("BL15");
		ui_interface->declare(&fEntry109, "0", "");
		ui_interface->declare(&fEntry109, "style", "knob");
		ui_interface->addNumEntry("duty", &fEntry109, 0.5f, 0.00100000005f, 0.999000013f, 0.00100000005f);
		ui_interface->declare(&fEntry108, "0", "");
		ui_interface->declare(&fEntry108, "style", "knob");
		ui_interface->addNumEntry("freq", &fEntry108, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fVslider31, "1", "");
		ui_interface->addVerticalSlider("gain", &fVslider31, 0.0f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry110, "2", "");
		ui_interface->declare(&fEntry110, "style", "knob");
		ui_interface->addNumEntry("attack", &fEntry110, 0.5f, 0.00100000005f, 5.0f, 0.00100000005f);
		ui_interface->declare(&fVslider32, "3", "");
		ui_interface->addVerticalSlider("cutoff", &fVslider32, 500.0f, 60.0f, 3000.0f, 1.0f);
		ui_interface->declare(&fEntry111, "3", "");
		ui_interface->declare(&fEntry111, "style", "knob");
		ui_interface->addNumEntry("rel", &fEntry111, 0.5f, 0.00999999978f, 5.0f, 0.00999999978f);
		ui_interface->declare(&fEntry107, "4", "");
		ui_interface->declare(&fEntry107, "style", "knob");
		ui_interface->addNumEntry("dur", &fEntry107, 0.0f, 0.0f, 3.0f, 0.100000001f);
		ui_interface->declare(&fEntry105, "5", "");
		ui_interface->declare(&fEntry105, "style", "knob");
		ui_interface->addNumEntry("fb", &fEntry105, 0.0f, 0.0f, 1.0f, 0.100000001f);
		ui_interface->declare(&fEntry106, "6", "");
		ui_interface->declare(&fEntry106, "style", "knob");
		ui_interface->addNumEntry("maxDur", &fEntry106, 0.0f, 0.0f, 3.0f, 0.100000001f);
		ui_interface->addButton("play", &fButton15);
		ui_interface->closeBox();
		ui_interface->closeBox();
		ui_interface->closeBox();
	}
	
	virtual void compute(int count, FAUSTFLOAT** inputs, FAUSTFLOAT** outputs) {
		FAUSTFLOAT* output0 = outputs[0];
		FAUSTFLOAT* output1 = outputs[1];
		float fSlow0 = (0.200000003f * float(fVslider0));
		float fSlow1 = float(fEntry0);
		int iSlow2 = (int(std::min<float>((fConst0 * float(fEntry1)), std::max<float>(0.0f, (fConst0 * float(fEntry2))))) + 1);
		float fSlow3 = (0.00100000005f * std::sqrt(float(fVslider1)));
		float fSlow4 = (0.00100000005f * float(fEntry3));
		float fSlow5 = (0.00100000005f * float(fEntry4));
		float fSlow6 = (0.00100000005f * float(fVslider2));
		float fSlow7 = std::max<float>(1.0f, (fConst0 * float(fEntry5)));
		float fSlow8 = (1.0f / fSlow7);
		float fSlow9 = float(fButton0);
		float fSlow10 = (1.0f / std::max<float>(1.0f, (fConst0 * float(fEntry6))));
		float fSlow11 = float(fEntry7);
		int iSlow12 = (int(std::min<float>((fConst0 * float(fEntry8)), std::max<float>(0.0f, (fConst0 * float(fEntry9))))) + 1);
		float fSlow13 = (0.00100000005f * std::sqrt(float(fVslider3)));
		float fSlow14 = (0.00100000005f * float(fEntry10));
		float fSlow15 = (0.00100000005f * float(fEntry11));
		float fSlow16 = (0.00100000005f * float(fVslider4));
		float fSlow17 = std::max<float>(1.0f, (fConst0 * float(fEntry12)));
		float fSlow18 = (1.0f / fSlow17);
		float fSlow19 = float(fButton1);
		float fSlow20 = (1.0f / std::max<float>(1.0f, (fConst0 * float(fEntry13))));
		float fSlow21 = float(fEntry14);
		int iSlow22 = (int(std::min<float>((fConst0 * float(fEntry15)), std::max<float>(0.0f, (fConst0 * float(fEntry16))))) + 1);
		float fSlow23 = (0.00100000005f * std::sqrt(float(fVslider5)));
		float fSlow24 = (0.00100000005f * float(fEntry17));
		float fSlow25 = (0.00100000005f * float(fEntry18));
		float fSlow26 = (0.00100000005f * float(fVslider6));
		float fSlow27 = std::max<float>(1.0f, (fConst0 * float(fEntry19)));
		float fSlow28 = (1.0f / fSlow27);
		float fSlow29 = float(fButton2);
		float fSlow30 = (1.0f / std::max<float>(1.0f, (fConst0 * float(fEntry20))));
		float fSlow31 = float(fEntry21);
		int iSlow32 = (int(std::min<float>((fConst0 * float(fEntry22)), std::max<float>(0.0f, (fConst0 * float(fEntry23))))) + 1);
		float fSlow33 = (0.00100000005f * std::sqrt(float(fVslider7)));
		float fSlow34 = (0.00100000005f * float(fEntry24));
		float fSlow35 = (0.00100000005f * float(fEntry25));
		float fSlow36 = (0.00100000005f * float(fVslider8));
		float fSlow37 = std::max<float>(1.0f, (fConst0 * float(fEntry26)));
		float fSlow38 = (1.0f / fSlow37);
		float fSlow39 = float(fButton3);
		float fSlow40 = (1.0f / std::max<float>(1.0f, (fConst0 * float(fEntry27))));
		float fSlow41 = float(fEntry28);
		int iSlow42 = (int(std::min<float>((fConst0 * float(fEntry29)), std::max<float>(0.0f, (fConst0 * float(fEntry30))))) + 1);
		float fSlow43 = (0.00100000005f * std::sqrt(float(fVslider9)));
		float fSlow44 = (0.00100000005f * float(fEntry31));
		float fSlow45 = (0.00100000005f * float(fEntry32));
		float fSlow46 = (0.00100000005f * float(fVslider10));
		float fSlow47 = std::max<float>(1.0f, (fConst0 * float(fEntry33)));
		float fSlow48 = (1.0f / fSlow47);
		float fSlow49 = float(fButton4);
		float fSlow50 = (1.0f / std::max<float>(1.0f, (fConst0 * float(fEntry34))));
		float fSlow51 = float(fEntry35);
		int iSlow52 = (int(std::min<float>((fConst0 * float(fEntry36)), std::max<float>(0.0f, (fConst0 * float(fEntry37))))) + 1);
		float fSlow53 = (0.00100000005f * std::sqrt(float(fVslider11)));
		float fSlow54 = (0.00100000005f * float(fEntry38));
		float fSlow55 = (0.00100000005f * float(fEntry39));
		float fSlow56 = (0.00100000005f * float(fVslider12));
		float fSlow57 = std::max<float>(1.0f, (fConst0 * float(fEntry40)));
		float fSlow58 = (1.0f / fSlow57);
		float fSlow59 = float(fButton5);
		float fSlow60 = (1.0f / std::max<float>(1.0f, (fConst0 * float(fEntry41))));
		float fSlow61 = float(fEntry42);
		int iSlow62 = (int(std::min<float>((fConst0 * float(fEntry43)), std::max<float>(0.0f, (fConst0 * float(fEntry44))))) + 1);
		float fSlow63 = (0.00100000005f * std::sqrt(float(fVslider13)));
		float fSlow64 = (0.00100000005f * float(fEntry45));
		float fSlow65 = (0.00100000005f * float(fEntry46));
		float fSlow66 = (0.00100000005f * float(fVslider14));
		float fSlow67 = std::max<float>(1.0f, (fConst0 * float(fEntry47)));
		float fSlow68 = (1.0f / fSlow67);
		float fSlow69 = float(fButton6);
		float fSlow70 = (1.0f / std::max<float>(1.0f, (fConst0 * float(fEntry48))));
		float fSlow71 = float(fEntry49);
		int iSlow72 = (int(std::min<float>((fConst0 * float(fEntry50)), std::max<float>(0.0f, (fConst0 * float(fEntry51))))) + 1);
		float fSlow73 = (0.00100000005f * std::sqrt(float(fVslider15)));
		float fSlow74 = (0.00100000005f * float(fEntry52));
		float fSlow75 = (0.00100000005f * float(fEntry53));
		float fSlow76 = (0.00100000005f * float(fVslider16));
		float fSlow77 = std::max<float>(1.0f, (fConst0 * float(fEntry54)));
		float fSlow78 = (1.0f / fSlow77);
		float fSlow79 = float(fButton7);
		float fSlow80 = (1.0f / std::max<float>(1.0f, (fConst0 * float(fEntry55))));
		float fSlow81 = float(fEntry56);
		int iSlow82 = (int(std::min<float>((fConst0 * float(fEntry57)), std::max<float>(0.0f, (fConst0 * float(fEntry58))))) + 1);
		float fSlow83 = (0.00100000005f * std::sqrt(float(fVslider17)));
		float fSlow84 = (0.00100000005f * float(fEntry59));
		float fSlow85 = (0.00100000005f * float(fEntry60));
		float fSlow86 = (0.00100000005f * float(fVslider18));
		float fSlow87 = std::max<float>(1.0f, (fConst0 * float(fEntry61)));
		float fSlow88 = (1.0f / fSlow87);
		float fSlow89 = float(fButton8);
		float fSlow90 = (1.0f / std::max<float>(1.0f, (fConst0 * float(fEntry62))));
		float fSlow91 = float(fEntry63);
		int iSlow92 = (int(std::min<float>((fConst0 * float(fEntry64)), std::max<float>(0.0f, (fConst0 * float(fEntry65))))) + 1);
		float fSlow93 = (0.00100000005f * std::sqrt(float(fVslider19)));
		float fSlow94 = (0.00100000005f * float(fEntry66));
		float fSlow95 = (0.00100000005f * float(fEntry67));
		float fSlow96 = (0.00100000005f * float(fVslider20));
		float fSlow97 = std::max<float>(1.0f, (fConst0 * float(fEntry68)));
		float fSlow98 = (1.0f / fSlow97);
		float fSlow99 = float(fButton9);
		float fSlow100 = (1.0f / std::max<float>(1.0f, (fConst0 * float(fEntry69))));
		float fSlow101 = float(fEntry70);
		int iSlow102 = (int(std::min<float>((fConst0 * float(fEntry71)), std::max<float>(0.0f, (fConst0 * float(fEntry72))))) + 1);
		float fSlow103 = (0.00100000005f * std::sqrt(float(fVslider21)));
		float fSlow104 = (0.00100000005f * float(fEntry73));
		float fSlow105 = (0.00100000005f * float(fEntry74));
		float fSlow106 = (0.00100000005f * float(fVslider22));
		float fSlow107 = std::max<float>(1.0f, (fConst0 * float(fEntry75)));
		float fSlow108 = (1.0f / fSlow107);
		float fSlow109 = float(fButton10);
		float fSlow110 = (1.0f / std::max<float>(1.0f, (fConst0 * float(fEntry76))));
		float fSlow111 = float(fEntry77);
		int iSlow112 = (int(std::min<float>((fConst0 * float(fEntry78)), std::max<float>(0.0f, (fConst0 * float(fEntry79))))) + 1);
		float fSlow113 = (0.00100000005f * std::sqrt(float(fVslider23)));
		float fSlow114 = (0.00100000005f * float(fEntry80));
		float fSlow115 = (0.00100000005f * float(fEntry81));
		float fSlow116 = (0.00100000005f * float(fVslider24));
		float fSlow117 = std::max<float>(1.0f, (fConst0 * float(fEntry82)));
		float fSlow118 = (1.0f / fSlow117);
		float fSlow119 = float(fButton11);
		float fSlow120 = (1.0f / std::max<float>(1.0f, (fConst0 * float(fEntry83))));
		float fSlow121 = float(fEntry84);
		int iSlow122 = (int(std::min<float>((fConst0 * float(fEntry85)), std::max<float>(0.0f, (fConst0 * float(fEntry86))))) + 1);
		float fSlow123 = (0.00100000005f * std::sqrt(float(fVslider25)));
		float fSlow124 = (0.00100000005f * float(fEntry87));
		float fSlow125 = (0.00100000005f * float(fEntry88));
		float fSlow126 = (0.00100000005f * float(fVslider26));
		float fSlow127 = std::max<float>(1.0f, (fConst0 * float(fEntry89)));
		float fSlow128 = (1.0f / fSlow127);
		float fSlow129 = float(fButton12);
		float fSlow130 = (1.0f / std::max<float>(1.0f, (fConst0 * float(fEntry90))));
		float fSlow131 = float(fEntry91);
		int iSlow132 = (int(std::min<float>((fConst0 * float(fEntry92)), std::max<float>(0.0f, (fConst0 * float(fEntry93))))) + 1);
		float fSlow133 = (0.00100000005f * std::sqrt(float(fVslider27)));
		float fSlow134 = (0.00100000005f * float(fEntry94));
		float fSlow135 = (0.00100000005f * float(fEntry95));
		float fSlow136 = (0.00100000005f * float(fVslider28));
		float fSlow137 = std::max<float>(1.0f, (fConst0 * float(fEntry96)));
		float fSlow138 = (1.0f / fSlow137);
		float fSlow139 = float(fButton13);
		float fSlow140 = (1.0f / std::max<float>(1.0f, (fConst0 * float(fEntry97))));
		float fSlow141 = float(fEntry98);
		int iSlow142 = (int(std::min<float>((fConst0 * float(fEntry99)), std::max<float>(0.0f, (fConst0 * float(fEntry100))))) + 1);
		float fSlow143 = (0.00100000005f * std::sqrt(float(fVslider29)));
		float fSlow144 = (0.00100000005f * float(fEntry101));
		float fSlow145 = (0.00100000005f * float(fEntry102));
		float fSlow146 = (0.00100000005f * float(fVslider30));
		float fSlow147 = std::max<float>(1.0f, (fConst0 * float(fEntry103)));
		float fSlow148 = (1.0f / fSlow147);
		float fSlow149 = float(fButton14);
		float fSlow150 = (1.0f / std::max<float>(1.0f, (fConst0 * float(fEntry104))));
		float fSlow151 = float(fEntry105);
		int iSlow152 = (int(std::min<float>((fConst0 * float(fEntry106)), std::max<float>(0.0f, (fConst0 * float(fEntry107))))) + 1);
		float fSlow153 = (0.00100000005f * std::sqrt(float(fVslider31)));
		float fSlow154 = (0.00100000005f * float(fEntry108));
		float fSlow155 = (0.00100000005f * float(fEntry109));
		float fSlow156 = (0.00100000005f * float(fVslider32));
		float fSlow157 = std::max<float>(1.0f, (fConst0 * float(fEntry110)));
		float fSlow158 = (1.0f / fSlow157);
		float fSlow159 = float(fButton15);
		float fSlow160 = (1.0f / std::max<float>(1.0f, (fConst0 * float(fEntry111))));
		for (int i = 0; (i < count); i = (i + 1)) {
			iVec0[0] = 1;
			fRec1[0] = (fSlow3 + (0.999000013f * fRec1[1]));
			float fTemp0 = float(iVec0[1]);
			fRec6[0] = (fSlow4 + (0.999000013f * fRec6[1]));
			float fTemp1 = std::max<float>(fRec6[0], 23.4489498f);
			float fTemp2 = std::max<float>(20.0f, std::fabs(fTemp1));
			fVec1[0] = fTemp2;
			float fTemp3 = (fRec5[1] + (fConst2 * fVec1[1]));
			fRec5[0] = (fTemp3 - std::floor(fTemp3));
			float fTemp4 = mydsp_faustpower2_f(((2.0f * fRec5[0]) + -1.0f));
			fVec2[0] = fTemp4;
			float fTemp5 = ((fTemp0 * (fTemp4 - fVec2[1])) / fTemp2);
			fVec3[(IOTA & 4095)] = fTemp5;
			fRec7[0] = (fSlow5 + (0.999000013f * fRec7[1]));
			float fTemp6 = std::max<float>(0.0f, std::min<float>(2047.0f, (fConst0 * (fRec7[0] / fTemp1))));
			int iTemp7 = int(fTemp6);
			float fTemp8 = std::floor(fTemp6);
			fRec8[0] = (fSlow6 + (0.999000013f * fRec8[1]));
			float fTemp9 = std::tan((fConst3 * fRec8[0]));
			float fTemp10 = (1.0f / fTemp9);
			float fTemp11 = (1.0f - (1.0f / mydsp_faustpower2_f(fTemp9)));
			float fTemp12 = (((fTemp10 + 1.93185163f) / fTemp9) + 1.0f);
			fRec4[0] = ((fConst1 * ((fTemp5 - (fVec3[((IOTA - iTemp7) & 4095)] * (fTemp8 + (1.0f - fTemp6)))) - ((fTemp6 - fTemp8) * fVec3[((IOTA - (iTemp7 + 1)) & 4095)]))) - (((fRec4[2] * (((fTemp10 + -1.93185163f) / fTemp9) + 1.0f)) + (2.0f * (fRec4[1] * fTemp11))) / fTemp12));
			float fTemp13 = (((fTemp10 + 1.41421354f) / fTemp9) + 1.0f);
			fRec3[0] = (((fRec4[2] + (fRec4[0] + (2.0f * fRec4[1]))) / fTemp12) - (((fRec3[2] * (((fTemp10 + -1.41421354f) / fTemp9) + 1.0f)) + (2.0f * (fTemp11 * fRec3[1]))) / fTemp13));
			float fTemp14 = (((fTemp10 + 0.517638087f) / fTemp9) + 1.0f);
			fRec2[0] = (((fRec3[2] + (fRec3[0] + (2.0f * fRec3[1]))) / fTemp13) - (((fRec2[2] * (((fTemp10 + -0.517638087f) / fTemp9) + 1.0f)) + (2.0f * (fTemp11 * fRec2[1]))) / fTemp14));
			fVec4[0] = fSlow9;
			iRec9[0] = (((iRec9[1] + (iRec9[1] > 0)) * (fSlow9 <= fVec4[1])) + (fSlow9 > fVec4[1]));
			float fTemp15 = float(iRec9[0]);
			fRec0[(IOTA & 1048575)] = ((fSlow1 * fRec0[((IOTA - iSlow2) & 1048575)]) + (((fRec1[0] * (fRec2[2] + (fRec2[0] + (2.0f * fRec2[1])))) * std::max<float>(0.0f, std::min<float>((fSlow8 * fTemp15), ((fSlow10 * (fSlow7 - fTemp15)) + 1.0f)))) / fTemp14));
			fRec11[0] = (fSlow13 + (0.999000013f * fRec11[1]));
			fRec16[0] = (fSlow14 + (0.999000013f * fRec16[1]));
			float fTemp16 = std::max<float>(fRec16[0], 23.4489498f);
			float fTemp17 = std::max<float>(20.0f, std::fabs(fTemp16));
			fVec5[0] = fTemp17;
			float fTemp18 = (fRec15[1] + (fConst2 * fVec5[1]));
			fRec15[0] = (fTemp18 - std::floor(fTemp18));
			float fTemp19 = mydsp_faustpower2_f(((2.0f * fRec15[0]) + -1.0f));
			fVec6[0] = fTemp19;
			float fTemp20 = ((fTemp0 * (fTemp19 - fVec6[1])) / fTemp17);
			fVec7[(IOTA & 4095)] = fTemp20;
			fRec17[0] = (fSlow15 + (0.999000013f * fRec17[1]));
			float fTemp21 = std::max<float>(0.0f, std::min<float>(2047.0f, (fConst0 * (fRec17[0] / fTemp16))));
			int iTemp22 = int(fTemp21);
			float fTemp23 = std::floor(fTemp21);
			fRec18[0] = (fSlow16 + (0.999000013f * fRec18[1]));
			float fTemp24 = std::tan((fConst3 * fRec18[0]));
			float fTemp25 = (1.0f / fTemp24);
			float fTemp26 = (1.0f - (1.0f / mydsp_faustpower2_f(fTemp24)));
			float fTemp27 = (((fTemp25 + 1.93185163f) / fTemp24) + 1.0f);
			fRec14[0] = ((fConst1 * ((fTemp20 - (fVec7[((IOTA - iTemp22) & 4095)] * (fTemp23 + (1.0f - fTemp21)))) - ((fTemp21 - fTemp23) * fVec7[((IOTA - (iTemp22 + 1)) & 4095)]))) - (((fRec14[2] * (((fTemp25 + -1.93185163f) / fTemp24) + 1.0f)) + (2.0f * (fRec14[1] * fTemp26))) / fTemp27));
			float fTemp28 = (((fTemp25 + 1.41421354f) / fTemp24) + 1.0f);
			fRec13[0] = (((fRec14[2] + (fRec14[0] + (2.0f * fRec14[1]))) / fTemp27) - (((fRec13[2] * (((fTemp25 + -1.41421354f) / fTemp24) + 1.0f)) + (2.0f * (fTemp26 * fRec13[1]))) / fTemp28));
			float fTemp29 = (((fTemp25 + 0.517638087f) / fTemp24) + 1.0f);
			fRec12[0] = (((fRec13[2] + (fRec13[0] + (2.0f * fRec13[1]))) / fTemp28) - (((fRec12[2] * (((fTemp25 + -0.517638087f) / fTemp24) + 1.0f)) + (2.0f * (fTemp26 * fRec12[1]))) / fTemp29));
			fVec8[0] = fSlow19;
			iRec19[0] = (((iRec19[1] + (iRec19[1] > 0)) * (fSlow19 <= fVec8[1])) + (fSlow19 > fVec8[1]));
			float fTemp30 = float(iRec19[0]);
			fRec10[(IOTA & 1048575)] = ((fSlow11 * fRec10[((IOTA - iSlow12) & 1048575)]) + (((fRec11[0] * (fRec12[2] + (fRec12[0] + (2.0f * fRec12[1])))) * std::max<float>(0.0f, std::min<float>((fSlow18 * fTemp30), ((fSlow20 * (fSlow17 - fTemp30)) + 1.0f)))) / fTemp29));
			fRec21[0] = (fSlow23 + (0.999000013f * fRec21[1]));
			fRec26[0] = (fSlow24 + (0.999000013f * fRec26[1]));
			float fTemp31 = std::max<float>(fRec26[0], 23.4489498f);
			float fTemp32 = std::max<float>(20.0f, std::fabs(fTemp31));
			fVec9[0] = fTemp32;
			float fTemp33 = (fRec25[1] + (fConst2 * fVec9[1]));
			fRec25[0] = (fTemp33 - std::floor(fTemp33));
			float fTemp34 = mydsp_faustpower2_f(((2.0f * fRec25[0]) + -1.0f));
			fVec10[0] = fTemp34;
			float fTemp35 = ((fTemp0 * (fTemp34 - fVec10[1])) / fTemp32);
			fVec11[(IOTA & 4095)] = fTemp35;
			fRec27[0] = (fSlow25 + (0.999000013f * fRec27[1]));
			float fTemp36 = std::max<float>(0.0f, std::min<float>(2047.0f, (fConst0 * (fRec27[0] / fTemp31))));
			int iTemp37 = int(fTemp36);
			float fTemp38 = std::floor(fTemp36);
			fRec28[0] = (fSlow26 + (0.999000013f * fRec28[1]));
			float fTemp39 = std::tan((fConst3 * fRec28[0]));
			float fTemp40 = (1.0f / fTemp39);
			float fTemp41 = (1.0f - (1.0f / mydsp_faustpower2_f(fTemp39)));
			float fTemp42 = (((fTemp40 + 1.93185163f) / fTemp39) + 1.0f);
			fRec24[0] = ((fConst1 * ((fTemp35 - (fVec11[((IOTA - iTemp37) & 4095)] * (fTemp38 + (1.0f - fTemp36)))) - ((fTemp36 - fTemp38) * fVec11[((IOTA - (iTemp37 + 1)) & 4095)]))) - (((fRec24[2] * (((fTemp40 + -1.93185163f) / fTemp39) + 1.0f)) + (2.0f * (fRec24[1] * fTemp41))) / fTemp42));
			float fTemp43 = (((fTemp40 + 1.41421354f) / fTemp39) + 1.0f);
			fRec23[0] = (((fRec24[2] + (fRec24[0] + (2.0f * fRec24[1]))) / fTemp42) - (((fRec23[2] * (((fTemp40 + -1.41421354f) / fTemp39) + 1.0f)) + (2.0f * (fTemp41 * fRec23[1]))) / fTemp43));
			float fTemp44 = (((fTemp40 + 0.517638087f) / fTemp39) + 1.0f);
			fRec22[0] = (((fRec23[2] + (fRec23[0] + (2.0f * fRec23[1]))) / fTemp43) - (((fRec22[2] * (((fTemp40 + -0.517638087f) / fTemp39) + 1.0f)) + (2.0f * (fTemp41 * fRec22[1]))) / fTemp44));
			fVec12[0] = fSlow29;
			iRec29[0] = (((iRec29[1] + (iRec29[1] > 0)) * (fSlow29 <= fVec12[1])) + (fSlow29 > fVec12[1]));
			float fTemp45 = float(iRec29[0]);
			fRec20[(IOTA & 1048575)] = ((fSlow21 * fRec20[((IOTA - iSlow22) & 1048575)]) + (((fRec21[0] * (fRec22[2] + (fRec22[0] + (2.0f * fRec22[1])))) * std::max<float>(0.0f, std::min<float>((fSlow28 * fTemp45), ((fSlow30 * (fSlow27 - fTemp45)) + 1.0f)))) / fTemp44));
			fRec31[0] = (fSlow33 + (0.999000013f * fRec31[1]));
			fRec36[0] = (fSlow34 + (0.999000013f * fRec36[1]));
			float fTemp46 = std::max<float>(fRec36[0], 23.4489498f);
			float fTemp47 = std::max<float>(20.0f, std::fabs(fTemp46));
			fVec13[0] = fTemp47;
			float fTemp48 = (fRec35[1] + (fConst2 * fVec13[1]));
			fRec35[0] = (fTemp48 - std::floor(fTemp48));
			float fTemp49 = mydsp_faustpower2_f(((2.0f * fRec35[0]) + -1.0f));
			fVec14[0] = fTemp49;
			float fTemp50 = ((fTemp0 * (fTemp49 - fVec14[1])) / fTemp47);
			fVec15[(IOTA & 4095)] = fTemp50;
			fRec37[0] = (fSlow35 + (0.999000013f * fRec37[1]));
			float fTemp51 = std::max<float>(0.0f, std::min<float>(2047.0f, (fConst0 * (fRec37[0] / fTemp46))));
			int iTemp52 = int(fTemp51);
			float fTemp53 = std::floor(fTemp51);
			fRec38[0] = (fSlow36 + (0.999000013f * fRec38[1]));
			float fTemp54 = std::tan((fConst3 * fRec38[0]));
			float fTemp55 = (1.0f / fTemp54);
			float fTemp56 = (1.0f - (1.0f / mydsp_faustpower2_f(fTemp54)));
			float fTemp57 = (((fTemp55 + 1.93185163f) / fTemp54) + 1.0f);
			fRec34[0] = ((fConst1 * ((fTemp50 - (fVec15[((IOTA - iTemp52) & 4095)] * (fTemp53 + (1.0f - fTemp51)))) - ((fTemp51 - fTemp53) * fVec15[((IOTA - (iTemp52 + 1)) & 4095)]))) - (((fRec34[2] * (((fTemp55 + -1.93185163f) / fTemp54) + 1.0f)) + (2.0f * (fRec34[1] * fTemp56))) / fTemp57));
			float fTemp58 = (((fTemp55 + 1.41421354f) / fTemp54) + 1.0f);
			fRec33[0] = (((fRec34[2] + (fRec34[0] + (2.0f * fRec34[1]))) / fTemp57) - (((fRec33[2] * (((fTemp55 + -1.41421354f) / fTemp54) + 1.0f)) + (2.0f * (fTemp56 * fRec33[1]))) / fTemp58));
			float fTemp59 = (((fTemp55 + 0.517638087f) / fTemp54) + 1.0f);
			fRec32[0] = (((fRec33[2] + (fRec33[0] + (2.0f * fRec33[1]))) / fTemp58) - (((fRec32[2] * (((fTemp55 + -0.517638087f) / fTemp54) + 1.0f)) + (2.0f * (fTemp56 * fRec32[1]))) / fTemp59));
			fVec16[0] = fSlow39;
			iRec39[0] = (((iRec39[1] + (iRec39[1] > 0)) * (fSlow39 <= fVec16[1])) + (fSlow39 > fVec16[1]));
			float fTemp60 = float(iRec39[0]);
			fRec30[(IOTA & 1048575)] = ((fSlow31 * fRec30[((IOTA - iSlow32) & 1048575)]) + (((fRec31[0] * (fRec32[2] + (fRec32[0] + (2.0f * fRec32[1])))) * std::max<float>(0.0f, std::min<float>((fSlow38 * fTemp60), ((fSlow40 * (fSlow37 - fTemp60)) + 1.0f)))) / fTemp59));
			fRec41[0] = (fSlow43 + (0.999000013f * fRec41[1]));
			fRec46[0] = (fSlow44 + (0.999000013f * fRec46[1]));
			float fTemp61 = std::max<float>(fRec46[0], 23.4489498f);
			float fTemp62 = std::max<float>(20.0f, std::fabs(fTemp61));
			fVec17[0] = fTemp62;
			float fTemp63 = (fRec45[1] + (fConst2 * fVec17[1]));
			fRec45[0] = (fTemp63 - std::floor(fTemp63));
			float fTemp64 = mydsp_faustpower2_f(((2.0f * fRec45[0]) + -1.0f));
			fVec18[0] = fTemp64;
			float fTemp65 = ((fTemp0 * (fTemp64 - fVec18[1])) / fTemp62);
			fVec19[(IOTA & 4095)] = fTemp65;
			fRec47[0] = (fSlow45 + (0.999000013f * fRec47[1]));
			float fTemp66 = std::max<float>(0.0f, std::min<float>(2047.0f, (fConst0 * (fRec47[0] / fTemp61))));
			int iTemp67 = int(fTemp66);
			float fTemp68 = std::floor(fTemp66);
			fRec48[0] = (fSlow46 + (0.999000013f * fRec48[1]));
			float fTemp69 = std::tan((fConst3 * fRec48[0]));
			float fTemp70 = (1.0f / fTemp69);
			float fTemp71 = (1.0f - (1.0f / mydsp_faustpower2_f(fTemp69)));
			float fTemp72 = (((fTemp70 + 1.93185163f) / fTemp69) + 1.0f);
			fRec44[0] = ((fConst1 * ((fTemp65 - (fVec19[((IOTA - iTemp67) & 4095)] * (fTemp68 + (1.0f - fTemp66)))) - ((fTemp66 - fTemp68) * fVec19[((IOTA - (iTemp67 + 1)) & 4095)]))) - (((fRec44[2] * (((fTemp70 + -1.93185163f) / fTemp69) + 1.0f)) + (2.0f * (fRec44[1] * fTemp71))) / fTemp72));
			float fTemp73 = (((fTemp70 + 1.41421354f) / fTemp69) + 1.0f);
			fRec43[0] = (((fRec44[2] + (fRec44[0] + (2.0f * fRec44[1]))) / fTemp72) - (((fRec43[2] * (((fTemp70 + -1.41421354f) / fTemp69) + 1.0f)) + (2.0f * (fTemp71 * fRec43[1]))) / fTemp73));
			float fTemp74 = (((fTemp70 + 0.517638087f) / fTemp69) + 1.0f);
			fRec42[0] = (((fRec43[2] + (fRec43[0] + (2.0f * fRec43[1]))) / fTemp73) - (((fRec42[2] * (((fTemp70 + -0.517638087f) / fTemp69) + 1.0f)) + (2.0f * (fTemp71 * fRec42[1]))) / fTemp74));
			fVec20[0] = fSlow49;
			iRec49[0] = (((iRec49[1] + (iRec49[1] > 0)) * (fSlow49 <= fVec20[1])) + (fSlow49 > fVec20[1]));
			float fTemp75 = float(iRec49[0]);
			fRec40[(IOTA & 1048575)] = ((fSlow41 * fRec40[((IOTA - iSlow42) & 1048575)]) + (((fRec41[0] * (fRec42[2] + (fRec42[0] + (2.0f * fRec42[1])))) * std::max<float>(0.0f, std::min<float>((fSlow48 * fTemp75), ((fSlow50 * (fSlow47 - fTemp75)) + 1.0f)))) / fTemp74));
			fRec51[0] = (fSlow53 + (0.999000013f * fRec51[1]));
			fRec56[0] = (fSlow54 + (0.999000013f * fRec56[1]));
			float fTemp76 = std::max<float>(fRec56[0], 23.4489498f);
			float fTemp77 = std::max<float>(20.0f, std::fabs(fTemp76));
			fVec21[0] = fTemp77;
			float fTemp78 = (fRec55[1] + (fConst2 * fVec21[1]));
			fRec55[0] = (fTemp78 - std::floor(fTemp78));
			float fTemp79 = mydsp_faustpower2_f(((2.0f * fRec55[0]) + -1.0f));
			fVec22[0] = fTemp79;
			float fTemp80 = ((fTemp0 * (fTemp79 - fVec22[1])) / fTemp77);
			fVec23[(IOTA & 4095)] = fTemp80;
			fRec57[0] = (fSlow55 + (0.999000013f * fRec57[1]));
			float fTemp81 = std::max<float>(0.0f, std::min<float>(2047.0f, (fConst0 * (fRec57[0] / fTemp76))));
			int iTemp82 = int(fTemp81);
			float fTemp83 = std::floor(fTemp81);
			fRec58[0] = (fSlow56 + (0.999000013f * fRec58[1]));
			float fTemp84 = std::tan((fConst3 * fRec58[0]));
			float fTemp85 = (1.0f / fTemp84);
			float fTemp86 = (1.0f - (1.0f / mydsp_faustpower2_f(fTemp84)));
			float fTemp87 = (((fTemp85 + 1.93185163f) / fTemp84) + 1.0f);
			fRec54[0] = ((fConst1 * ((fTemp80 - (fVec23[((IOTA - iTemp82) & 4095)] * (fTemp83 + (1.0f - fTemp81)))) - ((fTemp81 - fTemp83) * fVec23[((IOTA - (iTemp82 + 1)) & 4095)]))) - (((fRec54[2] * (((fTemp85 + -1.93185163f) / fTemp84) + 1.0f)) + (2.0f * (fRec54[1] * fTemp86))) / fTemp87));
			float fTemp88 = (((fTemp85 + 1.41421354f) / fTemp84) + 1.0f);
			fRec53[0] = (((fRec54[2] + (fRec54[0] + (2.0f * fRec54[1]))) / fTemp87) - (((fRec53[2] * (((fTemp85 + -1.41421354f) / fTemp84) + 1.0f)) + (2.0f * (fTemp86 * fRec53[1]))) / fTemp88));
			float fTemp89 = (((fTemp85 + 0.517638087f) / fTemp84) + 1.0f);
			fRec52[0] = (((fRec53[2] + (fRec53[0] + (2.0f * fRec53[1]))) / fTemp88) - (((fRec52[2] * (((fTemp85 + -0.517638087f) / fTemp84) + 1.0f)) + (2.0f * (fTemp86 * fRec52[1]))) / fTemp89));
			fVec24[0] = fSlow59;
			iRec59[0] = (((iRec59[1] + (iRec59[1] > 0)) * (fSlow59 <= fVec24[1])) + (fSlow59 > fVec24[1]));
			float fTemp90 = float(iRec59[0]);
			fRec50[(IOTA & 1048575)] = ((fSlow51 * fRec50[((IOTA - iSlow52) & 1048575)]) + (((fRec51[0] * (fRec52[2] + (fRec52[0] + (2.0f * fRec52[1])))) * std::max<float>(0.0f, std::min<float>((fSlow58 * fTemp90), ((fSlow60 * (fSlow57 - fTemp90)) + 1.0f)))) / fTemp89));
			fRec61[0] = (fSlow63 + (0.999000013f * fRec61[1]));
			fRec66[0] = (fSlow64 + (0.999000013f * fRec66[1]));
			float fTemp91 = std::max<float>(fRec66[0], 23.4489498f);
			float fTemp92 = std::max<float>(20.0f, std::fabs(fTemp91));
			fVec25[0] = fTemp92;
			float fTemp93 = (fRec65[1] + (fConst2 * fVec25[1]));
			fRec65[0] = (fTemp93 - std::floor(fTemp93));
			float fTemp94 = mydsp_faustpower2_f(((2.0f * fRec65[0]) + -1.0f));
			fVec26[0] = fTemp94;
			float fTemp95 = ((fTemp0 * (fTemp94 - fVec26[1])) / fTemp92);
			fVec27[(IOTA & 4095)] = fTemp95;
			fRec67[0] = (fSlow65 + (0.999000013f * fRec67[1]));
			float fTemp96 = std::max<float>(0.0f, std::min<float>(2047.0f, (fConst0 * (fRec67[0] / fTemp91))));
			int iTemp97 = int(fTemp96);
			float fTemp98 = std::floor(fTemp96);
			fRec68[0] = (fSlow66 + (0.999000013f * fRec68[1]));
			float fTemp99 = std::tan((fConst3 * fRec68[0]));
			float fTemp100 = (1.0f / fTemp99);
			float fTemp101 = (1.0f - (1.0f / mydsp_faustpower2_f(fTemp99)));
			float fTemp102 = (((fTemp100 + 1.93185163f) / fTemp99) + 1.0f);
			fRec64[0] = ((fConst1 * ((fTemp95 - (fVec27[((IOTA - iTemp97) & 4095)] * (fTemp98 + (1.0f - fTemp96)))) - ((fTemp96 - fTemp98) * fVec27[((IOTA - (iTemp97 + 1)) & 4095)]))) - (((fRec64[2] * (((fTemp100 + -1.93185163f) / fTemp99) + 1.0f)) + (2.0f * (fRec64[1] * fTemp101))) / fTemp102));
			float fTemp103 = (((fTemp100 + 1.41421354f) / fTemp99) + 1.0f);
			fRec63[0] = (((fRec64[2] + (fRec64[0] + (2.0f * fRec64[1]))) / fTemp102) - (((fRec63[2] * (((fTemp100 + -1.41421354f) / fTemp99) + 1.0f)) + (2.0f * (fTemp101 * fRec63[1]))) / fTemp103));
			float fTemp104 = (((fTemp100 + 0.517638087f) / fTemp99) + 1.0f);
			fRec62[0] = (((fRec63[2] + (fRec63[0] + (2.0f * fRec63[1]))) / fTemp103) - (((fRec62[2] * (((fTemp100 + -0.517638087f) / fTemp99) + 1.0f)) + (2.0f * (fTemp101 * fRec62[1]))) / fTemp104));
			fVec28[0] = fSlow69;
			iRec69[0] = (((iRec69[1] + (iRec69[1] > 0)) * (fSlow69 <= fVec28[1])) + (fSlow69 > fVec28[1]));
			float fTemp105 = float(iRec69[0]);
			fRec60[(IOTA & 1048575)] = ((fSlow61 * fRec60[((IOTA - iSlow62) & 1048575)]) + (((fRec61[0] * (fRec62[2] + (fRec62[0] + (2.0f * fRec62[1])))) * std::max<float>(0.0f, std::min<float>((fSlow68 * fTemp105), ((fSlow70 * (fSlow67 - fTemp105)) + 1.0f)))) / fTemp104));
			fRec71[0] = (fSlow73 + (0.999000013f * fRec71[1]));
			fRec76[0] = (fSlow74 + (0.999000013f * fRec76[1]));
			float fTemp106 = std::max<float>(fRec76[0], 23.4489498f);
			float fTemp107 = std::max<float>(20.0f, std::fabs(fTemp106));
			fVec29[0] = fTemp107;
			float fTemp108 = (fRec75[1] + (fConst2 * fVec29[1]));
			fRec75[0] = (fTemp108 - std::floor(fTemp108));
			float fTemp109 = mydsp_faustpower2_f(((2.0f * fRec75[0]) + -1.0f));
			fVec30[0] = fTemp109;
			float fTemp110 = ((fTemp0 * (fTemp109 - fVec30[1])) / fTemp107);
			fVec31[(IOTA & 4095)] = fTemp110;
			fRec77[0] = (fSlow75 + (0.999000013f * fRec77[1]));
			float fTemp111 = std::max<float>(0.0f, std::min<float>(2047.0f, (fConst0 * (fRec77[0] / fTemp106))));
			int iTemp112 = int(fTemp111);
			float fTemp113 = std::floor(fTemp111);
			fRec78[0] = (fSlow76 + (0.999000013f * fRec78[1]));
			float fTemp114 = std::tan((fConst3 * fRec78[0]));
			float fTemp115 = (1.0f / fTemp114);
			float fTemp116 = (1.0f - (1.0f / mydsp_faustpower2_f(fTemp114)));
			float fTemp117 = (((fTemp115 + 1.93185163f) / fTemp114) + 1.0f);
			fRec74[0] = ((fConst1 * ((fTemp110 - (fVec31[((IOTA - iTemp112) & 4095)] * (fTemp113 + (1.0f - fTemp111)))) - ((fTemp111 - fTemp113) * fVec31[((IOTA - (iTemp112 + 1)) & 4095)]))) - (((fRec74[2] * (((fTemp115 + -1.93185163f) / fTemp114) + 1.0f)) + (2.0f * (fRec74[1] * fTemp116))) / fTemp117));
			float fTemp118 = (((fTemp115 + 1.41421354f) / fTemp114) + 1.0f);
			fRec73[0] = (((fRec74[2] + (fRec74[0] + (2.0f * fRec74[1]))) / fTemp117) - (((fRec73[2] * (((fTemp115 + -1.41421354f) / fTemp114) + 1.0f)) + (2.0f * (fTemp116 * fRec73[1]))) / fTemp118));
			float fTemp119 = (((fTemp115 + 0.517638087f) / fTemp114) + 1.0f);
			fRec72[0] = (((fRec73[2] + (fRec73[0] + (2.0f * fRec73[1]))) / fTemp118) - (((fRec72[2] * (((fTemp115 + -0.517638087f) / fTemp114) + 1.0f)) + (2.0f * (fTemp116 * fRec72[1]))) / fTemp119));
			fVec32[0] = fSlow79;
			iRec79[0] = (((iRec79[1] + (iRec79[1] > 0)) * (fSlow79 <= fVec32[1])) + (fSlow79 > fVec32[1]));
			float fTemp120 = float(iRec79[0]);
			fRec70[(IOTA & 1048575)] = ((fSlow71 * fRec70[((IOTA - iSlow72) & 1048575)]) + (((fRec71[0] * (fRec72[2] + (fRec72[0] + (2.0f * fRec72[1])))) * std::max<float>(0.0f, std::min<float>((fSlow78 * fTemp120), ((fSlow80 * (fSlow77 - fTemp120)) + 1.0f)))) / fTemp119));
			fRec81[0] = (fSlow83 + (0.999000013f * fRec81[1]));
			fRec86[0] = (fSlow84 + (0.999000013f * fRec86[1]));
			float fTemp121 = std::max<float>(fRec86[0], 23.4489498f);
			float fTemp122 = std::max<float>(20.0f, std::fabs(fTemp121));
			fVec33[0] = fTemp122;
			float fTemp123 = (fRec85[1] + (fConst2 * fVec33[1]));
			fRec85[0] = (fTemp123 - std::floor(fTemp123));
			float fTemp124 = mydsp_faustpower2_f(((2.0f * fRec85[0]) + -1.0f));
			fVec34[0] = fTemp124;
			float fTemp125 = ((fTemp0 * (fTemp124 - fVec34[1])) / fTemp122);
			fVec35[(IOTA & 4095)] = fTemp125;
			fRec87[0] = (fSlow85 + (0.999000013f * fRec87[1]));
			float fTemp126 = std::max<float>(0.0f, std::min<float>(2047.0f, (fConst0 * (fRec87[0] / fTemp121))));
			int iTemp127 = int(fTemp126);
			float fTemp128 = std::floor(fTemp126);
			fRec88[0] = (fSlow86 + (0.999000013f * fRec88[1]));
			float fTemp129 = std::tan((fConst3 * fRec88[0]));
			float fTemp130 = (1.0f / fTemp129);
			float fTemp131 = (1.0f - (1.0f / mydsp_faustpower2_f(fTemp129)));
			float fTemp132 = (((fTemp130 + 1.93185163f) / fTemp129) + 1.0f);
			fRec84[0] = ((fConst1 * ((fTemp125 - (fVec35[((IOTA - iTemp127) & 4095)] * (fTemp128 + (1.0f - fTemp126)))) - ((fTemp126 - fTemp128) * fVec35[((IOTA - (iTemp127 + 1)) & 4095)]))) - (((fRec84[2] * (((fTemp130 + -1.93185163f) / fTemp129) + 1.0f)) + (2.0f * (fRec84[1] * fTemp131))) / fTemp132));
			float fTemp133 = (((fTemp130 + 1.41421354f) / fTemp129) + 1.0f);
			fRec83[0] = (((fRec84[2] + (fRec84[0] + (2.0f * fRec84[1]))) / fTemp132) - (((fRec83[2] * (((fTemp130 + -1.41421354f) / fTemp129) + 1.0f)) + (2.0f * (fTemp131 * fRec83[1]))) / fTemp133));
			float fTemp134 = (((fTemp130 + 0.517638087f) / fTemp129) + 1.0f);
			fRec82[0] = (((fRec83[2] + (fRec83[0] + (2.0f * fRec83[1]))) / fTemp133) - (((fRec82[2] * (((fTemp130 + -0.517638087f) / fTemp129) + 1.0f)) + (2.0f * (fTemp131 * fRec82[1]))) / fTemp134));
			fVec36[0] = fSlow89;
			iRec89[0] = (((iRec89[1] + (iRec89[1] > 0)) * (fSlow89 <= fVec36[1])) + (fSlow89 > fVec36[1]));
			float fTemp135 = float(iRec89[0]);
			fRec80[(IOTA & 1048575)] = ((fSlow81 * fRec80[((IOTA - iSlow82) & 1048575)]) + (((fRec81[0] * (fRec82[2] + (fRec82[0] + (2.0f * fRec82[1])))) * std::max<float>(0.0f, std::min<float>((fSlow88 * fTemp135), ((fSlow90 * (fSlow87 - fTemp135)) + 1.0f)))) / fTemp134));
			fRec91[0] = (fSlow93 + (0.999000013f * fRec91[1]));
			fRec96[0] = (fSlow94 + (0.999000013f * fRec96[1]));
			float fTemp136 = std::max<float>(fRec96[0], 23.4489498f);
			float fTemp137 = std::max<float>(20.0f, std::fabs(fTemp136));
			fVec37[0] = fTemp137;
			float fTemp138 = (fRec95[1] + (fConst2 * fVec37[1]));
			fRec95[0] = (fTemp138 - std::floor(fTemp138));
			float fTemp139 = mydsp_faustpower2_f(((2.0f * fRec95[0]) + -1.0f));
			fVec38[0] = fTemp139;
			float fTemp140 = ((fTemp0 * (fTemp139 - fVec38[1])) / fTemp137);
			fVec39[(IOTA & 4095)] = fTemp140;
			fRec97[0] = (fSlow95 + (0.999000013f * fRec97[1]));
			float fTemp141 = std::max<float>(0.0f, std::min<float>(2047.0f, (fConst0 * (fRec97[0] / fTemp136))));
			int iTemp142 = int(fTemp141);
			float fTemp143 = std::floor(fTemp141);
			fRec98[0] = (fSlow96 + (0.999000013f * fRec98[1]));
			float fTemp144 = std::tan((fConst3 * fRec98[0]));
			float fTemp145 = (1.0f / fTemp144);
			float fTemp146 = (1.0f - (1.0f / mydsp_faustpower2_f(fTemp144)));
			float fTemp147 = (((fTemp145 + 1.93185163f) / fTemp144) + 1.0f);
			fRec94[0] = ((fConst1 * ((fTemp140 - (fVec39[((IOTA - iTemp142) & 4095)] * (fTemp143 + (1.0f - fTemp141)))) - ((fTemp141 - fTemp143) * fVec39[((IOTA - (iTemp142 + 1)) & 4095)]))) - (((fRec94[2] * (((fTemp145 + -1.93185163f) / fTemp144) + 1.0f)) + (2.0f * (fRec94[1] * fTemp146))) / fTemp147));
			float fTemp148 = (((fTemp145 + 1.41421354f) / fTemp144) + 1.0f);
			fRec93[0] = (((fRec94[2] + (fRec94[0] + (2.0f * fRec94[1]))) / fTemp147) - (((fRec93[2] * (((fTemp145 + -1.41421354f) / fTemp144) + 1.0f)) + (2.0f * (fTemp146 * fRec93[1]))) / fTemp148));
			float fTemp149 = (((fTemp145 + 0.517638087f) / fTemp144) + 1.0f);
			fRec92[0] = (((fRec93[2] + (fRec93[0] + (2.0f * fRec93[1]))) / fTemp148) - (((fRec92[2] * (((fTemp145 + -0.517638087f) / fTemp144) + 1.0f)) + (2.0f * (fTemp146 * fRec92[1]))) / fTemp149));
			fVec40[0] = fSlow99;
			iRec99[0] = (((iRec99[1] + (iRec99[1] > 0)) * (fSlow99 <= fVec40[1])) + (fSlow99 > fVec40[1]));
			float fTemp150 = float(iRec99[0]);
			fRec90[(IOTA & 1048575)] = ((fSlow91 * fRec90[((IOTA - iSlow92) & 1048575)]) + (((fRec91[0] * (fRec92[2] + (fRec92[0] + (2.0f * fRec92[1])))) * std::max<float>(0.0f, std::min<float>((fSlow98 * fTemp150), ((fSlow100 * (fSlow97 - fTemp150)) + 1.0f)))) / fTemp149));
			fRec101[0] = (fSlow103 + (0.999000013f * fRec101[1]));
			fRec106[0] = (fSlow104 + (0.999000013f * fRec106[1]));
			float fTemp151 = std::max<float>(fRec106[0], 23.4489498f);
			float fTemp152 = std::max<float>(20.0f, std::fabs(fTemp151));
			fVec41[0] = fTemp152;
			float fTemp153 = (fRec105[1] + (fConst2 * fVec41[1]));
			fRec105[0] = (fTemp153 - std::floor(fTemp153));
			float fTemp154 = mydsp_faustpower2_f(((2.0f * fRec105[0]) + -1.0f));
			fVec42[0] = fTemp154;
			float fTemp155 = ((fTemp0 * (fTemp154 - fVec42[1])) / fTemp152);
			fVec43[(IOTA & 4095)] = fTemp155;
			fRec107[0] = (fSlow105 + (0.999000013f * fRec107[1]));
			float fTemp156 = std::max<float>(0.0f, std::min<float>(2047.0f, (fConst0 * (fRec107[0] / fTemp151))));
			int iTemp157 = int(fTemp156);
			float fTemp158 = std::floor(fTemp156);
			fRec108[0] = (fSlow106 + (0.999000013f * fRec108[1]));
			float fTemp159 = std::tan((fConst3 * fRec108[0]));
			float fTemp160 = (1.0f / fTemp159);
			float fTemp161 = (1.0f - (1.0f / mydsp_faustpower2_f(fTemp159)));
			float fTemp162 = (((fTemp160 + 1.93185163f) / fTemp159) + 1.0f);
			fRec104[0] = ((fConst1 * ((fTemp155 - (fVec43[((IOTA - iTemp157) & 4095)] * (fTemp158 + (1.0f - fTemp156)))) - ((fTemp156 - fTemp158) * fVec43[((IOTA - (iTemp157 + 1)) & 4095)]))) - (((fRec104[2] * (((fTemp160 + -1.93185163f) / fTemp159) + 1.0f)) + (2.0f * (fRec104[1] * fTemp161))) / fTemp162));
			float fTemp163 = (((fTemp160 + 1.41421354f) / fTemp159) + 1.0f);
			fRec103[0] = (((fRec104[2] + (fRec104[0] + (2.0f * fRec104[1]))) / fTemp162) - (((fRec103[2] * (((fTemp160 + -1.41421354f) / fTemp159) + 1.0f)) + (2.0f * (fTemp161 * fRec103[1]))) / fTemp163));
			float fTemp164 = (((fTemp160 + 0.517638087f) / fTemp159) + 1.0f);
			fRec102[0] = (((fRec103[2] + (fRec103[0] + (2.0f * fRec103[1]))) / fTemp163) - (((fRec102[2] * (((fTemp160 + -0.517638087f) / fTemp159) + 1.0f)) + (2.0f * (fTemp161 * fRec102[1]))) / fTemp164));
			fVec44[0] = fSlow109;
			iRec109[0] = (((iRec109[1] + (iRec109[1] > 0)) * (fSlow109 <= fVec44[1])) + (fSlow109 > fVec44[1]));
			float fTemp165 = float(iRec109[0]);
			fRec100[(IOTA & 1048575)] = ((fSlow101 * fRec100[((IOTA - iSlow102) & 1048575)]) + (((fRec101[0] * (fRec102[2] + (fRec102[0] + (2.0f * fRec102[1])))) * std::max<float>(0.0f, std::min<float>((fSlow108 * fTemp165), ((fSlow110 * (fSlow107 - fTemp165)) + 1.0f)))) / fTemp164));
			fRec111[0] = (fSlow113 + (0.999000013f * fRec111[1]));
			fRec116[0] = (fSlow114 + (0.999000013f * fRec116[1]));
			float fTemp166 = std::max<float>(fRec116[0], 23.4489498f);
			float fTemp167 = std::max<float>(20.0f, std::fabs(fTemp166));
			fVec45[0] = fTemp167;
			float fTemp168 = (fRec115[1] + (fConst2 * fVec45[1]));
			fRec115[0] = (fTemp168 - std::floor(fTemp168));
			float fTemp169 = mydsp_faustpower2_f(((2.0f * fRec115[0]) + -1.0f));
			fVec46[0] = fTemp169;
			float fTemp170 = ((fTemp0 * (fTemp169 - fVec46[1])) / fTemp167);
			fVec47[(IOTA & 4095)] = fTemp170;
			fRec117[0] = (fSlow115 + (0.999000013f * fRec117[1]));
			float fTemp171 = std::max<float>(0.0f, std::min<float>(2047.0f, (fConst0 * (fRec117[0] / fTemp166))));
			int iTemp172 = int(fTemp171);
			float fTemp173 = std::floor(fTemp171);
			fRec118[0] = (fSlow116 + (0.999000013f * fRec118[1]));
			float fTemp174 = std::tan((fConst3 * fRec118[0]));
			float fTemp175 = (1.0f / fTemp174);
			float fTemp176 = (1.0f - (1.0f / mydsp_faustpower2_f(fTemp174)));
			float fTemp177 = (((fTemp175 + 1.93185163f) / fTemp174) + 1.0f);
			fRec114[0] = ((fConst1 * ((fTemp170 - (fVec47[((IOTA - iTemp172) & 4095)] * (fTemp173 + (1.0f - fTemp171)))) - ((fTemp171 - fTemp173) * fVec47[((IOTA - (iTemp172 + 1)) & 4095)]))) - (((fRec114[2] * (((fTemp175 + -1.93185163f) / fTemp174) + 1.0f)) + (2.0f * (fRec114[1] * fTemp176))) / fTemp177));
			float fTemp178 = (((fTemp175 + 1.41421354f) / fTemp174) + 1.0f);
			fRec113[0] = (((fRec114[2] + (fRec114[0] + (2.0f * fRec114[1]))) / fTemp177) - (((fRec113[2] * (((fTemp175 + -1.41421354f) / fTemp174) + 1.0f)) + (2.0f * (fTemp176 * fRec113[1]))) / fTemp178));
			float fTemp179 = (((fTemp175 + 0.517638087f) / fTemp174) + 1.0f);
			fRec112[0] = (((fRec113[2] + (fRec113[0] + (2.0f * fRec113[1]))) / fTemp178) - (((fRec112[2] * (((fTemp175 + -0.517638087f) / fTemp174) + 1.0f)) + (2.0f * (fTemp176 * fRec112[1]))) / fTemp179));
			fVec48[0] = fSlow119;
			iRec119[0] = (((iRec119[1] + (iRec119[1] > 0)) * (fSlow119 <= fVec48[1])) + (fSlow119 > fVec48[1]));
			float fTemp180 = float(iRec119[0]);
			fRec110[(IOTA & 1048575)] = ((fSlow111 * fRec110[((IOTA - iSlow112) & 1048575)]) + (((fRec111[0] * (fRec112[2] + (fRec112[0] + (2.0f * fRec112[1])))) * std::max<float>(0.0f, std::min<float>((fSlow118 * fTemp180), ((fSlow120 * (fSlow117 - fTemp180)) + 1.0f)))) / fTemp179));
			fRec121[0] = (fSlow123 + (0.999000013f * fRec121[1]));
			fRec126[0] = (fSlow124 + (0.999000013f * fRec126[1]));
			float fTemp181 = std::max<float>(fRec126[0], 23.4489498f);
			float fTemp182 = std::max<float>(20.0f, std::fabs(fTemp181));
			fVec49[0] = fTemp182;
			float fTemp183 = (fRec125[1] + (fConst2 * fVec49[1]));
			fRec125[0] = (fTemp183 - std::floor(fTemp183));
			float fTemp184 = mydsp_faustpower2_f(((2.0f * fRec125[0]) + -1.0f));
			fVec50[0] = fTemp184;
			float fTemp185 = ((fTemp0 * (fTemp184 - fVec50[1])) / fTemp182);
			fVec51[(IOTA & 4095)] = fTemp185;
			fRec127[0] = (fSlow125 + (0.999000013f * fRec127[1]));
			float fTemp186 = std::max<float>(0.0f, std::min<float>(2047.0f, (fConst0 * (fRec127[0] / fTemp181))));
			int iTemp187 = int(fTemp186);
			float fTemp188 = std::floor(fTemp186);
			fRec128[0] = (fSlow126 + (0.999000013f * fRec128[1]));
			float fTemp189 = std::tan((fConst3 * fRec128[0]));
			float fTemp190 = (1.0f / fTemp189);
			float fTemp191 = (1.0f - (1.0f / mydsp_faustpower2_f(fTemp189)));
			float fTemp192 = (((fTemp190 + 1.93185163f) / fTemp189) + 1.0f);
			fRec124[0] = ((fConst1 * ((fTemp185 - (fVec51[((IOTA - iTemp187) & 4095)] * (fTemp188 + (1.0f - fTemp186)))) - ((fTemp186 - fTemp188) * fVec51[((IOTA - (iTemp187 + 1)) & 4095)]))) - (((fRec124[2] * (((fTemp190 + -1.93185163f) / fTemp189) + 1.0f)) + (2.0f * (fRec124[1] * fTemp191))) / fTemp192));
			float fTemp193 = (((fTemp190 + 1.41421354f) / fTemp189) + 1.0f);
			fRec123[0] = (((fRec124[2] + (fRec124[0] + (2.0f * fRec124[1]))) / fTemp192) - (((fRec123[2] * (((fTemp190 + -1.41421354f) / fTemp189) + 1.0f)) + (2.0f * (fTemp191 * fRec123[1]))) / fTemp193));
			float fTemp194 = (((fTemp190 + 0.517638087f) / fTemp189) + 1.0f);
			fRec122[0] = (((fRec123[2] + (fRec123[0] + (2.0f * fRec123[1]))) / fTemp193) - (((fRec122[2] * (((fTemp190 + -0.517638087f) / fTemp189) + 1.0f)) + (2.0f * (fTemp191 * fRec122[1]))) / fTemp194));
			fVec52[0] = fSlow129;
			iRec129[0] = (((iRec129[1] + (iRec129[1] > 0)) * (fSlow129 <= fVec52[1])) + (fSlow129 > fVec52[1]));
			float fTemp195 = float(iRec129[0]);
			fRec120[(IOTA & 1048575)] = ((fSlow121 * fRec120[((IOTA - iSlow122) & 1048575)]) + (((fRec121[0] * (fRec122[2] + (fRec122[0] + (2.0f * fRec122[1])))) * std::max<float>(0.0f, std::min<float>((fSlow128 * fTemp195), ((fSlow130 * (fSlow127 - fTemp195)) + 1.0f)))) / fTemp194));
			fRec131[0] = (fSlow133 + (0.999000013f * fRec131[1]));
			fRec136[0] = (fSlow134 + (0.999000013f * fRec136[1]));
			float fTemp196 = std::max<float>(fRec136[0], 23.4489498f);
			float fTemp197 = std::max<float>(20.0f, std::fabs(fTemp196));
			fVec53[0] = fTemp197;
			float fTemp198 = (fRec135[1] + (fConst2 * fVec53[1]));
			fRec135[0] = (fTemp198 - std::floor(fTemp198));
			float fTemp199 = mydsp_faustpower2_f(((2.0f * fRec135[0]) + -1.0f));
			fVec54[0] = fTemp199;
			float fTemp200 = ((fTemp0 * (fTemp199 - fVec54[1])) / fTemp197);
			fVec55[(IOTA & 4095)] = fTemp200;
			fRec137[0] = (fSlow135 + (0.999000013f * fRec137[1]));
			float fTemp201 = std::max<float>(0.0f, std::min<float>(2047.0f, (fConst0 * (fRec137[0] / fTemp196))));
			int iTemp202 = int(fTemp201);
			float fTemp203 = std::floor(fTemp201);
			fRec138[0] = (fSlow136 + (0.999000013f * fRec138[1]));
			float fTemp204 = std::tan((fConst3 * fRec138[0]));
			float fTemp205 = (1.0f / fTemp204);
			float fTemp206 = (1.0f - (1.0f / mydsp_faustpower2_f(fTemp204)));
			float fTemp207 = (((fTemp205 + 1.93185163f) / fTemp204) + 1.0f);
			fRec134[0] = ((fConst1 * ((fTemp200 - (fVec55[((IOTA - iTemp202) & 4095)] * (fTemp203 + (1.0f - fTemp201)))) - ((fTemp201 - fTemp203) * fVec55[((IOTA - (iTemp202 + 1)) & 4095)]))) - (((fRec134[2] * (((fTemp205 + -1.93185163f) / fTemp204) + 1.0f)) + (2.0f * (fRec134[1] * fTemp206))) / fTemp207));
			float fTemp208 = (((fTemp205 + 1.41421354f) / fTemp204) + 1.0f);
			fRec133[0] = (((fRec134[2] + (fRec134[0] + (2.0f * fRec134[1]))) / fTemp207) - (((fRec133[2] * (((fTemp205 + -1.41421354f) / fTemp204) + 1.0f)) + (2.0f * (fTemp206 * fRec133[1]))) / fTemp208));
			float fTemp209 = (((fTemp205 + 0.517638087f) / fTemp204) + 1.0f);
			fRec132[0] = (((fRec133[2] + (fRec133[0] + (2.0f * fRec133[1]))) / fTemp208) - (((fRec132[2] * (((fTemp205 + -0.517638087f) / fTemp204) + 1.0f)) + (2.0f * (fTemp206 * fRec132[1]))) / fTemp209));
			fVec56[0] = fSlow139;
			iRec139[0] = (((iRec139[1] + (iRec139[1] > 0)) * (fSlow139 <= fVec56[1])) + (fSlow139 > fVec56[1]));
			float fTemp210 = float(iRec139[0]);
			fRec130[(IOTA & 1048575)] = ((fSlow131 * fRec130[((IOTA - iSlow132) & 1048575)]) + (((fRec131[0] * (fRec132[2] + (fRec132[0] + (2.0f * fRec132[1])))) * std::max<float>(0.0f, std::min<float>((fSlow138 * fTemp210), ((fSlow140 * (fSlow137 - fTemp210)) + 1.0f)))) / fTemp209));
			fRec141[0] = (fSlow143 + (0.999000013f * fRec141[1]));
			fRec146[0] = (fSlow144 + (0.999000013f * fRec146[1]));
			float fTemp211 = std::max<float>(fRec146[0], 23.4489498f);
			float fTemp212 = std::max<float>(20.0f, std::fabs(fTemp211));
			fVec57[0] = fTemp212;
			float fTemp213 = (fRec145[1] + (fConst2 * fVec57[1]));
			fRec145[0] = (fTemp213 - std::floor(fTemp213));
			float fTemp214 = mydsp_faustpower2_f(((2.0f * fRec145[0]) + -1.0f));
			fVec58[0] = fTemp214;
			float fTemp215 = ((fTemp0 * (fTemp214 - fVec58[1])) / fTemp212);
			fVec59[(IOTA & 4095)] = fTemp215;
			fRec147[0] = (fSlow145 + (0.999000013f * fRec147[1]));
			float fTemp216 = std::max<float>(0.0f, std::min<float>(2047.0f, (fConst0 * (fRec147[0] / fTemp211))));
			int iTemp217 = int(fTemp216);
			float fTemp218 = std::floor(fTemp216);
			fRec148[0] = (fSlow146 + (0.999000013f * fRec148[1]));
			float fTemp219 = std::tan((fConst3 * fRec148[0]));
			float fTemp220 = (1.0f / fTemp219);
			float fTemp221 = (1.0f - (1.0f / mydsp_faustpower2_f(fTemp219)));
			float fTemp222 = (((fTemp220 + 1.93185163f) / fTemp219) + 1.0f);
			fRec144[0] = ((fConst1 * ((fTemp215 - (fVec59[((IOTA - iTemp217) & 4095)] * (fTemp218 + (1.0f - fTemp216)))) - ((fTemp216 - fTemp218) * fVec59[((IOTA - (iTemp217 + 1)) & 4095)]))) - (((fRec144[2] * (((fTemp220 + -1.93185163f) / fTemp219) + 1.0f)) + (2.0f * (fRec144[1] * fTemp221))) / fTemp222));
			float fTemp223 = (((fTemp220 + 1.41421354f) / fTemp219) + 1.0f);
			fRec143[0] = (((fRec144[2] + (fRec144[0] + (2.0f * fRec144[1]))) / fTemp222) - (((fRec143[2] * (((fTemp220 + -1.41421354f) / fTemp219) + 1.0f)) + (2.0f * (fTemp221 * fRec143[1]))) / fTemp223));
			float fTemp224 = (((fTemp220 + 0.517638087f) / fTemp219) + 1.0f);
			fRec142[0] = (((fRec143[2] + (fRec143[0] + (2.0f * fRec143[1]))) / fTemp223) - (((fRec142[2] * (((fTemp220 + -0.517638087f) / fTemp219) + 1.0f)) + (2.0f * (fTemp221 * fRec142[1]))) / fTemp224));
			fVec60[0] = fSlow149;
			iRec149[0] = (((iRec149[1] + (iRec149[1] > 0)) * (fSlow149 <= fVec60[1])) + (fSlow149 > fVec60[1]));
			float fTemp225 = float(iRec149[0]);
			fRec140[(IOTA & 1048575)] = ((fSlow141 * fRec140[((IOTA - iSlow142) & 1048575)]) + (((fRec141[0] * (fRec142[2] + (fRec142[0] + (2.0f * fRec142[1])))) * std::max<float>(0.0f, std::min<float>((fSlow148 * fTemp225), ((fSlow150 * (fSlow147 - fTemp225)) + 1.0f)))) / fTemp224));
			fRec151[0] = (fSlow153 + (0.999000013f * fRec151[1]));
			fRec156[0] = (fSlow154 + (0.999000013f * fRec156[1]));
			float fTemp226 = std::max<float>(fRec156[0], 23.4489498f);
			float fTemp227 = std::max<float>(20.0f, std::fabs(fTemp226));
			fVec61[0] = fTemp227;
			float fTemp228 = (fRec155[1] + (fConst2 * fVec61[1]));
			fRec155[0] = (fTemp228 - std::floor(fTemp228));
			float fTemp229 = mydsp_faustpower2_f(((2.0f * fRec155[0]) + -1.0f));
			fVec62[0] = fTemp229;
			float fTemp230 = ((fTemp0 * (fTemp229 - fVec62[1])) / fTemp227);
			fVec63[(IOTA & 4095)] = fTemp230;
			fRec157[0] = (fSlow155 + (0.999000013f * fRec157[1]));
			float fTemp231 = std::max<float>(0.0f, std::min<float>(2047.0f, (fConst0 * (fRec157[0] / fTemp226))));
			int iTemp232 = int(fTemp231);
			float fTemp233 = std::floor(fTemp231);
			fRec158[0] = (fSlow156 + (0.999000013f * fRec158[1]));
			float fTemp234 = std::tan((fConst3 * fRec158[0]));
			float fTemp235 = (1.0f / fTemp234);
			float fTemp236 = (1.0f - (1.0f / mydsp_faustpower2_f(fTemp234)));
			float fTemp237 = (((fTemp235 + 1.93185163f) / fTemp234) + 1.0f);
			fRec154[0] = ((fConst1 * ((fTemp230 - (fVec63[((IOTA - iTemp232) & 4095)] * (fTemp233 + (1.0f - fTemp231)))) - ((fTemp231 - fTemp233) * fVec63[((IOTA - (iTemp232 + 1)) & 4095)]))) - (((fRec154[2] * (((fTemp235 + -1.93185163f) / fTemp234) + 1.0f)) + (2.0f * (fRec154[1] * fTemp236))) / fTemp237));
			float fTemp238 = (((fTemp235 + 1.41421354f) / fTemp234) + 1.0f);
			fRec153[0] = (((fRec154[2] + (fRec154[0] + (2.0f * fRec154[1]))) / fTemp237) - (((fRec153[2] * (((fTemp235 + -1.41421354f) / fTemp234) + 1.0f)) + (2.0f * (fTemp236 * fRec153[1]))) / fTemp238));
			float fTemp239 = (((fTemp235 + 0.517638087f) / fTemp234) + 1.0f);
			fRec152[0] = (((fRec153[2] + (fRec153[0] + (2.0f * fRec153[1]))) / fTemp238) - (((fRec152[2] * (((fTemp235 + -0.517638087f) / fTemp234) + 1.0f)) + (2.0f * (fTemp236 * fRec152[1]))) / fTemp239));
			fVec64[0] = fSlow159;
			iRec159[0] = (((iRec159[1] + (iRec159[1] > 0)) * (fSlow159 <= fVec64[1])) + (fSlow159 > fVec64[1]));
			float fTemp240 = float(iRec159[0]);
			fRec150[(IOTA & 1048575)] = ((fSlow151 * fRec150[((IOTA - iSlow152) & 1048575)]) + (((fRec151[0] * (fRec152[2] + (fRec152[0] + (2.0f * fRec152[1])))) * std::max<float>(0.0f, std::min<float>((fSlow158 * fTemp240), ((fSlow160 * (fSlow157 - fTemp240)) + 1.0f)))) / fTemp239));
			float fTemp241 = (fSlow0 * (((((((((((((((fRec0[((IOTA - 0) & 1048575)] + fRec10[((IOTA - 0) & 1048575)]) + fRec20[((IOTA - 0) & 1048575)]) + fRec30[((IOTA - 0) & 1048575)]) + fRec40[((IOTA - 0) & 1048575)]) + fRec50[((IOTA - 0) & 1048575)]) + fRec60[((IOTA - 0) & 1048575)]) + fRec70[((IOTA - 0) & 1048575)]) + fRec80[((IOTA - 0) & 1048575)]) + fRec90[((IOTA - 0) & 1048575)]) + fRec100[((IOTA - 0) & 1048575)]) + fRec110[((IOTA - 0) & 1048575)]) + fRec120[((IOTA - 0) & 1048575)]) + fRec130[((IOTA - 0) & 1048575)]) + fRec140[((IOTA - 0) & 1048575)]) + fRec150[((IOTA - 0) & 1048575)]));
			output0[i] = FAUSTFLOAT(fTemp241);
			output1[i] = FAUSTFLOAT(fTemp241);
			iVec0[1] = iVec0[0];
			fRec1[1] = fRec1[0];
			fRec6[1] = fRec6[0];
			fVec1[1] = fVec1[0];
			fRec5[1] = fRec5[0];
			fVec2[1] = fVec2[0];
			IOTA = (IOTA + 1);
			fRec7[1] = fRec7[0];
			fRec8[1] = fRec8[0];
			fRec4[2] = fRec4[1];
			fRec4[1] = fRec4[0];
			fRec3[2] = fRec3[1];
			fRec3[1] = fRec3[0];
			fRec2[2] = fRec2[1];
			fRec2[1] = fRec2[0];
			fVec4[1] = fVec4[0];
			iRec9[1] = iRec9[0];
			fRec11[1] = fRec11[0];
			fRec16[1] = fRec16[0];
			fVec5[1] = fVec5[0];
			fRec15[1] = fRec15[0];
			fVec6[1] = fVec6[0];
			fRec17[1] = fRec17[0];
			fRec18[1] = fRec18[0];
			fRec14[2] = fRec14[1];
			fRec14[1] = fRec14[0];
			fRec13[2] = fRec13[1];
			fRec13[1] = fRec13[0];
			fRec12[2] = fRec12[1];
			fRec12[1] = fRec12[0];
			fVec8[1] = fVec8[0];
			iRec19[1] = iRec19[0];
			fRec21[1] = fRec21[0];
			fRec26[1] = fRec26[0];
			fVec9[1] = fVec9[0];
			fRec25[1] = fRec25[0];
			fVec10[1] = fVec10[0];
			fRec27[1] = fRec27[0];
			fRec28[1] = fRec28[0];
			fRec24[2] = fRec24[1];
			fRec24[1] = fRec24[0];
			fRec23[2] = fRec23[1];
			fRec23[1] = fRec23[0];
			fRec22[2] = fRec22[1];
			fRec22[1] = fRec22[0];
			fVec12[1] = fVec12[0];
			iRec29[1] = iRec29[0];
			fRec31[1] = fRec31[0];
			fRec36[1] = fRec36[0];
			fVec13[1] = fVec13[0];
			fRec35[1] = fRec35[0];
			fVec14[1] = fVec14[0];
			fRec37[1] = fRec37[0];
			fRec38[1] = fRec38[0];
			fRec34[2] = fRec34[1];
			fRec34[1] = fRec34[0];
			fRec33[2] = fRec33[1];
			fRec33[1] = fRec33[0];
			fRec32[2] = fRec32[1];
			fRec32[1] = fRec32[0];
			fVec16[1] = fVec16[0];
			iRec39[1] = iRec39[0];
			fRec41[1] = fRec41[0];
			fRec46[1] = fRec46[0];
			fVec17[1] = fVec17[0];
			fRec45[1] = fRec45[0];
			fVec18[1] = fVec18[0];
			fRec47[1] = fRec47[0];
			fRec48[1] = fRec48[0];
			fRec44[2] = fRec44[1];
			fRec44[1] = fRec44[0];
			fRec43[2] = fRec43[1];
			fRec43[1] = fRec43[0];
			fRec42[2] = fRec42[1];
			fRec42[1] = fRec42[0];
			fVec20[1] = fVec20[0];
			iRec49[1] = iRec49[0];
			fRec51[1] = fRec51[0];
			fRec56[1] = fRec56[0];
			fVec21[1] = fVec21[0];
			fRec55[1] = fRec55[0];
			fVec22[1] = fVec22[0];
			fRec57[1] = fRec57[0];
			fRec58[1] = fRec58[0];
			fRec54[2] = fRec54[1];
			fRec54[1] = fRec54[0];
			fRec53[2] = fRec53[1];
			fRec53[1] = fRec53[0];
			fRec52[2] = fRec52[1];
			fRec52[1] = fRec52[0];
			fVec24[1] = fVec24[0];
			iRec59[1] = iRec59[0];
			fRec61[1] = fRec61[0];
			fRec66[1] = fRec66[0];
			fVec25[1] = fVec25[0];
			fRec65[1] = fRec65[0];
			fVec26[1] = fVec26[0];
			fRec67[1] = fRec67[0];
			fRec68[1] = fRec68[0];
			fRec64[2] = fRec64[1];
			fRec64[1] = fRec64[0];
			fRec63[2] = fRec63[1];
			fRec63[1] = fRec63[0];
			fRec62[2] = fRec62[1];
			fRec62[1] = fRec62[0];
			fVec28[1] = fVec28[0];
			iRec69[1] = iRec69[0];
			fRec71[1] = fRec71[0];
			fRec76[1] = fRec76[0];
			fVec29[1] = fVec29[0];
			fRec75[1] = fRec75[0];
			fVec30[1] = fVec30[0];
			fRec77[1] = fRec77[0];
			fRec78[1] = fRec78[0];
			fRec74[2] = fRec74[1];
			fRec74[1] = fRec74[0];
			fRec73[2] = fRec73[1];
			fRec73[1] = fRec73[0];
			fRec72[2] = fRec72[1];
			fRec72[1] = fRec72[0];
			fVec32[1] = fVec32[0];
			iRec79[1] = iRec79[0];
			fRec81[1] = fRec81[0];
			fRec86[1] = fRec86[0];
			fVec33[1] = fVec33[0];
			fRec85[1] = fRec85[0];
			fVec34[1] = fVec34[0];
			fRec87[1] = fRec87[0];
			fRec88[1] = fRec88[0];
			fRec84[2] = fRec84[1];
			fRec84[1] = fRec84[0];
			fRec83[2] = fRec83[1];
			fRec83[1] = fRec83[0];
			fRec82[2] = fRec82[1];
			fRec82[1] = fRec82[0];
			fVec36[1] = fVec36[0];
			iRec89[1] = iRec89[0];
			fRec91[1] = fRec91[0];
			fRec96[1] = fRec96[0];
			fVec37[1] = fVec37[0];
			fRec95[1] = fRec95[0];
			fVec38[1] = fVec38[0];
			fRec97[1] = fRec97[0];
			fRec98[1] = fRec98[0];
			fRec94[2] = fRec94[1];
			fRec94[1] = fRec94[0];
			fRec93[2] = fRec93[1];
			fRec93[1] = fRec93[0];
			fRec92[2] = fRec92[1];
			fRec92[1] = fRec92[0];
			fVec40[1] = fVec40[0];
			iRec99[1] = iRec99[0];
			fRec101[1] = fRec101[0];
			fRec106[1] = fRec106[0];
			fVec41[1] = fVec41[0];
			fRec105[1] = fRec105[0];
			fVec42[1] = fVec42[0];
			fRec107[1] = fRec107[0];
			fRec108[1] = fRec108[0];
			fRec104[2] = fRec104[1];
			fRec104[1] = fRec104[0];
			fRec103[2] = fRec103[1];
			fRec103[1] = fRec103[0];
			fRec102[2] = fRec102[1];
			fRec102[1] = fRec102[0];
			fVec44[1] = fVec44[0];
			iRec109[1] = iRec109[0];
			fRec111[1] = fRec111[0];
			fRec116[1] = fRec116[0];
			fVec45[1] = fVec45[0];
			fRec115[1] = fRec115[0];
			fVec46[1] = fVec46[0];
			fRec117[1] = fRec117[0];
			fRec118[1] = fRec118[0];
			fRec114[2] = fRec114[1];
			fRec114[1] = fRec114[0];
			fRec113[2] = fRec113[1];
			fRec113[1] = fRec113[0];
			fRec112[2] = fRec112[1];
			fRec112[1] = fRec112[0];
			fVec48[1] = fVec48[0];
			iRec119[1] = iRec119[0];
			fRec121[1] = fRec121[0];
			fRec126[1] = fRec126[0];
			fVec49[1] = fVec49[0];
			fRec125[1] = fRec125[0];
			fVec50[1] = fVec50[0];
			fRec127[1] = fRec127[0];
			fRec128[1] = fRec128[0];
			fRec124[2] = fRec124[1];
			fRec124[1] = fRec124[0];
			fRec123[2] = fRec123[1];
			fRec123[1] = fRec123[0];
			fRec122[2] = fRec122[1];
			fRec122[1] = fRec122[0];
			fVec52[1] = fVec52[0];
			iRec129[1] = iRec129[0];
			fRec131[1] = fRec131[0];
			fRec136[1] = fRec136[0];
			fVec53[1] = fVec53[0];
			fRec135[1] = fRec135[0];
			fVec54[1] = fVec54[0];
			fRec137[1] = fRec137[0];
			fRec138[1] = fRec138[0];
			fRec134[2] = fRec134[1];
			fRec134[1] = fRec134[0];
			fRec133[2] = fRec133[1];
			fRec133[1] = fRec133[0];
			fRec132[2] = fRec132[1];
			fRec132[1] = fRec132[0];
			fVec56[1] = fVec56[0];
			iRec139[1] = iRec139[0];
			fRec141[1] = fRec141[0];
			fRec146[1] = fRec146[0];
			fVec57[1] = fVec57[0];
			fRec145[1] = fRec145[0];
			fVec58[1] = fVec58[0];
			fRec147[1] = fRec147[0];
			fRec148[1] = fRec148[0];
			fRec144[2] = fRec144[1];
			fRec144[1] = fRec144[0];
			fRec143[2] = fRec143[1];
			fRec143[1] = fRec143[0];
			fRec142[2] = fRec142[1];
			fRec142[1] = fRec142[0];
			fVec60[1] = fVec60[0];
			iRec149[1] = iRec149[0];
			fRec151[1] = fRec151[0];
			fRec156[1] = fRec156[0];
			fVec61[1] = fVec61[0];
			fRec155[1] = fRec155[0];
			fVec62[1] = fVec62[0];
			fRec157[1] = fRec157[0];
			fRec158[1] = fRec158[0];
			fRec154[2] = fRec154[1];
			fRec154[1] = fRec154[0];
			fRec153[2] = fRec153[1];
			fRec153[1] = fRec153[0];
			fRec152[2] = fRec152[1];
			fRec152[1] = fRec152[0];
			fVec64[1] = fVec64[0];
			iRec159[1] = iRec159[0];
		}
	}

};

#endif
