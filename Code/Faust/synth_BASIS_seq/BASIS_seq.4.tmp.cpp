/* ------------------------------------------------------------
name: "BASIS_seq.4.tmp"
Code generated with Faust 2.23.6 (https://faust.grame.fr)
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

class mydspSIG0 {
	
  private:
	
	int iRec2[2];
	
  public:
	
	int getNumInputsmydspSIG0() {
		return 0;
	}
	int getNumOutputsmydspSIG0() {
		return 1;
	}
	int getInputRatemydspSIG0(int channel) {
		int rate;
		switch ((channel)) {
			default: {
				rate = -1;
				break;
			}
		}
		return rate;
	}
	int getOutputRatemydspSIG0(int channel) {
		int rate;
		switch ((channel)) {
			case 0: {
				rate = 0;
				break;
			}
			default: {
				rate = -1;
				break;
			}
		}
		return rate;
	}
	
	void instanceInitmydspSIG0(int sample_rate) {
		for (int l1 = 0; (l1 < 2); l1 = (l1 + 1)) {
			iRec2[l1] = 0;
		}
	}
	
	void fillmydspSIG0(int count, float* table) {
		for (int i = 0; (i < count); i = (i + 1)) {
			iRec2[0] = (iRec2[1] + 1);
			table[i] = std::sin((9.58738019e-05f * float((iRec2[0] + -1))));
			iRec2[1] = iRec2[0];
		}
	}

};

static mydspSIG0* newmydspSIG0() { return (mydspSIG0*)new mydspSIG0(); }
static void deletemydspSIG0(mydspSIG0* dsp) { delete dsp; }

static float ftbl0mydspSIG0[65536];
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
	FAUSTFLOAT fVslider1;
	float fRec1[2];
	float fConst1;
	FAUSTFLOAT fEntry3;
	float fRec4[2];
	float fRec3[2];
	FAUSTFLOAT fEntry4;
	float fRec8[2];
	int iRec9[2];
	float fConst2;
	FAUSTFLOAT fEntry5;
	float fRec10[2];
	float fRec7[3];
	float fRec6[3];
	float fRec5[3];
	FAUSTFLOAT fEntry6;
	FAUSTFLOAT fButton0;
	float fVec0[2];
	int iRec11[2];
	FAUSTFLOAT fEntry7;
	int IOTA;
	float fRec0[1048576];
	FAUSTFLOAT fEntry8;
	FAUSTFLOAT fEntry9;
	FAUSTFLOAT fEntry10;
	FAUSTFLOAT fVslider2;
	float fRec13[2];
	FAUSTFLOAT fEntry11;
	float fRec15[2];
	float fRec14[2];
	FAUSTFLOAT fEntry12;
	float fRec19[2];
	FAUSTFLOAT fEntry13;
	float fRec20[2];
	float fRec18[3];
	float fRec17[3];
	float fRec16[3];
	FAUSTFLOAT fEntry14;
	FAUSTFLOAT fButton1;
	float fVec1[2];
	int iRec21[2];
	FAUSTFLOAT fEntry15;
	float fRec12[1048576];
	FAUSTFLOAT fEntry16;
	FAUSTFLOAT fEntry17;
	FAUSTFLOAT fEntry18;
	FAUSTFLOAT fVslider3;
	float fRec23[2];
	FAUSTFLOAT fEntry19;
	float fRec25[2];
	float fRec24[2];
	FAUSTFLOAT fEntry20;
	float fRec29[2];
	FAUSTFLOAT fEntry21;
	float fRec30[2];
	float fRec28[3];
	float fRec27[3];
	float fRec26[3];
	FAUSTFLOAT fEntry22;
	FAUSTFLOAT fButton2;
	float fVec2[2];
	int iRec31[2];
	FAUSTFLOAT fEntry23;
	float fRec22[1048576];
	FAUSTFLOAT fEntry24;
	FAUSTFLOAT fEntry25;
	FAUSTFLOAT fEntry26;
	FAUSTFLOAT fVslider4;
	float fRec33[2];
	FAUSTFLOAT fEntry27;
	float fRec35[2];
	float fRec34[2];
	FAUSTFLOAT fEntry28;
	float fRec39[2];
	FAUSTFLOAT fEntry29;
	float fRec40[2];
	float fRec38[3];
	float fRec37[3];
	float fRec36[3];
	FAUSTFLOAT fEntry30;
	FAUSTFLOAT fButton3;
	float fVec3[2];
	int iRec41[2];
	FAUSTFLOAT fEntry31;
	float fRec32[1048576];
	FAUSTFLOAT fEntry32;
	FAUSTFLOAT fEntry33;
	FAUSTFLOAT fEntry34;
	FAUSTFLOAT fVslider5;
	float fRec43[2];
	FAUSTFLOAT fEntry35;
	float fRec45[2];
	float fRec44[2];
	FAUSTFLOAT fEntry36;
	float fRec49[2];
	FAUSTFLOAT fEntry37;
	float fRec50[2];
	float fRec48[3];
	float fRec47[3];
	float fRec46[3];
	FAUSTFLOAT fEntry38;
	FAUSTFLOAT fButton4;
	float fVec4[2];
	int iRec51[2];
	FAUSTFLOAT fEntry39;
	float fRec42[1048576];
	FAUSTFLOAT fEntry40;
	FAUSTFLOAT fEntry41;
	FAUSTFLOAT fEntry42;
	FAUSTFLOAT fVslider6;
	float fRec53[2];
	FAUSTFLOAT fEntry43;
	float fRec55[2];
	float fRec54[2];
	FAUSTFLOAT fEntry44;
	float fRec59[2];
	FAUSTFLOAT fEntry45;
	float fRec60[2];
	float fRec58[3];
	float fRec57[3];
	float fRec56[3];
	FAUSTFLOAT fEntry46;
	FAUSTFLOAT fButton5;
	float fVec5[2];
	int iRec61[2];
	FAUSTFLOAT fEntry47;
	float fRec52[1048576];
	FAUSTFLOAT fEntry48;
	FAUSTFLOAT fEntry49;
	FAUSTFLOAT fEntry50;
	FAUSTFLOAT fVslider7;
	float fRec63[2];
	FAUSTFLOAT fEntry51;
	float fRec65[2];
	float fRec64[2];
	FAUSTFLOAT fEntry52;
	float fRec69[2];
	FAUSTFLOAT fEntry53;
	float fRec70[2];
	float fRec68[3];
	float fRec67[3];
	float fRec66[3];
	FAUSTFLOAT fEntry54;
	FAUSTFLOAT fButton6;
	float fVec6[2];
	int iRec71[2];
	FAUSTFLOAT fEntry55;
	float fRec62[1048576];
	FAUSTFLOAT fEntry56;
	FAUSTFLOAT fEntry57;
	FAUSTFLOAT fEntry58;
	FAUSTFLOAT fVslider8;
	float fRec73[2];
	FAUSTFLOAT fEntry59;
	float fRec75[2];
	float fRec74[2];
	FAUSTFLOAT fEntry60;
	float fRec79[2];
	FAUSTFLOAT fEntry61;
	float fRec80[2];
	float fRec78[3];
	float fRec77[3];
	float fRec76[3];
	FAUSTFLOAT fEntry62;
	FAUSTFLOAT fButton7;
	float fVec7[2];
	int iRec81[2];
	FAUSTFLOAT fEntry63;
	float fRec72[1048576];
	FAUSTFLOAT fEntry64;
	FAUSTFLOAT fEntry65;
	FAUSTFLOAT fEntry66;
	FAUSTFLOAT fVslider9;
	float fRec83[2];
	FAUSTFLOAT fEntry67;
	float fRec85[2];
	float fRec84[2];
	FAUSTFLOAT fEntry68;
	float fRec89[2];
	FAUSTFLOAT fEntry69;
	float fRec90[2];
	float fRec88[3];
	float fRec87[3];
	float fRec86[3];
	FAUSTFLOAT fEntry70;
	FAUSTFLOAT fButton8;
	float fVec8[2];
	int iRec91[2];
	FAUSTFLOAT fEntry71;
	float fRec82[1048576];
	FAUSTFLOAT fEntry72;
	FAUSTFLOAT fEntry73;
	FAUSTFLOAT fEntry74;
	FAUSTFLOAT fVslider10;
	float fRec93[2];
	FAUSTFLOAT fEntry75;
	float fRec95[2];
	float fRec94[2];
	FAUSTFLOAT fEntry76;
	float fRec99[2];
	FAUSTFLOAT fEntry77;
	float fRec100[2];
	float fRec98[3];
	float fRec97[3];
	float fRec96[3];
	FAUSTFLOAT fEntry78;
	FAUSTFLOAT fButton9;
	float fVec9[2];
	int iRec101[2];
	FAUSTFLOAT fEntry79;
	float fRec92[1048576];
	FAUSTFLOAT fEntry80;
	FAUSTFLOAT fEntry81;
	FAUSTFLOAT fEntry82;
	FAUSTFLOAT fVslider11;
	float fRec103[2];
	FAUSTFLOAT fEntry83;
	float fRec105[2];
	float fRec104[2];
	FAUSTFLOAT fEntry84;
	float fRec109[2];
	FAUSTFLOAT fEntry85;
	float fRec110[2];
	float fRec108[3];
	float fRec107[3];
	float fRec106[3];
	FAUSTFLOAT fEntry86;
	FAUSTFLOAT fButton10;
	float fVec10[2];
	int iRec111[2];
	FAUSTFLOAT fEntry87;
	float fRec102[1048576];
	FAUSTFLOAT fEntry88;
	FAUSTFLOAT fEntry89;
	FAUSTFLOAT fEntry90;
	FAUSTFLOAT fVslider12;
	float fRec113[2];
	FAUSTFLOAT fEntry91;
	float fRec115[2];
	float fRec114[2];
	FAUSTFLOAT fEntry92;
	float fRec119[2];
	FAUSTFLOAT fEntry93;
	float fRec120[2];
	float fRec118[3];
	float fRec117[3];
	float fRec116[3];
	FAUSTFLOAT fEntry94;
	FAUSTFLOAT fButton11;
	float fVec11[2];
	int iRec121[2];
	FAUSTFLOAT fEntry95;
	float fRec112[1048576];
	FAUSTFLOAT fEntry96;
	FAUSTFLOAT fEntry97;
	FAUSTFLOAT fEntry98;
	FAUSTFLOAT fVslider13;
	float fRec123[2];
	FAUSTFLOAT fEntry99;
	float fRec125[2];
	float fRec124[2];
	FAUSTFLOAT fEntry100;
	float fRec129[2];
	FAUSTFLOAT fEntry101;
	float fRec130[2];
	float fRec128[3];
	float fRec127[3];
	float fRec126[3];
	FAUSTFLOAT fEntry102;
	FAUSTFLOAT fButton12;
	float fVec12[2];
	int iRec131[2];
	FAUSTFLOAT fEntry103;
	float fRec122[1048576];
	FAUSTFLOAT fEntry104;
	FAUSTFLOAT fEntry105;
	FAUSTFLOAT fEntry106;
	FAUSTFLOAT fVslider14;
	float fRec133[2];
	FAUSTFLOAT fEntry107;
	float fRec135[2];
	float fRec134[2];
	FAUSTFLOAT fEntry108;
	float fRec139[2];
	FAUSTFLOAT fEntry109;
	float fRec140[2];
	float fRec138[3];
	float fRec137[3];
	float fRec136[3];
	FAUSTFLOAT fEntry110;
	FAUSTFLOAT fButton13;
	float fVec13[2];
	int iRec141[2];
	FAUSTFLOAT fEntry111;
	float fRec132[1048576];
	FAUSTFLOAT fEntry112;
	FAUSTFLOAT fEntry113;
	FAUSTFLOAT fEntry114;
	FAUSTFLOAT fVslider15;
	float fRec143[2];
	FAUSTFLOAT fEntry115;
	float fRec145[2];
	float fRec144[2];
	FAUSTFLOAT fEntry116;
	float fRec149[2];
	FAUSTFLOAT fEntry117;
	float fRec150[2];
	float fRec148[3];
	float fRec147[3];
	float fRec146[3];
	FAUSTFLOAT fEntry118;
	FAUSTFLOAT fButton14;
	float fVec14[2];
	int iRec151[2];
	FAUSTFLOAT fEntry119;
	float fRec142[1048576];
	FAUSTFLOAT fEntry120;
	FAUSTFLOAT fEntry121;
	FAUSTFLOAT fEntry122;
	FAUSTFLOAT fVslider16;
	float fRec153[2];
	FAUSTFLOAT fEntry123;
	float fRec155[2];
	float fRec154[2];
	FAUSTFLOAT fEntry124;
	float fRec159[2];
	FAUSTFLOAT fEntry125;
	float fRec160[2];
	float fRec158[3];
	float fRec157[3];
	float fRec156[3];
	FAUSTFLOAT fEntry126;
	FAUSTFLOAT fButton15;
	float fVec15[2];
	int iRec161[2];
	FAUSTFLOAT fEntry127;
	float fRec152[1048576];
	
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
		m->declare("envelopes.lib/version", "0.1");
		m->declare("filename", "BASIS_seq.4.tmp.dsp");
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
		m->declare("maths.lib/version", "2.2");
		m->declare("misceffects.lib/name", "Faust Math Library");
		m->declare("misceffects.lib/version", "2.0");
		m->declare("name", "BASIS_seq.4.tmp");
		m->declare("noises.lib/name", "Faust Noise Generator Library");
		m->declare("noises.lib/version", "0.0");
		m->declare("oscillators.lib/name", "Faust Oscillator Library");
		m->declare("oscillators.lib/version", "0.0");
		m->declare("platform.lib/name", "Generic Platform Library");
		m->declare("platform.lib/version", "0.1");
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
		mydspSIG0* sig0 = newmydspSIG0();
		sig0->instanceInitmydspSIG0(sample_rate);
		sig0->fillmydspSIG0(65536, ftbl0mydspSIG0);
		deletemydspSIG0(sig0);
	}
	
	virtual void instanceConstants(int sample_rate) {
		fSampleRate = sample_rate;
		fConst0 = std::min<float>(192000.0f, std::max<float>(1.0f, float(fSampleRate)));
		fConst1 = (1.0f / fConst0);
		fConst2 = (3.14159274f / fConst0);
	}
	
	virtual void instanceResetUserInterface() {
		fVslider0 = FAUSTFLOAT(0.0f);
		fEntry0 = FAUSTFLOAT(0.0f);
		fEntry1 = FAUSTFLOAT(0.0f);
		fEntry2 = FAUSTFLOAT(0.0f);
		fVslider1 = FAUSTFLOAT(0.0f);
		fEntry3 = FAUSTFLOAT(200.0f);
		fEntry4 = FAUSTFLOAT(1.0f);
		fEntry5 = FAUSTFLOAT(100.0f);
		fEntry6 = FAUSTFLOAT(0.5f);
		fButton0 = FAUSTFLOAT(0.0f);
		fEntry7 = FAUSTFLOAT(0.5f);
		fEntry8 = FAUSTFLOAT(0.0f);
		fEntry9 = FAUSTFLOAT(0.0f);
		fEntry10 = FAUSTFLOAT(0.0f);
		fVslider2 = FAUSTFLOAT(0.0f);
		fEntry11 = FAUSTFLOAT(200.0f);
		fEntry12 = FAUSTFLOAT(1.0f);
		fEntry13 = FAUSTFLOAT(100.0f);
		fEntry14 = FAUSTFLOAT(0.5f);
		fButton1 = FAUSTFLOAT(0.0f);
		fEntry15 = FAUSTFLOAT(0.5f);
		fEntry16 = FAUSTFLOAT(0.0f);
		fEntry17 = FAUSTFLOAT(0.0f);
		fEntry18 = FAUSTFLOAT(0.0f);
		fVslider3 = FAUSTFLOAT(0.0f);
		fEntry19 = FAUSTFLOAT(200.0f);
		fEntry20 = FAUSTFLOAT(1.0f);
		fEntry21 = FAUSTFLOAT(100.0f);
		fEntry22 = FAUSTFLOAT(0.5f);
		fButton2 = FAUSTFLOAT(0.0f);
		fEntry23 = FAUSTFLOAT(0.5f);
		fEntry24 = FAUSTFLOAT(0.0f);
		fEntry25 = FAUSTFLOAT(0.0f);
		fEntry26 = FAUSTFLOAT(0.0f);
		fVslider4 = FAUSTFLOAT(0.0f);
		fEntry27 = FAUSTFLOAT(200.0f);
		fEntry28 = FAUSTFLOAT(1.0f);
		fEntry29 = FAUSTFLOAT(100.0f);
		fEntry30 = FAUSTFLOAT(0.5f);
		fButton3 = FAUSTFLOAT(0.0f);
		fEntry31 = FAUSTFLOAT(0.5f);
		fEntry32 = FAUSTFLOAT(0.0f);
		fEntry33 = FAUSTFLOAT(0.0f);
		fEntry34 = FAUSTFLOAT(0.0f);
		fVslider5 = FAUSTFLOAT(0.0f);
		fEntry35 = FAUSTFLOAT(200.0f);
		fEntry36 = FAUSTFLOAT(1.0f);
		fEntry37 = FAUSTFLOAT(100.0f);
		fEntry38 = FAUSTFLOAT(0.5f);
		fButton4 = FAUSTFLOAT(0.0f);
		fEntry39 = FAUSTFLOAT(0.5f);
		fEntry40 = FAUSTFLOAT(0.0f);
		fEntry41 = FAUSTFLOAT(0.0f);
		fEntry42 = FAUSTFLOAT(0.0f);
		fVslider6 = FAUSTFLOAT(0.0f);
		fEntry43 = FAUSTFLOAT(200.0f);
		fEntry44 = FAUSTFLOAT(1.0f);
		fEntry45 = FAUSTFLOAT(100.0f);
		fEntry46 = FAUSTFLOAT(0.5f);
		fButton5 = FAUSTFLOAT(0.0f);
		fEntry47 = FAUSTFLOAT(0.5f);
		fEntry48 = FAUSTFLOAT(0.0f);
		fEntry49 = FAUSTFLOAT(0.0f);
		fEntry50 = FAUSTFLOAT(0.0f);
		fVslider7 = FAUSTFLOAT(0.0f);
		fEntry51 = FAUSTFLOAT(200.0f);
		fEntry52 = FAUSTFLOAT(1.0f);
		fEntry53 = FAUSTFLOAT(100.0f);
		fEntry54 = FAUSTFLOAT(0.5f);
		fButton6 = FAUSTFLOAT(0.0f);
		fEntry55 = FAUSTFLOAT(0.5f);
		fEntry56 = FAUSTFLOAT(0.0f);
		fEntry57 = FAUSTFLOAT(0.0f);
		fEntry58 = FAUSTFLOAT(0.0f);
		fVslider8 = FAUSTFLOAT(0.0f);
		fEntry59 = FAUSTFLOAT(200.0f);
		fEntry60 = FAUSTFLOAT(1.0f);
		fEntry61 = FAUSTFLOAT(100.0f);
		fEntry62 = FAUSTFLOAT(0.5f);
		fButton7 = FAUSTFLOAT(0.0f);
		fEntry63 = FAUSTFLOAT(0.5f);
		fEntry64 = FAUSTFLOAT(0.0f);
		fEntry65 = FAUSTFLOAT(0.0f);
		fEntry66 = FAUSTFLOAT(0.0f);
		fVslider9 = FAUSTFLOAT(0.0f);
		fEntry67 = FAUSTFLOAT(200.0f);
		fEntry68 = FAUSTFLOAT(1.0f);
		fEntry69 = FAUSTFLOAT(100.0f);
		fEntry70 = FAUSTFLOAT(0.5f);
		fButton8 = FAUSTFLOAT(0.0f);
		fEntry71 = FAUSTFLOAT(0.5f);
		fEntry72 = FAUSTFLOAT(0.0f);
		fEntry73 = FAUSTFLOAT(0.0f);
		fEntry74 = FAUSTFLOAT(0.0f);
		fVslider10 = FAUSTFLOAT(0.0f);
		fEntry75 = FAUSTFLOAT(200.0f);
		fEntry76 = FAUSTFLOAT(1.0f);
		fEntry77 = FAUSTFLOAT(100.0f);
		fEntry78 = FAUSTFLOAT(0.5f);
		fButton9 = FAUSTFLOAT(0.0f);
		fEntry79 = FAUSTFLOAT(0.5f);
		fEntry80 = FAUSTFLOAT(0.0f);
		fEntry81 = FAUSTFLOAT(0.0f);
		fEntry82 = FAUSTFLOAT(0.0f);
		fVslider11 = FAUSTFLOAT(0.0f);
		fEntry83 = FAUSTFLOAT(200.0f);
		fEntry84 = FAUSTFLOAT(1.0f);
		fEntry85 = FAUSTFLOAT(100.0f);
		fEntry86 = FAUSTFLOAT(0.5f);
		fButton10 = FAUSTFLOAT(0.0f);
		fEntry87 = FAUSTFLOAT(0.5f);
		fEntry88 = FAUSTFLOAT(0.0f);
		fEntry89 = FAUSTFLOAT(0.0f);
		fEntry90 = FAUSTFLOAT(0.0f);
		fVslider12 = FAUSTFLOAT(0.0f);
		fEntry91 = FAUSTFLOAT(200.0f);
		fEntry92 = FAUSTFLOAT(1.0f);
		fEntry93 = FAUSTFLOAT(100.0f);
		fEntry94 = FAUSTFLOAT(0.5f);
		fButton11 = FAUSTFLOAT(0.0f);
		fEntry95 = FAUSTFLOAT(0.5f);
		fEntry96 = FAUSTFLOAT(0.0f);
		fEntry97 = FAUSTFLOAT(0.0f);
		fEntry98 = FAUSTFLOAT(0.0f);
		fVslider13 = FAUSTFLOAT(0.0f);
		fEntry99 = FAUSTFLOAT(200.0f);
		fEntry100 = FAUSTFLOAT(1.0f);
		fEntry101 = FAUSTFLOAT(100.0f);
		fEntry102 = FAUSTFLOAT(0.5f);
		fButton12 = FAUSTFLOAT(0.0f);
		fEntry103 = FAUSTFLOAT(0.5f);
		fEntry104 = FAUSTFLOAT(0.0f);
		fEntry105 = FAUSTFLOAT(0.0f);
		fEntry106 = FAUSTFLOAT(0.0f);
		fVslider14 = FAUSTFLOAT(0.0f);
		fEntry107 = FAUSTFLOAT(200.0f);
		fEntry108 = FAUSTFLOAT(1.0f);
		fEntry109 = FAUSTFLOAT(100.0f);
		fEntry110 = FAUSTFLOAT(0.5f);
		fButton13 = FAUSTFLOAT(0.0f);
		fEntry111 = FAUSTFLOAT(0.5f);
		fEntry112 = FAUSTFLOAT(0.0f);
		fEntry113 = FAUSTFLOAT(0.0f);
		fEntry114 = FAUSTFLOAT(0.0f);
		fVslider15 = FAUSTFLOAT(0.0f);
		fEntry115 = FAUSTFLOAT(200.0f);
		fEntry116 = FAUSTFLOAT(1.0f);
		fEntry117 = FAUSTFLOAT(100.0f);
		fEntry118 = FAUSTFLOAT(0.5f);
		fButton14 = FAUSTFLOAT(0.0f);
		fEntry119 = FAUSTFLOAT(0.5f);
		fEntry120 = FAUSTFLOAT(0.0f);
		fEntry121 = FAUSTFLOAT(0.0f);
		fEntry122 = FAUSTFLOAT(0.0f);
		fVslider16 = FAUSTFLOAT(0.0f);
		fEntry123 = FAUSTFLOAT(200.0f);
		fEntry124 = FAUSTFLOAT(1.0f);
		fEntry125 = FAUSTFLOAT(100.0f);
		fEntry126 = FAUSTFLOAT(0.5f);
		fButton15 = FAUSTFLOAT(0.0f);
		fEntry127 = FAUSTFLOAT(0.5f);
	}
	
	virtual void instanceClear() {
		for (int l0 = 0; (l0 < 2); l0 = (l0 + 1)) {
			fRec1[l0] = 0.0f;
		}
		for (int l2 = 0; (l2 < 2); l2 = (l2 + 1)) {
			fRec4[l2] = 0.0f;
		}
		for (int l3 = 0; (l3 < 2); l3 = (l3 + 1)) {
			fRec3[l3] = 0.0f;
		}
		for (int l4 = 0; (l4 < 2); l4 = (l4 + 1)) {
			fRec8[l4] = 0.0f;
		}
		for (int l5 = 0; (l5 < 2); l5 = (l5 + 1)) {
			iRec9[l5] = 0;
		}
		for (int l6 = 0; (l6 < 2); l6 = (l6 + 1)) {
			fRec10[l6] = 0.0f;
		}
		for (int l7 = 0; (l7 < 3); l7 = (l7 + 1)) {
			fRec7[l7] = 0.0f;
		}
		for (int l8 = 0; (l8 < 3); l8 = (l8 + 1)) {
			fRec6[l8] = 0.0f;
		}
		for (int l9 = 0; (l9 < 3); l9 = (l9 + 1)) {
			fRec5[l9] = 0.0f;
		}
		for (int l10 = 0; (l10 < 2); l10 = (l10 + 1)) {
			fVec0[l10] = 0.0f;
		}
		for (int l11 = 0; (l11 < 2); l11 = (l11 + 1)) {
			iRec11[l11] = 0;
		}
		IOTA = 0;
		for (int l12 = 0; (l12 < 1048576); l12 = (l12 + 1)) {
			fRec0[l12] = 0.0f;
		}
		for (int l13 = 0; (l13 < 2); l13 = (l13 + 1)) {
			fRec13[l13] = 0.0f;
		}
		for (int l14 = 0; (l14 < 2); l14 = (l14 + 1)) {
			fRec15[l14] = 0.0f;
		}
		for (int l15 = 0; (l15 < 2); l15 = (l15 + 1)) {
			fRec14[l15] = 0.0f;
		}
		for (int l16 = 0; (l16 < 2); l16 = (l16 + 1)) {
			fRec19[l16] = 0.0f;
		}
		for (int l17 = 0; (l17 < 2); l17 = (l17 + 1)) {
			fRec20[l17] = 0.0f;
		}
		for (int l18 = 0; (l18 < 3); l18 = (l18 + 1)) {
			fRec18[l18] = 0.0f;
		}
		for (int l19 = 0; (l19 < 3); l19 = (l19 + 1)) {
			fRec17[l19] = 0.0f;
		}
		for (int l20 = 0; (l20 < 3); l20 = (l20 + 1)) {
			fRec16[l20] = 0.0f;
		}
		for (int l21 = 0; (l21 < 2); l21 = (l21 + 1)) {
			fVec1[l21] = 0.0f;
		}
		for (int l22 = 0; (l22 < 2); l22 = (l22 + 1)) {
			iRec21[l22] = 0;
		}
		for (int l23 = 0; (l23 < 1048576); l23 = (l23 + 1)) {
			fRec12[l23] = 0.0f;
		}
		for (int l24 = 0; (l24 < 2); l24 = (l24 + 1)) {
			fRec23[l24] = 0.0f;
		}
		for (int l25 = 0; (l25 < 2); l25 = (l25 + 1)) {
			fRec25[l25] = 0.0f;
		}
		for (int l26 = 0; (l26 < 2); l26 = (l26 + 1)) {
			fRec24[l26] = 0.0f;
		}
		for (int l27 = 0; (l27 < 2); l27 = (l27 + 1)) {
			fRec29[l27] = 0.0f;
		}
		for (int l28 = 0; (l28 < 2); l28 = (l28 + 1)) {
			fRec30[l28] = 0.0f;
		}
		for (int l29 = 0; (l29 < 3); l29 = (l29 + 1)) {
			fRec28[l29] = 0.0f;
		}
		for (int l30 = 0; (l30 < 3); l30 = (l30 + 1)) {
			fRec27[l30] = 0.0f;
		}
		for (int l31 = 0; (l31 < 3); l31 = (l31 + 1)) {
			fRec26[l31] = 0.0f;
		}
		for (int l32 = 0; (l32 < 2); l32 = (l32 + 1)) {
			fVec2[l32] = 0.0f;
		}
		for (int l33 = 0; (l33 < 2); l33 = (l33 + 1)) {
			iRec31[l33] = 0;
		}
		for (int l34 = 0; (l34 < 1048576); l34 = (l34 + 1)) {
			fRec22[l34] = 0.0f;
		}
		for (int l35 = 0; (l35 < 2); l35 = (l35 + 1)) {
			fRec33[l35] = 0.0f;
		}
		for (int l36 = 0; (l36 < 2); l36 = (l36 + 1)) {
			fRec35[l36] = 0.0f;
		}
		for (int l37 = 0; (l37 < 2); l37 = (l37 + 1)) {
			fRec34[l37] = 0.0f;
		}
		for (int l38 = 0; (l38 < 2); l38 = (l38 + 1)) {
			fRec39[l38] = 0.0f;
		}
		for (int l39 = 0; (l39 < 2); l39 = (l39 + 1)) {
			fRec40[l39] = 0.0f;
		}
		for (int l40 = 0; (l40 < 3); l40 = (l40 + 1)) {
			fRec38[l40] = 0.0f;
		}
		for (int l41 = 0; (l41 < 3); l41 = (l41 + 1)) {
			fRec37[l41] = 0.0f;
		}
		for (int l42 = 0; (l42 < 3); l42 = (l42 + 1)) {
			fRec36[l42] = 0.0f;
		}
		for (int l43 = 0; (l43 < 2); l43 = (l43 + 1)) {
			fVec3[l43] = 0.0f;
		}
		for (int l44 = 0; (l44 < 2); l44 = (l44 + 1)) {
			iRec41[l44] = 0;
		}
		for (int l45 = 0; (l45 < 1048576); l45 = (l45 + 1)) {
			fRec32[l45] = 0.0f;
		}
		for (int l46 = 0; (l46 < 2); l46 = (l46 + 1)) {
			fRec43[l46] = 0.0f;
		}
		for (int l47 = 0; (l47 < 2); l47 = (l47 + 1)) {
			fRec45[l47] = 0.0f;
		}
		for (int l48 = 0; (l48 < 2); l48 = (l48 + 1)) {
			fRec44[l48] = 0.0f;
		}
		for (int l49 = 0; (l49 < 2); l49 = (l49 + 1)) {
			fRec49[l49] = 0.0f;
		}
		for (int l50 = 0; (l50 < 2); l50 = (l50 + 1)) {
			fRec50[l50] = 0.0f;
		}
		for (int l51 = 0; (l51 < 3); l51 = (l51 + 1)) {
			fRec48[l51] = 0.0f;
		}
		for (int l52 = 0; (l52 < 3); l52 = (l52 + 1)) {
			fRec47[l52] = 0.0f;
		}
		for (int l53 = 0; (l53 < 3); l53 = (l53 + 1)) {
			fRec46[l53] = 0.0f;
		}
		for (int l54 = 0; (l54 < 2); l54 = (l54 + 1)) {
			fVec4[l54] = 0.0f;
		}
		for (int l55 = 0; (l55 < 2); l55 = (l55 + 1)) {
			iRec51[l55] = 0;
		}
		for (int l56 = 0; (l56 < 1048576); l56 = (l56 + 1)) {
			fRec42[l56] = 0.0f;
		}
		for (int l57 = 0; (l57 < 2); l57 = (l57 + 1)) {
			fRec53[l57] = 0.0f;
		}
		for (int l58 = 0; (l58 < 2); l58 = (l58 + 1)) {
			fRec55[l58] = 0.0f;
		}
		for (int l59 = 0; (l59 < 2); l59 = (l59 + 1)) {
			fRec54[l59] = 0.0f;
		}
		for (int l60 = 0; (l60 < 2); l60 = (l60 + 1)) {
			fRec59[l60] = 0.0f;
		}
		for (int l61 = 0; (l61 < 2); l61 = (l61 + 1)) {
			fRec60[l61] = 0.0f;
		}
		for (int l62 = 0; (l62 < 3); l62 = (l62 + 1)) {
			fRec58[l62] = 0.0f;
		}
		for (int l63 = 0; (l63 < 3); l63 = (l63 + 1)) {
			fRec57[l63] = 0.0f;
		}
		for (int l64 = 0; (l64 < 3); l64 = (l64 + 1)) {
			fRec56[l64] = 0.0f;
		}
		for (int l65 = 0; (l65 < 2); l65 = (l65 + 1)) {
			fVec5[l65] = 0.0f;
		}
		for (int l66 = 0; (l66 < 2); l66 = (l66 + 1)) {
			iRec61[l66] = 0;
		}
		for (int l67 = 0; (l67 < 1048576); l67 = (l67 + 1)) {
			fRec52[l67] = 0.0f;
		}
		for (int l68 = 0; (l68 < 2); l68 = (l68 + 1)) {
			fRec63[l68] = 0.0f;
		}
		for (int l69 = 0; (l69 < 2); l69 = (l69 + 1)) {
			fRec65[l69] = 0.0f;
		}
		for (int l70 = 0; (l70 < 2); l70 = (l70 + 1)) {
			fRec64[l70] = 0.0f;
		}
		for (int l71 = 0; (l71 < 2); l71 = (l71 + 1)) {
			fRec69[l71] = 0.0f;
		}
		for (int l72 = 0; (l72 < 2); l72 = (l72 + 1)) {
			fRec70[l72] = 0.0f;
		}
		for (int l73 = 0; (l73 < 3); l73 = (l73 + 1)) {
			fRec68[l73] = 0.0f;
		}
		for (int l74 = 0; (l74 < 3); l74 = (l74 + 1)) {
			fRec67[l74] = 0.0f;
		}
		for (int l75 = 0; (l75 < 3); l75 = (l75 + 1)) {
			fRec66[l75] = 0.0f;
		}
		for (int l76 = 0; (l76 < 2); l76 = (l76 + 1)) {
			fVec6[l76] = 0.0f;
		}
		for (int l77 = 0; (l77 < 2); l77 = (l77 + 1)) {
			iRec71[l77] = 0;
		}
		for (int l78 = 0; (l78 < 1048576); l78 = (l78 + 1)) {
			fRec62[l78] = 0.0f;
		}
		for (int l79 = 0; (l79 < 2); l79 = (l79 + 1)) {
			fRec73[l79] = 0.0f;
		}
		for (int l80 = 0; (l80 < 2); l80 = (l80 + 1)) {
			fRec75[l80] = 0.0f;
		}
		for (int l81 = 0; (l81 < 2); l81 = (l81 + 1)) {
			fRec74[l81] = 0.0f;
		}
		for (int l82 = 0; (l82 < 2); l82 = (l82 + 1)) {
			fRec79[l82] = 0.0f;
		}
		for (int l83 = 0; (l83 < 2); l83 = (l83 + 1)) {
			fRec80[l83] = 0.0f;
		}
		for (int l84 = 0; (l84 < 3); l84 = (l84 + 1)) {
			fRec78[l84] = 0.0f;
		}
		for (int l85 = 0; (l85 < 3); l85 = (l85 + 1)) {
			fRec77[l85] = 0.0f;
		}
		for (int l86 = 0; (l86 < 3); l86 = (l86 + 1)) {
			fRec76[l86] = 0.0f;
		}
		for (int l87 = 0; (l87 < 2); l87 = (l87 + 1)) {
			fVec7[l87] = 0.0f;
		}
		for (int l88 = 0; (l88 < 2); l88 = (l88 + 1)) {
			iRec81[l88] = 0;
		}
		for (int l89 = 0; (l89 < 1048576); l89 = (l89 + 1)) {
			fRec72[l89] = 0.0f;
		}
		for (int l90 = 0; (l90 < 2); l90 = (l90 + 1)) {
			fRec83[l90] = 0.0f;
		}
		for (int l91 = 0; (l91 < 2); l91 = (l91 + 1)) {
			fRec85[l91] = 0.0f;
		}
		for (int l92 = 0; (l92 < 2); l92 = (l92 + 1)) {
			fRec84[l92] = 0.0f;
		}
		for (int l93 = 0; (l93 < 2); l93 = (l93 + 1)) {
			fRec89[l93] = 0.0f;
		}
		for (int l94 = 0; (l94 < 2); l94 = (l94 + 1)) {
			fRec90[l94] = 0.0f;
		}
		for (int l95 = 0; (l95 < 3); l95 = (l95 + 1)) {
			fRec88[l95] = 0.0f;
		}
		for (int l96 = 0; (l96 < 3); l96 = (l96 + 1)) {
			fRec87[l96] = 0.0f;
		}
		for (int l97 = 0; (l97 < 3); l97 = (l97 + 1)) {
			fRec86[l97] = 0.0f;
		}
		for (int l98 = 0; (l98 < 2); l98 = (l98 + 1)) {
			fVec8[l98] = 0.0f;
		}
		for (int l99 = 0; (l99 < 2); l99 = (l99 + 1)) {
			iRec91[l99] = 0;
		}
		for (int l100 = 0; (l100 < 1048576); l100 = (l100 + 1)) {
			fRec82[l100] = 0.0f;
		}
		for (int l101 = 0; (l101 < 2); l101 = (l101 + 1)) {
			fRec93[l101] = 0.0f;
		}
		for (int l102 = 0; (l102 < 2); l102 = (l102 + 1)) {
			fRec95[l102] = 0.0f;
		}
		for (int l103 = 0; (l103 < 2); l103 = (l103 + 1)) {
			fRec94[l103] = 0.0f;
		}
		for (int l104 = 0; (l104 < 2); l104 = (l104 + 1)) {
			fRec99[l104] = 0.0f;
		}
		for (int l105 = 0; (l105 < 2); l105 = (l105 + 1)) {
			fRec100[l105] = 0.0f;
		}
		for (int l106 = 0; (l106 < 3); l106 = (l106 + 1)) {
			fRec98[l106] = 0.0f;
		}
		for (int l107 = 0; (l107 < 3); l107 = (l107 + 1)) {
			fRec97[l107] = 0.0f;
		}
		for (int l108 = 0; (l108 < 3); l108 = (l108 + 1)) {
			fRec96[l108] = 0.0f;
		}
		for (int l109 = 0; (l109 < 2); l109 = (l109 + 1)) {
			fVec9[l109] = 0.0f;
		}
		for (int l110 = 0; (l110 < 2); l110 = (l110 + 1)) {
			iRec101[l110] = 0;
		}
		for (int l111 = 0; (l111 < 1048576); l111 = (l111 + 1)) {
			fRec92[l111] = 0.0f;
		}
		for (int l112 = 0; (l112 < 2); l112 = (l112 + 1)) {
			fRec103[l112] = 0.0f;
		}
		for (int l113 = 0; (l113 < 2); l113 = (l113 + 1)) {
			fRec105[l113] = 0.0f;
		}
		for (int l114 = 0; (l114 < 2); l114 = (l114 + 1)) {
			fRec104[l114] = 0.0f;
		}
		for (int l115 = 0; (l115 < 2); l115 = (l115 + 1)) {
			fRec109[l115] = 0.0f;
		}
		for (int l116 = 0; (l116 < 2); l116 = (l116 + 1)) {
			fRec110[l116] = 0.0f;
		}
		for (int l117 = 0; (l117 < 3); l117 = (l117 + 1)) {
			fRec108[l117] = 0.0f;
		}
		for (int l118 = 0; (l118 < 3); l118 = (l118 + 1)) {
			fRec107[l118] = 0.0f;
		}
		for (int l119 = 0; (l119 < 3); l119 = (l119 + 1)) {
			fRec106[l119] = 0.0f;
		}
		for (int l120 = 0; (l120 < 2); l120 = (l120 + 1)) {
			fVec10[l120] = 0.0f;
		}
		for (int l121 = 0; (l121 < 2); l121 = (l121 + 1)) {
			iRec111[l121] = 0;
		}
		for (int l122 = 0; (l122 < 1048576); l122 = (l122 + 1)) {
			fRec102[l122] = 0.0f;
		}
		for (int l123 = 0; (l123 < 2); l123 = (l123 + 1)) {
			fRec113[l123] = 0.0f;
		}
		for (int l124 = 0; (l124 < 2); l124 = (l124 + 1)) {
			fRec115[l124] = 0.0f;
		}
		for (int l125 = 0; (l125 < 2); l125 = (l125 + 1)) {
			fRec114[l125] = 0.0f;
		}
		for (int l126 = 0; (l126 < 2); l126 = (l126 + 1)) {
			fRec119[l126] = 0.0f;
		}
		for (int l127 = 0; (l127 < 2); l127 = (l127 + 1)) {
			fRec120[l127] = 0.0f;
		}
		for (int l128 = 0; (l128 < 3); l128 = (l128 + 1)) {
			fRec118[l128] = 0.0f;
		}
		for (int l129 = 0; (l129 < 3); l129 = (l129 + 1)) {
			fRec117[l129] = 0.0f;
		}
		for (int l130 = 0; (l130 < 3); l130 = (l130 + 1)) {
			fRec116[l130] = 0.0f;
		}
		for (int l131 = 0; (l131 < 2); l131 = (l131 + 1)) {
			fVec11[l131] = 0.0f;
		}
		for (int l132 = 0; (l132 < 2); l132 = (l132 + 1)) {
			iRec121[l132] = 0;
		}
		for (int l133 = 0; (l133 < 1048576); l133 = (l133 + 1)) {
			fRec112[l133] = 0.0f;
		}
		for (int l134 = 0; (l134 < 2); l134 = (l134 + 1)) {
			fRec123[l134] = 0.0f;
		}
		for (int l135 = 0; (l135 < 2); l135 = (l135 + 1)) {
			fRec125[l135] = 0.0f;
		}
		for (int l136 = 0; (l136 < 2); l136 = (l136 + 1)) {
			fRec124[l136] = 0.0f;
		}
		for (int l137 = 0; (l137 < 2); l137 = (l137 + 1)) {
			fRec129[l137] = 0.0f;
		}
		for (int l138 = 0; (l138 < 2); l138 = (l138 + 1)) {
			fRec130[l138] = 0.0f;
		}
		for (int l139 = 0; (l139 < 3); l139 = (l139 + 1)) {
			fRec128[l139] = 0.0f;
		}
		for (int l140 = 0; (l140 < 3); l140 = (l140 + 1)) {
			fRec127[l140] = 0.0f;
		}
		for (int l141 = 0; (l141 < 3); l141 = (l141 + 1)) {
			fRec126[l141] = 0.0f;
		}
		for (int l142 = 0; (l142 < 2); l142 = (l142 + 1)) {
			fVec12[l142] = 0.0f;
		}
		for (int l143 = 0; (l143 < 2); l143 = (l143 + 1)) {
			iRec131[l143] = 0;
		}
		for (int l144 = 0; (l144 < 1048576); l144 = (l144 + 1)) {
			fRec122[l144] = 0.0f;
		}
		for (int l145 = 0; (l145 < 2); l145 = (l145 + 1)) {
			fRec133[l145] = 0.0f;
		}
		for (int l146 = 0; (l146 < 2); l146 = (l146 + 1)) {
			fRec135[l146] = 0.0f;
		}
		for (int l147 = 0; (l147 < 2); l147 = (l147 + 1)) {
			fRec134[l147] = 0.0f;
		}
		for (int l148 = 0; (l148 < 2); l148 = (l148 + 1)) {
			fRec139[l148] = 0.0f;
		}
		for (int l149 = 0; (l149 < 2); l149 = (l149 + 1)) {
			fRec140[l149] = 0.0f;
		}
		for (int l150 = 0; (l150 < 3); l150 = (l150 + 1)) {
			fRec138[l150] = 0.0f;
		}
		for (int l151 = 0; (l151 < 3); l151 = (l151 + 1)) {
			fRec137[l151] = 0.0f;
		}
		for (int l152 = 0; (l152 < 3); l152 = (l152 + 1)) {
			fRec136[l152] = 0.0f;
		}
		for (int l153 = 0; (l153 < 2); l153 = (l153 + 1)) {
			fVec13[l153] = 0.0f;
		}
		for (int l154 = 0; (l154 < 2); l154 = (l154 + 1)) {
			iRec141[l154] = 0;
		}
		for (int l155 = 0; (l155 < 1048576); l155 = (l155 + 1)) {
			fRec132[l155] = 0.0f;
		}
		for (int l156 = 0; (l156 < 2); l156 = (l156 + 1)) {
			fRec143[l156] = 0.0f;
		}
		for (int l157 = 0; (l157 < 2); l157 = (l157 + 1)) {
			fRec145[l157] = 0.0f;
		}
		for (int l158 = 0; (l158 < 2); l158 = (l158 + 1)) {
			fRec144[l158] = 0.0f;
		}
		for (int l159 = 0; (l159 < 2); l159 = (l159 + 1)) {
			fRec149[l159] = 0.0f;
		}
		for (int l160 = 0; (l160 < 2); l160 = (l160 + 1)) {
			fRec150[l160] = 0.0f;
		}
		for (int l161 = 0; (l161 < 3); l161 = (l161 + 1)) {
			fRec148[l161] = 0.0f;
		}
		for (int l162 = 0; (l162 < 3); l162 = (l162 + 1)) {
			fRec147[l162] = 0.0f;
		}
		for (int l163 = 0; (l163 < 3); l163 = (l163 + 1)) {
			fRec146[l163] = 0.0f;
		}
		for (int l164 = 0; (l164 < 2); l164 = (l164 + 1)) {
			fVec14[l164] = 0.0f;
		}
		for (int l165 = 0; (l165 < 2); l165 = (l165 + 1)) {
			iRec151[l165] = 0;
		}
		for (int l166 = 0; (l166 < 1048576); l166 = (l166 + 1)) {
			fRec142[l166] = 0.0f;
		}
		for (int l167 = 0; (l167 < 2); l167 = (l167 + 1)) {
			fRec153[l167] = 0.0f;
		}
		for (int l168 = 0; (l168 < 2); l168 = (l168 + 1)) {
			fRec155[l168] = 0.0f;
		}
		for (int l169 = 0; (l169 < 2); l169 = (l169 + 1)) {
			fRec154[l169] = 0.0f;
		}
		for (int l170 = 0; (l170 < 2); l170 = (l170 + 1)) {
			fRec159[l170] = 0.0f;
		}
		for (int l171 = 0; (l171 < 2); l171 = (l171 + 1)) {
			fRec160[l171] = 0.0f;
		}
		for (int l172 = 0; (l172 < 3); l172 = (l172 + 1)) {
			fRec158[l172] = 0.0f;
		}
		for (int l173 = 0; (l173 < 3); l173 = (l173 + 1)) {
			fRec157[l173] = 0.0f;
		}
		for (int l174 = 0; (l174 < 3); l174 = (l174 + 1)) {
			fRec156[l174] = 0.0f;
		}
		for (int l175 = 0; (l175 < 2); l175 = (l175 + 1)) {
			fVec15[l175] = 0.0f;
		}
		for (int l176 = 0; (l176 < 2); l176 = (l176 + 1)) {
			iRec161[l176] = 0;
		}
		for (int l177 = 0; (l177 < 1048576); l177 = (l177 + 1)) {
			fRec152[l177] = 0.0f;
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
		ui_interface->openVerticalBox("BASIS_seq.4.tmp");
		ui_interface->openVerticalBox("Noise");
		ui_interface->addVerticalSlider("volume", &fVslider0, 0.0f, 0.0f, 1.0f, 0.00999999978f);
		ui_interface->closeBox();
		ui_interface->openHorizontalBox("SINUS");
		ui_interface->declare(0, "10", "");
		ui_interface->openVerticalBox("BL0");
		ui_interface->openVerticalBox("Noise");
		ui_interface->declare(&fEntry5, "style", "knob");
		ui_interface->addNumEntry("noiseCO", &fEntry5, 100.0f, 100.0f, 2000.0f, 0.100000001f);
		ui_interface->declare(&fEntry4, "style", "knob");
		ui_interface->addNumEntry("noiseVol", &fEntry4, 1.0f, 0.0f, 8.0f, 0.00100000005f);
		ui_interface->closeBox();
		ui_interface->declare(&fEntry3, "0", "");
		ui_interface->declare(&fEntry3, "style", "knob");
		ui_interface->addNumEntry("freq", &fEntry3, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fVslider1, "1", "");
		ui_interface->addVerticalSlider("gain", &fVslider1, 0.0f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry6, "2", "");
		ui_interface->declare(&fEntry6, "style", "knob");
		ui_interface->addNumEntry("attack", &fEntry6, 0.5f, 0.00999999978f, 5.0f, 0.00999999978f);
		ui_interface->declare(&fEntry7, "3", "");
		ui_interface->declare(&fEntry7, "style", "knob");
		ui_interface->addNumEntry("rel", &fEntry7, 0.5f, 0.00999999978f, 5.0f, 0.00999999978f);
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
		ui_interface->openVerticalBox("Noise");
		ui_interface->declare(&fEntry13, "style", "knob");
		ui_interface->addNumEntry("noiseCO", &fEntry13, 100.0f, 100.0f, 2000.0f, 0.100000001f);
		ui_interface->declare(&fEntry12, "style", "knob");
		ui_interface->addNumEntry("noiseVol", &fEntry12, 1.0f, 0.0f, 8.0f, 0.00100000005f);
		ui_interface->closeBox();
		ui_interface->declare(&fEntry11, "0", "");
		ui_interface->declare(&fEntry11, "style", "knob");
		ui_interface->addNumEntry("freq", &fEntry11, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fVslider2, "1", "");
		ui_interface->addVerticalSlider("gain", &fVslider2, 0.0f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry14, "2", "");
		ui_interface->declare(&fEntry14, "style", "knob");
		ui_interface->addNumEntry("attack", &fEntry14, 0.5f, 0.00999999978f, 5.0f, 0.00999999978f);
		ui_interface->declare(&fEntry15, "3", "");
		ui_interface->declare(&fEntry15, "style", "knob");
		ui_interface->addNumEntry("rel", &fEntry15, 0.5f, 0.00999999978f, 5.0f, 0.00999999978f);
		ui_interface->declare(&fEntry10, "4", "");
		ui_interface->declare(&fEntry10, "style", "knob");
		ui_interface->addNumEntry("dur", &fEntry10, 0.0f, 0.0f, 3.0f, 0.100000001f);
		ui_interface->declare(&fEntry8, "5", "");
		ui_interface->declare(&fEntry8, "style", "knob");
		ui_interface->addNumEntry("fb", &fEntry8, 0.0f, 0.0f, 1.0f, 0.100000001f);
		ui_interface->declare(&fEntry9, "6", "");
		ui_interface->declare(&fEntry9, "style", "knob");
		ui_interface->addNumEntry("maxDur", &fEntry9, 0.0f, 0.0f, 3.0f, 0.100000001f);
		ui_interface->addButton("play", &fButton1);
		ui_interface->closeBox();
		ui_interface->declare(0, "12", "");
		ui_interface->openVerticalBox("BL2");
		ui_interface->openVerticalBox("Noise");
		ui_interface->declare(&fEntry21, "style", "knob");
		ui_interface->addNumEntry("noiseCO", &fEntry21, 100.0f, 100.0f, 2000.0f, 0.100000001f);
		ui_interface->declare(&fEntry20, "style", "knob");
		ui_interface->addNumEntry("noiseVol", &fEntry20, 1.0f, 0.0f, 8.0f, 0.00100000005f);
		ui_interface->closeBox();
		ui_interface->declare(&fEntry19, "0", "");
		ui_interface->declare(&fEntry19, "style", "knob");
		ui_interface->addNumEntry("freq", &fEntry19, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fVslider3, "1", "");
		ui_interface->addVerticalSlider("gain", &fVslider3, 0.0f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry22, "2", "");
		ui_interface->declare(&fEntry22, "style", "knob");
		ui_interface->addNumEntry("attack", &fEntry22, 0.5f, 0.00999999978f, 5.0f, 0.00999999978f);
		ui_interface->declare(&fEntry23, "3", "");
		ui_interface->declare(&fEntry23, "style", "knob");
		ui_interface->addNumEntry("rel", &fEntry23, 0.5f, 0.00999999978f, 5.0f, 0.00999999978f);
		ui_interface->declare(&fEntry18, "4", "");
		ui_interface->declare(&fEntry18, "style", "knob");
		ui_interface->addNumEntry("dur", &fEntry18, 0.0f, 0.0f, 3.0f, 0.100000001f);
		ui_interface->declare(&fEntry16, "5", "");
		ui_interface->declare(&fEntry16, "style", "knob");
		ui_interface->addNumEntry("fb", &fEntry16, 0.0f, 0.0f, 1.0f, 0.100000001f);
		ui_interface->declare(&fEntry17, "6", "");
		ui_interface->declare(&fEntry17, "style", "knob");
		ui_interface->addNumEntry("maxDur", &fEntry17, 0.0f, 0.0f, 3.0f, 0.100000001f);
		ui_interface->addButton("play", &fButton2);
		ui_interface->closeBox();
		ui_interface->declare(0, "13", "");
		ui_interface->openVerticalBox("BL3");
		ui_interface->openVerticalBox("Noise");
		ui_interface->declare(&fEntry29, "style", "knob");
		ui_interface->addNumEntry("noiseCO", &fEntry29, 100.0f, 100.0f, 2000.0f, 0.100000001f);
		ui_interface->declare(&fEntry28, "style", "knob");
		ui_interface->addNumEntry("noiseVol", &fEntry28, 1.0f, 0.0f, 8.0f, 0.00100000005f);
		ui_interface->closeBox();
		ui_interface->declare(&fEntry27, "0", "");
		ui_interface->declare(&fEntry27, "style", "knob");
		ui_interface->addNumEntry("freq", &fEntry27, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fVslider4, "1", "");
		ui_interface->addVerticalSlider("gain", &fVslider4, 0.0f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry30, "2", "");
		ui_interface->declare(&fEntry30, "style", "knob");
		ui_interface->addNumEntry("attack", &fEntry30, 0.5f, 0.00999999978f, 5.0f, 0.00999999978f);
		ui_interface->declare(&fEntry31, "3", "");
		ui_interface->declare(&fEntry31, "style", "knob");
		ui_interface->addNumEntry("rel", &fEntry31, 0.5f, 0.00999999978f, 5.0f, 0.00999999978f);
		ui_interface->declare(&fEntry26, "4", "");
		ui_interface->declare(&fEntry26, "style", "knob");
		ui_interface->addNumEntry("dur", &fEntry26, 0.0f, 0.0f, 3.0f, 0.100000001f);
		ui_interface->declare(&fEntry24, "5", "");
		ui_interface->declare(&fEntry24, "style", "knob");
		ui_interface->addNumEntry("fb", &fEntry24, 0.0f, 0.0f, 1.0f, 0.100000001f);
		ui_interface->declare(&fEntry25, "6", "");
		ui_interface->declare(&fEntry25, "style", "knob");
		ui_interface->addNumEntry("maxDur", &fEntry25, 0.0f, 0.0f, 3.0f, 0.100000001f);
		ui_interface->addButton("play", &fButton3);
		ui_interface->closeBox();
		ui_interface->declare(0, "14", "");
		ui_interface->openVerticalBox("BL4");
		ui_interface->openVerticalBox("Noise");
		ui_interface->declare(&fEntry37, "style", "knob");
		ui_interface->addNumEntry("noiseCO", &fEntry37, 100.0f, 100.0f, 2000.0f, 0.100000001f);
		ui_interface->declare(&fEntry36, "style", "knob");
		ui_interface->addNumEntry("noiseVol", &fEntry36, 1.0f, 0.0f, 8.0f, 0.00100000005f);
		ui_interface->closeBox();
		ui_interface->declare(&fEntry35, "0", "");
		ui_interface->declare(&fEntry35, "style", "knob");
		ui_interface->addNumEntry("freq", &fEntry35, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fVslider5, "1", "");
		ui_interface->addVerticalSlider("gain", &fVslider5, 0.0f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry38, "2", "");
		ui_interface->declare(&fEntry38, "style", "knob");
		ui_interface->addNumEntry("attack", &fEntry38, 0.5f, 0.00999999978f, 5.0f, 0.00999999978f);
		ui_interface->declare(&fEntry39, "3", "");
		ui_interface->declare(&fEntry39, "style", "knob");
		ui_interface->addNumEntry("rel", &fEntry39, 0.5f, 0.00999999978f, 5.0f, 0.00999999978f);
		ui_interface->declare(&fEntry34, "4", "");
		ui_interface->declare(&fEntry34, "style", "knob");
		ui_interface->addNumEntry("dur", &fEntry34, 0.0f, 0.0f, 3.0f, 0.100000001f);
		ui_interface->declare(&fEntry32, "5", "");
		ui_interface->declare(&fEntry32, "style", "knob");
		ui_interface->addNumEntry("fb", &fEntry32, 0.0f, 0.0f, 1.0f, 0.100000001f);
		ui_interface->declare(&fEntry33, "6", "");
		ui_interface->declare(&fEntry33, "style", "knob");
		ui_interface->addNumEntry("maxDur", &fEntry33, 0.0f, 0.0f, 3.0f, 0.100000001f);
		ui_interface->addButton("play", &fButton4);
		ui_interface->closeBox();
		ui_interface->declare(0, "15", "");
		ui_interface->openVerticalBox("BL5");
		ui_interface->openVerticalBox("Noise");
		ui_interface->declare(&fEntry45, "style", "knob");
		ui_interface->addNumEntry("noiseCO", &fEntry45, 100.0f, 100.0f, 2000.0f, 0.100000001f);
		ui_interface->declare(&fEntry44, "style", "knob");
		ui_interface->addNumEntry("noiseVol", &fEntry44, 1.0f, 0.0f, 8.0f, 0.00100000005f);
		ui_interface->closeBox();
		ui_interface->declare(&fEntry43, "0", "");
		ui_interface->declare(&fEntry43, "style", "knob");
		ui_interface->addNumEntry("freq", &fEntry43, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fVslider6, "1", "");
		ui_interface->addVerticalSlider("gain", &fVslider6, 0.0f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry46, "2", "");
		ui_interface->declare(&fEntry46, "style", "knob");
		ui_interface->addNumEntry("attack", &fEntry46, 0.5f, 0.00999999978f, 5.0f, 0.00999999978f);
		ui_interface->declare(&fEntry47, "3", "");
		ui_interface->declare(&fEntry47, "style", "knob");
		ui_interface->addNumEntry("rel", &fEntry47, 0.5f, 0.00999999978f, 5.0f, 0.00999999978f);
		ui_interface->declare(&fEntry42, "4", "");
		ui_interface->declare(&fEntry42, "style", "knob");
		ui_interface->addNumEntry("dur", &fEntry42, 0.0f, 0.0f, 3.0f, 0.100000001f);
		ui_interface->declare(&fEntry40, "5", "");
		ui_interface->declare(&fEntry40, "style", "knob");
		ui_interface->addNumEntry("fb", &fEntry40, 0.0f, 0.0f, 1.0f, 0.100000001f);
		ui_interface->declare(&fEntry41, "6", "");
		ui_interface->declare(&fEntry41, "style", "knob");
		ui_interface->addNumEntry("maxDur", &fEntry41, 0.0f, 0.0f, 3.0f, 0.100000001f);
		ui_interface->addButton("play", &fButton5);
		ui_interface->closeBox();
		ui_interface->declare(0, "16", "");
		ui_interface->openVerticalBox("BL6");
		ui_interface->openVerticalBox("Noise");
		ui_interface->declare(&fEntry53, "style", "knob");
		ui_interface->addNumEntry("noiseCO", &fEntry53, 100.0f, 100.0f, 2000.0f, 0.100000001f);
		ui_interface->declare(&fEntry52, "style", "knob");
		ui_interface->addNumEntry("noiseVol", &fEntry52, 1.0f, 0.0f, 8.0f, 0.00100000005f);
		ui_interface->closeBox();
		ui_interface->declare(&fEntry51, "0", "");
		ui_interface->declare(&fEntry51, "style", "knob");
		ui_interface->addNumEntry("freq", &fEntry51, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fVslider7, "1", "");
		ui_interface->addVerticalSlider("gain", &fVslider7, 0.0f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry54, "2", "");
		ui_interface->declare(&fEntry54, "style", "knob");
		ui_interface->addNumEntry("attack", &fEntry54, 0.5f, 0.00999999978f, 5.0f, 0.00999999978f);
		ui_interface->declare(&fEntry55, "3", "");
		ui_interface->declare(&fEntry55, "style", "knob");
		ui_interface->addNumEntry("rel", &fEntry55, 0.5f, 0.00999999978f, 5.0f, 0.00999999978f);
		ui_interface->declare(&fEntry50, "4", "");
		ui_interface->declare(&fEntry50, "style", "knob");
		ui_interface->addNumEntry("dur", &fEntry50, 0.0f, 0.0f, 3.0f, 0.100000001f);
		ui_interface->declare(&fEntry48, "5", "");
		ui_interface->declare(&fEntry48, "style", "knob");
		ui_interface->addNumEntry("fb", &fEntry48, 0.0f, 0.0f, 1.0f, 0.100000001f);
		ui_interface->declare(&fEntry49, "6", "");
		ui_interface->declare(&fEntry49, "style", "knob");
		ui_interface->addNumEntry("maxDur", &fEntry49, 0.0f, 0.0f, 3.0f, 0.100000001f);
		ui_interface->addButton("play", &fButton6);
		ui_interface->closeBox();
		ui_interface->declare(0, "17", "");
		ui_interface->openVerticalBox("BL7");
		ui_interface->openVerticalBox("Noise");
		ui_interface->declare(&fEntry61, "style", "knob");
		ui_interface->addNumEntry("noiseCO", &fEntry61, 100.0f, 100.0f, 2000.0f, 0.100000001f);
		ui_interface->declare(&fEntry60, "style", "knob");
		ui_interface->addNumEntry("noiseVol", &fEntry60, 1.0f, 0.0f, 8.0f, 0.00100000005f);
		ui_interface->closeBox();
		ui_interface->declare(&fEntry59, "0", "");
		ui_interface->declare(&fEntry59, "style", "knob");
		ui_interface->addNumEntry("freq", &fEntry59, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fVslider8, "1", "");
		ui_interface->addVerticalSlider("gain", &fVslider8, 0.0f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry62, "2", "");
		ui_interface->declare(&fEntry62, "style", "knob");
		ui_interface->addNumEntry("attack", &fEntry62, 0.5f, 0.00999999978f, 5.0f, 0.00999999978f);
		ui_interface->declare(&fEntry63, "3", "");
		ui_interface->declare(&fEntry63, "style", "knob");
		ui_interface->addNumEntry("rel", &fEntry63, 0.5f, 0.00999999978f, 5.0f, 0.00999999978f);
		ui_interface->declare(&fEntry58, "4", "");
		ui_interface->declare(&fEntry58, "style", "knob");
		ui_interface->addNumEntry("dur", &fEntry58, 0.0f, 0.0f, 3.0f, 0.100000001f);
		ui_interface->declare(&fEntry56, "5", "");
		ui_interface->declare(&fEntry56, "style", "knob");
		ui_interface->addNumEntry("fb", &fEntry56, 0.0f, 0.0f, 1.0f, 0.100000001f);
		ui_interface->declare(&fEntry57, "6", "");
		ui_interface->declare(&fEntry57, "style", "knob");
		ui_interface->addNumEntry("maxDur", &fEntry57, 0.0f, 0.0f, 3.0f, 0.100000001f);
		ui_interface->addButton("play", &fButton7);
		ui_interface->closeBox();
		ui_interface->declare(0, "18", "");
		ui_interface->openVerticalBox("BL8");
		ui_interface->openVerticalBox("Noise");
		ui_interface->declare(&fEntry69, "style", "knob");
		ui_interface->addNumEntry("noiseCO", &fEntry69, 100.0f, 100.0f, 2000.0f, 0.100000001f);
		ui_interface->declare(&fEntry68, "style", "knob");
		ui_interface->addNumEntry("noiseVol", &fEntry68, 1.0f, 0.0f, 8.0f, 0.00100000005f);
		ui_interface->closeBox();
		ui_interface->declare(&fEntry67, "0", "");
		ui_interface->declare(&fEntry67, "style", "knob");
		ui_interface->addNumEntry("freq", &fEntry67, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fVslider9, "1", "");
		ui_interface->addVerticalSlider("gain", &fVslider9, 0.0f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry70, "2", "");
		ui_interface->declare(&fEntry70, "style", "knob");
		ui_interface->addNumEntry("attack", &fEntry70, 0.5f, 0.00999999978f, 5.0f, 0.00999999978f);
		ui_interface->declare(&fEntry71, "3", "");
		ui_interface->declare(&fEntry71, "style", "knob");
		ui_interface->addNumEntry("rel", &fEntry71, 0.5f, 0.00999999978f, 5.0f, 0.00999999978f);
		ui_interface->declare(&fEntry66, "4", "");
		ui_interface->declare(&fEntry66, "style", "knob");
		ui_interface->addNumEntry("dur", &fEntry66, 0.0f, 0.0f, 3.0f, 0.100000001f);
		ui_interface->declare(&fEntry64, "5", "");
		ui_interface->declare(&fEntry64, "style", "knob");
		ui_interface->addNumEntry("fb", &fEntry64, 0.0f, 0.0f, 1.0f, 0.100000001f);
		ui_interface->declare(&fEntry65, "6", "");
		ui_interface->declare(&fEntry65, "style", "knob");
		ui_interface->addNumEntry("maxDur", &fEntry65, 0.0f, 0.0f, 3.0f, 0.100000001f);
		ui_interface->addButton("play", &fButton8);
		ui_interface->closeBox();
		ui_interface->declare(0, "19", "");
		ui_interface->openVerticalBox("BL9");
		ui_interface->openVerticalBox("Noise");
		ui_interface->declare(&fEntry77, "style", "knob");
		ui_interface->addNumEntry("noiseCO", &fEntry77, 100.0f, 100.0f, 2000.0f, 0.100000001f);
		ui_interface->declare(&fEntry76, "style", "knob");
		ui_interface->addNumEntry("noiseVol", &fEntry76, 1.0f, 0.0f, 8.0f, 0.00100000005f);
		ui_interface->closeBox();
		ui_interface->declare(&fEntry75, "0", "");
		ui_interface->declare(&fEntry75, "style", "knob");
		ui_interface->addNumEntry("freq", &fEntry75, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fVslider10, "1", "");
		ui_interface->addVerticalSlider("gain", &fVslider10, 0.0f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry78, "2", "");
		ui_interface->declare(&fEntry78, "style", "knob");
		ui_interface->addNumEntry("attack", &fEntry78, 0.5f, 0.00999999978f, 5.0f, 0.00999999978f);
		ui_interface->declare(&fEntry79, "3", "");
		ui_interface->declare(&fEntry79, "style", "knob");
		ui_interface->addNumEntry("rel", &fEntry79, 0.5f, 0.00999999978f, 5.0f, 0.00999999978f);
		ui_interface->declare(&fEntry74, "4", "");
		ui_interface->declare(&fEntry74, "style", "knob");
		ui_interface->addNumEntry("dur", &fEntry74, 0.0f, 0.0f, 3.0f, 0.100000001f);
		ui_interface->declare(&fEntry72, "5", "");
		ui_interface->declare(&fEntry72, "style", "knob");
		ui_interface->addNumEntry("fb", &fEntry72, 0.0f, 0.0f, 1.0f, 0.100000001f);
		ui_interface->declare(&fEntry73, "6", "");
		ui_interface->declare(&fEntry73, "style", "knob");
		ui_interface->addNumEntry("maxDur", &fEntry73, 0.0f, 0.0f, 3.0f, 0.100000001f);
		ui_interface->addButton("play", &fButton9);
		ui_interface->closeBox();
		ui_interface->declare(0, "20", "");
		ui_interface->openVerticalBox("BL10");
		ui_interface->openVerticalBox("Noise");
		ui_interface->declare(&fEntry85, "style", "knob");
		ui_interface->addNumEntry("noiseCO", &fEntry85, 100.0f, 100.0f, 2000.0f, 0.100000001f);
		ui_interface->declare(&fEntry84, "style", "knob");
		ui_interface->addNumEntry("noiseVol", &fEntry84, 1.0f, 0.0f, 8.0f, 0.00100000005f);
		ui_interface->closeBox();
		ui_interface->declare(&fEntry83, "0", "");
		ui_interface->declare(&fEntry83, "style", "knob");
		ui_interface->addNumEntry("freq", &fEntry83, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fVslider11, "1", "");
		ui_interface->addVerticalSlider("gain", &fVslider11, 0.0f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry86, "2", "");
		ui_interface->declare(&fEntry86, "style", "knob");
		ui_interface->addNumEntry("attack", &fEntry86, 0.5f, 0.00999999978f, 5.0f, 0.00999999978f);
		ui_interface->declare(&fEntry87, "3", "");
		ui_interface->declare(&fEntry87, "style", "knob");
		ui_interface->addNumEntry("rel", &fEntry87, 0.5f, 0.00999999978f, 5.0f, 0.00999999978f);
		ui_interface->declare(&fEntry82, "4", "");
		ui_interface->declare(&fEntry82, "style", "knob");
		ui_interface->addNumEntry("dur", &fEntry82, 0.0f, 0.0f, 3.0f, 0.100000001f);
		ui_interface->declare(&fEntry80, "5", "");
		ui_interface->declare(&fEntry80, "style", "knob");
		ui_interface->addNumEntry("fb", &fEntry80, 0.0f, 0.0f, 1.0f, 0.100000001f);
		ui_interface->declare(&fEntry81, "6", "");
		ui_interface->declare(&fEntry81, "style", "knob");
		ui_interface->addNumEntry("maxDur", &fEntry81, 0.0f, 0.0f, 3.0f, 0.100000001f);
		ui_interface->addButton("play", &fButton10);
		ui_interface->closeBox();
		ui_interface->declare(0, "21", "");
		ui_interface->openVerticalBox("BL11");
		ui_interface->openVerticalBox("Noise");
		ui_interface->declare(&fEntry93, "style", "knob");
		ui_interface->addNumEntry("noiseCO", &fEntry93, 100.0f, 100.0f, 2000.0f, 0.100000001f);
		ui_interface->declare(&fEntry92, "style", "knob");
		ui_interface->addNumEntry("noiseVol", &fEntry92, 1.0f, 0.0f, 8.0f, 0.00100000005f);
		ui_interface->closeBox();
		ui_interface->declare(&fEntry91, "0", "");
		ui_interface->declare(&fEntry91, "style", "knob");
		ui_interface->addNumEntry("freq", &fEntry91, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fVslider12, "1", "");
		ui_interface->addVerticalSlider("gain", &fVslider12, 0.0f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry94, "2", "");
		ui_interface->declare(&fEntry94, "style", "knob");
		ui_interface->addNumEntry("attack", &fEntry94, 0.5f, 0.00999999978f, 5.0f, 0.00999999978f);
		ui_interface->declare(&fEntry95, "3", "");
		ui_interface->declare(&fEntry95, "style", "knob");
		ui_interface->addNumEntry("rel", &fEntry95, 0.5f, 0.00999999978f, 5.0f, 0.00999999978f);
		ui_interface->declare(&fEntry90, "4", "");
		ui_interface->declare(&fEntry90, "style", "knob");
		ui_interface->addNumEntry("dur", &fEntry90, 0.0f, 0.0f, 3.0f, 0.100000001f);
		ui_interface->declare(&fEntry88, "5", "");
		ui_interface->declare(&fEntry88, "style", "knob");
		ui_interface->addNumEntry("fb", &fEntry88, 0.0f, 0.0f, 1.0f, 0.100000001f);
		ui_interface->declare(&fEntry89, "6", "");
		ui_interface->declare(&fEntry89, "style", "knob");
		ui_interface->addNumEntry("maxDur", &fEntry89, 0.0f, 0.0f, 3.0f, 0.100000001f);
		ui_interface->addButton("play", &fButton11);
		ui_interface->closeBox();
		ui_interface->declare(0, "22", "");
		ui_interface->openVerticalBox("BL12");
		ui_interface->openVerticalBox("Noise");
		ui_interface->declare(&fEntry101, "style", "knob");
		ui_interface->addNumEntry("noiseCO", &fEntry101, 100.0f, 100.0f, 2000.0f, 0.100000001f);
		ui_interface->declare(&fEntry100, "style", "knob");
		ui_interface->addNumEntry("noiseVol", &fEntry100, 1.0f, 0.0f, 8.0f, 0.00100000005f);
		ui_interface->closeBox();
		ui_interface->declare(&fEntry99, "0", "");
		ui_interface->declare(&fEntry99, "style", "knob");
		ui_interface->addNumEntry("freq", &fEntry99, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fVslider13, "1", "");
		ui_interface->addVerticalSlider("gain", &fVslider13, 0.0f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry102, "2", "");
		ui_interface->declare(&fEntry102, "style", "knob");
		ui_interface->addNumEntry("attack", &fEntry102, 0.5f, 0.00999999978f, 5.0f, 0.00999999978f);
		ui_interface->declare(&fEntry103, "3", "");
		ui_interface->declare(&fEntry103, "style", "knob");
		ui_interface->addNumEntry("rel", &fEntry103, 0.5f, 0.00999999978f, 5.0f, 0.00999999978f);
		ui_interface->declare(&fEntry98, "4", "");
		ui_interface->declare(&fEntry98, "style", "knob");
		ui_interface->addNumEntry("dur", &fEntry98, 0.0f, 0.0f, 3.0f, 0.100000001f);
		ui_interface->declare(&fEntry96, "5", "");
		ui_interface->declare(&fEntry96, "style", "knob");
		ui_interface->addNumEntry("fb", &fEntry96, 0.0f, 0.0f, 1.0f, 0.100000001f);
		ui_interface->declare(&fEntry97, "6", "");
		ui_interface->declare(&fEntry97, "style", "knob");
		ui_interface->addNumEntry("maxDur", &fEntry97, 0.0f, 0.0f, 3.0f, 0.100000001f);
		ui_interface->addButton("play", &fButton12);
		ui_interface->closeBox();
		ui_interface->declare(0, "23", "");
		ui_interface->openVerticalBox("BL13");
		ui_interface->openVerticalBox("Noise");
		ui_interface->declare(&fEntry109, "style", "knob");
		ui_interface->addNumEntry("noiseCO", &fEntry109, 100.0f, 100.0f, 2000.0f, 0.100000001f);
		ui_interface->declare(&fEntry108, "style", "knob");
		ui_interface->addNumEntry("noiseVol", &fEntry108, 1.0f, 0.0f, 8.0f, 0.00100000005f);
		ui_interface->closeBox();
		ui_interface->declare(&fEntry107, "0", "");
		ui_interface->declare(&fEntry107, "style", "knob");
		ui_interface->addNumEntry("freq", &fEntry107, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fVslider14, "1", "");
		ui_interface->addVerticalSlider("gain", &fVslider14, 0.0f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry110, "2", "");
		ui_interface->declare(&fEntry110, "style", "knob");
		ui_interface->addNumEntry("attack", &fEntry110, 0.5f, 0.00999999978f, 5.0f, 0.00999999978f);
		ui_interface->declare(&fEntry111, "3", "");
		ui_interface->declare(&fEntry111, "style", "knob");
		ui_interface->addNumEntry("rel", &fEntry111, 0.5f, 0.00999999978f, 5.0f, 0.00999999978f);
		ui_interface->declare(&fEntry106, "4", "");
		ui_interface->declare(&fEntry106, "style", "knob");
		ui_interface->addNumEntry("dur", &fEntry106, 0.0f, 0.0f, 3.0f, 0.100000001f);
		ui_interface->declare(&fEntry104, "5", "");
		ui_interface->declare(&fEntry104, "style", "knob");
		ui_interface->addNumEntry("fb", &fEntry104, 0.0f, 0.0f, 1.0f, 0.100000001f);
		ui_interface->declare(&fEntry105, "6", "");
		ui_interface->declare(&fEntry105, "style", "knob");
		ui_interface->addNumEntry("maxDur", &fEntry105, 0.0f, 0.0f, 3.0f, 0.100000001f);
		ui_interface->addButton("play", &fButton13);
		ui_interface->closeBox();
		ui_interface->declare(0, "24", "");
		ui_interface->openVerticalBox("BL14");
		ui_interface->openVerticalBox("Noise");
		ui_interface->declare(&fEntry117, "style", "knob");
		ui_interface->addNumEntry("noiseCO", &fEntry117, 100.0f, 100.0f, 2000.0f, 0.100000001f);
		ui_interface->declare(&fEntry116, "style", "knob");
		ui_interface->addNumEntry("noiseVol", &fEntry116, 1.0f, 0.0f, 8.0f, 0.00100000005f);
		ui_interface->closeBox();
		ui_interface->declare(&fEntry115, "0", "");
		ui_interface->declare(&fEntry115, "style", "knob");
		ui_interface->addNumEntry("freq", &fEntry115, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fVslider15, "1", "");
		ui_interface->addVerticalSlider("gain", &fVslider15, 0.0f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry118, "2", "");
		ui_interface->declare(&fEntry118, "style", "knob");
		ui_interface->addNumEntry("attack", &fEntry118, 0.5f, 0.00999999978f, 5.0f, 0.00999999978f);
		ui_interface->declare(&fEntry119, "3", "");
		ui_interface->declare(&fEntry119, "style", "knob");
		ui_interface->addNumEntry("rel", &fEntry119, 0.5f, 0.00999999978f, 5.0f, 0.00999999978f);
		ui_interface->declare(&fEntry114, "4", "");
		ui_interface->declare(&fEntry114, "style", "knob");
		ui_interface->addNumEntry("dur", &fEntry114, 0.0f, 0.0f, 3.0f, 0.100000001f);
		ui_interface->declare(&fEntry112, "5", "");
		ui_interface->declare(&fEntry112, "style", "knob");
		ui_interface->addNumEntry("fb", &fEntry112, 0.0f, 0.0f, 1.0f, 0.100000001f);
		ui_interface->declare(&fEntry113, "6", "");
		ui_interface->declare(&fEntry113, "style", "knob");
		ui_interface->addNumEntry("maxDur", &fEntry113, 0.0f, 0.0f, 3.0f, 0.100000001f);
		ui_interface->addButton("play", &fButton14);
		ui_interface->closeBox();
		ui_interface->declare(0, "25", "");
		ui_interface->openVerticalBox("BL15");
		ui_interface->openVerticalBox("Noise");
		ui_interface->declare(&fEntry125, "style", "knob");
		ui_interface->addNumEntry("noiseCO", &fEntry125, 100.0f, 100.0f, 2000.0f, 0.100000001f);
		ui_interface->declare(&fEntry124, "style", "knob");
		ui_interface->addNumEntry("noiseVol", &fEntry124, 1.0f, 0.0f, 8.0f, 0.00100000005f);
		ui_interface->closeBox();
		ui_interface->declare(&fEntry123, "0", "");
		ui_interface->declare(&fEntry123, "style", "knob");
		ui_interface->addNumEntry("freq", &fEntry123, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fVslider16, "1", "");
		ui_interface->addVerticalSlider("gain", &fVslider16, 0.0f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry126, "2", "");
		ui_interface->declare(&fEntry126, "style", "knob");
		ui_interface->addNumEntry("attack", &fEntry126, 0.5f, 0.00999999978f, 5.0f, 0.00999999978f);
		ui_interface->declare(&fEntry127, "3", "");
		ui_interface->declare(&fEntry127, "style", "knob");
		ui_interface->addNumEntry("rel", &fEntry127, 0.5f, 0.00999999978f, 5.0f, 0.00999999978f);
		ui_interface->declare(&fEntry122, "4", "");
		ui_interface->declare(&fEntry122, "style", "knob");
		ui_interface->addNumEntry("dur", &fEntry122, 0.0f, 0.0f, 3.0f, 0.100000001f);
		ui_interface->declare(&fEntry120, "5", "");
		ui_interface->declare(&fEntry120, "style", "knob");
		ui_interface->addNumEntry("fb", &fEntry120, 0.0f, 0.0f, 1.0f, 0.100000001f);
		ui_interface->declare(&fEntry121, "6", "");
		ui_interface->declare(&fEntry121, "style", "knob");
		ui_interface->addNumEntry("maxDur", &fEntry121, 0.0f, 0.0f, 3.0f, 0.100000001f);
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
		float fSlow6 = (0.00100000005f * float(fEntry5));
		float fSlow7 = std::max<float>(1.0f, (fConst0 * float(fEntry6)));
		float fSlow8 = (1.0f / fSlow7);
		float fSlow9 = float(fButton0);
		float fSlow10 = (1.0f / std::max<float>(1.0f, (fConst0 * float(fEntry7))));
		float fSlow11 = float(fEntry8);
		int iSlow12 = (int(std::min<float>((fConst0 * float(fEntry9)), std::max<float>(0.0f, (fConst0 * float(fEntry10))))) + 1);
		float fSlow13 = (0.00100000005f * std::sqrt(float(fVslider2)));
		float fSlow14 = (0.00100000005f * float(fEntry11));
		float fSlow15 = (0.00100000005f * float(fEntry12));
		float fSlow16 = (0.00100000005f * float(fEntry13));
		float fSlow17 = std::max<float>(1.0f, (fConst0 * float(fEntry14)));
		float fSlow18 = (1.0f / fSlow17);
		float fSlow19 = float(fButton1);
		float fSlow20 = (1.0f / std::max<float>(1.0f, (fConst0 * float(fEntry15))));
		float fSlow21 = float(fEntry16);
		int iSlow22 = (int(std::min<float>((fConst0 * float(fEntry17)), std::max<float>(0.0f, (fConst0 * float(fEntry18))))) + 1);
		float fSlow23 = (0.00100000005f * std::sqrt(float(fVslider3)));
		float fSlow24 = (0.00100000005f * float(fEntry19));
		float fSlow25 = (0.00100000005f * float(fEntry20));
		float fSlow26 = (0.00100000005f * float(fEntry21));
		float fSlow27 = std::max<float>(1.0f, (fConst0 * float(fEntry22)));
		float fSlow28 = (1.0f / fSlow27);
		float fSlow29 = float(fButton2);
		float fSlow30 = (1.0f / std::max<float>(1.0f, (fConst0 * float(fEntry23))));
		float fSlow31 = float(fEntry24);
		int iSlow32 = (int(std::min<float>((fConst0 * float(fEntry25)), std::max<float>(0.0f, (fConst0 * float(fEntry26))))) + 1);
		float fSlow33 = (0.00100000005f * std::sqrt(float(fVslider4)));
		float fSlow34 = (0.00100000005f * float(fEntry27));
		float fSlow35 = (0.00100000005f * float(fEntry28));
		float fSlow36 = (0.00100000005f * float(fEntry29));
		float fSlow37 = std::max<float>(1.0f, (fConst0 * float(fEntry30)));
		float fSlow38 = (1.0f / fSlow37);
		float fSlow39 = float(fButton3);
		float fSlow40 = (1.0f / std::max<float>(1.0f, (fConst0 * float(fEntry31))));
		float fSlow41 = float(fEntry32);
		int iSlow42 = (int(std::min<float>((fConst0 * float(fEntry33)), std::max<float>(0.0f, (fConst0 * float(fEntry34))))) + 1);
		float fSlow43 = (0.00100000005f * std::sqrt(float(fVslider5)));
		float fSlow44 = (0.00100000005f * float(fEntry35));
		float fSlow45 = (0.00100000005f * float(fEntry36));
		float fSlow46 = (0.00100000005f * float(fEntry37));
		float fSlow47 = std::max<float>(1.0f, (fConst0 * float(fEntry38)));
		float fSlow48 = (1.0f / fSlow47);
		float fSlow49 = float(fButton4);
		float fSlow50 = (1.0f / std::max<float>(1.0f, (fConst0 * float(fEntry39))));
		float fSlow51 = float(fEntry40);
		int iSlow52 = (int(std::min<float>((fConst0 * float(fEntry41)), std::max<float>(0.0f, (fConst0 * float(fEntry42))))) + 1);
		float fSlow53 = (0.00100000005f * std::sqrt(float(fVslider6)));
		float fSlow54 = (0.00100000005f * float(fEntry43));
		float fSlow55 = (0.00100000005f * float(fEntry44));
		float fSlow56 = (0.00100000005f * float(fEntry45));
		float fSlow57 = std::max<float>(1.0f, (fConst0 * float(fEntry46)));
		float fSlow58 = (1.0f / fSlow57);
		float fSlow59 = float(fButton5);
		float fSlow60 = (1.0f / std::max<float>(1.0f, (fConst0 * float(fEntry47))));
		float fSlow61 = float(fEntry48);
		int iSlow62 = (int(std::min<float>((fConst0 * float(fEntry49)), std::max<float>(0.0f, (fConst0 * float(fEntry50))))) + 1);
		float fSlow63 = (0.00100000005f * std::sqrt(float(fVslider7)));
		float fSlow64 = (0.00100000005f * float(fEntry51));
		float fSlow65 = (0.00100000005f * float(fEntry52));
		float fSlow66 = (0.00100000005f * float(fEntry53));
		float fSlow67 = std::max<float>(1.0f, (fConst0 * float(fEntry54)));
		float fSlow68 = (1.0f / fSlow67);
		float fSlow69 = float(fButton6);
		float fSlow70 = (1.0f / std::max<float>(1.0f, (fConst0 * float(fEntry55))));
		float fSlow71 = float(fEntry56);
		int iSlow72 = (int(std::min<float>((fConst0 * float(fEntry57)), std::max<float>(0.0f, (fConst0 * float(fEntry58))))) + 1);
		float fSlow73 = (0.00100000005f * std::sqrt(float(fVslider8)));
		float fSlow74 = (0.00100000005f * float(fEntry59));
		float fSlow75 = (0.00100000005f * float(fEntry60));
		float fSlow76 = (0.00100000005f * float(fEntry61));
		float fSlow77 = std::max<float>(1.0f, (fConst0 * float(fEntry62)));
		float fSlow78 = (1.0f / fSlow77);
		float fSlow79 = float(fButton7);
		float fSlow80 = (1.0f / std::max<float>(1.0f, (fConst0 * float(fEntry63))));
		float fSlow81 = float(fEntry64);
		int iSlow82 = (int(std::min<float>((fConst0 * float(fEntry65)), std::max<float>(0.0f, (fConst0 * float(fEntry66))))) + 1);
		float fSlow83 = (0.00100000005f * std::sqrt(float(fVslider9)));
		float fSlow84 = (0.00100000005f * float(fEntry67));
		float fSlow85 = (0.00100000005f * float(fEntry68));
		float fSlow86 = (0.00100000005f * float(fEntry69));
		float fSlow87 = std::max<float>(1.0f, (fConst0 * float(fEntry70)));
		float fSlow88 = (1.0f / fSlow87);
		float fSlow89 = float(fButton8);
		float fSlow90 = (1.0f / std::max<float>(1.0f, (fConst0 * float(fEntry71))));
		float fSlow91 = float(fEntry72);
		int iSlow92 = (int(std::min<float>((fConst0 * float(fEntry73)), std::max<float>(0.0f, (fConst0 * float(fEntry74))))) + 1);
		float fSlow93 = (0.00100000005f * std::sqrt(float(fVslider10)));
		float fSlow94 = (0.00100000005f * float(fEntry75));
		float fSlow95 = (0.00100000005f * float(fEntry76));
		float fSlow96 = (0.00100000005f * float(fEntry77));
		float fSlow97 = std::max<float>(1.0f, (fConst0 * float(fEntry78)));
		float fSlow98 = (1.0f / fSlow97);
		float fSlow99 = float(fButton9);
		float fSlow100 = (1.0f / std::max<float>(1.0f, (fConst0 * float(fEntry79))));
		float fSlow101 = float(fEntry80);
		int iSlow102 = (int(std::min<float>((fConst0 * float(fEntry81)), std::max<float>(0.0f, (fConst0 * float(fEntry82))))) + 1);
		float fSlow103 = (0.00100000005f * std::sqrt(float(fVslider11)));
		float fSlow104 = (0.00100000005f * float(fEntry83));
		float fSlow105 = (0.00100000005f * float(fEntry84));
		float fSlow106 = (0.00100000005f * float(fEntry85));
		float fSlow107 = std::max<float>(1.0f, (fConst0 * float(fEntry86)));
		float fSlow108 = (1.0f / fSlow107);
		float fSlow109 = float(fButton10);
		float fSlow110 = (1.0f / std::max<float>(1.0f, (fConst0 * float(fEntry87))));
		float fSlow111 = float(fEntry88);
		int iSlow112 = (int(std::min<float>((fConst0 * float(fEntry89)), std::max<float>(0.0f, (fConst0 * float(fEntry90))))) + 1);
		float fSlow113 = (0.00100000005f * std::sqrt(float(fVslider12)));
		float fSlow114 = (0.00100000005f * float(fEntry91));
		float fSlow115 = (0.00100000005f * float(fEntry92));
		float fSlow116 = (0.00100000005f * float(fEntry93));
		float fSlow117 = std::max<float>(1.0f, (fConst0 * float(fEntry94)));
		float fSlow118 = (1.0f / fSlow117);
		float fSlow119 = float(fButton11);
		float fSlow120 = (1.0f / std::max<float>(1.0f, (fConst0 * float(fEntry95))));
		float fSlow121 = float(fEntry96);
		int iSlow122 = (int(std::min<float>((fConst0 * float(fEntry97)), std::max<float>(0.0f, (fConst0 * float(fEntry98))))) + 1);
		float fSlow123 = (0.00100000005f * std::sqrt(float(fVslider13)));
		float fSlow124 = (0.00100000005f * float(fEntry99));
		float fSlow125 = (0.00100000005f * float(fEntry100));
		float fSlow126 = (0.00100000005f * float(fEntry101));
		float fSlow127 = std::max<float>(1.0f, (fConst0 * float(fEntry102)));
		float fSlow128 = (1.0f / fSlow127);
		float fSlow129 = float(fButton12);
		float fSlow130 = (1.0f / std::max<float>(1.0f, (fConst0 * float(fEntry103))));
		float fSlow131 = float(fEntry104);
		int iSlow132 = (int(std::min<float>((fConst0 * float(fEntry105)), std::max<float>(0.0f, (fConst0 * float(fEntry106))))) + 1);
		float fSlow133 = (0.00100000005f * std::sqrt(float(fVslider14)));
		float fSlow134 = (0.00100000005f * float(fEntry107));
		float fSlow135 = (0.00100000005f * float(fEntry108));
		float fSlow136 = (0.00100000005f * float(fEntry109));
		float fSlow137 = std::max<float>(1.0f, (fConst0 * float(fEntry110)));
		float fSlow138 = (1.0f / fSlow137);
		float fSlow139 = float(fButton13);
		float fSlow140 = (1.0f / std::max<float>(1.0f, (fConst0 * float(fEntry111))));
		float fSlow141 = float(fEntry112);
		int iSlow142 = (int(std::min<float>((fConst0 * float(fEntry113)), std::max<float>(0.0f, (fConst0 * float(fEntry114))))) + 1);
		float fSlow143 = (0.00100000005f * std::sqrt(float(fVslider15)));
		float fSlow144 = (0.00100000005f * float(fEntry115));
		float fSlow145 = (0.00100000005f * float(fEntry116));
		float fSlow146 = (0.00100000005f * float(fEntry117));
		float fSlow147 = std::max<float>(1.0f, (fConst0 * float(fEntry118)));
		float fSlow148 = (1.0f / fSlow147);
		float fSlow149 = float(fButton14);
		float fSlow150 = (1.0f / std::max<float>(1.0f, (fConst0 * float(fEntry119))));
		float fSlow151 = float(fEntry120);
		int iSlow152 = (int(std::min<float>((fConst0 * float(fEntry121)), std::max<float>(0.0f, (fConst0 * float(fEntry122))))) + 1);
		float fSlow153 = (0.00100000005f * std::sqrt(float(fVslider16)));
		float fSlow154 = (0.00100000005f * float(fEntry123));
		float fSlow155 = (0.00100000005f * float(fEntry124));
		float fSlow156 = (0.00100000005f * float(fEntry125));
		float fSlow157 = std::max<float>(1.0f, (fConst0 * float(fEntry126)));
		float fSlow158 = (1.0f / fSlow157);
		float fSlow159 = float(fButton15);
		float fSlow160 = (1.0f / std::max<float>(1.0f, (fConst0 * float(fEntry127))));
		for (int i = 0; (i < count); i = (i + 1)) {
			fRec1[0] = (fSlow3 + (0.999000013f * fRec1[1]));
			fRec4[0] = (fSlow4 + (0.999000013f * fRec4[1]));
			float fTemp0 = (fRec3[1] + (fConst1 * fRec4[0]));
			fRec3[0] = (fTemp0 - std::floor(fTemp0));
			fRec8[0] = (fSlow5 + (0.999000013f * fRec8[1]));
			iRec9[0] = ((1103515245 * iRec9[1]) + 12345);
			float fTemp1 = float(iRec9[0]);
			fRec10[0] = (fSlow6 + (0.999000013f * fRec10[1]));
			float fTemp2 = std::tan((fConst2 * fRec10[0]));
			float fTemp3 = (1.0f / fTemp2);
			float fTemp4 = (1.0f - (1.0f / mydsp_faustpower2_f(fTemp2)));
			float fTemp5 = (((fTemp3 + 1.93185163f) / fTemp2) + 1.0f);
			fRec7[0] = ((4.65661287e-10f * (fRec8[0] * fTemp1)) - (((fRec7[2] * (((fTemp3 + -1.93185163f) / fTemp2) + 1.0f)) + (2.0f * (fRec7[1] * fTemp4))) / fTemp5));
			float fTemp6 = (((fTemp3 + 1.41421354f) / fTemp2) + 1.0f);
			fRec6[0] = (((fRec7[2] + (fRec7[0] + (2.0f * fRec7[1]))) / fTemp5) - (((fRec6[2] * (((fTemp3 + -1.41421354f) / fTemp2) + 1.0f)) + (2.0f * (fTemp4 * fRec6[1]))) / fTemp6));
			float fTemp7 = (((fTemp3 + 0.517638087f) / fTemp2) + 1.0f);
			fRec5[0] = (((fRec6[2] + (fRec6[0] + (2.0f * fRec6[1]))) / fTemp6) - (((fRec5[2] * (((fTemp3 + -0.517638087f) / fTemp2) + 1.0f)) + (2.0f * (fTemp4 * fRec5[1]))) / fTemp7));
			fVec0[0] = fSlow9;
			iRec11[0] = (((iRec11[1] + (iRec11[1] > 0)) * (fSlow9 <= fVec0[1])) + (fSlow9 > fVec0[1]));
			float fTemp8 = float(iRec11[0]);
			fRec0[(IOTA & 1048575)] = ((fSlow1 * fRec0[((IOTA - iSlow2) & 1048575)]) + ((fRec1[0] * (ftbl0mydspSIG0[int((65536.0f * fRec3[0]))] + ((fRec5[2] + (fRec5[0] + (2.0f * fRec5[1]))) / fTemp7))) * std::max<float>(0.0f, std::min<float>((fSlow8 * fTemp8), ((fSlow10 * (fSlow7 - fTemp8)) + 1.0f)))));
			fRec13[0] = (fSlow13 + (0.999000013f * fRec13[1]));
			fRec15[0] = (fSlow14 + (0.999000013f * fRec15[1]));
			float fTemp9 = (fRec14[1] + (fConst1 * fRec15[0]));
			fRec14[0] = (fTemp9 - std::floor(fTemp9));
			fRec19[0] = (fSlow15 + (0.999000013f * fRec19[1]));
			fRec20[0] = (fSlow16 + (0.999000013f * fRec20[1]));
			float fTemp10 = std::tan((fConst2 * fRec20[0]));
			float fTemp11 = (1.0f / fTemp10);
			float fTemp12 = (1.0f - (1.0f / mydsp_faustpower2_f(fTemp10)));
			float fTemp13 = (((fTemp11 + 1.93185163f) / fTemp10) + 1.0f);
			fRec18[0] = ((4.65661287e-10f * (fRec19[0] * fTemp1)) - (((fRec18[2] * (((fTemp11 + -1.93185163f) / fTemp10) + 1.0f)) + (2.0f * (fRec18[1] * fTemp12))) / fTemp13));
			float fTemp14 = (((fTemp11 + 1.41421354f) / fTemp10) + 1.0f);
			fRec17[0] = (((fRec18[2] + (fRec18[0] + (2.0f * fRec18[1]))) / fTemp13) - (((fRec17[2] * (((fTemp11 + -1.41421354f) / fTemp10) + 1.0f)) + (2.0f * (fTemp12 * fRec17[1]))) / fTemp14));
			float fTemp15 = (((fTemp11 + 0.517638087f) / fTemp10) + 1.0f);
			fRec16[0] = (((fRec17[2] + (fRec17[0] + (2.0f * fRec17[1]))) / fTemp14) - (((fRec16[2] * (((fTemp11 + -0.517638087f) / fTemp10) + 1.0f)) + (2.0f * (fTemp12 * fRec16[1]))) / fTemp15));
			fVec1[0] = fSlow19;
			iRec21[0] = (((iRec21[1] + (iRec21[1] > 0)) * (fSlow19 <= fVec1[1])) + (fSlow19 > fVec1[1]));
			float fTemp16 = float(iRec21[0]);
			fRec12[(IOTA & 1048575)] = ((fSlow11 * fRec12[((IOTA - iSlow12) & 1048575)]) + ((fRec13[0] * (ftbl0mydspSIG0[int((65536.0f * fRec14[0]))] + ((fRec16[2] + (fRec16[0] + (2.0f * fRec16[1]))) / fTemp15))) * std::max<float>(0.0f, std::min<float>((fSlow18 * fTemp16), ((fSlow20 * (fSlow17 - fTemp16)) + 1.0f)))));
			fRec23[0] = (fSlow23 + (0.999000013f * fRec23[1]));
			fRec25[0] = (fSlow24 + (0.999000013f * fRec25[1]));
			float fTemp17 = (fRec24[1] + (fConst1 * fRec25[0]));
			fRec24[0] = (fTemp17 - std::floor(fTemp17));
			fRec29[0] = (fSlow25 + (0.999000013f * fRec29[1]));
			fRec30[0] = (fSlow26 + (0.999000013f * fRec30[1]));
			float fTemp18 = std::tan((fConst2 * fRec30[0]));
			float fTemp19 = (1.0f / fTemp18);
			float fTemp20 = (1.0f - (1.0f / mydsp_faustpower2_f(fTemp18)));
			float fTemp21 = (((fTemp19 + 1.93185163f) / fTemp18) + 1.0f);
			fRec28[0] = ((4.65661287e-10f * (fRec29[0] * fTemp1)) - (((fRec28[2] * (((fTemp19 + -1.93185163f) / fTemp18) + 1.0f)) + (2.0f * (fRec28[1] * fTemp20))) / fTemp21));
			float fTemp22 = (((fTemp19 + 1.41421354f) / fTemp18) + 1.0f);
			fRec27[0] = (((fRec28[2] + (fRec28[0] + (2.0f * fRec28[1]))) / fTemp21) - (((fRec27[2] * (((fTemp19 + -1.41421354f) / fTemp18) + 1.0f)) + (2.0f * (fTemp20 * fRec27[1]))) / fTemp22));
			float fTemp23 = (((fTemp19 + 0.517638087f) / fTemp18) + 1.0f);
			fRec26[0] = (((fRec27[2] + (fRec27[0] + (2.0f * fRec27[1]))) / fTemp22) - (((fRec26[2] * (((fTemp19 + -0.517638087f) / fTemp18) + 1.0f)) + (2.0f * (fTemp20 * fRec26[1]))) / fTemp23));
			fVec2[0] = fSlow29;
			iRec31[0] = (((iRec31[1] + (iRec31[1] > 0)) * (fSlow29 <= fVec2[1])) + (fSlow29 > fVec2[1]));
			float fTemp24 = float(iRec31[0]);
			fRec22[(IOTA & 1048575)] = ((fSlow21 * fRec22[((IOTA - iSlow22) & 1048575)]) + ((fRec23[0] * (ftbl0mydspSIG0[int((65536.0f * fRec24[0]))] + ((fRec26[2] + (fRec26[0] + (2.0f * fRec26[1]))) / fTemp23))) * std::max<float>(0.0f, std::min<float>((fSlow28 * fTemp24), ((fSlow30 * (fSlow27 - fTemp24)) + 1.0f)))));
			fRec33[0] = (fSlow33 + (0.999000013f * fRec33[1]));
			fRec35[0] = (fSlow34 + (0.999000013f * fRec35[1]));
			float fTemp25 = (fRec34[1] + (fConst1 * fRec35[0]));
			fRec34[0] = (fTemp25 - std::floor(fTemp25));
			fRec39[0] = (fSlow35 + (0.999000013f * fRec39[1]));
			fRec40[0] = (fSlow36 + (0.999000013f * fRec40[1]));
			float fTemp26 = std::tan((fConst2 * fRec40[0]));
			float fTemp27 = (1.0f / fTemp26);
			float fTemp28 = (1.0f - (1.0f / mydsp_faustpower2_f(fTemp26)));
			float fTemp29 = (((fTemp27 + 1.93185163f) / fTemp26) + 1.0f);
			fRec38[0] = ((4.65661287e-10f * (fRec39[0] * fTemp1)) - (((fRec38[2] * (((fTemp27 + -1.93185163f) / fTemp26) + 1.0f)) + (2.0f * (fRec38[1] * fTemp28))) / fTemp29));
			float fTemp30 = (((fTemp27 + 1.41421354f) / fTemp26) + 1.0f);
			fRec37[0] = (((fRec38[2] + (fRec38[0] + (2.0f * fRec38[1]))) / fTemp29) - (((fRec37[2] * (((fTemp27 + -1.41421354f) / fTemp26) + 1.0f)) + (2.0f * (fTemp28 * fRec37[1]))) / fTemp30));
			float fTemp31 = (((fTemp27 + 0.517638087f) / fTemp26) + 1.0f);
			fRec36[0] = (((fRec37[2] + (fRec37[0] + (2.0f * fRec37[1]))) / fTemp30) - (((fRec36[2] * (((fTemp27 + -0.517638087f) / fTemp26) + 1.0f)) + (2.0f * (fTemp28 * fRec36[1]))) / fTemp31));
			fVec3[0] = fSlow39;
			iRec41[0] = (((iRec41[1] + (iRec41[1] > 0)) * (fSlow39 <= fVec3[1])) + (fSlow39 > fVec3[1]));
			float fTemp32 = float(iRec41[0]);
			fRec32[(IOTA & 1048575)] = ((fSlow31 * fRec32[((IOTA - iSlow32) & 1048575)]) + ((fRec33[0] * (ftbl0mydspSIG0[int((65536.0f * fRec34[0]))] + ((fRec36[2] + (fRec36[0] + (2.0f * fRec36[1]))) / fTemp31))) * std::max<float>(0.0f, std::min<float>((fSlow38 * fTemp32), ((fSlow40 * (fSlow37 - fTemp32)) + 1.0f)))));
			fRec43[0] = (fSlow43 + (0.999000013f * fRec43[1]));
			fRec45[0] = (fSlow44 + (0.999000013f * fRec45[1]));
			float fTemp33 = (fRec44[1] + (fConst1 * fRec45[0]));
			fRec44[0] = (fTemp33 - std::floor(fTemp33));
			fRec49[0] = (fSlow45 + (0.999000013f * fRec49[1]));
			fRec50[0] = (fSlow46 + (0.999000013f * fRec50[1]));
			float fTemp34 = std::tan((fConst2 * fRec50[0]));
			float fTemp35 = (1.0f / fTemp34);
			float fTemp36 = (1.0f - (1.0f / mydsp_faustpower2_f(fTemp34)));
			float fTemp37 = (((fTemp35 + 1.93185163f) / fTemp34) + 1.0f);
			fRec48[0] = ((4.65661287e-10f * (fRec49[0] * fTemp1)) - (((fRec48[2] * (((fTemp35 + -1.93185163f) / fTemp34) + 1.0f)) + (2.0f * (fRec48[1] * fTemp36))) / fTemp37));
			float fTemp38 = (((fTemp35 + 1.41421354f) / fTemp34) + 1.0f);
			fRec47[0] = (((fRec48[2] + (fRec48[0] + (2.0f * fRec48[1]))) / fTemp37) - (((fRec47[2] * (((fTemp35 + -1.41421354f) / fTemp34) + 1.0f)) + (2.0f * (fTemp36 * fRec47[1]))) / fTemp38));
			float fTemp39 = (((fTemp35 + 0.517638087f) / fTemp34) + 1.0f);
			fRec46[0] = (((fRec47[2] + (fRec47[0] + (2.0f * fRec47[1]))) / fTemp38) - (((fRec46[2] * (((fTemp35 + -0.517638087f) / fTemp34) + 1.0f)) + (2.0f * (fTemp36 * fRec46[1]))) / fTemp39));
			fVec4[0] = fSlow49;
			iRec51[0] = (((iRec51[1] + (iRec51[1] > 0)) * (fSlow49 <= fVec4[1])) + (fSlow49 > fVec4[1]));
			float fTemp40 = float(iRec51[0]);
			fRec42[(IOTA & 1048575)] = ((fSlow41 * fRec42[((IOTA - iSlow42) & 1048575)]) + ((fRec43[0] * (ftbl0mydspSIG0[int((65536.0f * fRec44[0]))] + ((fRec46[2] + (fRec46[0] + (2.0f * fRec46[1]))) / fTemp39))) * std::max<float>(0.0f, std::min<float>((fSlow48 * fTemp40), ((fSlow50 * (fSlow47 - fTemp40)) + 1.0f)))));
			fRec53[0] = (fSlow53 + (0.999000013f * fRec53[1]));
			fRec55[0] = (fSlow54 + (0.999000013f * fRec55[1]));
			float fTemp41 = (fRec54[1] + (fConst1 * fRec55[0]));
			fRec54[0] = (fTemp41 - std::floor(fTemp41));
			fRec59[0] = (fSlow55 + (0.999000013f * fRec59[1]));
			fRec60[0] = (fSlow56 + (0.999000013f * fRec60[1]));
			float fTemp42 = std::tan((fConst2 * fRec60[0]));
			float fTemp43 = (1.0f / fTemp42);
			float fTemp44 = (1.0f - (1.0f / mydsp_faustpower2_f(fTemp42)));
			float fTemp45 = (((fTemp43 + 1.93185163f) / fTemp42) + 1.0f);
			fRec58[0] = ((4.65661287e-10f * (fRec59[0] * fTemp1)) - (((fRec58[2] * (((fTemp43 + -1.93185163f) / fTemp42) + 1.0f)) + (2.0f * (fRec58[1] * fTemp44))) / fTemp45));
			float fTemp46 = (((fTemp43 + 1.41421354f) / fTemp42) + 1.0f);
			fRec57[0] = (((fRec58[2] + (fRec58[0] + (2.0f * fRec58[1]))) / fTemp45) - (((fRec57[2] * (((fTemp43 + -1.41421354f) / fTemp42) + 1.0f)) + (2.0f * (fTemp44 * fRec57[1]))) / fTemp46));
			float fTemp47 = (((fTemp43 + 0.517638087f) / fTemp42) + 1.0f);
			fRec56[0] = (((fRec57[2] + (fRec57[0] + (2.0f * fRec57[1]))) / fTemp46) - (((fRec56[2] * (((fTemp43 + -0.517638087f) / fTemp42) + 1.0f)) + (2.0f * (fTemp44 * fRec56[1]))) / fTemp47));
			fVec5[0] = fSlow59;
			iRec61[0] = (((iRec61[1] + (iRec61[1] > 0)) * (fSlow59 <= fVec5[1])) + (fSlow59 > fVec5[1]));
			float fTemp48 = float(iRec61[0]);
			fRec52[(IOTA & 1048575)] = ((fSlow51 * fRec52[((IOTA - iSlow52) & 1048575)]) + ((fRec53[0] * (ftbl0mydspSIG0[int((65536.0f * fRec54[0]))] + ((fRec56[2] + (fRec56[0] + (2.0f * fRec56[1]))) / fTemp47))) * std::max<float>(0.0f, std::min<float>((fSlow58 * fTemp48), ((fSlow60 * (fSlow57 - fTemp48)) + 1.0f)))));
			fRec63[0] = (fSlow63 + (0.999000013f * fRec63[1]));
			fRec65[0] = (fSlow64 + (0.999000013f * fRec65[1]));
			float fTemp49 = (fRec64[1] + (fConst1 * fRec65[0]));
			fRec64[0] = (fTemp49 - std::floor(fTemp49));
			fRec69[0] = (fSlow65 + (0.999000013f * fRec69[1]));
			fRec70[0] = (fSlow66 + (0.999000013f * fRec70[1]));
			float fTemp50 = std::tan((fConst2 * fRec70[0]));
			float fTemp51 = (1.0f / fTemp50);
			float fTemp52 = (1.0f - (1.0f / mydsp_faustpower2_f(fTemp50)));
			float fTemp53 = (((fTemp51 + 1.93185163f) / fTemp50) + 1.0f);
			fRec68[0] = ((4.65661287e-10f * (fRec69[0] * fTemp1)) - (((fRec68[2] * (((fTemp51 + -1.93185163f) / fTemp50) + 1.0f)) + (2.0f * (fRec68[1] * fTemp52))) / fTemp53));
			float fTemp54 = (((fTemp51 + 1.41421354f) / fTemp50) + 1.0f);
			fRec67[0] = (((fRec68[2] + (fRec68[0] + (2.0f * fRec68[1]))) / fTemp53) - (((fRec67[2] * (((fTemp51 + -1.41421354f) / fTemp50) + 1.0f)) + (2.0f * (fTemp52 * fRec67[1]))) / fTemp54));
			float fTemp55 = (((fTemp51 + 0.517638087f) / fTemp50) + 1.0f);
			fRec66[0] = (((fRec67[2] + (fRec67[0] + (2.0f * fRec67[1]))) / fTemp54) - (((fRec66[2] * (((fTemp51 + -0.517638087f) / fTemp50) + 1.0f)) + (2.0f * (fTemp52 * fRec66[1]))) / fTemp55));
			fVec6[0] = fSlow69;
			iRec71[0] = (((iRec71[1] + (iRec71[1] > 0)) * (fSlow69 <= fVec6[1])) + (fSlow69 > fVec6[1]));
			float fTemp56 = float(iRec71[0]);
			fRec62[(IOTA & 1048575)] = ((fSlow61 * fRec62[((IOTA - iSlow62) & 1048575)]) + ((fRec63[0] * (ftbl0mydspSIG0[int((65536.0f * fRec64[0]))] + ((fRec66[2] + (fRec66[0] + (2.0f * fRec66[1]))) / fTemp55))) * std::max<float>(0.0f, std::min<float>((fSlow68 * fTemp56), ((fSlow70 * (fSlow67 - fTemp56)) + 1.0f)))));
			fRec73[0] = (fSlow73 + (0.999000013f * fRec73[1]));
			fRec75[0] = (fSlow74 + (0.999000013f * fRec75[1]));
			float fTemp57 = (fRec74[1] + (fConst1 * fRec75[0]));
			fRec74[0] = (fTemp57 - std::floor(fTemp57));
			fRec79[0] = (fSlow75 + (0.999000013f * fRec79[1]));
			fRec80[0] = (fSlow76 + (0.999000013f * fRec80[1]));
			float fTemp58 = std::tan((fConst2 * fRec80[0]));
			float fTemp59 = (1.0f / fTemp58);
			float fTemp60 = (1.0f - (1.0f / mydsp_faustpower2_f(fTemp58)));
			float fTemp61 = (((fTemp59 + 1.93185163f) / fTemp58) + 1.0f);
			fRec78[0] = ((4.65661287e-10f * (fRec79[0] * fTemp1)) - (((fRec78[2] * (((fTemp59 + -1.93185163f) / fTemp58) + 1.0f)) + (2.0f * (fRec78[1] * fTemp60))) / fTemp61));
			float fTemp62 = (((fTemp59 + 1.41421354f) / fTemp58) + 1.0f);
			fRec77[0] = (((fRec78[2] + (fRec78[0] + (2.0f * fRec78[1]))) / fTemp61) - (((fRec77[2] * (((fTemp59 + -1.41421354f) / fTemp58) + 1.0f)) + (2.0f * (fTemp60 * fRec77[1]))) / fTemp62));
			float fTemp63 = (((fTemp59 + 0.517638087f) / fTemp58) + 1.0f);
			fRec76[0] = (((fRec77[2] + (fRec77[0] + (2.0f * fRec77[1]))) / fTemp62) - (((fRec76[2] * (((fTemp59 + -0.517638087f) / fTemp58) + 1.0f)) + (2.0f * (fTemp60 * fRec76[1]))) / fTemp63));
			fVec7[0] = fSlow79;
			iRec81[0] = (((iRec81[1] + (iRec81[1] > 0)) * (fSlow79 <= fVec7[1])) + (fSlow79 > fVec7[1]));
			float fTemp64 = float(iRec81[0]);
			fRec72[(IOTA & 1048575)] = ((fSlow71 * fRec72[((IOTA - iSlow72) & 1048575)]) + ((fRec73[0] * (ftbl0mydspSIG0[int((65536.0f * fRec74[0]))] + ((fRec76[2] + (fRec76[0] + (2.0f * fRec76[1]))) / fTemp63))) * std::max<float>(0.0f, std::min<float>((fSlow78 * fTemp64), ((fSlow80 * (fSlow77 - fTemp64)) + 1.0f)))));
			fRec83[0] = (fSlow83 + (0.999000013f * fRec83[1]));
			fRec85[0] = (fSlow84 + (0.999000013f * fRec85[1]));
			float fTemp65 = (fRec84[1] + (fConst1 * fRec85[0]));
			fRec84[0] = (fTemp65 - std::floor(fTemp65));
			fRec89[0] = (fSlow85 + (0.999000013f * fRec89[1]));
			fRec90[0] = (fSlow86 + (0.999000013f * fRec90[1]));
			float fTemp66 = std::tan((fConst2 * fRec90[0]));
			float fTemp67 = (1.0f / fTemp66);
			float fTemp68 = (1.0f - (1.0f / mydsp_faustpower2_f(fTemp66)));
			float fTemp69 = (((fTemp67 + 1.93185163f) / fTemp66) + 1.0f);
			fRec88[0] = ((4.65661287e-10f * (fRec89[0] * fTemp1)) - (((fRec88[2] * (((fTemp67 + -1.93185163f) / fTemp66) + 1.0f)) + (2.0f * (fRec88[1] * fTemp68))) / fTemp69));
			float fTemp70 = (((fTemp67 + 1.41421354f) / fTemp66) + 1.0f);
			fRec87[0] = (((fRec88[2] + (fRec88[0] + (2.0f * fRec88[1]))) / fTemp69) - (((fRec87[2] * (((fTemp67 + -1.41421354f) / fTemp66) + 1.0f)) + (2.0f * (fTemp68 * fRec87[1]))) / fTemp70));
			float fTemp71 = (((fTemp67 + 0.517638087f) / fTemp66) + 1.0f);
			fRec86[0] = (((fRec87[2] + (fRec87[0] + (2.0f * fRec87[1]))) / fTemp70) - (((fRec86[2] * (((fTemp67 + -0.517638087f) / fTemp66) + 1.0f)) + (2.0f * (fTemp68 * fRec86[1]))) / fTemp71));
			fVec8[0] = fSlow89;
			iRec91[0] = (((iRec91[1] + (iRec91[1] > 0)) * (fSlow89 <= fVec8[1])) + (fSlow89 > fVec8[1]));
			float fTemp72 = float(iRec91[0]);
			fRec82[(IOTA & 1048575)] = ((fSlow81 * fRec82[((IOTA - iSlow82) & 1048575)]) + ((fRec83[0] * (ftbl0mydspSIG0[int((65536.0f * fRec84[0]))] + ((fRec86[2] + (fRec86[0] + (2.0f * fRec86[1]))) / fTemp71))) * std::max<float>(0.0f, std::min<float>((fSlow88 * fTemp72), ((fSlow90 * (fSlow87 - fTemp72)) + 1.0f)))));
			fRec93[0] = (fSlow93 + (0.999000013f * fRec93[1]));
			fRec95[0] = (fSlow94 + (0.999000013f * fRec95[1]));
			float fTemp73 = (fRec94[1] + (fConst1 * fRec95[0]));
			fRec94[0] = (fTemp73 - std::floor(fTemp73));
			fRec99[0] = (fSlow95 + (0.999000013f * fRec99[1]));
			fRec100[0] = (fSlow96 + (0.999000013f * fRec100[1]));
			float fTemp74 = std::tan((fConst2 * fRec100[0]));
			float fTemp75 = (1.0f / fTemp74);
			float fTemp76 = (1.0f - (1.0f / mydsp_faustpower2_f(fTemp74)));
			float fTemp77 = (((fTemp75 + 1.93185163f) / fTemp74) + 1.0f);
			fRec98[0] = ((4.65661287e-10f * (fRec99[0] * fTemp1)) - (((fRec98[2] * (((fTemp75 + -1.93185163f) / fTemp74) + 1.0f)) + (2.0f * (fRec98[1] * fTemp76))) / fTemp77));
			float fTemp78 = (((fTemp75 + 1.41421354f) / fTemp74) + 1.0f);
			fRec97[0] = (((fRec98[2] + (fRec98[0] + (2.0f * fRec98[1]))) / fTemp77) - (((fRec97[2] * (((fTemp75 + -1.41421354f) / fTemp74) + 1.0f)) + (2.0f * (fTemp76 * fRec97[1]))) / fTemp78));
			float fTemp79 = (((fTemp75 + 0.517638087f) / fTemp74) + 1.0f);
			fRec96[0] = (((fRec97[2] + (fRec97[0] + (2.0f * fRec97[1]))) / fTemp78) - (((fRec96[2] * (((fTemp75 + -0.517638087f) / fTemp74) + 1.0f)) + (2.0f * (fTemp76 * fRec96[1]))) / fTemp79));
			fVec9[0] = fSlow99;
			iRec101[0] = (((iRec101[1] + (iRec101[1] > 0)) * (fSlow99 <= fVec9[1])) + (fSlow99 > fVec9[1]));
			float fTemp80 = float(iRec101[0]);
			fRec92[(IOTA & 1048575)] = ((fSlow91 * fRec92[((IOTA - iSlow92) & 1048575)]) + ((fRec93[0] * (ftbl0mydspSIG0[int((65536.0f * fRec94[0]))] + ((fRec96[2] + (fRec96[0] + (2.0f * fRec96[1]))) / fTemp79))) * std::max<float>(0.0f, std::min<float>((fSlow98 * fTemp80), ((fSlow100 * (fSlow97 - fTemp80)) + 1.0f)))));
			fRec103[0] = (fSlow103 + (0.999000013f * fRec103[1]));
			fRec105[0] = (fSlow104 + (0.999000013f * fRec105[1]));
			float fTemp81 = (fRec104[1] + (fConst1 * fRec105[0]));
			fRec104[0] = (fTemp81 - std::floor(fTemp81));
			fRec109[0] = (fSlow105 + (0.999000013f * fRec109[1]));
			fRec110[0] = (fSlow106 + (0.999000013f * fRec110[1]));
			float fTemp82 = std::tan((fConst2 * fRec110[0]));
			float fTemp83 = (1.0f / fTemp82);
			float fTemp84 = (1.0f - (1.0f / mydsp_faustpower2_f(fTemp82)));
			float fTemp85 = (((fTemp83 + 1.93185163f) / fTemp82) + 1.0f);
			fRec108[0] = ((4.65661287e-10f * (fRec109[0] * fTemp1)) - (((fRec108[2] * (((fTemp83 + -1.93185163f) / fTemp82) + 1.0f)) + (2.0f * (fRec108[1] * fTemp84))) / fTemp85));
			float fTemp86 = (((fTemp83 + 1.41421354f) / fTemp82) + 1.0f);
			fRec107[0] = (((fRec108[2] + (fRec108[0] + (2.0f * fRec108[1]))) / fTemp85) - (((fRec107[2] * (((fTemp83 + -1.41421354f) / fTemp82) + 1.0f)) + (2.0f * (fTemp84 * fRec107[1]))) / fTemp86));
			float fTemp87 = (((fTemp83 + 0.517638087f) / fTemp82) + 1.0f);
			fRec106[0] = (((fRec107[2] + (fRec107[0] + (2.0f * fRec107[1]))) / fTemp86) - (((fRec106[2] * (((fTemp83 + -0.517638087f) / fTemp82) + 1.0f)) + (2.0f * (fTemp84 * fRec106[1]))) / fTemp87));
			fVec10[0] = fSlow109;
			iRec111[0] = (((iRec111[1] + (iRec111[1] > 0)) * (fSlow109 <= fVec10[1])) + (fSlow109 > fVec10[1]));
			float fTemp88 = float(iRec111[0]);
			fRec102[(IOTA & 1048575)] = ((fSlow101 * fRec102[((IOTA - iSlow102) & 1048575)]) + ((fRec103[0] * (ftbl0mydspSIG0[int((65536.0f * fRec104[0]))] + ((fRec106[2] + (fRec106[0] + (2.0f * fRec106[1]))) / fTemp87))) * std::max<float>(0.0f, std::min<float>((fSlow108 * fTemp88), ((fSlow110 * (fSlow107 - fTemp88)) + 1.0f)))));
			fRec113[0] = (fSlow113 + (0.999000013f * fRec113[1]));
			fRec115[0] = (fSlow114 + (0.999000013f * fRec115[1]));
			float fTemp89 = (fRec114[1] + (fConst1 * fRec115[0]));
			fRec114[0] = (fTemp89 - std::floor(fTemp89));
			fRec119[0] = (fSlow115 + (0.999000013f * fRec119[1]));
			fRec120[0] = (fSlow116 + (0.999000013f * fRec120[1]));
			float fTemp90 = std::tan((fConst2 * fRec120[0]));
			float fTemp91 = (1.0f / fTemp90);
			float fTemp92 = (1.0f - (1.0f / mydsp_faustpower2_f(fTemp90)));
			float fTemp93 = (((fTemp91 + 1.93185163f) / fTemp90) + 1.0f);
			fRec118[0] = ((4.65661287e-10f * (fRec119[0] * fTemp1)) - (((fRec118[2] * (((fTemp91 + -1.93185163f) / fTemp90) + 1.0f)) + (2.0f * (fRec118[1] * fTemp92))) / fTemp93));
			float fTemp94 = (((fTemp91 + 1.41421354f) / fTemp90) + 1.0f);
			fRec117[0] = (((fRec118[2] + (fRec118[0] + (2.0f * fRec118[1]))) / fTemp93) - (((fRec117[2] * (((fTemp91 + -1.41421354f) / fTemp90) + 1.0f)) + (2.0f * (fTemp92 * fRec117[1]))) / fTemp94));
			float fTemp95 = (((fTemp91 + 0.517638087f) / fTemp90) + 1.0f);
			fRec116[0] = (((fRec117[2] + (fRec117[0] + (2.0f * fRec117[1]))) / fTemp94) - (((fRec116[2] * (((fTemp91 + -0.517638087f) / fTemp90) + 1.0f)) + (2.0f * (fTemp92 * fRec116[1]))) / fTemp95));
			fVec11[0] = fSlow119;
			iRec121[0] = (((iRec121[1] + (iRec121[1] > 0)) * (fSlow119 <= fVec11[1])) + (fSlow119 > fVec11[1]));
			float fTemp96 = float(iRec121[0]);
			fRec112[(IOTA & 1048575)] = ((fSlow111 * fRec112[((IOTA - iSlow112) & 1048575)]) + ((fRec113[0] * (ftbl0mydspSIG0[int((65536.0f * fRec114[0]))] + ((fRec116[2] + (fRec116[0] + (2.0f * fRec116[1]))) / fTemp95))) * std::max<float>(0.0f, std::min<float>((fSlow118 * fTemp96), ((fSlow120 * (fSlow117 - fTemp96)) + 1.0f)))));
			fRec123[0] = (fSlow123 + (0.999000013f * fRec123[1]));
			fRec125[0] = (fSlow124 + (0.999000013f * fRec125[1]));
			float fTemp97 = (fRec124[1] + (fConst1 * fRec125[0]));
			fRec124[0] = (fTemp97 - std::floor(fTemp97));
			fRec129[0] = (fSlow125 + (0.999000013f * fRec129[1]));
			fRec130[0] = (fSlow126 + (0.999000013f * fRec130[1]));
			float fTemp98 = std::tan((fConst2 * fRec130[0]));
			float fTemp99 = (1.0f / fTemp98);
			float fTemp100 = (1.0f - (1.0f / mydsp_faustpower2_f(fTemp98)));
			float fTemp101 = (((fTemp99 + 1.93185163f) / fTemp98) + 1.0f);
			fRec128[0] = ((4.65661287e-10f * (fRec129[0] * fTemp1)) - (((fRec128[2] * (((fTemp99 + -1.93185163f) / fTemp98) + 1.0f)) + (2.0f * (fRec128[1] * fTemp100))) / fTemp101));
			float fTemp102 = (((fTemp99 + 1.41421354f) / fTemp98) + 1.0f);
			fRec127[0] = (((fRec128[2] + (fRec128[0] + (2.0f * fRec128[1]))) / fTemp101) - (((fRec127[2] * (((fTemp99 + -1.41421354f) / fTemp98) + 1.0f)) + (2.0f * (fTemp100 * fRec127[1]))) / fTemp102));
			float fTemp103 = (((fTemp99 + 0.517638087f) / fTemp98) + 1.0f);
			fRec126[0] = (((fRec127[2] + (fRec127[0] + (2.0f * fRec127[1]))) / fTemp102) - (((fRec126[2] * (((fTemp99 + -0.517638087f) / fTemp98) + 1.0f)) + (2.0f * (fTemp100 * fRec126[1]))) / fTemp103));
			fVec12[0] = fSlow129;
			iRec131[0] = (((iRec131[1] + (iRec131[1] > 0)) * (fSlow129 <= fVec12[1])) + (fSlow129 > fVec12[1]));
			float fTemp104 = float(iRec131[0]);
			fRec122[(IOTA & 1048575)] = ((fSlow121 * fRec122[((IOTA - iSlow122) & 1048575)]) + ((fRec123[0] * (ftbl0mydspSIG0[int((65536.0f * fRec124[0]))] + ((fRec126[2] + (fRec126[0] + (2.0f * fRec126[1]))) / fTemp103))) * std::max<float>(0.0f, std::min<float>((fSlow128 * fTemp104), ((fSlow130 * (fSlow127 - fTemp104)) + 1.0f)))));
			fRec133[0] = (fSlow133 + (0.999000013f * fRec133[1]));
			fRec135[0] = (fSlow134 + (0.999000013f * fRec135[1]));
			float fTemp105 = (fRec134[1] + (fConst1 * fRec135[0]));
			fRec134[0] = (fTemp105 - std::floor(fTemp105));
			fRec139[0] = (fSlow135 + (0.999000013f * fRec139[1]));
			fRec140[0] = (fSlow136 + (0.999000013f * fRec140[1]));
			float fTemp106 = std::tan((fConst2 * fRec140[0]));
			float fTemp107 = (1.0f / fTemp106);
			float fTemp108 = (1.0f - (1.0f / mydsp_faustpower2_f(fTemp106)));
			float fTemp109 = (((fTemp107 + 1.93185163f) / fTemp106) + 1.0f);
			fRec138[0] = ((4.65661287e-10f * (fRec139[0] * fTemp1)) - (((fRec138[2] * (((fTemp107 + -1.93185163f) / fTemp106) + 1.0f)) + (2.0f * (fRec138[1] * fTemp108))) / fTemp109));
			float fTemp110 = (((fTemp107 + 1.41421354f) / fTemp106) + 1.0f);
			fRec137[0] = (((fRec138[2] + (fRec138[0] + (2.0f * fRec138[1]))) / fTemp109) - (((fRec137[2] * (((fTemp107 + -1.41421354f) / fTemp106) + 1.0f)) + (2.0f * (fTemp108 * fRec137[1]))) / fTemp110));
			float fTemp111 = (((fTemp107 + 0.517638087f) / fTemp106) + 1.0f);
			fRec136[0] = (((fRec137[2] + (fRec137[0] + (2.0f * fRec137[1]))) / fTemp110) - (((fRec136[2] * (((fTemp107 + -0.517638087f) / fTemp106) + 1.0f)) + (2.0f * (fTemp108 * fRec136[1]))) / fTemp111));
			fVec13[0] = fSlow139;
			iRec141[0] = (((iRec141[1] + (iRec141[1] > 0)) * (fSlow139 <= fVec13[1])) + (fSlow139 > fVec13[1]));
			float fTemp112 = float(iRec141[0]);
			fRec132[(IOTA & 1048575)] = ((fSlow131 * fRec132[((IOTA - iSlow132) & 1048575)]) + ((fRec133[0] * (ftbl0mydspSIG0[int((65536.0f * fRec134[0]))] + ((fRec136[2] + (fRec136[0] + (2.0f * fRec136[1]))) / fTemp111))) * std::max<float>(0.0f, std::min<float>((fSlow138 * fTemp112), ((fSlow140 * (fSlow137 - fTemp112)) + 1.0f)))));
			fRec143[0] = (fSlow143 + (0.999000013f * fRec143[1]));
			fRec145[0] = (fSlow144 + (0.999000013f * fRec145[1]));
			float fTemp113 = (fRec144[1] + (fConst1 * fRec145[0]));
			fRec144[0] = (fTemp113 - std::floor(fTemp113));
			fRec149[0] = (fSlow145 + (0.999000013f * fRec149[1]));
			fRec150[0] = (fSlow146 + (0.999000013f * fRec150[1]));
			float fTemp114 = std::tan((fConst2 * fRec150[0]));
			float fTemp115 = (1.0f / fTemp114);
			float fTemp116 = (1.0f - (1.0f / mydsp_faustpower2_f(fTemp114)));
			float fTemp117 = (((fTemp115 + 1.93185163f) / fTemp114) + 1.0f);
			fRec148[0] = ((4.65661287e-10f * (fRec149[0] * fTemp1)) - (((fRec148[2] * (((fTemp115 + -1.93185163f) / fTemp114) + 1.0f)) + (2.0f * (fRec148[1] * fTemp116))) / fTemp117));
			float fTemp118 = (((fTemp115 + 1.41421354f) / fTemp114) + 1.0f);
			fRec147[0] = (((fRec148[2] + (fRec148[0] + (2.0f * fRec148[1]))) / fTemp117) - (((fRec147[2] * (((fTemp115 + -1.41421354f) / fTemp114) + 1.0f)) + (2.0f * (fTemp116 * fRec147[1]))) / fTemp118));
			float fTemp119 = (((fTemp115 + 0.517638087f) / fTemp114) + 1.0f);
			fRec146[0] = (((fRec147[2] + (fRec147[0] + (2.0f * fRec147[1]))) / fTemp118) - (((fRec146[2] * (((fTemp115 + -0.517638087f) / fTemp114) + 1.0f)) + (2.0f * (fTemp116 * fRec146[1]))) / fTemp119));
			fVec14[0] = fSlow149;
			iRec151[0] = (((iRec151[1] + (iRec151[1] > 0)) * (fSlow149 <= fVec14[1])) + (fSlow149 > fVec14[1]));
			float fTemp120 = float(iRec151[0]);
			fRec142[(IOTA & 1048575)] = ((fSlow141 * fRec142[((IOTA - iSlow142) & 1048575)]) + ((fRec143[0] * (ftbl0mydspSIG0[int((65536.0f * fRec144[0]))] + ((fRec146[2] + (fRec146[0] + (2.0f * fRec146[1]))) / fTemp119))) * std::max<float>(0.0f, std::min<float>((fSlow148 * fTemp120), ((fSlow150 * (fSlow147 - fTemp120)) + 1.0f)))));
			fRec153[0] = (fSlow153 + (0.999000013f * fRec153[1]));
			fRec155[0] = (fSlow154 + (0.999000013f * fRec155[1]));
			float fTemp121 = (fRec154[1] + (fConst1 * fRec155[0]));
			fRec154[0] = (fTemp121 - std::floor(fTemp121));
			fRec159[0] = (fSlow155 + (0.999000013f * fRec159[1]));
			fRec160[0] = (fSlow156 + (0.999000013f * fRec160[1]));
			float fTemp122 = std::tan((fConst2 * fRec160[0]));
			float fTemp123 = (1.0f / fTemp122);
			float fTemp124 = (1.0f - (1.0f / mydsp_faustpower2_f(fTemp122)));
			float fTemp125 = (((fTemp123 + 1.93185163f) / fTemp122) + 1.0f);
			fRec158[0] = ((4.65661287e-10f * (fRec159[0] * fTemp1)) - (((fRec158[2] * (((fTemp123 + -1.93185163f) / fTemp122) + 1.0f)) + (2.0f * (fRec158[1] * fTemp124))) / fTemp125));
			float fTemp126 = (((fTemp123 + 1.41421354f) / fTemp122) + 1.0f);
			fRec157[0] = (((fRec158[2] + (fRec158[0] + (2.0f * fRec158[1]))) / fTemp125) - (((fRec157[2] * (((fTemp123 + -1.41421354f) / fTemp122) + 1.0f)) + (2.0f * (fTemp124 * fRec157[1]))) / fTemp126));
			float fTemp127 = (((fTemp123 + 0.517638087f) / fTemp122) + 1.0f);
			fRec156[0] = (((fRec157[2] + (fRec157[0] + (2.0f * fRec157[1]))) / fTemp126) - (((fRec156[2] * (((fTemp123 + -0.517638087f) / fTemp122) + 1.0f)) + (2.0f * (fTemp124 * fRec156[1]))) / fTemp127));
			fVec15[0] = fSlow159;
			iRec161[0] = (((iRec161[1] + (iRec161[1] > 0)) * (fSlow159 <= fVec15[1])) + (fSlow159 > fVec15[1]));
			float fTemp128 = float(iRec161[0]);
			fRec152[(IOTA & 1048575)] = ((fSlow151 * fRec152[((IOTA - iSlow152) & 1048575)]) + ((fRec153[0] * (ftbl0mydspSIG0[int((65536.0f * fRec154[0]))] + ((fRec156[2] + (fRec156[0] + (2.0f * fRec156[1]))) / fTemp127))) * std::max<float>(0.0f, std::min<float>((fSlow158 * fTemp128), ((fSlow160 * (fSlow157 - fTemp128)) + 1.0f)))));
			float fTemp129 = (fSlow0 * (((((((((((((((fRec0[((IOTA - 0) & 1048575)] + fRec12[((IOTA - 0) & 1048575)]) + fRec22[((IOTA - 0) & 1048575)]) + fRec32[((IOTA - 0) & 1048575)]) + fRec42[((IOTA - 0) & 1048575)]) + fRec52[((IOTA - 0) & 1048575)]) + fRec62[((IOTA - 0) & 1048575)]) + fRec72[((IOTA - 0) & 1048575)]) + fRec82[((IOTA - 0) & 1048575)]) + fRec92[((IOTA - 0) & 1048575)]) + fRec102[((IOTA - 0) & 1048575)]) + fRec112[((IOTA - 0) & 1048575)]) + fRec122[((IOTA - 0) & 1048575)]) + fRec132[((IOTA - 0) & 1048575)]) + fRec142[((IOTA - 0) & 1048575)]) + fRec152[((IOTA - 0) & 1048575)]));
			output0[i] = FAUSTFLOAT(fTemp129);
			output1[i] = FAUSTFLOAT(fTemp129);
			fRec1[1] = fRec1[0];
			fRec4[1] = fRec4[0];
			fRec3[1] = fRec3[0];
			fRec8[1] = fRec8[0];
			iRec9[1] = iRec9[0];
			fRec10[1] = fRec10[0];
			fRec7[2] = fRec7[1];
			fRec7[1] = fRec7[0];
			fRec6[2] = fRec6[1];
			fRec6[1] = fRec6[0];
			fRec5[2] = fRec5[1];
			fRec5[1] = fRec5[0];
			fVec0[1] = fVec0[0];
			iRec11[1] = iRec11[0];
			IOTA = (IOTA + 1);
			fRec13[1] = fRec13[0];
			fRec15[1] = fRec15[0];
			fRec14[1] = fRec14[0];
			fRec19[1] = fRec19[0];
			fRec20[1] = fRec20[0];
			fRec18[2] = fRec18[1];
			fRec18[1] = fRec18[0];
			fRec17[2] = fRec17[1];
			fRec17[1] = fRec17[0];
			fRec16[2] = fRec16[1];
			fRec16[1] = fRec16[0];
			fVec1[1] = fVec1[0];
			iRec21[1] = iRec21[0];
			fRec23[1] = fRec23[0];
			fRec25[1] = fRec25[0];
			fRec24[1] = fRec24[0];
			fRec29[1] = fRec29[0];
			fRec30[1] = fRec30[0];
			fRec28[2] = fRec28[1];
			fRec28[1] = fRec28[0];
			fRec27[2] = fRec27[1];
			fRec27[1] = fRec27[0];
			fRec26[2] = fRec26[1];
			fRec26[1] = fRec26[0];
			fVec2[1] = fVec2[0];
			iRec31[1] = iRec31[0];
			fRec33[1] = fRec33[0];
			fRec35[1] = fRec35[0];
			fRec34[1] = fRec34[0];
			fRec39[1] = fRec39[0];
			fRec40[1] = fRec40[0];
			fRec38[2] = fRec38[1];
			fRec38[1] = fRec38[0];
			fRec37[2] = fRec37[1];
			fRec37[1] = fRec37[0];
			fRec36[2] = fRec36[1];
			fRec36[1] = fRec36[0];
			fVec3[1] = fVec3[0];
			iRec41[1] = iRec41[0];
			fRec43[1] = fRec43[0];
			fRec45[1] = fRec45[0];
			fRec44[1] = fRec44[0];
			fRec49[1] = fRec49[0];
			fRec50[1] = fRec50[0];
			fRec48[2] = fRec48[1];
			fRec48[1] = fRec48[0];
			fRec47[2] = fRec47[1];
			fRec47[1] = fRec47[0];
			fRec46[2] = fRec46[1];
			fRec46[1] = fRec46[0];
			fVec4[1] = fVec4[0];
			iRec51[1] = iRec51[0];
			fRec53[1] = fRec53[0];
			fRec55[1] = fRec55[0];
			fRec54[1] = fRec54[0];
			fRec59[1] = fRec59[0];
			fRec60[1] = fRec60[0];
			fRec58[2] = fRec58[1];
			fRec58[1] = fRec58[0];
			fRec57[2] = fRec57[1];
			fRec57[1] = fRec57[0];
			fRec56[2] = fRec56[1];
			fRec56[1] = fRec56[0];
			fVec5[1] = fVec5[0];
			iRec61[1] = iRec61[0];
			fRec63[1] = fRec63[0];
			fRec65[1] = fRec65[0];
			fRec64[1] = fRec64[0];
			fRec69[1] = fRec69[0];
			fRec70[1] = fRec70[0];
			fRec68[2] = fRec68[1];
			fRec68[1] = fRec68[0];
			fRec67[2] = fRec67[1];
			fRec67[1] = fRec67[0];
			fRec66[2] = fRec66[1];
			fRec66[1] = fRec66[0];
			fVec6[1] = fVec6[0];
			iRec71[1] = iRec71[0];
			fRec73[1] = fRec73[0];
			fRec75[1] = fRec75[0];
			fRec74[1] = fRec74[0];
			fRec79[1] = fRec79[0];
			fRec80[1] = fRec80[0];
			fRec78[2] = fRec78[1];
			fRec78[1] = fRec78[0];
			fRec77[2] = fRec77[1];
			fRec77[1] = fRec77[0];
			fRec76[2] = fRec76[1];
			fRec76[1] = fRec76[0];
			fVec7[1] = fVec7[0];
			iRec81[1] = iRec81[0];
			fRec83[1] = fRec83[0];
			fRec85[1] = fRec85[0];
			fRec84[1] = fRec84[0];
			fRec89[1] = fRec89[0];
			fRec90[1] = fRec90[0];
			fRec88[2] = fRec88[1];
			fRec88[1] = fRec88[0];
			fRec87[2] = fRec87[1];
			fRec87[1] = fRec87[0];
			fRec86[2] = fRec86[1];
			fRec86[1] = fRec86[0];
			fVec8[1] = fVec8[0];
			iRec91[1] = iRec91[0];
			fRec93[1] = fRec93[0];
			fRec95[1] = fRec95[0];
			fRec94[1] = fRec94[0];
			fRec99[1] = fRec99[0];
			fRec100[1] = fRec100[0];
			fRec98[2] = fRec98[1];
			fRec98[1] = fRec98[0];
			fRec97[2] = fRec97[1];
			fRec97[1] = fRec97[0];
			fRec96[2] = fRec96[1];
			fRec96[1] = fRec96[0];
			fVec9[1] = fVec9[0];
			iRec101[1] = iRec101[0];
			fRec103[1] = fRec103[0];
			fRec105[1] = fRec105[0];
			fRec104[1] = fRec104[0];
			fRec109[1] = fRec109[0];
			fRec110[1] = fRec110[0];
			fRec108[2] = fRec108[1];
			fRec108[1] = fRec108[0];
			fRec107[2] = fRec107[1];
			fRec107[1] = fRec107[0];
			fRec106[2] = fRec106[1];
			fRec106[1] = fRec106[0];
			fVec10[1] = fVec10[0];
			iRec111[1] = iRec111[0];
			fRec113[1] = fRec113[0];
			fRec115[1] = fRec115[0];
			fRec114[1] = fRec114[0];
			fRec119[1] = fRec119[0];
			fRec120[1] = fRec120[0];
			fRec118[2] = fRec118[1];
			fRec118[1] = fRec118[0];
			fRec117[2] = fRec117[1];
			fRec117[1] = fRec117[0];
			fRec116[2] = fRec116[1];
			fRec116[1] = fRec116[0];
			fVec11[1] = fVec11[0];
			iRec121[1] = iRec121[0];
			fRec123[1] = fRec123[0];
			fRec125[1] = fRec125[0];
			fRec124[1] = fRec124[0];
			fRec129[1] = fRec129[0];
			fRec130[1] = fRec130[0];
			fRec128[2] = fRec128[1];
			fRec128[1] = fRec128[0];
			fRec127[2] = fRec127[1];
			fRec127[1] = fRec127[0];
			fRec126[2] = fRec126[1];
			fRec126[1] = fRec126[0];
			fVec12[1] = fVec12[0];
			iRec131[1] = iRec131[0];
			fRec133[1] = fRec133[0];
			fRec135[1] = fRec135[0];
			fRec134[1] = fRec134[0];
			fRec139[1] = fRec139[0];
			fRec140[1] = fRec140[0];
			fRec138[2] = fRec138[1];
			fRec138[1] = fRec138[0];
			fRec137[2] = fRec137[1];
			fRec137[1] = fRec137[0];
			fRec136[2] = fRec136[1];
			fRec136[1] = fRec136[0];
			fVec13[1] = fVec13[0];
			iRec141[1] = iRec141[0];
			fRec143[1] = fRec143[0];
			fRec145[1] = fRec145[0];
			fRec144[1] = fRec144[0];
			fRec149[1] = fRec149[0];
			fRec150[1] = fRec150[0];
			fRec148[2] = fRec148[1];
			fRec148[1] = fRec148[0];
			fRec147[2] = fRec147[1];
			fRec147[1] = fRec147[0];
			fRec146[2] = fRec146[1];
			fRec146[1] = fRec146[0];
			fVec14[1] = fVec14[0];
			iRec151[1] = iRec151[0];
			fRec153[1] = fRec153[0];
			fRec155[1] = fRec155[0];
			fRec154[1] = fRec154[0];
			fRec159[1] = fRec159[0];
			fRec160[1] = fRec160[0];
			fRec158[2] = fRec158[1];
			fRec158[1] = fRec158[0];
			fRec157[2] = fRec157[1];
			fRec157[1] = fRec157[0];
			fRec156[2] = fRec156[1];
			fRec156[1] = fRec156[0];
			fVec15[1] = fVec15[0];
			iRec161[1] = iRec161[0];
		}
	}

};

#endif
