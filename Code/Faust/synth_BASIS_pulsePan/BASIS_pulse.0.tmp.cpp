/* ------------------------------------------------------------
name: "BASIS_pulse.0.tmp"
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

class mydspSIG0 {
	
  private:
	
	int iRec9[2];
	
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
		for (int l12 = 0; (l12 < 2); l12 = (l12 + 1)) {
			iRec9[l12] = 0;
		}
	}
	
	void fillmydspSIG0(int count, float* table) {
		for (int i = 0; (i < count); i = (i + 1)) {
			iRec9[0] = (iRec9[1] + 1);
			table[i] = std::sin((9.58738019e-05f * float((iRec9[0] + -1))));
			iRec9[1] = iRec9[0];
		}
	}

};

static mydspSIG0* newmydspSIG0() { return (mydspSIG0*)new mydspSIG0(); }
static void deletemydspSIG0(mydspSIG0* dsp) { delete dsp; }

static float mydsp_faustpower2_f(float value) {
	return (value * value);
}
static float ftbl0mydspSIG0[65536];

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
	int iVec0[2];
	float fRec0[2];
	FAUSTFLOAT fCheckbox0;
	FAUSTFLOAT fVslider1;
	float fRec1[2];
	FAUSTFLOAT fEntry0;
	float fRec2[2];
	int fSampleRate;
	float fConst0;
	float fConst1;
	FAUSTFLOAT fEntry1;
	float fRec4[2];
	float fConst2;
	FAUSTFLOAT fEntry2;
	float fRec6[2];
	float fVec1[2];
	float fRec5[2];
	float fVec2[2];
	int IOTA;
	float fVec3[4096];
	FAUSTFLOAT fEntry3;
	float fRec7[2];
	FAUSTFLOAT fEntry4;
	float fRec8[2];
	float fRec10[2];
	float fConst3;
	float fConst4;
	float fRec11[2];
	FAUSTFLOAT fEntry5;
	float fRec12[2];
	FAUSTFLOAT fEntry6;
	float fRec13[2];
	float fRec14[2];
	float fConst5;
	FAUSTFLOAT fVslider2;
	float fRec16[2];
	float fRec3[3];
	FAUSTFLOAT fCheckbox1;
	FAUSTFLOAT fVslider3;
	float fRec17[2];
	FAUSTFLOAT fEntry7;
	float fRec18[2];
	FAUSTFLOAT fEntry8;
	float fRec20[2];
	FAUSTFLOAT fEntry9;
	float fRec22[2];
	float fVec4[2];
	float fRec21[2];
	float fVec5[2];
	float fVec6[4096];
	FAUSTFLOAT fEntry10;
	float fRec23[2];
	FAUSTFLOAT fEntry11;
	float fRec24[2];
	float fRec25[2];
	float fRec26[2];
	FAUSTFLOAT fEntry12;
	float fRec27[2];
	FAUSTFLOAT fEntry13;
	float fRec28[2];
	float fRec29[2];
	FAUSTFLOAT fVslider4;
	float fRec31[2];
	float fRec19[3];
	FAUSTFLOAT fCheckbox2;
	FAUSTFLOAT fVslider5;
	float fRec32[2];
	FAUSTFLOAT fEntry14;
	float fRec33[2];
	FAUSTFLOAT fEntry15;
	float fRec35[2];
	FAUSTFLOAT fEntry16;
	float fRec37[2];
	float fVec7[2];
	float fRec36[2];
	float fVec8[2];
	float fVec9[4096];
	FAUSTFLOAT fEntry17;
	float fRec38[2];
	FAUSTFLOAT fEntry18;
	float fRec39[2];
	float fRec40[2];
	float fRec41[2];
	FAUSTFLOAT fEntry19;
	float fRec42[2];
	FAUSTFLOAT fEntry20;
	float fRec43[2];
	float fRec44[2];
	FAUSTFLOAT fVslider6;
	float fRec46[2];
	float fRec34[3];
	FAUSTFLOAT fCheckbox3;
	FAUSTFLOAT fVslider7;
	float fRec47[2];
	FAUSTFLOAT fEntry21;
	float fRec48[2];
	FAUSTFLOAT fEntry22;
	float fRec50[2];
	FAUSTFLOAT fEntry23;
	float fRec52[2];
	float fVec10[2];
	float fRec51[2];
	float fVec11[2];
	float fVec12[4096];
	FAUSTFLOAT fEntry24;
	float fRec53[2];
	FAUSTFLOAT fEntry25;
	float fRec54[2];
	float fRec55[2];
	float fRec56[2];
	FAUSTFLOAT fEntry26;
	float fRec57[2];
	FAUSTFLOAT fEntry27;
	float fRec58[2];
	float fRec59[2];
	FAUSTFLOAT fVslider8;
	float fRec61[2];
	float fRec49[3];
	FAUSTFLOAT fCheckbox4;
	FAUSTFLOAT fVslider9;
	float fRec62[2];
	FAUSTFLOAT fEntry28;
	float fRec63[2];
	FAUSTFLOAT fEntry29;
	float fRec65[2];
	FAUSTFLOAT fEntry30;
	float fRec67[2];
	float fVec13[2];
	float fRec66[2];
	float fVec14[2];
	float fVec15[4096];
	FAUSTFLOAT fEntry31;
	float fRec68[2];
	FAUSTFLOAT fEntry32;
	float fRec69[2];
	float fRec70[2];
	float fRec71[2];
	FAUSTFLOAT fEntry33;
	float fRec72[2];
	FAUSTFLOAT fEntry34;
	float fRec73[2];
	float fRec74[2];
	FAUSTFLOAT fVslider10;
	float fRec76[2];
	float fRec64[3];
	FAUSTFLOAT fCheckbox5;
	FAUSTFLOAT fVslider11;
	float fRec77[2];
	FAUSTFLOAT fEntry35;
	float fRec78[2];
	FAUSTFLOAT fEntry36;
	float fRec80[2];
	FAUSTFLOAT fEntry37;
	float fRec82[2];
	float fVec16[2];
	float fRec81[2];
	float fVec17[2];
	float fVec18[4096];
	FAUSTFLOAT fEntry38;
	float fRec83[2];
	FAUSTFLOAT fEntry39;
	float fRec84[2];
	float fRec85[2];
	float fRec86[2];
	FAUSTFLOAT fEntry40;
	float fRec87[2];
	FAUSTFLOAT fEntry41;
	float fRec88[2];
	float fRec89[2];
	FAUSTFLOAT fVslider12;
	float fRec91[2];
	float fRec79[3];
	FAUSTFLOAT fCheckbox6;
	FAUSTFLOAT fVslider13;
	float fRec92[2];
	FAUSTFLOAT fEntry42;
	float fRec93[2];
	FAUSTFLOAT fEntry43;
	float fRec95[2];
	FAUSTFLOAT fEntry44;
	float fRec97[2];
	float fVec19[2];
	float fRec96[2];
	float fVec20[2];
	float fVec21[4096];
	FAUSTFLOAT fEntry45;
	float fRec98[2];
	FAUSTFLOAT fEntry46;
	float fRec99[2];
	float fRec100[2];
	float fRec101[2];
	FAUSTFLOAT fEntry47;
	float fRec102[2];
	FAUSTFLOAT fEntry48;
	float fRec103[2];
	float fRec104[2];
	FAUSTFLOAT fVslider14;
	float fRec106[2];
	float fRec94[3];
	FAUSTFLOAT fCheckbox7;
	FAUSTFLOAT fVslider15;
	float fRec107[2];
	FAUSTFLOAT fEntry49;
	float fRec108[2];
	FAUSTFLOAT fEntry50;
	float fRec110[2];
	FAUSTFLOAT fEntry51;
	float fRec112[2];
	float fVec22[2];
	float fRec111[2];
	float fVec23[2];
	float fVec24[4096];
	FAUSTFLOAT fEntry52;
	float fRec113[2];
	FAUSTFLOAT fEntry53;
	float fRec114[2];
	float fRec115[2];
	float fRec116[2];
	FAUSTFLOAT fEntry54;
	float fRec117[2];
	FAUSTFLOAT fEntry55;
	float fRec118[2];
	float fRec119[2];
	FAUSTFLOAT fVslider16;
	float fRec121[2];
	float fRec109[3];
	FAUSTFLOAT fCheckbox8;
	FAUSTFLOAT fVslider17;
	float fRec122[2];
	FAUSTFLOAT fEntry56;
	float fRec123[2];
	FAUSTFLOAT fEntry57;
	float fRec125[2];
	FAUSTFLOAT fEntry58;
	float fRec127[2];
	float fVec25[2];
	float fRec126[2];
	float fVec26[2];
	float fVec27[4096];
	FAUSTFLOAT fEntry59;
	float fRec128[2];
	FAUSTFLOAT fEntry60;
	float fRec129[2];
	float fRec130[2];
	float fRec131[2];
	FAUSTFLOAT fEntry61;
	float fRec132[2];
	FAUSTFLOAT fEntry62;
	float fRec133[2];
	float fRec134[2];
	FAUSTFLOAT fVslider18;
	float fRec136[2];
	float fRec124[3];
	FAUSTFLOAT fCheckbox9;
	FAUSTFLOAT fVslider19;
	float fRec137[2];
	FAUSTFLOAT fEntry63;
	float fRec138[2];
	FAUSTFLOAT fEntry64;
	float fRec140[2];
	FAUSTFLOAT fEntry65;
	float fRec142[2];
	float fVec28[2];
	float fRec141[2];
	float fVec29[2];
	float fVec30[4096];
	FAUSTFLOAT fEntry66;
	float fRec143[2];
	FAUSTFLOAT fEntry67;
	float fRec144[2];
	float fRec145[2];
	float fRec146[2];
	FAUSTFLOAT fEntry68;
	float fRec147[2];
	FAUSTFLOAT fEntry69;
	float fRec148[2];
	float fRec149[2];
	FAUSTFLOAT fVslider20;
	float fRec151[2];
	float fRec139[3];
	FAUSTFLOAT fCheckbox10;
	FAUSTFLOAT fVslider21;
	float fRec152[2];
	FAUSTFLOAT fEntry70;
	float fRec153[2];
	FAUSTFLOAT fEntry71;
	float fRec155[2];
	FAUSTFLOAT fEntry72;
	float fRec157[2];
	float fVec31[2];
	float fRec156[2];
	float fVec32[2];
	float fVec33[4096];
	FAUSTFLOAT fEntry73;
	float fRec158[2];
	FAUSTFLOAT fEntry74;
	float fRec159[2];
	float fRec160[2];
	float fRec161[2];
	FAUSTFLOAT fEntry75;
	float fRec162[2];
	FAUSTFLOAT fEntry76;
	float fRec163[2];
	float fRec164[2];
	FAUSTFLOAT fVslider22;
	float fRec166[2];
	float fRec154[3];
	FAUSTFLOAT fCheckbox11;
	FAUSTFLOAT fVslider23;
	float fRec167[2];
	FAUSTFLOAT fEntry77;
	float fRec168[2];
	FAUSTFLOAT fEntry78;
	float fRec170[2];
	FAUSTFLOAT fEntry79;
	float fRec172[2];
	float fVec34[2];
	float fRec171[2];
	float fVec35[2];
	float fVec36[4096];
	FAUSTFLOAT fEntry80;
	float fRec173[2];
	FAUSTFLOAT fEntry81;
	float fRec174[2];
	float fRec175[2];
	float fRec176[2];
	FAUSTFLOAT fEntry82;
	float fRec177[2];
	FAUSTFLOAT fEntry83;
	float fRec178[2];
	float fRec179[2];
	FAUSTFLOAT fVslider24;
	float fRec181[2];
	float fRec169[3];
	FAUSTFLOAT fCheckbox12;
	FAUSTFLOAT fVslider25;
	float fRec182[2];
	FAUSTFLOAT fEntry84;
	float fRec183[2];
	FAUSTFLOAT fEntry85;
	float fRec185[2];
	FAUSTFLOAT fEntry86;
	float fRec187[2];
	float fVec37[2];
	float fRec186[2];
	float fVec38[2];
	float fVec39[4096];
	FAUSTFLOAT fEntry87;
	float fRec188[2];
	FAUSTFLOAT fEntry88;
	float fRec189[2];
	float fRec190[2];
	float fRec191[2];
	FAUSTFLOAT fEntry89;
	float fRec192[2];
	FAUSTFLOAT fEntry90;
	float fRec193[2];
	float fRec194[2];
	FAUSTFLOAT fVslider26;
	float fRec196[2];
	float fRec184[3];
	FAUSTFLOAT fCheckbox13;
	FAUSTFLOAT fVslider27;
	float fRec197[2];
	FAUSTFLOAT fEntry91;
	float fRec198[2];
	FAUSTFLOAT fEntry92;
	float fRec200[2];
	FAUSTFLOAT fEntry93;
	float fRec202[2];
	float fVec40[2];
	float fRec201[2];
	float fVec41[2];
	float fVec42[4096];
	FAUSTFLOAT fEntry94;
	float fRec203[2];
	FAUSTFLOAT fEntry95;
	float fRec204[2];
	float fRec205[2];
	float fRec206[2];
	FAUSTFLOAT fEntry96;
	float fRec207[2];
	FAUSTFLOAT fEntry97;
	float fRec208[2];
	float fRec209[2];
	FAUSTFLOAT fVslider28;
	float fRec211[2];
	float fRec199[3];
	FAUSTFLOAT fCheckbox14;
	FAUSTFLOAT fVslider29;
	float fRec212[2];
	FAUSTFLOAT fEntry98;
	float fRec213[2];
	FAUSTFLOAT fEntry99;
	float fRec215[2];
	FAUSTFLOAT fEntry100;
	float fRec217[2];
	float fVec43[2];
	float fRec216[2];
	float fVec44[2];
	float fVec45[4096];
	FAUSTFLOAT fEntry101;
	float fRec218[2];
	FAUSTFLOAT fEntry102;
	float fRec219[2];
	float fRec220[2];
	float fRec221[2];
	FAUSTFLOAT fEntry103;
	float fRec222[2];
	FAUSTFLOAT fEntry104;
	float fRec223[2];
	float fRec224[2];
	FAUSTFLOAT fVslider30;
	float fRec226[2];
	float fRec214[3];
	FAUSTFLOAT fCheckbox15;
	FAUSTFLOAT fVslider31;
	float fRec227[2];
	FAUSTFLOAT fEntry105;
	float fRec228[2];
	FAUSTFLOAT fEntry106;
	float fRec230[2];
	FAUSTFLOAT fEntry107;
	float fRec232[2];
	float fVec46[2];
	float fRec231[2];
	float fVec47[2];
	float fVec48[4096];
	FAUSTFLOAT fEntry108;
	float fRec233[2];
	FAUSTFLOAT fEntry109;
	float fRec234[2];
	float fRec235[2];
	float fRec236[2];
	FAUSTFLOAT fEntry110;
	float fRec237[2];
	FAUSTFLOAT fEntry111;
	float fRec238[2];
	float fRec239[2];
	FAUSTFLOAT fVslider32;
	float fRec241[2];
	float fRec229[3];
	FAUSTFLOAT fVslider33;
	float fRec244[2];
	int iRec245[2];
	FAUSTFLOAT fVslider34;
	float fRec247[2];
	float fRec246[2];
	FAUSTFLOAT fVslider35;
	float fRec248[2];
	float fRec243[3];
	float fRec242[3];
	
 public:
	
	void metadata(Meta* m) { 
		m->declare("basics.lib/name", "Faust Basic Element Library");
		m->declare("basics.lib/version", "0.1");
		m->declare("filename", "BASIS_pulse.0.tmp.dsp");
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
		m->declare("filters.lib/pole:author", "Julius O. Smith III");
		m->declare("filters.lib/pole:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/pole:license", "MIT-style STK-4.3 license");
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
		m->declare("name", "BASIS_pulse.0.tmp");
		m->declare("noises.lib/name", "Faust Noise Generator Library");
		m->declare("noises.lib/version", "0.0");
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
		mydspSIG0* sig0 = newmydspSIG0();
		sig0->instanceInitmydspSIG0(sample_rate);
		sig0->fillmydspSIG0(65536, ftbl0mydspSIG0);
		deletemydspSIG0(sig0);
	}
	
	virtual void instanceConstants(int sample_rate) {
		fSampleRate = sample_rate;
		fConst0 = std::min<float>(192000.0f, std::max<float>(1.0f, float(fSampleRate)));
		fConst1 = (0.25f * fConst0);
		fConst2 = (1.0f / fConst0);
		fConst3 = (4.0f / fConst0);
		fConst4 = (0.5f * fConst0);
		fConst5 = (3.14159274f / fConst0);
	}
	
	virtual void instanceResetUserInterface() {
		fVslider0 = FAUSTFLOAT(0.0f);
		fCheckbox0 = FAUSTFLOAT(0.0f);
		fVslider1 = FAUSTFLOAT(0.5f);
		fEntry0 = FAUSTFLOAT(0.5f);
		fEntry1 = FAUSTFLOAT(0.5f);
		fEntry2 = FAUSTFLOAT(200.0f);
		fEntry3 = FAUSTFLOAT(0.5f);
		fEntry4 = FAUSTFLOAT(0.5f);
		fEntry5 = FAUSTFLOAT(0.5f);
		fEntry6 = FAUSTFLOAT(0.5f);
		fVslider2 = FAUSTFLOAT(500.0f);
		fCheckbox1 = FAUSTFLOAT(0.0f);
		fVslider3 = FAUSTFLOAT(0.5f);
		fEntry7 = FAUSTFLOAT(0.5f);
		fEntry8 = FAUSTFLOAT(0.5f);
		fEntry9 = FAUSTFLOAT(200.0f);
		fEntry10 = FAUSTFLOAT(0.5f);
		fEntry11 = FAUSTFLOAT(0.5f);
		fEntry12 = FAUSTFLOAT(0.5f);
		fEntry13 = FAUSTFLOAT(0.5f);
		fVslider4 = FAUSTFLOAT(500.0f);
		fCheckbox2 = FAUSTFLOAT(0.0f);
		fVslider5 = FAUSTFLOAT(0.5f);
		fEntry14 = FAUSTFLOAT(0.5f);
		fEntry15 = FAUSTFLOAT(0.5f);
		fEntry16 = FAUSTFLOAT(200.0f);
		fEntry17 = FAUSTFLOAT(0.5f);
		fEntry18 = FAUSTFLOAT(0.5f);
		fEntry19 = FAUSTFLOAT(0.5f);
		fEntry20 = FAUSTFLOAT(0.5f);
		fVslider6 = FAUSTFLOAT(500.0f);
		fCheckbox3 = FAUSTFLOAT(0.0f);
		fVslider7 = FAUSTFLOAT(0.5f);
		fEntry21 = FAUSTFLOAT(0.5f);
		fEntry22 = FAUSTFLOAT(0.5f);
		fEntry23 = FAUSTFLOAT(200.0f);
		fEntry24 = FAUSTFLOAT(0.5f);
		fEntry25 = FAUSTFLOAT(0.5f);
		fEntry26 = FAUSTFLOAT(0.5f);
		fEntry27 = FAUSTFLOAT(0.5f);
		fVslider8 = FAUSTFLOAT(500.0f);
		fCheckbox4 = FAUSTFLOAT(0.0f);
		fVslider9 = FAUSTFLOAT(0.5f);
		fEntry28 = FAUSTFLOAT(0.5f);
		fEntry29 = FAUSTFLOAT(0.5f);
		fEntry30 = FAUSTFLOAT(200.0f);
		fEntry31 = FAUSTFLOAT(0.5f);
		fEntry32 = FAUSTFLOAT(0.5f);
		fEntry33 = FAUSTFLOAT(0.5f);
		fEntry34 = FAUSTFLOAT(0.5f);
		fVslider10 = FAUSTFLOAT(500.0f);
		fCheckbox5 = FAUSTFLOAT(0.0f);
		fVslider11 = FAUSTFLOAT(0.5f);
		fEntry35 = FAUSTFLOAT(0.5f);
		fEntry36 = FAUSTFLOAT(0.5f);
		fEntry37 = FAUSTFLOAT(200.0f);
		fEntry38 = FAUSTFLOAT(0.5f);
		fEntry39 = FAUSTFLOAT(0.5f);
		fEntry40 = FAUSTFLOAT(0.5f);
		fEntry41 = FAUSTFLOAT(0.5f);
		fVslider12 = FAUSTFLOAT(500.0f);
		fCheckbox6 = FAUSTFLOAT(0.0f);
		fVslider13 = FAUSTFLOAT(0.5f);
		fEntry42 = FAUSTFLOAT(0.5f);
		fEntry43 = FAUSTFLOAT(0.5f);
		fEntry44 = FAUSTFLOAT(200.0f);
		fEntry45 = FAUSTFLOAT(0.5f);
		fEntry46 = FAUSTFLOAT(0.5f);
		fEntry47 = FAUSTFLOAT(0.5f);
		fEntry48 = FAUSTFLOAT(0.5f);
		fVslider14 = FAUSTFLOAT(500.0f);
		fCheckbox7 = FAUSTFLOAT(0.0f);
		fVslider15 = FAUSTFLOAT(0.5f);
		fEntry49 = FAUSTFLOAT(0.5f);
		fEntry50 = FAUSTFLOAT(0.5f);
		fEntry51 = FAUSTFLOAT(200.0f);
		fEntry52 = FAUSTFLOAT(0.5f);
		fEntry53 = FAUSTFLOAT(0.5f);
		fEntry54 = FAUSTFLOAT(0.5f);
		fEntry55 = FAUSTFLOAT(0.5f);
		fVslider16 = FAUSTFLOAT(500.0f);
		fCheckbox8 = FAUSTFLOAT(0.0f);
		fVslider17 = FAUSTFLOAT(0.5f);
		fEntry56 = FAUSTFLOAT(0.5f);
		fEntry57 = FAUSTFLOAT(0.5f);
		fEntry58 = FAUSTFLOAT(200.0f);
		fEntry59 = FAUSTFLOAT(0.5f);
		fEntry60 = FAUSTFLOAT(0.5f);
		fEntry61 = FAUSTFLOAT(0.5f);
		fEntry62 = FAUSTFLOAT(0.5f);
		fVslider18 = FAUSTFLOAT(500.0f);
		fCheckbox9 = FAUSTFLOAT(0.0f);
		fVslider19 = FAUSTFLOAT(0.5f);
		fEntry63 = FAUSTFLOAT(0.5f);
		fEntry64 = FAUSTFLOAT(0.5f);
		fEntry65 = FAUSTFLOAT(200.0f);
		fEntry66 = FAUSTFLOAT(0.5f);
		fEntry67 = FAUSTFLOAT(0.5f);
		fEntry68 = FAUSTFLOAT(0.5f);
		fEntry69 = FAUSTFLOAT(0.5f);
		fVslider20 = FAUSTFLOAT(500.0f);
		fCheckbox10 = FAUSTFLOAT(0.0f);
		fVslider21 = FAUSTFLOAT(0.5f);
		fEntry70 = FAUSTFLOAT(0.5f);
		fEntry71 = FAUSTFLOAT(0.5f);
		fEntry72 = FAUSTFLOAT(200.0f);
		fEntry73 = FAUSTFLOAT(0.5f);
		fEntry74 = FAUSTFLOAT(0.5f);
		fEntry75 = FAUSTFLOAT(0.5f);
		fEntry76 = FAUSTFLOAT(0.5f);
		fVslider22 = FAUSTFLOAT(500.0f);
		fCheckbox11 = FAUSTFLOAT(0.0f);
		fVslider23 = FAUSTFLOAT(0.5f);
		fEntry77 = FAUSTFLOAT(0.5f);
		fEntry78 = FAUSTFLOAT(0.5f);
		fEntry79 = FAUSTFLOAT(200.0f);
		fEntry80 = FAUSTFLOAT(0.5f);
		fEntry81 = FAUSTFLOAT(0.5f);
		fEntry82 = FAUSTFLOAT(0.5f);
		fEntry83 = FAUSTFLOAT(0.5f);
		fVslider24 = FAUSTFLOAT(500.0f);
		fCheckbox12 = FAUSTFLOAT(0.0f);
		fVslider25 = FAUSTFLOAT(0.5f);
		fEntry84 = FAUSTFLOAT(0.5f);
		fEntry85 = FAUSTFLOAT(0.5f);
		fEntry86 = FAUSTFLOAT(200.0f);
		fEntry87 = FAUSTFLOAT(0.5f);
		fEntry88 = FAUSTFLOAT(0.5f);
		fEntry89 = FAUSTFLOAT(0.5f);
		fEntry90 = FAUSTFLOAT(0.5f);
		fVslider26 = FAUSTFLOAT(500.0f);
		fCheckbox13 = FAUSTFLOAT(0.0f);
		fVslider27 = FAUSTFLOAT(0.5f);
		fEntry91 = FAUSTFLOAT(0.5f);
		fEntry92 = FAUSTFLOAT(0.5f);
		fEntry93 = FAUSTFLOAT(200.0f);
		fEntry94 = FAUSTFLOAT(0.5f);
		fEntry95 = FAUSTFLOAT(0.5f);
		fEntry96 = FAUSTFLOAT(0.5f);
		fEntry97 = FAUSTFLOAT(0.5f);
		fVslider28 = FAUSTFLOAT(500.0f);
		fCheckbox14 = FAUSTFLOAT(0.0f);
		fVslider29 = FAUSTFLOAT(0.5f);
		fEntry98 = FAUSTFLOAT(0.5f);
		fEntry99 = FAUSTFLOAT(0.5f);
		fEntry100 = FAUSTFLOAT(200.0f);
		fEntry101 = FAUSTFLOAT(0.5f);
		fEntry102 = FAUSTFLOAT(0.5f);
		fEntry103 = FAUSTFLOAT(0.5f);
		fEntry104 = FAUSTFLOAT(0.5f);
		fVslider30 = FAUSTFLOAT(500.0f);
		fCheckbox15 = FAUSTFLOAT(0.0f);
		fVslider31 = FAUSTFLOAT(0.5f);
		fEntry105 = FAUSTFLOAT(0.5f);
		fEntry106 = FAUSTFLOAT(0.5f);
		fEntry107 = FAUSTFLOAT(200.0f);
		fEntry108 = FAUSTFLOAT(0.5f);
		fEntry109 = FAUSTFLOAT(0.5f);
		fEntry110 = FAUSTFLOAT(0.5f);
		fEntry111 = FAUSTFLOAT(0.5f);
		fVslider32 = FAUSTFLOAT(500.0f);
		fVslider33 = FAUSTFLOAT(0.0f);
		fVslider34 = FAUSTFLOAT(0.0f);
		fVslider35 = FAUSTFLOAT(100.0f);
	}
	
	virtual void instanceClear() {
		for (int l0 = 0; (l0 < 2); l0 = (l0 + 1)) {
			iVec0[l0] = 0;
		}
		for (int l1 = 0; (l1 < 2); l1 = (l1 + 1)) {
			fRec0[l1] = 0.0f;
		}
		for (int l2 = 0; (l2 < 2); l2 = (l2 + 1)) {
			fRec1[l2] = 0.0f;
		}
		for (int l3 = 0; (l3 < 2); l3 = (l3 + 1)) {
			fRec2[l3] = 0.0f;
		}
		for (int l4 = 0; (l4 < 2); l4 = (l4 + 1)) {
			fRec4[l4] = 0.0f;
		}
		for (int l5 = 0; (l5 < 2); l5 = (l5 + 1)) {
			fRec6[l5] = 0.0f;
		}
		for (int l6 = 0; (l6 < 2); l6 = (l6 + 1)) {
			fVec1[l6] = 0.0f;
		}
		for (int l7 = 0; (l7 < 2); l7 = (l7 + 1)) {
			fRec5[l7] = 0.0f;
		}
		for (int l8 = 0; (l8 < 2); l8 = (l8 + 1)) {
			fVec2[l8] = 0.0f;
		}
		IOTA = 0;
		for (int l9 = 0; (l9 < 4096); l9 = (l9 + 1)) {
			fVec3[l9] = 0.0f;
		}
		for (int l10 = 0; (l10 < 2); l10 = (l10 + 1)) {
			fRec7[l10] = 0.0f;
		}
		for (int l11 = 0; (l11 < 2); l11 = (l11 + 1)) {
			fRec8[l11] = 0.0f;
		}
		for (int l13 = 0; (l13 < 2); l13 = (l13 + 1)) {
			fRec10[l13] = 0.0f;
		}
		for (int l14 = 0; (l14 < 2); l14 = (l14 + 1)) {
			fRec11[l14] = 0.0f;
		}
		for (int l15 = 0; (l15 < 2); l15 = (l15 + 1)) {
			fRec12[l15] = 0.0f;
		}
		for (int l16 = 0; (l16 < 2); l16 = (l16 + 1)) {
			fRec13[l16] = 0.0f;
		}
		for (int l17 = 0; (l17 < 2); l17 = (l17 + 1)) {
			fRec14[l17] = 0.0f;
		}
		for (int l18 = 0; (l18 < 2); l18 = (l18 + 1)) {
			fRec16[l18] = 0.0f;
		}
		for (int l19 = 0; (l19 < 3); l19 = (l19 + 1)) {
			fRec3[l19] = 0.0f;
		}
		for (int l20 = 0; (l20 < 2); l20 = (l20 + 1)) {
			fRec17[l20] = 0.0f;
		}
		for (int l21 = 0; (l21 < 2); l21 = (l21 + 1)) {
			fRec18[l21] = 0.0f;
		}
		for (int l22 = 0; (l22 < 2); l22 = (l22 + 1)) {
			fRec20[l22] = 0.0f;
		}
		for (int l23 = 0; (l23 < 2); l23 = (l23 + 1)) {
			fRec22[l23] = 0.0f;
		}
		for (int l24 = 0; (l24 < 2); l24 = (l24 + 1)) {
			fVec4[l24] = 0.0f;
		}
		for (int l25 = 0; (l25 < 2); l25 = (l25 + 1)) {
			fRec21[l25] = 0.0f;
		}
		for (int l26 = 0; (l26 < 2); l26 = (l26 + 1)) {
			fVec5[l26] = 0.0f;
		}
		for (int l27 = 0; (l27 < 4096); l27 = (l27 + 1)) {
			fVec6[l27] = 0.0f;
		}
		for (int l28 = 0; (l28 < 2); l28 = (l28 + 1)) {
			fRec23[l28] = 0.0f;
		}
		for (int l29 = 0; (l29 < 2); l29 = (l29 + 1)) {
			fRec24[l29] = 0.0f;
		}
		for (int l30 = 0; (l30 < 2); l30 = (l30 + 1)) {
			fRec25[l30] = 0.0f;
		}
		for (int l31 = 0; (l31 < 2); l31 = (l31 + 1)) {
			fRec26[l31] = 0.0f;
		}
		for (int l32 = 0; (l32 < 2); l32 = (l32 + 1)) {
			fRec27[l32] = 0.0f;
		}
		for (int l33 = 0; (l33 < 2); l33 = (l33 + 1)) {
			fRec28[l33] = 0.0f;
		}
		for (int l34 = 0; (l34 < 2); l34 = (l34 + 1)) {
			fRec29[l34] = 0.0f;
		}
		for (int l35 = 0; (l35 < 2); l35 = (l35 + 1)) {
			fRec31[l35] = 0.0f;
		}
		for (int l36 = 0; (l36 < 3); l36 = (l36 + 1)) {
			fRec19[l36] = 0.0f;
		}
		for (int l37 = 0; (l37 < 2); l37 = (l37 + 1)) {
			fRec32[l37] = 0.0f;
		}
		for (int l38 = 0; (l38 < 2); l38 = (l38 + 1)) {
			fRec33[l38] = 0.0f;
		}
		for (int l39 = 0; (l39 < 2); l39 = (l39 + 1)) {
			fRec35[l39] = 0.0f;
		}
		for (int l40 = 0; (l40 < 2); l40 = (l40 + 1)) {
			fRec37[l40] = 0.0f;
		}
		for (int l41 = 0; (l41 < 2); l41 = (l41 + 1)) {
			fVec7[l41] = 0.0f;
		}
		for (int l42 = 0; (l42 < 2); l42 = (l42 + 1)) {
			fRec36[l42] = 0.0f;
		}
		for (int l43 = 0; (l43 < 2); l43 = (l43 + 1)) {
			fVec8[l43] = 0.0f;
		}
		for (int l44 = 0; (l44 < 4096); l44 = (l44 + 1)) {
			fVec9[l44] = 0.0f;
		}
		for (int l45 = 0; (l45 < 2); l45 = (l45 + 1)) {
			fRec38[l45] = 0.0f;
		}
		for (int l46 = 0; (l46 < 2); l46 = (l46 + 1)) {
			fRec39[l46] = 0.0f;
		}
		for (int l47 = 0; (l47 < 2); l47 = (l47 + 1)) {
			fRec40[l47] = 0.0f;
		}
		for (int l48 = 0; (l48 < 2); l48 = (l48 + 1)) {
			fRec41[l48] = 0.0f;
		}
		for (int l49 = 0; (l49 < 2); l49 = (l49 + 1)) {
			fRec42[l49] = 0.0f;
		}
		for (int l50 = 0; (l50 < 2); l50 = (l50 + 1)) {
			fRec43[l50] = 0.0f;
		}
		for (int l51 = 0; (l51 < 2); l51 = (l51 + 1)) {
			fRec44[l51] = 0.0f;
		}
		for (int l52 = 0; (l52 < 2); l52 = (l52 + 1)) {
			fRec46[l52] = 0.0f;
		}
		for (int l53 = 0; (l53 < 3); l53 = (l53 + 1)) {
			fRec34[l53] = 0.0f;
		}
		for (int l54 = 0; (l54 < 2); l54 = (l54 + 1)) {
			fRec47[l54] = 0.0f;
		}
		for (int l55 = 0; (l55 < 2); l55 = (l55 + 1)) {
			fRec48[l55] = 0.0f;
		}
		for (int l56 = 0; (l56 < 2); l56 = (l56 + 1)) {
			fRec50[l56] = 0.0f;
		}
		for (int l57 = 0; (l57 < 2); l57 = (l57 + 1)) {
			fRec52[l57] = 0.0f;
		}
		for (int l58 = 0; (l58 < 2); l58 = (l58 + 1)) {
			fVec10[l58] = 0.0f;
		}
		for (int l59 = 0; (l59 < 2); l59 = (l59 + 1)) {
			fRec51[l59] = 0.0f;
		}
		for (int l60 = 0; (l60 < 2); l60 = (l60 + 1)) {
			fVec11[l60] = 0.0f;
		}
		for (int l61 = 0; (l61 < 4096); l61 = (l61 + 1)) {
			fVec12[l61] = 0.0f;
		}
		for (int l62 = 0; (l62 < 2); l62 = (l62 + 1)) {
			fRec53[l62] = 0.0f;
		}
		for (int l63 = 0; (l63 < 2); l63 = (l63 + 1)) {
			fRec54[l63] = 0.0f;
		}
		for (int l64 = 0; (l64 < 2); l64 = (l64 + 1)) {
			fRec55[l64] = 0.0f;
		}
		for (int l65 = 0; (l65 < 2); l65 = (l65 + 1)) {
			fRec56[l65] = 0.0f;
		}
		for (int l66 = 0; (l66 < 2); l66 = (l66 + 1)) {
			fRec57[l66] = 0.0f;
		}
		for (int l67 = 0; (l67 < 2); l67 = (l67 + 1)) {
			fRec58[l67] = 0.0f;
		}
		for (int l68 = 0; (l68 < 2); l68 = (l68 + 1)) {
			fRec59[l68] = 0.0f;
		}
		for (int l69 = 0; (l69 < 2); l69 = (l69 + 1)) {
			fRec61[l69] = 0.0f;
		}
		for (int l70 = 0; (l70 < 3); l70 = (l70 + 1)) {
			fRec49[l70] = 0.0f;
		}
		for (int l71 = 0; (l71 < 2); l71 = (l71 + 1)) {
			fRec62[l71] = 0.0f;
		}
		for (int l72 = 0; (l72 < 2); l72 = (l72 + 1)) {
			fRec63[l72] = 0.0f;
		}
		for (int l73 = 0; (l73 < 2); l73 = (l73 + 1)) {
			fRec65[l73] = 0.0f;
		}
		for (int l74 = 0; (l74 < 2); l74 = (l74 + 1)) {
			fRec67[l74] = 0.0f;
		}
		for (int l75 = 0; (l75 < 2); l75 = (l75 + 1)) {
			fVec13[l75] = 0.0f;
		}
		for (int l76 = 0; (l76 < 2); l76 = (l76 + 1)) {
			fRec66[l76] = 0.0f;
		}
		for (int l77 = 0; (l77 < 2); l77 = (l77 + 1)) {
			fVec14[l77] = 0.0f;
		}
		for (int l78 = 0; (l78 < 4096); l78 = (l78 + 1)) {
			fVec15[l78] = 0.0f;
		}
		for (int l79 = 0; (l79 < 2); l79 = (l79 + 1)) {
			fRec68[l79] = 0.0f;
		}
		for (int l80 = 0; (l80 < 2); l80 = (l80 + 1)) {
			fRec69[l80] = 0.0f;
		}
		for (int l81 = 0; (l81 < 2); l81 = (l81 + 1)) {
			fRec70[l81] = 0.0f;
		}
		for (int l82 = 0; (l82 < 2); l82 = (l82 + 1)) {
			fRec71[l82] = 0.0f;
		}
		for (int l83 = 0; (l83 < 2); l83 = (l83 + 1)) {
			fRec72[l83] = 0.0f;
		}
		for (int l84 = 0; (l84 < 2); l84 = (l84 + 1)) {
			fRec73[l84] = 0.0f;
		}
		for (int l85 = 0; (l85 < 2); l85 = (l85 + 1)) {
			fRec74[l85] = 0.0f;
		}
		for (int l86 = 0; (l86 < 2); l86 = (l86 + 1)) {
			fRec76[l86] = 0.0f;
		}
		for (int l87 = 0; (l87 < 3); l87 = (l87 + 1)) {
			fRec64[l87] = 0.0f;
		}
		for (int l88 = 0; (l88 < 2); l88 = (l88 + 1)) {
			fRec77[l88] = 0.0f;
		}
		for (int l89 = 0; (l89 < 2); l89 = (l89 + 1)) {
			fRec78[l89] = 0.0f;
		}
		for (int l90 = 0; (l90 < 2); l90 = (l90 + 1)) {
			fRec80[l90] = 0.0f;
		}
		for (int l91 = 0; (l91 < 2); l91 = (l91 + 1)) {
			fRec82[l91] = 0.0f;
		}
		for (int l92 = 0; (l92 < 2); l92 = (l92 + 1)) {
			fVec16[l92] = 0.0f;
		}
		for (int l93 = 0; (l93 < 2); l93 = (l93 + 1)) {
			fRec81[l93] = 0.0f;
		}
		for (int l94 = 0; (l94 < 2); l94 = (l94 + 1)) {
			fVec17[l94] = 0.0f;
		}
		for (int l95 = 0; (l95 < 4096); l95 = (l95 + 1)) {
			fVec18[l95] = 0.0f;
		}
		for (int l96 = 0; (l96 < 2); l96 = (l96 + 1)) {
			fRec83[l96] = 0.0f;
		}
		for (int l97 = 0; (l97 < 2); l97 = (l97 + 1)) {
			fRec84[l97] = 0.0f;
		}
		for (int l98 = 0; (l98 < 2); l98 = (l98 + 1)) {
			fRec85[l98] = 0.0f;
		}
		for (int l99 = 0; (l99 < 2); l99 = (l99 + 1)) {
			fRec86[l99] = 0.0f;
		}
		for (int l100 = 0; (l100 < 2); l100 = (l100 + 1)) {
			fRec87[l100] = 0.0f;
		}
		for (int l101 = 0; (l101 < 2); l101 = (l101 + 1)) {
			fRec88[l101] = 0.0f;
		}
		for (int l102 = 0; (l102 < 2); l102 = (l102 + 1)) {
			fRec89[l102] = 0.0f;
		}
		for (int l103 = 0; (l103 < 2); l103 = (l103 + 1)) {
			fRec91[l103] = 0.0f;
		}
		for (int l104 = 0; (l104 < 3); l104 = (l104 + 1)) {
			fRec79[l104] = 0.0f;
		}
		for (int l105 = 0; (l105 < 2); l105 = (l105 + 1)) {
			fRec92[l105] = 0.0f;
		}
		for (int l106 = 0; (l106 < 2); l106 = (l106 + 1)) {
			fRec93[l106] = 0.0f;
		}
		for (int l107 = 0; (l107 < 2); l107 = (l107 + 1)) {
			fRec95[l107] = 0.0f;
		}
		for (int l108 = 0; (l108 < 2); l108 = (l108 + 1)) {
			fRec97[l108] = 0.0f;
		}
		for (int l109 = 0; (l109 < 2); l109 = (l109 + 1)) {
			fVec19[l109] = 0.0f;
		}
		for (int l110 = 0; (l110 < 2); l110 = (l110 + 1)) {
			fRec96[l110] = 0.0f;
		}
		for (int l111 = 0; (l111 < 2); l111 = (l111 + 1)) {
			fVec20[l111] = 0.0f;
		}
		for (int l112 = 0; (l112 < 4096); l112 = (l112 + 1)) {
			fVec21[l112] = 0.0f;
		}
		for (int l113 = 0; (l113 < 2); l113 = (l113 + 1)) {
			fRec98[l113] = 0.0f;
		}
		for (int l114 = 0; (l114 < 2); l114 = (l114 + 1)) {
			fRec99[l114] = 0.0f;
		}
		for (int l115 = 0; (l115 < 2); l115 = (l115 + 1)) {
			fRec100[l115] = 0.0f;
		}
		for (int l116 = 0; (l116 < 2); l116 = (l116 + 1)) {
			fRec101[l116] = 0.0f;
		}
		for (int l117 = 0; (l117 < 2); l117 = (l117 + 1)) {
			fRec102[l117] = 0.0f;
		}
		for (int l118 = 0; (l118 < 2); l118 = (l118 + 1)) {
			fRec103[l118] = 0.0f;
		}
		for (int l119 = 0; (l119 < 2); l119 = (l119 + 1)) {
			fRec104[l119] = 0.0f;
		}
		for (int l120 = 0; (l120 < 2); l120 = (l120 + 1)) {
			fRec106[l120] = 0.0f;
		}
		for (int l121 = 0; (l121 < 3); l121 = (l121 + 1)) {
			fRec94[l121] = 0.0f;
		}
		for (int l122 = 0; (l122 < 2); l122 = (l122 + 1)) {
			fRec107[l122] = 0.0f;
		}
		for (int l123 = 0; (l123 < 2); l123 = (l123 + 1)) {
			fRec108[l123] = 0.0f;
		}
		for (int l124 = 0; (l124 < 2); l124 = (l124 + 1)) {
			fRec110[l124] = 0.0f;
		}
		for (int l125 = 0; (l125 < 2); l125 = (l125 + 1)) {
			fRec112[l125] = 0.0f;
		}
		for (int l126 = 0; (l126 < 2); l126 = (l126 + 1)) {
			fVec22[l126] = 0.0f;
		}
		for (int l127 = 0; (l127 < 2); l127 = (l127 + 1)) {
			fRec111[l127] = 0.0f;
		}
		for (int l128 = 0; (l128 < 2); l128 = (l128 + 1)) {
			fVec23[l128] = 0.0f;
		}
		for (int l129 = 0; (l129 < 4096); l129 = (l129 + 1)) {
			fVec24[l129] = 0.0f;
		}
		for (int l130 = 0; (l130 < 2); l130 = (l130 + 1)) {
			fRec113[l130] = 0.0f;
		}
		for (int l131 = 0; (l131 < 2); l131 = (l131 + 1)) {
			fRec114[l131] = 0.0f;
		}
		for (int l132 = 0; (l132 < 2); l132 = (l132 + 1)) {
			fRec115[l132] = 0.0f;
		}
		for (int l133 = 0; (l133 < 2); l133 = (l133 + 1)) {
			fRec116[l133] = 0.0f;
		}
		for (int l134 = 0; (l134 < 2); l134 = (l134 + 1)) {
			fRec117[l134] = 0.0f;
		}
		for (int l135 = 0; (l135 < 2); l135 = (l135 + 1)) {
			fRec118[l135] = 0.0f;
		}
		for (int l136 = 0; (l136 < 2); l136 = (l136 + 1)) {
			fRec119[l136] = 0.0f;
		}
		for (int l137 = 0; (l137 < 2); l137 = (l137 + 1)) {
			fRec121[l137] = 0.0f;
		}
		for (int l138 = 0; (l138 < 3); l138 = (l138 + 1)) {
			fRec109[l138] = 0.0f;
		}
		for (int l139 = 0; (l139 < 2); l139 = (l139 + 1)) {
			fRec122[l139] = 0.0f;
		}
		for (int l140 = 0; (l140 < 2); l140 = (l140 + 1)) {
			fRec123[l140] = 0.0f;
		}
		for (int l141 = 0; (l141 < 2); l141 = (l141 + 1)) {
			fRec125[l141] = 0.0f;
		}
		for (int l142 = 0; (l142 < 2); l142 = (l142 + 1)) {
			fRec127[l142] = 0.0f;
		}
		for (int l143 = 0; (l143 < 2); l143 = (l143 + 1)) {
			fVec25[l143] = 0.0f;
		}
		for (int l144 = 0; (l144 < 2); l144 = (l144 + 1)) {
			fRec126[l144] = 0.0f;
		}
		for (int l145 = 0; (l145 < 2); l145 = (l145 + 1)) {
			fVec26[l145] = 0.0f;
		}
		for (int l146 = 0; (l146 < 4096); l146 = (l146 + 1)) {
			fVec27[l146] = 0.0f;
		}
		for (int l147 = 0; (l147 < 2); l147 = (l147 + 1)) {
			fRec128[l147] = 0.0f;
		}
		for (int l148 = 0; (l148 < 2); l148 = (l148 + 1)) {
			fRec129[l148] = 0.0f;
		}
		for (int l149 = 0; (l149 < 2); l149 = (l149 + 1)) {
			fRec130[l149] = 0.0f;
		}
		for (int l150 = 0; (l150 < 2); l150 = (l150 + 1)) {
			fRec131[l150] = 0.0f;
		}
		for (int l151 = 0; (l151 < 2); l151 = (l151 + 1)) {
			fRec132[l151] = 0.0f;
		}
		for (int l152 = 0; (l152 < 2); l152 = (l152 + 1)) {
			fRec133[l152] = 0.0f;
		}
		for (int l153 = 0; (l153 < 2); l153 = (l153 + 1)) {
			fRec134[l153] = 0.0f;
		}
		for (int l154 = 0; (l154 < 2); l154 = (l154 + 1)) {
			fRec136[l154] = 0.0f;
		}
		for (int l155 = 0; (l155 < 3); l155 = (l155 + 1)) {
			fRec124[l155] = 0.0f;
		}
		for (int l156 = 0; (l156 < 2); l156 = (l156 + 1)) {
			fRec137[l156] = 0.0f;
		}
		for (int l157 = 0; (l157 < 2); l157 = (l157 + 1)) {
			fRec138[l157] = 0.0f;
		}
		for (int l158 = 0; (l158 < 2); l158 = (l158 + 1)) {
			fRec140[l158] = 0.0f;
		}
		for (int l159 = 0; (l159 < 2); l159 = (l159 + 1)) {
			fRec142[l159] = 0.0f;
		}
		for (int l160 = 0; (l160 < 2); l160 = (l160 + 1)) {
			fVec28[l160] = 0.0f;
		}
		for (int l161 = 0; (l161 < 2); l161 = (l161 + 1)) {
			fRec141[l161] = 0.0f;
		}
		for (int l162 = 0; (l162 < 2); l162 = (l162 + 1)) {
			fVec29[l162] = 0.0f;
		}
		for (int l163 = 0; (l163 < 4096); l163 = (l163 + 1)) {
			fVec30[l163] = 0.0f;
		}
		for (int l164 = 0; (l164 < 2); l164 = (l164 + 1)) {
			fRec143[l164] = 0.0f;
		}
		for (int l165 = 0; (l165 < 2); l165 = (l165 + 1)) {
			fRec144[l165] = 0.0f;
		}
		for (int l166 = 0; (l166 < 2); l166 = (l166 + 1)) {
			fRec145[l166] = 0.0f;
		}
		for (int l167 = 0; (l167 < 2); l167 = (l167 + 1)) {
			fRec146[l167] = 0.0f;
		}
		for (int l168 = 0; (l168 < 2); l168 = (l168 + 1)) {
			fRec147[l168] = 0.0f;
		}
		for (int l169 = 0; (l169 < 2); l169 = (l169 + 1)) {
			fRec148[l169] = 0.0f;
		}
		for (int l170 = 0; (l170 < 2); l170 = (l170 + 1)) {
			fRec149[l170] = 0.0f;
		}
		for (int l171 = 0; (l171 < 2); l171 = (l171 + 1)) {
			fRec151[l171] = 0.0f;
		}
		for (int l172 = 0; (l172 < 3); l172 = (l172 + 1)) {
			fRec139[l172] = 0.0f;
		}
		for (int l173 = 0; (l173 < 2); l173 = (l173 + 1)) {
			fRec152[l173] = 0.0f;
		}
		for (int l174 = 0; (l174 < 2); l174 = (l174 + 1)) {
			fRec153[l174] = 0.0f;
		}
		for (int l175 = 0; (l175 < 2); l175 = (l175 + 1)) {
			fRec155[l175] = 0.0f;
		}
		for (int l176 = 0; (l176 < 2); l176 = (l176 + 1)) {
			fRec157[l176] = 0.0f;
		}
		for (int l177 = 0; (l177 < 2); l177 = (l177 + 1)) {
			fVec31[l177] = 0.0f;
		}
		for (int l178 = 0; (l178 < 2); l178 = (l178 + 1)) {
			fRec156[l178] = 0.0f;
		}
		for (int l179 = 0; (l179 < 2); l179 = (l179 + 1)) {
			fVec32[l179] = 0.0f;
		}
		for (int l180 = 0; (l180 < 4096); l180 = (l180 + 1)) {
			fVec33[l180] = 0.0f;
		}
		for (int l181 = 0; (l181 < 2); l181 = (l181 + 1)) {
			fRec158[l181] = 0.0f;
		}
		for (int l182 = 0; (l182 < 2); l182 = (l182 + 1)) {
			fRec159[l182] = 0.0f;
		}
		for (int l183 = 0; (l183 < 2); l183 = (l183 + 1)) {
			fRec160[l183] = 0.0f;
		}
		for (int l184 = 0; (l184 < 2); l184 = (l184 + 1)) {
			fRec161[l184] = 0.0f;
		}
		for (int l185 = 0; (l185 < 2); l185 = (l185 + 1)) {
			fRec162[l185] = 0.0f;
		}
		for (int l186 = 0; (l186 < 2); l186 = (l186 + 1)) {
			fRec163[l186] = 0.0f;
		}
		for (int l187 = 0; (l187 < 2); l187 = (l187 + 1)) {
			fRec164[l187] = 0.0f;
		}
		for (int l188 = 0; (l188 < 2); l188 = (l188 + 1)) {
			fRec166[l188] = 0.0f;
		}
		for (int l189 = 0; (l189 < 3); l189 = (l189 + 1)) {
			fRec154[l189] = 0.0f;
		}
		for (int l190 = 0; (l190 < 2); l190 = (l190 + 1)) {
			fRec167[l190] = 0.0f;
		}
		for (int l191 = 0; (l191 < 2); l191 = (l191 + 1)) {
			fRec168[l191] = 0.0f;
		}
		for (int l192 = 0; (l192 < 2); l192 = (l192 + 1)) {
			fRec170[l192] = 0.0f;
		}
		for (int l193 = 0; (l193 < 2); l193 = (l193 + 1)) {
			fRec172[l193] = 0.0f;
		}
		for (int l194 = 0; (l194 < 2); l194 = (l194 + 1)) {
			fVec34[l194] = 0.0f;
		}
		for (int l195 = 0; (l195 < 2); l195 = (l195 + 1)) {
			fRec171[l195] = 0.0f;
		}
		for (int l196 = 0; (l196 < 2); l196 = (l196 + 1)) {
			fVec35[l196] = 0.0f;
		}
		for (int l197 = 0; (l197 < 4096); l197 = (l197 + 1)) {
			fVec36[l197] = 0.0f;
		}
		for (int l198 = 0; (l198 < 2); l198 = (l198 + 1)) {
			fRec173[l198] = 0.0f;
		}
		for (int l199 = 0; (l199 < 2); l199 = (l199 + 1)) {
			fRec174[l199] = 0.0f;
		}
		for (int l200 = 0; (l200 < 2); l200 = (l200 + 1)) {
			fRec175[l200] = 0.0f;
		}
		for (int l201 = 0; (l201 < 2); l201 = (l201 + 1)) {
			fRec176[l201] = 0.0f;
		}
		for (int l202 = 0; (l202 < 2); l202 = (l202 + 1)) {
			fRec177[l202] = 0.0f;
		}
		for (int l203 = 0; (l203 < 2); l203 = (l203 + 1)) {
			fRec178[l203] = 0.0f;
		}
		for (int l204 = 0; (l204 < 2); l204 = (l204 + 1)) {
			fRec179[l204] = 0.0f;
		}
		for (int l205 = 0; (l205 < 2); l205 = (l205 + 1)) {
			fRec181[l205] = 0.0f;
		}
		for (int l206 = 0; (l206 < 3); l206 = (l206 + 1)) {
			fRec169[l206] = 0.0f;
		}
		for (int l207 = 0; (l207 < 2); l207 = (l207 + 1)) {
			fRec182[l207] = 0.0f;
		}
		for (int l208 = 0; (l208 < 2); l208 = (l208 + 1)) {
			fRec183[l208] = 0.0f;
		}
		for (int l209 = 0; (l209 < 2); l209 = (l209 + 1)) {
			fRec185[l209] = 0.0f;
		}
		for (int l210 = 0; (l210 < 2); l210 = (l210 + 1)) {
			fRec187[l210] = 0.0f;
		}
		for (int l211 = 0; (l211 < 2); l211 = (l211 + 1)) {
			fVec37[l211] = 0.0f;
		}
		for (int l212 = 0; (l212 < 2); l212 = (l212 + 1)) {
			fRec186[l212] = 0.0f;
		}
		for (int l213 = 0; (l213 < 2); l213 = (l213 + 1)) {
			fVec38[l213] = 0.0f;
		}
		for (int l214 = 0; (l214 < 4096); l214 = (l214 + 1)) {
			fVec39[l214] = 0.0f;
		}
		for (int l215 = 0; (l215 < 2); l215 = (l215 + 1)) {
			fRec188[l215] = 0.0f;
		}
		for (int l216 = 0; (l216 < 2); l216 = (l216 + 1)) {
			fRec189[l216] = 0.0f;
		}
		for (int l217 = 0; (l217 < 2); l217 = (l217 + 1)) {
			fRec190[l217] = 0.0f;
		}
		for (int l218 = 0; (l218 < 2); l218 = (l218 + 1)) {
			fRec191[l218] = 0.0f;
		}
		for (int l219 = 0; (l219 < 2); l219 = (l219 + 1)) {
			fRec192[l219] = 0.0f;
		}
		for (int l220 = 0; (l220 < 2); l220 = (l220 + 1)) {
			fRec193[l220] = 0.0f;
		}
		for (int l221 = 0; (l221 < 2); l221 = (l221 + 1)) {
			fRec194[l221] = 0.0f;
		}
		for (int l222 = 0; (l222 < 2); l222 = (l222 + 1)) {
			fRec196[l222] = 0.0f;
		}
		for (int l223 = 0; (l223 < 3); l223 = (l223 + 1)) {
			fRec184[l223] = 0.0f;
		}
		for (int l224 = 0; (l224 < 2); l224 = (l224 + 1)) {
			fRec197[l224] = 0.0f;
		}
		for (int l225 = 0; (l225 < 2); l225 = (l225 + 1)) {
			fRec198[l225] = 0.0f;
		}
		for (int l226 = 0; (l226 < 2); l226 = (l226 + 1)) {
			fRec200[l226] = 0.0f;
		}
		for (int l227 = 0; (l227 < 2); l227 = (l227 + 1)) {
			fRec202[l227] = 0.0f;
		}
		for (int l228 = 0; (l228 < 2); l228 = (l228 + 1)) {
			fVec40[l228] = 0.0f;
		}
		for (int l229 = 0; (l229 < 2); l229 = (l229 + 1)) {
			fRec201[l229] = 0.0f;
		}
		for (int l230 = 0; (l230 < 2); l230 = (l230 + 1)) {
			fVec41[l230] = 0.0f;
		}
		for (int l231 = 0; (l231 < 4096); l231 = (l231 + 1)) {
			fVec42[l231] = 0.0f;
		}
		for (int l232 = 0; (l232 < 2); l232 = (l232 + 1)) {
			fRec203[l232] = 0.0f;
		}
		for (int l233 = 0; (l233 < 2); l233 = (l233 + 1)) {
			fRec204[l233] = 0.0f;
		}
		for (int l234 = 0; (l234 < 2); l234 = (l234 + 1)) {
			fRec205[l234] = 0.0f;
		}
		for (int l235 = 0; (l235 < 2); l235 = (l235 + 1)) {
			fRec206[l235] = 0.0f;
		}
		for (int l236 = 0; (l236 < 2); l236 = (l236 + 1)) {
			fRec207[l236] = 0.0f;
		}
		for (int l237 = 0; (l237 < 2); l237 = (l237 + 1)) {
			fRec208[l237] = 0.0f;
		}
		for (int l238 = 0; (l238 < 2); l238 = (l238 + 1)) {
			fRec209[l238] = 0.0f;
		}
		for (int l239 = 0; (l239 < 2); l239 = (l239 + 1)) {
			fRec211[l239] = 0.0f;
		}
		for (int l240 = 0; (l240 < 3); l240 = (l240 + 1)) {
			fRec199[l240] = 0.0f;
		}
		for (int l241 = 0; (l241 < 2); l241 = (l241 + 1)) {
			fRec212[l241] = 0.0f;
		}
		for (int l242 = 0; (l242 < 2); l242 = (l242 + 1)) {
			fRec213[l242] = 0.0f;
		}
		for (int l243 = 0; (l243 < 2); l243 = (l243 + 1)) {
			fRec215[l243] = 0.0f;
		}
		for (int l244 = 0; (l244 < 2); l244 = (l244 + 1)) {
			fRec217[l244] = 0.0f;
		}
		for (int l245 = 0; (l245 < 2); l245 = (l245 + 1)) {
			fVec43[l245] = 0.0f;
		}
		for (int l246 = 0; (l246 < 2); l246 = (l246 + 1)) {
			fRec216[l246] = 0.0f;
		}
		for (int l247 = 0; (l247 < 2); l247 = (l247 + 1)) {
			fVec44[l247] = 0.0f;
		}
		for (int l248 = 0; (l248 < 4096); l248 = (l248 + 1)) {
			fVec45[l248] = 0.0f;
		}
		for (int l249 = 0; (l249 < 2); l249 = (l249 + 1)) {
			fRec218[l249] = 0.0f;
		}
		for (int l250 = 0; (l250 < 2); l250 = (l250 + 1)) {
			fRec219[l250] = 0.0f;
		}
		for (int l251 = 0; (l251 < 2); l251 = (l251 + 1)) {
			fRec220[l251] = 0.0f;
		}
		for (int l252 = 0; (l252 < 2); l252 = (l252 + 1)) {
			fRec221[l252] = 0.0f;
		}
		for (int l253 = 0; (l253 < 2); l253 = (l253 + 1)) {
			fRec222[l253] = 0.0f;
		}
		for (int l254 = 0; (l254 < 2); l254 = (l254 + 1)) {
			fRec223[l254] = 0.0f;
		}
		for (int l255 = 0; (l255 < 2); l255 = (l255 + 1)) {
			fRec224[l255] = 0.0f;
		}
		for (int l256 = 0; (l256 < 2); l256 = (l256 + 1)) {
			fRec226[l256] = 0.0f;
		}
		for (int l257 = 0; (l257 < 3); l257 = (l257 + 1)) {
			fRec214[l257] = 0.0f;
		}
		for (int l258 = 0; (l258 < 2); l258 = (l258 + 1)) {
			fRec227[l258] = 0.0f;
		}
		for (int l259 = 0; (l259 < 2); l259 = (l259 + 1)) {
			fRec228[l259] = 0.0f;
		}
		for (int l260 = 0; (l260 < 2); l260 = (l260 + 1)) {
			fRec230[l260] = 0.0f;
		}
		for (int l261 = 0; (l261 < 2); l261 = (l261 + 1)) {
			fRec232[l261] = 0.0f;
		}
		for (int l262 = 0; (l262 < 2); l262 = (l262 + 1)) {
			fVec46[l262] = 0.0f;
		}
		for (int l263 = 0; (l263 < 2); l263 = (l263 + 1)) {
			fRec231[l263] = 0.0f;
		}
		for (int l264 = 0; (l264 < 2); l264 = (l264 + 1)) {
			fVec47[l264] = 0.0f;
		}
		for (int l265 = 0; (l265 < 4096); l265 = (l265 + 1)) {
			fVec48[l265] = 0.0f;
		}
		for (int l266 = 0; (l266 < 2); l266 = (l266 + 1)) {
			fRec233[l266] = 0.0f;
		}
		for (int l267 = 0; (l267 < 2); l267 = (l267 + 1)) {
			fRec234[l267] = 0.0f;
		}
		for (int l268 = 0; (l268 < 2); l268 = (l268 + 1)) {
			fRec235[l268] = 0.0f;
		}
		for (int l269 = 0; (l269 < 2); l269 = (l269 + 1)) {
			fRec236[l269] = 0.0f;
		}
		for (int l270 = 0; (l270 < 2); l270 = (l270 + 1)) {
			fRec237[l270] = 0.0f;
		}
		for (int l271 = 0; (l271 < 2); l271 = (l271 + 1)) {
			fRec238[l271] = 0.0f;
		}
		for (int l272 = 0; (l272 < 2); l272 = (l272 + 1)) {
			fRec239[l272] = 0.0f;
		}
		for (int l273 = 0; (l273 < 2); l273 = (l273 + 1)) {
			fRec241[l273] = 0.0f;
		}
		for (int l274 = 0; (l274 < 3); l274 = (l274 + 1)) {
			fRec229[l274] = 0.0f;
		}
		for (int l275 = 0; (l275 < 2); l275 = (l275 + 1)) {
			fRec244[l275] = 0.0f;
		}
		for (int l276 = 0; (l276 < 2); l276 = (l276 + 1)) {
			iRec245[l276] = 0;
		}
		for (int l277 = 0; (l277 < 2); l277 = (l277 + 1)) {
			fRec247[l277] = 0.0f;
		}
		for (int l278 = 0; (l278 < 2); l278 = (l278 + 1)) {
			fRec246[l278] = 0.0f;
		}
		for (int l279 = 0; (l279 < 2); l279 = (l279 + 1)) {
			fRec248[l279] = 0.0f;
		}
		for (int l280 = 0; (l280 < 3); l280 = (l280 + 1)) {
			fRec243[l280] = 0.0f;
		}
		for (int l281 = 0; (l281 < 3); l281 = (l281 + 1)) {
			fRec242[l281] = 0.0f;
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
		ui_interface->openVerticalBox("BASIS_pulse.0.tmp");
		ui_interface->openHorizontalBox("Channels");
		ui_interface->declare(0, "0", "");
		ui_interface->openVerticalBox("BL0");
		ui_interface->declare(&fEntry2, "0", "");
		ui_interface->addNumEntry("freq", &fEntry2, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fEntry0, "1", "");
		ui_interface->addNumEntry("pan", &fEntry0, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry3, "2", "");
		ui_interface->declare(&fEntry3, "style", "knob");
		ui_interface->addNumEntry("duty", &fEntry3, 0.5f, 0.00100000005f, 0.999000013f, 0.00100000005f);
		ui_interface->declare(&fVslider1, "3", "");
		ui_interface->declare(&fVslider1, "scale", "exp");
		ui_interface->addVerticalSlider("gain", &fVslider1, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fVslider2, "4", "");
		ui_interface->addVerticalSlider("cutoff", &fVslider2, 500.0f, 60.0f, 3000.0f, 1.0f);
		ui_interface->declare(&fEntry5, "5", "");
		ui_interface->declare(&fEntry5, "style", "knob");
		ui_interface->addNumEntry("gainTriang", &fEntry5, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry4, "6", "");
		ui_interface->declare(&fEntry4, "style", "knob");
		ui_interface->addNumEntry("gainSine", &fEntry4, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry1, "7", "");
		ui_interface->declare(&fEntry1, "style", "knob");
		ui_interface->addNumEntry("gainPulse", &fEntry1, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry6, "8", "");
		ui_interface->declare(&fEntry6, "style", "knob");
		ui_interface->addNumEntry("gainSaw", &fEntry6, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fCheckbox0, "9", "");
		ui_interface->addCheckButton("Mute", &fCheckbox0);
		ui_interface->closeBox();
		ui_interface->declare(0, "1", "");
		ui_interface->openVerticalBox("BL1");
		ui_interface->declare(&fEntry9, "0", "");
		ui_interface->addNumEntry("freq", &fEntry9, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fEntry7, "1", "");
		ui_interface->addNumEntry("pan", &fEntry7, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry10, "2", "");
		ui_interface->declare(&fEntry10, "style", "knob");
		ui_interface->addNumEntry("duty", &fEntry10, 0.5f, 0.00100000005f, 0.999000013f, 0.00100000005f);
		ui_interface->declare(&fVslider3, "3", "");
		ui_interface->declare(&fVslider3, "scale", "exp");
		ui_interface->addVerticalSlider("gain", &fVslider3, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fVslider4, "4", "");
		ui_interface->addVerticalSlider("cutoff", &fVslider4, 500.0f, 60.0f, 3000.0f, 1.0f);
		ui_interface->declare(&fEntry12, "5", "");
		ui_interface->declare(&fEntry12, "style", "knob");
		ui_interface->addNumEntry("gainTriang", &fEntry12, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry11, "6", "");
		ui_interface->declare(&fEntry11, "style", "knob");
		ui_interface->addNumEntry("gainSine", &fEntry11, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry8, "7", "");
		ui_interface->declare(&fEntry8, "style", "knob");
		ui_interface->addNumEntry("gainPulse", &fEntry8, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry13, "8", "");
		ui_interface->declare(&fEntry13, "style", "knob");
		ui_interface->addNumEntry("gainSaw", &fEntry13, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fCheckbox1, "9", "");
		ui_interface->addCheckButton("Mute", &fCheckbox1);
		ui_interface->closeBox();
		ui_interface->declare(0, "2", "");
		ui_interface->openVerticalBox("BL2");
		ui_interface->declare(&fEntry16, "0", "");
		ui_interface->addNumEntry("freq", &fEntry16, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fEntry14, "1", "");
		ui_interface->addNumEntry("pan", &fEntry14, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry17, "2", "");
		ui_interface->declare(&fEntry17, "style", "knob");
		ui_interface->addNumEntry("duty", &fEntry17, 0.5f, 0.00100000005f, 0.999000013f, 0.00100000005f);
		ui_interface->declare(&fVslider5, "3", "");
		ui_interface->declare(&fVslider5, "scale", "exp");
		ui_interface->addVerticalSlider("gain", &fVslider5, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fVslider6, "4", "");
		ui_interface->addVerticalSlider("cutoff", &fVslider6, 500.0f, 60.0f, 3000.0f, 1.0f);
		ui_interface->declare(&fEntry19, "5", "");
		ui_interface->declare(&fEntry19, "style", "knob");
		ui_interface->addNumEntry("gainTriang", &fEntry19, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry18, "6", "");
		ui_interface->declare(&fEntry18, "style", "knob");
		ui_interface->addNumEntry("gainSine", &fEntry18, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry15, "7", "");
		ui_interface->declare(&fEntry15, "style", "knob");
		ui_interface->addNumEntry("gainPulse", &fEntry15, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry20, "8", "");
		ui_interface->declare(&fEntry20, "style", "knob");
		ui_interface->addNumEntry("gainSaw", &fEntry20, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fCheckbox2, "9", "");
		ui_interface->addCheckButton("Mute", &fCheckbox2);
		ui_interface->closeBox();
		ui_interface->declare(0, "3", "");
		ui_interface->openVerticalBox("BL3");
		ui_interface->declare(&fEntry23, "0", "");
		ui_interface->addNumEntry("freq", &fEntry23, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fEntry21, "1", "");
		ui_interface->addNumEntry("pan", &fEntry21, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry24, "2", "");
		ui_interface->declare(&fEntry24, "style", "knob");
		ui_interface->addNumEntry("duty", &fEntry24, 0.5f, 0.00100000005f, 0.999000013f, 0.00100000005f);
		ui_interface->declare(&fVslider7, "3", "");
		ui_interface->declare(&fVslider7, "scale", "exp");
		ui_interface->addVerticalSlider("gain", &fVslider7, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fVslider8, "4", "");
		ui_interface->addVerticalSlider("cutoff", &fVslider8, 500.0f, 60.0f, 3000.0f, 1.0f);
		ui_interface->declare(&fEntry26, "5", "");
		ui_interface->declare(&fEntry26, "style", "knob");
		ui_interface->addNumEntry("gainTriang", &fEntry26, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry25, "6", "");
		ui_interface->declare(&fEntry25, "style", "knob");
		ui_interface->addNumEntry("gainSine", &fEntry25, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry22, "7", "");
		ui_interface->declare(&fEntry22, "style", "knob");
		ui_interface->addNumEntry("gainPulse", &fEntry22, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry27, "8", "");
		ui_interface->declare(&fEntry27, "style", "knob");
		ui_interface->addNumEntry("gainSaw", &fEntry27, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fCheckbox3, "9", "");
		ui_interface->addCheckButton("Mute", &fCheckbox3);
		ui_interface->closeBox();
		ui_interface->declare(0, "4", "");
		ui_interface->openVerticalBox("BL4");
		ui_interface->declare(&fEntry30, "0", "");
		ui_interface->addNumEntry("freq", &fEntry30, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fEntry28, "1", "");
		ui_interface->addNumEntry("pan", &fEntry28, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry31, "2", "");
		ui_interface->declare(&fEntry31, "style", "knob");
		ui_interface->addNumEntry("duty", &fEntry31, 0.5f, 0.00100000005f, 0.999000013f, 0.00100000005f);
		ui_interface->declare(&fVslider9, "3", "");
		ui_interface->declare(&fVslider9, "scale", "exp");
		ui_interface->addVerticalSlider("gain", &fVslider9, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fVslider10, "4", "");
		ui_interface->addVerticalSlider("cutoff", &fVslider10, 500.0f, 60.0f, 3000.0f, 1.0f);
		ui_interface->declare(&fEntry33, "5", "");
		ui_interface->declare(&fEntry33, "style", "knob");
		ui_interface->addNumEntry("gainTriang", &fEntry33, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry32, "6", "");
		ui_interface->declare(&fEntry32, "style", "knob");
		ui_interface->addNumEntry("gainSine", &fEntry32, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry29, "7", "");
		ui_interface->declare(&fEntry29, "style", "knob");
		ui_interface->addNumEntry("gainPulse", &fEntry29, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry34, "8", "");
		ui_interface->declare(&fEntry34, "style", "knob");
		ui_interface->addNumEntry("gainSaw", &fEntry34, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fCheckbox4, "9", "");
		ui_interface->addCheckButton("Mute", &fCheckbox4);
		ui_interface->closeBox();
		ui_interface->declare(0, "5", "");
		ui_interface->openVerticalBox("BL5");
		ui_interface->declare(&fEntry37, "0", "");
		ui_interface->addNumEntry("freq", &fEntry37, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fEntry35, "1", "");
		ui_interface->addNumEntry("pan", &fEntry35, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry38, "2", "");
		ui_interface->declare(&fEntry38, "style", "knob");
		ui_interface->addNumEntry("duty", &fEntry38, 0.5f, 0.00100000005f, 0.999000013f, 0.00100000005f);
		ui_interface->declare(&fVslider11, "3", "");
		ui_interface->declare(&fVslider11, "scale", "exp");
		ui_interface->addVerticalSlider("gain", &fVslider11, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fVslider12, "4", "");
		ui_interface->addVerticalSlider("cutoff", &fVslider12, 500.0f, 60.0f, 3000.0f, 1.0f);
		ui_interface->declare(&fEntry40, "5", "");
		ui_interface->declare(&fEntry40, "style", "knob");
		ui_interface->addNumEntry("gainTriang", &fEntry40, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry39, "6", "");
		ui_interface->declare(&fEntry39, "style", "knob");
		ui_interface->addNumEntry("gainSine", &fEntry39, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry36, "7", "");
		ui_interface->declare(&fEntry36, "style", "knob");
		ui_interface->addNumEntry("gainPulse", &fEntry36, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry41, "8", "");
		ui_interface->declare(&fEntry41, "style", "knob");
		ui_interface->addNumEntry("gainSaw", &fEntry41, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fCheckbox5, "9", "");
		ui_interface->addCheckButton("Mute", &fCheckbox5);
		ui_interface->closeBox();
		ui_interface->declare(0, "6", "");
		ui_interface->openVerticalBox("BL6");
		ui_interface->declare(&fEntry44, "0", "");
		ui_interface->addNumEntry("freq", &fEntry44, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fEntry42, "1", "");
		ui_interface->addNumEntry("pan", &fEntry42, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry45, "2", "");
		ui_interface->declare(&fEntry45, "style", "knob");
		ui_interface->addNumEntry("duty", &fEntry45, 0.5f, 0.00100000005f, 0.999000013f, 0.00100000005f);
		ui_interface->declare(&fVslider13, "3", "");
		ui_interface->declare(&fVslider13, "scale", "exp");
		ui_interface->addVerticalSlider("gain", &fVslider13, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fVslider14, "4", "");
		ui_interface->addVerticalSlider("cutoff", &fVslider14, 500.0f, 60.0f, 3000.0f, 1.0f);
		ui_interface->declare(&fEntry47, "5", "");
		ui_interface->declare(&fEntry47, "style", "knob");
		ui_interface->addNumEntry("gainTriang", &fEntry47, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry46, "6", "");
		ui_interface->declare(&fEntry46, "style", "knob");
		ui_interface->addNumEntry("gainSine", &fEntry46, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry43, "7", "");
		ui_interface->declare(&fEntry43, "style", "knob");
		ui_interface->addNumEntry("gainPulse", &fEntry43, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry48, "8", "");
		ui_interface->declare(&fEntry48, "style", "knob");
		ui_interface->addNumEntry("gainSaw", &fEntry48, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fCheckbox6, "9", "");
		ui_interface->addCheckButton("Mute", &fCheckbox6);
		ui_interface->closeBox();
		ui_interface->declare(0, "7", "");
		ui_interface->openVerticalBox("BL7");
		ui_interface->declare(&fEntry51, "0", "");
		ui_interface->addNumEntry("freq", &fEntry51, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fEntry49, "1", "");
		ui_interface->addNumEntry("pan", &fEntry49, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry52, "2", "");
		ui_interface->declare(&fEntry52, "style", "knob");
		ui_interface->addNumEntry("duty", &fEntry52, 0.5f, 0.00100000005f, 0.999000013f, 0.00100000005f);
		ui_interface->declare(&fVslider15, "3", "");
		ui_interface->declare(&fVslider15, "scale", "exp");
		ui_interface->addVerticalSlider("gain", &fVslider15, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fVslider16, "4", "");
		ui_interface->addVerticalSlider("cutoff", &fVslider16, 500.0f, 60.0f, 3000.0f, 1.0f);
		ui_interface->declare(&fEntry54, "5", "");
		ui_interface->declare(&fEntry54, "style", "knob");
		ui_interface->addNumEntry("gainTriang", &fEntry54, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry53, "6", "");
		ui_interface->declare(&fEntry53, "style", "knob");
		ui_interface->addNumEntry("gainSine", &fEntry53, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry50, "7", "");
		ui_interface->declare(&fEntry50, "style", "knob");
		ui_interface->addNumEntry("gainPulse", &fEntry50, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry55, "8", "");
		ui_interface->declare(&fEntry55, "style", "knob");
		ui_interface->addNumEntry("gainSaw", &fEntry55, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fCheckbox7, "9", "");
		ui_interface->addCheckButton("Mute", &fCheckbox7);
		ui_interface->closeBox();
		ui_interface->declare(0, "8", "");
		ui_interface->openVerticalBox("BL8");
		ui_interface->declare(&fEntry58, "0", "");
		ui_interface->addNumEntry("freq", &fEntry58, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fEntry56, "1", "");
		ui_interface->addNumEntry("pan", &fEntry56, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry59, "2", "");
		ui_interface->declare(&fEntry59, "style", "knob");
		ui_interface->addNumEntry("duty", &fEntry59, 0.5f, 0.00100000005f, 0.999000013f, 0.00100000005f);
		ui_interface->declare(&fVslider17, "3", "");
		ui_interface->declare(&fVslider17, "scale", "exp");
		ui_interface->addVerticalSlider("gain", &fVslider17, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fVslider18, "4", "");
		ui_interface->addVerticalSlider("cutoff", &fVslider18, 500.0f, 60.0f, 3000.0f, 1.0f);
		ui_interface->declare(&fEntry61, "5", "");
		ui_interface->declare(&fEntry61, "style", "knob");
		ui_interface->addNumEntry("gainTriang", &fEntry61, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry60, "6", "");
		ui_interface->declare(&fEntry60, "style", "knob");
		ui_interface->addNumEntry("gainSine", &fEntry60, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry57, "7", "");
		ui_interface->declare(&fEntry57, "style", "knob");
		ui_interface->addNumEntry("gainPulse", &fEntry57, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry62, "8", "");
		ui_interface->declare(&fEntry62, "style", "knob");
		ui_interface->addNumEntry("gainSaw", &fEntry62, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fCheckbox8, "9", "");
		ui_interface->addCheckButton("Mute", &fCheckbox8);
		ui_interface->closeBox();
		ui_interface->declare(0, "9", "");
		ui_interface->openVerticalBox("BL9");
		ui_interface->declare(&fEntry65, "0", "");
		ui_interface->addNumEntry("freq", &fEntry65, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fEntry63, "1", "");
		ui_interface->addNumEntry("pan", &fEntry63, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry66, "2", "");
		ui_interface->declare(&fEntry66, "style", "knob");
		ui_interface->addNumEntry("duty", &fEntry66, 0.5f, 0.00100000005f, 0.999000013f, 0.00100000005f);
		ui_interface->declare(&fVslider19, "3", "");
		ui_interface->declare(&fVslider19, "scale", "exp");
		ui_interface->addVerticalSlider("gain", &fVslider19, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fVslider20, "4", "");
		ui_interface->addVerticalSlider("cutoff", &fVslider20, 500.0f, 60.0f, 3000.0f, 1.0f);
		ui_interface->declare(&fEntry68, "5", "");
		ui_interface->declare(&fEntry68, "style", "knob");
		ui_interface->addNumEntry("gainTriang", &fEntry68, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry67, "6", "");
		ui_interface->declare(&fEntry67, "style", "knob");
		ui_interface->addNumEntry("gainSine", &fEntry67, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry64, "7", "");
		ui_interface->declare(&fEntry64, "style", "knob");
		ui_interface->addNumEntry("gainPulse", &fEntry64, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry69, "8", "");
		ui_interface->declare(&fEntry69, "style", "knob");
		ui_interface->addNumEntry("gainSaw", &fEntry69, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fCheckbox9, "9", "");
		ui_interface->addCheckButton("Mute", &fCheckbox9);
		ui_interface->closeBox();
		ui_interface->declare(0, "10", "");
		ui_interface->openVerticalBox("BL10");
		ui_interface->declare(&fEntry72, "0", "");
		ui_interface->addNumEntry("freq", &fEntry72, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fEntry70, "1", "");
		ui_interface->addNumEntry("pan", &fEntry70, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry73, "2", "");
		ui_interface->declare(&fEntry73, "style", "knob");
		ui_interface->addNumEntry("duty", &fEntry73, 0.5f, 0.00100000005f, 0.999000013f, 0.00100000005f);
		ui_interface->declare(&fVslider21, "3", "");
		ui_interface->declare(&fVslider21, "scale", "exp");
		ui_interface->addVerticalSlider("gain", &fVslider21, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fVslider22, "4", "");
		ui_interface->addVerticalSlider("cutoff", &fVslider22, 500.0f, 60.0f, 3000.0f, 1.0f);
		ui_interface->declare(&fEntry75, "5", "");
		ui_interface->declare(&fEntry75, "style", "knob");
		ui_interface->addNumEntry("gainTriang", &fEntry75, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry74, "6", "");
		ui_interface->declare(&fEntry74, "style", "knob");
		ui_interface->addNumEntry("gainSine", &fEntry74, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry71, "7", "");
		ui_interface->declare(&fEntry71, "style", "knob");
		ui_interface->addNumEntry("gainPulse", &fEntry71, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry76, "8", "");
		ui_interface->declare(&fEntry76, "style", "knob");
		ui_interface->addNumEntry("gainSaw", &fEntry76, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fCheckbox10, "9", "");
		ui_interface->addCheckButton("Mute", &fCheckbox10);
		ui_interface->closeBox();
		ui_interface->declare(0, "11", "");
		ui_interface->openVerticalBox("BL11");
		ui_interface->declare(&fEntry79, "0", "");
		ui_interface->addNumEntry("freq", &fEntry79, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fEntry77, "1", "");
		ui_interface->addNumEntry("pan", &fEntry77, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry80, "2", "");
		ui_interface->declare(&fEntry80, "style", "knob");
		ui_interface->addNumEntry("duty", &fEntry80, 0.5f, 0.00100000005f, 0.999000013f, 0.00100000005f);
		ui_interface->declare(&fVslider23, "3", "");
		ui_interface->declare(&fVslider23, "scale", "exp");
		ui_interface->addVerticalSlider("gain", &fVslider23, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fVslider24, "4", "");
		ui_interface->addVerticalSlider("cutoff", &fVslider24, 500.0f, 60.0f, 3000.0f, 1.0f);
		ui_interface->declare(&fEntry82, "5", "");
		ui_interface->declare(&fEntry82, "style", "knob");
		ui_interface->addNumEntry("gainTriang", &fEntry82, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry81, "6", "");
		ui_interface->declare(&fEntry81, "style", "knob");
		ui_interface->addNumEntry("gainSine", &fEntry81, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry78, "7", "");
		ui_interface->declare(&fEntry78, "style", "knob");
		ui_interface->addNumEntry("gainPulse", &fEntry78, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry83, "8", "");
		ui_interface->declare(&fEntry83, "style", "knob");
		ui_interface->addNumEntry("gainSaw", &fEntry83, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fCheckbox11, "9", "");
		ui_interface->addCheckButton("Mute", &fCheckbox11);
		ui_interface->closeBox();
		ui_interface->declare(0, "12", "");
		ui_interface->openVerticalBox("BL12");
		ui_interface->declare(&fEntry86, "0", "");
		ui_interface->addNumEntry("freq", &fEntry86, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fEntry84, "1", "");
		ui_interface->addNumEntry("pan", &fEntry84, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry87, "2", "");
		ui_interface->declare(&fEntry87, "style", "knob");
		ui_interface->addNumEntry("duty", &fEntry87, 0.5f, 0.00100000005f, 0.999000013f, 0.00100000005f);
		ui_interface->declare(&fVslider25, "3", "");
		ui_interface->declare(&fVslider25, "scale", "exp");
		ui_interface->addVerticalSlider("gain", &fVslider25, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fVslider26, "4", "");
		ui_interface->addVerticalSlider("cutoff", &fVslider26, 500.0f, 60.0f, 3000.0f, 1.0f);
		ui_interface->declare(&fEntry89, "5", "");
		ui_interface->declare(&fEntry89, "style", "knob");
		ui_interface->addNumEntry("gainTriang", &fEntry89, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry88, "6", "");
		ui_interface->declare(&fEntry88, "style", "knob");
		ui_interface->addNumEntry("gainSine", &fEntry88, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry85, "7", "");
		ui_interface->declare(&fEntry85, "style", "knob");
		ui_interface->addNumEntry("gainPulse", &fEntry85, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry90, "8", "");
		ui_interface->declare(&fEntry90, "style", "knob");
		ui_interface->addNumEntry("gainSaw", &fEntry90, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fCheckbox12, "9", "");
		ui_interface->addCheckButton("Mute", &fCheckbox12);
		ui_interface->closeBox();
		ui_interface->declare(0, "13", "");
		ui_interface->openVerticalBox("BL13");
		ui_interface->declare(&fEntry93, "0", "");
		ui_interface->addNumEntry("freq", &fEntry93, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fEntry91, "1", "");
		ui_interface->addNumEntry("pan", &fEntry91, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry94, "2", "");
		ui_interface->declare(&fEntry94, "style", "knob");
		ui_interface->addNumEntry("duty", &fEntry94, 0.5f, 0.00100000005f, 0.999000013f, 0.00100000005f);
		ui_interface->declare(&fVslider27, "3", "");
		ui_interface->declare(&fVslider27, "scale", "exp");
		ui_interface->addVerticalSlider("gain", &fVslider27, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fVslider28, "4", "");
		ui_interface->addVerticalSlider("cutoff", &fVslider28, 500.0f, 60.0f, 3000.0f, 1.0f);
		ui_interface->declare(&fEntry96, "5", "");
		ui_interface->declare(&fEntry96, "style", "knob");
		ui_interface->addNumEntry("gainTriang", &fEntry96, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry95, "6", "");
		ui_interface->declare(&fEntry95, "style", "knob");
		ui_interface->addNumEntry("gainSine", &fEntry95, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry92, "7", "");
		ui_interface->declare(&fEntry92, "style", "knob");
		ui_interface->addNumEntry("gainPulse", &fEntry92, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry97, "8", "");
		ui_interface->declare(&fEntry97, "style", "knob");
		ui_interface->addNumEntry("gainSaw", &fEntry97, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fCheckbox13, "9", "");
		ui_interface->addCheckButton("Mute", &fCheckbox13);
		ui_interface->closeBox();
		ui_interface->declare(0, "14", "");
		ui_interface->openVerticalBox("BL14");
		ui_interface->declare(&fEntry100, "0", "");
		ui_interface->addNumEntry("freq", &fEntry100, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fEntry98, "1", "");
		ui_interface->addNumEntry("pan", &fEntry98, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry101, "2", "");
		ui_interface->declare(&fEntry101, "style", "knob");
		ui_interface->addNumEntry("duty", &fEntry101, 0.5f, 0.00100000005f, 0.999000013f, 0.00100000005f);
		ui_interface->declare(&fVslider29, "3", "");
		ui_interface->declare(&fVslider29, "scale", "exp");
		ui_interface->addVerticalSlider("gain", &fVslider29, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fVslider30, "4", "");
		ui_interface->addVerticalSlider("cutoff", &fVslider30, 500.0f, 60.0f, 3000.0f, 1.0f);
		ui_interface->declare(&fEntry103, "5", "");
		ui_interface->declare(&fEntry103, "style", "knob");
		ui_interface->addNumEntry("gainTriang", &fEntry103, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry102, "6", "");
		ui_interface->declare(&fEntry102, "style", "knob");
		ui_interface->addNumEntry("gainSine", &fEntry102, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry99, "7", "");
		ui_interface->declare(&fEntry99, "style", "knob");
		ui_interface->addNumEntry("gainPulse", &fEntry99, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry104, "8", "");
		ui_interface->declare(&fEntry104, "style", "knob");
		ui_interface->addNumEntry("gainSaw", &fEntry104, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fCheckbox14, "9", "");
		ui_interface->addCheckButton("Mute", &fCheckbox14);
		ui_interface->closeBox();
		ui_interface->declare(0, "15", "");
		ui_interface->openVerticalBox("BL15");
		ui_interface->declare(&fEntry107, "0", "");
		ui_interface->addNumEntry("freq", &fEntry107, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fEntry105, "1", "");
		ui_interface->addNumEntry("pan", &fEntry105, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry108, "2", "");
		ui_interface->declare(&fEntry108, "style", "knob");
		ui_interface->addNumEntry("duty", &fEntry108, 0.5f, 0.00100000005f, 0.999000013f, 0.00100000005f);
		ui_interface->declare(&fVslider31, "3", "");
		ui_interface->declare(&fVslider31, "scale", "exp");
		ui_interface->addVerticalSlider("gain", &fVslider31, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fVslider32, "4", "");
		ui_interface->addVerticalSlider("cutoff", &fVslider32, 500.0f, 60.0f, 3000.0f, 1.0f);
		ui_interface->declare(&fEntry110, "5", "");
		ui_interface->declare(&fEntry110, "style", "knob");
		ui_interface->addNumEntry("gainTriang", &fEntry110, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry109, "6", "");
		ui_interface->declare(&fEntry109, "style", "knob");
		ui_interface->addNumEntry("gainSine", &fEntry109, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry106, "7", "");
		ui_interface->declare(&fEntry106, "style", "knob");
		ui_interface->addNumEntry("gainPulse", &fEntry106, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fEntry111, "8", "");
		ui_interface->declare(&fEntry111, "style", "knob");
		ui_interface->addNumEntry("gainSaw", &fEntry111, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fCheckbox15, "9", "");
		ui_interface->addCheckButton("Mute", &fCheckbox15);
		ui_interface->closeBox();
		ui_interface->closeBox();
		ui_interface->declare(0, "0", "");
		ui_interface->openHorizontalBox("Noise");
		ui_interface->addVerticalSlider("Volume", &fVslider0, 0.0f, 0.0f, 1.0f, 0.00999999978f);
		ui_interface->addVerticalSlider("noiseCO", &fVslider35, 100.0f, 100.0f, 2000.0f, 0.100000001f);
		ui_interface->addVerticalSlider("noiseLfoFreq", &fVslider34, 0.0f, 0.0f, 7.0f, 0.00999999978f);
		ui_interface->addVerticalSlider("noiseVol", &fVslider33, 0.0f, 0.0f, 2.0f, 0.00100000005f);
		ui_interface->closeBox();
		ui_interface->closeBox();
	}
	
	virtual void compute(int count, FAUSTFLOAT** inputs, FAUSTFLOAT** outputs) {
		FAUSTFLOAT* output0 = outputs[0];
		FAUSTFLOAT* output1 = outputs[1];
		float fSlow0 = (0.00200000009f * float(fVslider0));
		float fSlow1 = (1.0f - float(fCheckbox0));
		float fSlow2 = (0.00100000005f * float(fVslider1));
		float fSlow3 = (0.00100000005f * float(fEntry0));
		float fSlow4 = (0.00100000005f * float(fEntry1));
		float fSlow5 = (0.00100000005f * float(fEntry2));
		float fSlow6 = (0.00100000005f * float(fEntry3));
		float fSlow7 = (0.00100000005f * float(fEntry4));
		float fSlow8 = (0.00100000005f * float(fEntry5));
		float fSlow9 = (0.00100000005f * float(fEntry6));
		float fSlow10 = (0.00100000005f * float(fVslider2));
		float fSlow11 = (1.0f - float(fCheckbox1));
		float fSlow12 = (0.00100000005f * float(fVslider3));
		float fSlow13 = (0.00100000005f * float(fEntry7));
		float fSlow14 = (0.00100000005f * float(fEntry8));
		float fSlow15 = (0.00100000005f * float(fEntry9));
		float fSlow16 = (0.00100000005f * float(fEntry10));
		float fSlow17 = (0.00100000005f * float(fEntry11));
		float fSlow18 = (0.00100000005f * float(fEntry12));
		float fSlow19 = (0.00100000005f * float(fEntry13));
		float fSlow20 = (0.00100000005f * float(fVslider4));
		float fSlow21 = (1.0f - float(fCheckbox2));
		float fSlow22 = (0.00100000005f * float(fVslider5));
		float fSlow23 = (0.00100000005f * float(fEntry14));
		float fSlow24 = (0.00100000005f * float(fEntry15));
		float fSlow25 = (0.00100000005f * float(fEntry16));
		float fSlow26 = (0.00100000005f * float(fEntry17));
		float fSlow27 = (0.00100000005f * float(fEntry18));
		float fSlow28 = (0.00100000005f * float(fEntry19));
		float fSlow29 = (0.00100000005f * float(fEntry20));
		float fSlow30 = (0.00100000005f * float(fVslider6));
		float fSlow31 = (1.0f - float(fCheckbox3));
		float fSlow32 = (0.00100000005f * float(fVslider7));
		float fSlow33 = (0.00100000005f * float(fEntry21));
		float fSlow34 = (0.00100000005f * float(fEntry22));
		float fSlow35 = (0.00100000005f * float(fEntry23));
		float fSlow36 = (0.00100000005f * float(fEntry24));
		float fSlow37 = (0.00100000005f * float(fEntry25));
		float fSlow38 = (0.00100000005f * float(fEntry26));
		float fSlow39 = (0.00100000005f * float(fEntry27));
		float fSlow40 = (0.00100000005f * float(fVslider8));
		float fSlow41 = (1.0f - float(fCheckbox4));
		float fSlow42 = (0.00100000005f * float(fVslider9));
		float fSlow43 = (0.00100000005f * float(fEntry28));
		float fSlow44 = (0.00100000005f * float(fEntry29));
		float fSlow45 = (0.00100000005f * float(fEntry30));
		float fSlow46 = (0.00100000005f * float(fEntry31));
		float fSlow47 = (0.00100000005f * float(fEntry32));
		float fSlow48 = (0.00100000005f * float(fEntry33));
		float fSlow49 = (0.00100000005f * float(fEntry34));
		float fSlow50 = (0.00100000005f * float(fVslider10));
		float fSlow51 = (1.0f - float(fCheckbox5));
		float fSlow52 = (0.00100000005f * float(fVslider11));
		float fSlow53 = (0.00100000005f * float(fEntry35));
		float fSlow54 = (0.00100000005f * float(fEntry36));
		float fSlow55 = (0.00100000005f * float(fEntry37));
		float fSlow56 = (0.00100000005f * float(fEntry38));
		float fSlow57 = (0.00100000005f * float(fEntry39));
		float fSlow58 = (0.00100000005f * float(fEntry40));
		float fSlow59 = (0.00100000005f * float(fEntry41));
		float fSlow60 = (0.00100000005f * float(fVslider12));
		float fSlow61 = (1.0f - float(fCheckbox6));
		float fSlow62 = (0.00100000005f * float(fVslider13));
		float fSlow63 = (0.00100000005f * float(fEntry42));
		float fSlow64 = (0.00100000005f * float(fEntry43));
		float fSlow65 = (0.00100000005f * float(fEntry44));
		float fSlow66 = (0.00100000005f * float(fEntry45));
		float fSlow67 = (0.00100000005f * float(fEntry46));
		float fSlow68 = (0.00100000005f * float(fEntry47));
		float fSlow69 = (0.00100000005f * float(fEntry48));
		float fSlow70 = (0.00100000005f * float(fVslider14));
		float fSlow71 = (1.0f - float(fCheckbox7));
		float fSlow72 = (0.00100000005f * float(fVslider15));
		float fSlow73 = (0.00100000005f * float(fEntry49));
		float fSlow74 = (0.00100000005f * float(fEntry50));
		float fSlow75 = (0.00100000005f * float(fEntry51));
		float fSlow76 = (0.00100000005f * float(fEntry52));
		float fSlow77 = (0.00100000005f * float(fEntry53));
		float fSlow78 = (0.00100000005f * float(fEntry54));
		float fSlow79 = (0.00100000005f * float(fEntry55));
		float fSlow80 = (0.00100000005f * float(fVslider16));
		float fSlow81 = (1.0f - float(fCheckbox8));
		float fSlow82 = (0.00100000005f * float(fVslider17));
		float fSlow83 = (0.00100000005f * float(fEntry56));
		float fSlow84 = (0.00100000005f * float(fEntry57));
		float fSlow85 = (0.00100000005f * float(fEntry58));
		float fSlow86 = (0.00100000005f * float(fEntry59));
		float fSlow87 = (0.00100000005f * float(fEntry60));
		float fSlow88 = (0.00100000005f * float(fEntry61));
		float fSlow89 = (0.00100000005f * float(fEntry62));
		float fSlow90 = (0.00100000005f * float(fVslider18));
		float fSlow91 = (1.0f - float(fCheckbox9));
		float fSlow92 = (0.00100000005f * float(fVslider19));
		float fSlow93 = (0.00100000005f * float(fEntry63));
		float fSlow94 = (0.00100000005f * float(fEntry64));
		float fSlow95 = (0.00100000005f * float(fEntry65));
		float fSlow96 = (0.00100000005f * float(fEntry66));
		float fSlow97 = (0.00100000005f * float(fEntry67));
		float fSlow98 = (0.00100000005f * float(fEntry68));
		float fSlow99 = (0.00100000005f * float(fEntry69));
		float fSlow100 = (0.00100000005f * float(fVslider20));
		float fSlow101 = (1.0f - float(fCheckbox10));
		float fSlow102 = (0.00100000005f * float(fVslider21));
		float fSlow103 = (0.00100000005f * float(fEntry70));
		float fSlow104 = (0.00100000005f * float(fEntry71));
		float fSlow105 = (0.00100000005f * float(fEntry72));
		float fSlow106 = (0.00100000005f * float(fEntry73));
		float fSlow107 = (0.00100000005f * float(fEntry74));
		float fSlow108 = (0.00100000005f * float(fEntry75));
		float fSlow109 = (0.00100000005f * float(fEntry76));
		float fSlow110 = (0.00100000005f * float(fVslider22));
		float fSlow111 = (1.0f - float(fCheckbox11));
		float fSlow112 = (0.00100000005f * float(fVslider23));
		float fSlow113 = (0.00100000005f * float(fEntry77));
		float fSlow114 = (0.00100000005f * float(fEntry78));
		float fSlow115 = (0.00100000005f * float(fEntry79));
		float fSlow116 = (0.00100000005f * float(fEntry80));
		float fSlow117 = (0.00100000005f * float(fEntry81));
		float fSlow118 = (0.00100000005f * float(fEntry82));
		float fSlow119 = (0.00100000005f * float(fEntry83));
		float fSlow120 = (0.00100000005f * float(fVslider24));
		float fSlow121 = (1.0f - float(fCheckbox12));
		float fSlow122 = (0.00100000005f * float(fVslider25));
		float fSlow123 = (0.00100000005f * float(fEntry84));
		float fSlow124 = (0.00100000005f * float(fEntry85));
		float fSlow125 = (0.00100000005f * float(fEntry86));
		float fSlow126 = (0.00100000005f * float(fEntry87));
		float fSlow127 = (0.00100000005f * float(fEntry88));
		float fSlow128 = (0.00100000005f * float(fEntry89));
		float fSlow129 = (0.00100000005f * float(fEntry90));
		float fSlow130 = (0.00100000005f * float(fVslider26));
		float fSlow131 = (1.0f - float(fCheckbox13));
		float fSlow132 = (0.00100000005f * float(fVslider27));
		float fSlow133 = (0.00100000005f * float(fEntry91));
		float fSlow134 = (0.00100000005f * float(fEntry92));
		float fSlow135 = (0.00100000005f * float(fEntry93));
		float fSlow136 = (0.00100000005f * float(fEntry94));
		float fSlow137 = (0.00100000005f * float(fEntry95));
		float fSlow138 = (0.00100000005f * float(fEntry96));
		float fSlow139 = (0.00100000005f * float(fEntry97));
		float fSlow140 = (0.00100000005f * float(fVslider28));
		float fSlow141 = (1.0f - float(fCheckbox14));
		float fSlow142 = (0.00100000005f * float(fVslider29));
		float fSlow143 = (0.00100000005f * float(fEntry98));
		float fSlow144 = (0.00100000005f * float(fEntry99));
		float fSlow145 = (0.00100000005f * float(fEntry100));
		float fSlow146 = (0.00100000005f * float(fEntry101));
		float fSlow147 = (0.00100000005f * float(fEntry102));
		float fSlow148 = (0.00100000005f * float(fEntry103));
		float fSlow149 = (0.00100000005f * float(fEntry104));
		float fSlow150 = (0.00100000005f * float(fVslider30));
		float fSlow151 = (1.0f - float(fCheckbox15));
		float fSlow152 = (0.00100000005f * float(fVslider31));
		float fSlow153 = (0.00100000005f * float(fEntry105));
		float fSlow154 = (0.00100000005f * float(fEntry106));
		float fSlow155 = (0.00100000005f * float(fEntry107));
		float fSlow156 = (0.00100000005f * float(fEntry108));
		float fSlow157 = (0.00100000005f * float(fEntry109));
		float fSlow158 = (0.00100000005f * float(fEntry110));
		float fSlow159 = (0.00100000005f * float(fEntry111));
		float fSlow160 = (0.00100000005f * float(fVslider32));
		float fSlow161 = (0.00100000005f * float(fVslider33));
		float fSlow162 = (0.00100000005f * float(fVslider34));
		float fSlow163 = (0.00100000005f * float(fVslider35));
		for (int i = 0; (i < count); i = (i + 1)) {
			iVec0[0] = 1;
			fRec0[0] = (fSlow0 + (0.999000013f * fRec0[1]));
			fRec1[0] = (fSlow2 + (0.999000013f * fRec1[1]));
			fRec2[0] = (fSlow3 + (0.999000013f * fRec2[1]));
			fRec4[0] = (fSlow4 + (0.999000013f * fRec4[1]));
			float fTemp0 = float(iVec0[1]);
			fRec6[0] = (fSlow5 + (0.999000013f * fRec6[1]));
			float fTemp1 = std::max<float>(fRec6[0], 23.4489498f);
			float fTemp2 = std::max<float>(20.0f, std::fabs(fTemp1));
			fVec1[0] = fTemp2;
			float fTemp3 = (fRec5[1] + (fConst2 * fVec1[1]));
			fRec5[0] = (fTemp3 - std::floor(fTemp3));
			float fTemp4 = mydsp_faustpower2_f(((2.0f * fRec5[0]) + -1.0f));
			fVec2[0] = fTemp4;
			float fTemp5 = ((fTemp0 * (fTemp4 - fVec2[1])) / fTemp2);
			fVec3[(IOTA & 4095)] = fTemp5;
			fRec7[0] = (fSlow6 + (0.999000013f * fRec7[1]));
			float fTemp6 = std::max<float>(0.0f, std::min<float>(2047.0f, (fConst0 * (fRec7[0] / fTemp1))));
			int iTemp7 = int(fTemp6);
			float fTemp8 = std::floor(fTemp6);
			fRec8[0] = (fSlow7 + (0.999000013f * fRec8[1]));
			float fTemp9 = (fRec10[1] + (fConst2 * fRec6[0]));
			fRec10[0] = (fTemp9 - std::floor(fTemp9));
			float fTemp10 = std::max<float>(0.0f, std::min<float>(2047.0f, (fConst4 / fTemp1)));
			int iTemp11 = int(fTemp10);
			float fTemp12 = std::floor(fTemp10);
			fRec11[0] = ((0.999000013f * fRec11[1]) + (fConst1 * ((fTemp5 - (fVec3[((IOTA - iTemp11) & 4095)] * (fTemp12 + (1.0f - fTemp10)))) - ((fTemp10 - fTemp12) * fVec3[((IOTA - (iTemp11 + 1)) & 4095)]))));
			fRec12[0] = (fSlow8 + (0.999000013f * fRec12[1]));
			fRec13[0] = (fSlow9 + (0.999000013f * fRec13[1]));
			float fTemp13 = std::max<float>(1.00000001e-07f, std::fabs(fRec6[0]));
			float fTemp14 = (fRec14[1] + (fConst2 * fTemp13));
			float fTemp15 = (fTemp14 + -1.0f);
			int iTemp16 = (fTemp15 < 0.0f);
			fRec14[0] = (iTemp16 ? fTemp14 : fTemp15);
			float fRec15 = (iTemp16 ? fTemp14 : (fTemp14 + ((1.0f - (fConst0 / fTemp13)) * fTemp15)));
			fRec16[0] = (fSlow10 + (0.999000013f * fRec16[1]));
			float fTemp17 = std::tan((fConst5 * fRec16[0]));
			float fTemp18 = (1.0f / fTemp17);
			float fTemp19 = (((fTemp18 + 1.41421354f) / fTemp17) + 1.0f);
			fRec3[0] = (((((fConst1 * (fRec4[0] * ((fTemp5 - (fVec3[((IOTA - iTemp7) & 4095)] * (fTemp8 + (1.0f - fTemp6)))) - ((fTemp6 - fTemp8) * fVec3[((IOTA - (iTemp7 + 1)) & 4095)])))) + (fRec8[0] * ftbl0mydspSIG0[int((65536.0f * fRec10[0]))])) + (fConst3 * ((fRec6[0] * fRec11[0]) * fRec12[0]))) + (fRec13[0] * ((2.0f * fRec15) + -1.0f))) - (((fRec3[2] * (((fTemp18 + -1.41421354f) / fTemp17) + 1.0f)) + (2.0f * (fRec3[1] * (1.0f - (1.0f / mydsp_faustpower2_f(fTemp17)))))) / fTemp19));
			float fTemp20 = (fRec3[2] + (fRec3[0] + (2.0f * fRec3[1])));
			fRec17[0] = (fSlow12 + (0.999000013f * fRec17[1]));
			fRec18[0] = (fSlow13 + (0.999000013f * fRec18[1]));
			fRec20[0] = (fSlow14 + (0.999000013f * fRec20[1]));
			fRec22[0] = (fSlow15 + (0.999000013f * fRec22[1]));
			float fTemp21 = std::max<float>(fRec22[0], 23.4489498f);
			float fTemp22 = std::max<float>(20.0f, std::fabs(fTemp21));
			fVec4[0] = fTemp22;
			float fTemp23 = (fRec21[1] + (fConst2 * fVec4[1]));
			fRec21[0] = (fTemp23 - std::floor(fTemp23));
			float fTemp24 = mydsp_faustpower2_f(((2.0f * fRec21[0]) + -1.0f));
			fVec5[0] = fTemp24;
			float fTemp25 = ((fTemp0 * (fTemp24 - fVec5[1])) / fTemp22);
			fVec6[(IOTA & 4095)] = fTemp25;
			fRec23[0] = (fSlow16 + (0.999000013f * fRec23[1]));
			float fTemp26 = std::max<float>(0.0f, std::min<float>(2047.0f, (fConst0 * (fRec23[0] / fTemp21))));
			int iTemp27 = int(fTemp26);
			float fTemp28 = std::floor(fTemp26);
			fRec24[0] = (fSlow17 + (0.999000013f * fRec24[1]));
			float fTemp29 = (fRec25[1] + (fConst2 * fRec22[0]));
			fRec25[0] = (fTemp29 - std::floor(fTemp29));
			float fTemp30 = std::max<float>(0.0f, std::min<float>(2047.0f, (fConst4 / fTemp21)));
			int iTemp31 = int(fTemp30);
			float fTemp32 = std::floor(fTemp30);
			fRec26[0] = ((0.999000013f * fRec26[1]) + (fConst1 * ((fTemp25 - (fVec6[((IOTA - iTemp31) & 4095)] * (fTemp32 + (1.0f - fTemp30)))) - ((fTemp30 - fTemp32) * fVec6[((IOTA - (iTemp31 + 1)) & 4095)]))));
			fRec27[0] = (fSlow18 + (0.999000013f * fRec27[1]));
			fRec28[0] = (fSlow19 + (0.999000013f * fRec28[1]));
			float fTemp33 = std::max<float>(1.00000001e-07f, std::fabs(fRec22[0]));
			float fTemp34 = (fRec29[1] + (fConst2 * fTemp33));
			float fTemp35 = (fTemp34 + -1.0f);
			int iTemp36 = (fTemp35 < 0.0f);
			fRec29[0] = (iTemp36 ? fTemp34 : fTemp35);
			float fRec30 = (iTemp36 ? fTemp34 : (fTemp34 + ((1.0f - (fConst0 / fTemp33)) * fTemp35)));
			fRec31[0] = (fSlow20 + (0.999000013f * fRec31[1]));
			float fTemp37 = std::tan((fConst5 * fRec31[0]));
			float fTemp38 = (1.0f / fTemp37);
			float fTemp39 = (((fTemp38 + 1.41421354f) / fTemp37) + 1.0f);
			fRec19[0] = (((((fConst1 * (fRec20[0] * ((fTemp25 - (fVec6[((IOTA - iTemp27) & 4095)] * (fTemp28 + (1.0f - fTemp26)))) - ((fTemp26 - fTemp28) * fVec6[((IOTA - (iTemp27 + 1)) & 4095)])))) + (fRec24[0] * ftbl0mydspSIG0[int((65536.0f * fRec25[0]))])) + (fConst3 * ((fRec22[0] * fRec26[0]) * fRec27[0]))) + (fRec28[0] * ((2.0f * fRec30) + -1.0f))) - (((fRec19[2] * (((fTemp38 + -1.41421354f) / fTemp37) + 1.0f)) + (2.0f * (fRec19[1] * (1.0f - (1.0f / mydsp_faustpower2_f(fTemp37)))))) / fTemp39));
			float fTemp40 = (fRec19[2] + (fRec19[0] + (2.0f * fRec19[1])));
			fRec32[0] = (fSlow22 + (0.999000013f * fRec32[1]));
			fRec33[0] = (fSlow23 + (0.999000013f * fRec33[1]));
			fRec35[0] = (fSlow24 + (0.999000013f * fRec35[1]));
			fRec37[0] = (fSlow25 + (0.999000013f * fRec37[1]));
			float fTemp41 = std::max<float>(fRec37[0], 23.4489498f);
			float fTemp42 = std::max<float>(20.0f, std::fabs(fTemp41));
			fVec7[0] = fTemp42;
			float fTemp43 = (fRec36[1] + (fConst2 * fVec7[1]));
			fRec36[0] = (fTemp43 - std::floor(fTemp43));
			float fTemp44 = mydsp_faustpower2_f(((2.0f * fRec36[0]) + -1.0f));
			fVec8[0] = fTemp44;
			float fTemp45 = ((fTemp0 * (fTemp44 - fVec8[1])) / fTemp42);
			fVec9[(IOTA & 4095)] = fTemp45;
			fRec38[0] = (fSlow26 + (0.999000013f * fRec38[1]));
			float fTemp46 = std::max<float>(0.0f, std::min<float>(2047.0f, (fConst0 * (fRec38[0] / fTemp41))));
			int iTemp47 = int(fTemp46);
			float fTemp48 = std::floor(fTemp46);
			fRec39[0] = (fSlow27 + (0.999000013f * fRec39[1]));
			float fTemp49 = (fRec40[1] + (fConst2 * fRec37[0]));
			fRec40[0] = (fTemp49 - std::floor(fTemp49));
			float fTemp50 = std::max<float>(0.0f, std::min<float>(2047.0f, (fConst4 / fTemp41)));
			int iTemp51 = int(fTemp50);
			float fTemp52 = std::floor(fTemp50);
			fRec41[0] = ((0.999000013f * fRec41[1]) + (fConst1 * ((fTemp45 - (fVec9[((IOTA - iTemp51) & 4095)] * (fTemp52 + (1.0f - fTemp50)))) - ((fTemp50 - fTemp52) * fVec9[((IOTA - (iTemp51 + 1)) & 4095)]))));
			fRec42[0] = (fSlow28 + (0.999000013f * fRec42[1]));
			fRec43[0] = (fSlow29 + (0.999000013f * fRec43[1]));
			float fTemp53 = std::max<float>(1.00000001e-07f, std::fabs(fRec37[0]));
			float fTemp54 = (fRec44[1] + (fConst2 * fTemp53));
			float fTemp55 = (fTemp54 + -1.0f);
			int iTemp56 = (fTemp55 < 0.0f);
			fRec44[0] = (iTemp56 ? fTemp54 : fTemp55);
			float fRec45 = (iTemp56 ? fTemp54 : (fTemp54 + ((1.0f - (fConst0 / fTemp53)) * fTemp55)));
			fRec46[0] = (fSlow30 + (0.999000013f * fRec46[1]));
			float fTemp57 = std::tan((fConst5 * fRec46[0]));
			float fTemp58 = (1.0f / fTemp57);
			float fTemp59 = (((fTemp58 + 1.41421354f) / fTemp57) + 1.0f);
			fRec34[0] = (((((fConst1 * (fRec35[0] * ((fTemp45 - (fVec9[((IOTA - iTemp47) & 4095)] * (fTemp48 + (1.0f - fTemp46)))) - ((fTemp46 - fTemp48) * fVec9[((IOTA - (iTemp47 + 1)) & 4095)])))) + (fRec39[0] * ftbl0mydspSIG0[int((65536.0f * fRec40[0]))])) + (fConst3 * ((fRec37[0] * fRec41[0]) * fRec42[0]))) + (fRec43[0] * ((2.0f * fRec45) + -1.0f))) - (((fRec34[2] * (((fTemp58 + -1.41421354f) / fTemp57) + 1.0f)) + (2.0f * (fRec34[1] * (1.0f - (1.0f / mydsp_faustpower2_f(fTemp57)))))) / fTemp59));
			float fTemp60 = (fRec34[2] + (fRec34[0] + (2.0f * fRec34[1])));
			fRec47[0] = (fSlow32 + (0.999000013f * fRec47[1]));
			fRec48[0] = (fSlow33 + (0.999000013f * fRec48[1]));
			fRec50[0] = (fSlow34 + (0.999000013f * fRec50[1]));
			fRec52[0] = (fSlow35 + (0.999000013f * fRec52[1]));
			float fTemp61 = std::max<float>(fRec52[0], 23.4489498f);
			float fTemp62 = std::max<float>(20.0f, std::fabs(fTemp61));
			fVec10[0] = fTemp62;
			float fTemp63 = (fRec51[1] + (fConst2 * fVec10[1]));
			fRec51[0] = (fTemp63 - std::floor(fTemp63));
			float fTemp64 = mydsp_faustpower2_f(((2.0f * fRec51[0]) + -1.0f));
			fVec11[0] = fTemp64;
			float fTemp65 = ((fTemp0 * (fTemp64 - fVec11[1])) / fTemp62);
			fVec12[(IOTA & 4095)] = fTemp65;
			fRec53[0] = (fSlow36 + (0.999000013f * fRec53[1]));
			float fTemp66 = std::max<float>(0.0f, std::min<float>(2047.0f, (fConst0 * (fRec53[0] / fTemp61))));
			int iTemp67 = int(fTemp66);
			float fTemp68 = std::floor(fTemp66);
			fRec54[0] = (fSlow37 + (0.999000013f * fRec54[1]));
			float fTemp69 = (fRec55[1] + (fConst2 * fRec52[0]));
			fRec55[0] = (fTemp69 - std::floor(fTemp69));
			float fTemp70 = std::max<float>(0.0f, std::min<float>(2047.0f, (fConst4 / fTemp61)));
			int iTemp71 = int(fTemp70);
			float fTemp72 = std::floor(fTemp70);
			fRec56[0] = ((0.999000013f * fRec56[1]) + (fConst1 * ((fTemp65 - (fVec12[((IOTA - iTemp71) & 4095)] * (fTemp72 + (1.0f - fTemp70)))) - ((fTemp70 - fTemp72) * fVec12[((IOTA - (iTemp71 + 1)) & 4095)]))));
			fRec57[0] = (fSlow38 + (0.999000013f * fRec57[1]));
			fRec58[0] = (fSlow39 + (0.999000013f * fRec58[1]));
			float fTemp73 = std::max<float>(1.00000001e-07f, std::fabs(fRec52[0]));
			float fTemp74 = (fRec59[1] + (fConst2 * fTemp73));
			float fTemp75 = (fTemp74 + -1.0f);
			int iTemp76 = (fTemp75 < 0.0f);
			fRec59[0] = (iTemp76 ? fTemp74 : fTemp75);
			float fRec60 = (iTemp76 ? fTemp74 : (fTemp74 + ((1.0f - (fConst0 / fTemp73)) * fTemp75)));
			fRec61[0] = (fSlow40 + (0.999000013f * fRec61[1]));
			float fTemp77 = std::tan((fConst5 * fRec61[0]));
			float fTemp78 = (1.0f / fTemp77);
			float fTemp79 = (((fTemp78 + 1.41421354f) / fTemp77) + 1.0f);
			fRec49[0] = (((((fConst1 * (fRec50[0] * ((fTemp65 - (fVec12[((IOTA - iTemp67) & 4095)] * (fTemp68 + (1.0f - fTemp66)))) - ((fTemp66 - fTemp68) * fVec12[((IOTA - (iTemp67 + 1)) & 4095)])))) + (fRec54[0] * ftbl0mydspSIG0[int((65536.0f * fRec55[0]))])) + (fConst3 * ((fRec52[0] * fRec56[0]) * fRec57[0]))) + (fRec58[0] * ((2.0f * fRec60) + -1.0f))) - (((fRec49[2] * (((fTemp78 + -1.41421354f) / fTemp77) + 1.0f)) + (2.0f * (fRec49[1] * (1.0f - (1.0f / mydsp_faustpower2_f(fTemp77)))))) / fTemp79));
			float fTemp80 = (fRec49[2] + (fRec49[0] + (2.0f * fRec49[1])));
			fRec62[0] = (fSlow42 + (0.999000013f * fRec62[1]));
			fRec63[0] = (fSlow43 + (0.999000013f * fRec63[1]));
			fRec65[0] = (fSlow44 + (0.999000013f * fRec65[1]));
			fRec67[0] = (fSlow45 + (0.999000013f * fRec67[1]));
			float fTemp81 = std::max<float>(fRec67[0], 23.4489498f);
			float fTemp82 = std::max<float>(20.0f, std::fabs(fTemp81));
			fVec13[0] = fTemp82;
			float fTemp83 = (fRec66[1] + (fConst2 * fVec13[1]));
			fRec66[0] = (fTemp83 - std::floor(fTemp83));
			float fTemp84 = mydsp_faustpower2_f(((2.0f * fRec66[0]) + -1.0f));
			fVec14[0] = fTemp84;
			float fTemp85 = ((fTemp0 * (fTemp84 - fVec14[1])) / fTemp82);
			fVec15[(IOTA & 4095)] = fTemp85;
			fRec68[0] = (fSlow46 + (0.999000013f * fRec68[1]));
			float fTemp86 = std::max<float>(0.0f, std::min<float>(2047.0f, (fConst0 * (fRec68[0] / fTemp81))));
			int iTemp87 = int(fTemp86);
			float fTemp88 = std::floor(fTemp86);
			fRec69[0] = (fSlow47 + (0.999000013f * fRec69[1]));
			float fTemp89 = (fRec70[1] + (fConst2 * fRec67[0]));
			fRec70[0] = (fTemp89 - std::floor(fTemp89));
			float fTemp90 = std::max<float>(0.0f, std::min<float>(2047.0f, (fConst4 / fTemp81)));
			int iTemp91 = int(fTemp90);
			float fTemp92 = std::floor(fTemp90);
			fRec71[0] = ((0.999000013f * fRec71[1]) + (fConst1 * ((fTemp85 - (fVec15[((IOTA - iTemp91) & 4095)] * (fTemp92 + (1.0f - fTemp90)))) - ((fTemp90 - fTemp92) * fVec15[((IOTA - (iTemp91 + 1)) & 4095)]))));
			fRec72[0] = (fSlow48 + (0.999000013f * fRec72[1]));
			fRec73[0] = (fSlow49 + (0.999000013f * fRec73[1]));
			float fTemp93 = std::max<float>(1.00000001e-07f, std::fabs(fRec67[0]));
			float fTemp94 = (fRec74[1] + (fConst2 * fTemp93));
			float fTemp95 = (fTemp94 + -1.0f);
			int iTemp96 = (fTemp95 < 0.0f);
			fRec74[0] = (iTemp96 ? fTemp94 : fTemp95);
			float fRec75 = (iTemp96 ? fTemp94 : (fTemp94 + ((1.0f - (fConst0 / fTemp93)) * fTemp95)));
			fRec76[0] = (fSlow50 + (0.999000013f * fRec76[1]));
			float fTemp97 = std::tan((fConst5 * fRec76[0]));
			float fTemp98 = (1.0f / fTemp97);
			float fTemp99 = (((fTemp98 + 1.41421354f) / fTemp97) + 1.0f);
			fRec64[0] = (((((fConst1 * (fRec65[0] * ((fTemp85 - (fVec15[((IOTA - iTemp87) & 4095)] * (fTemp88 + (1.0f - fTemp86)))) - ((fTemp86 - fTemp88) * fVec15[((IOTA - (iTemp87 + 1)) & 4095)])))) + (fRec69[0] * ftbl0mydspSIG0[int((65536.0f * fRec70[0]))])) + (fConst3 * ((fRec67[0] * fRec71[0]) * fRec72[0]))) + (fRec73[0] * ((2.0f * fRec75) + -1.0f))) - (((fRec64[2] * (((fTemp98 + -1.41421354f) / fTemp97) + 1.0f)) + (2.0f * (fRec64[1] * (1.0f - (1.0f / mydsp_faustpower2_f(fTemp97)))))) / fTemp99));
			float fTemp100 = (fRec64[2] + (fRec64[0] + (2.0f * fRec64[1])));
			fRec77[0] = (fSlow52 + (0.999000013f * fRec77[1]));
			fRec78[0] = (fSlow53 + (0.999000013f * fRec78[1]));
			fRec80[0] = (fSlow54 + (0.999000013f * fRec80[1]));
			fRec82[0] = (fSlow55 + (0.999000013f * fRec82[1]));
			float fTemp101 = std::max<float>(fRec82[0], 23.4489498f);
			float fTemp102 = std::max<float>(20.0f, std::fabs(fTemp101));
			fVec16[0] = fTemp102;
			float fTemp103 = (fRec81[1] + (fConst2 * fVec16[1]));
			fRec81[0] = (fTemp103 - std::floor(fTemp103));
			float fTemp104 = mydsp_faustpower2_f(((2.0f * fRec81[0]) + -1.0f));
			fVec17[0] = fTemp104;
			float fTemp105 = ((fTemp0 * (fTemp104 - fVec17[1])) / fTemp102);
			fVec18[(IOTA & 4095)] = fTemp105;
			fRec83[0] = (fSlow56 + (0.999000013f * fRec83[1]));
			float fTemp106 = std::max<float>(0.0f, std::min<float>(2047.0f, (fConst0 * (fRec83[0] / fTemp101))));
			int iTemp107 = int(fTemp106);
			float fTemp108 = std::floor(fTemp106);
			fRec84[0] = (fSlow57 + (0.999000013f * fRec84[1]));
			float fTemp109 = (fRec85[1] + (fConst2 * fRec82[0]));
			fRec85[0] = (fTemp109 - std::floor(fTemp109));
			float fTemp110 = std::max<float>(0.0f, std::min<float>(2047.0f, (fConst4 / fTemp101)));
			int iTemp111 = int(fTemp110);
			float fTemp112 = std::floor(fTemp110);
			fRec86[0] = ((0.999000013f * fRec86[1]) + (fConst1 * ((fTemp105 - (fVec18[((IOTA - iTemp111) & 4095)] * (fTemp112 + (1.0f - fTemp110)))) - ((fTemp110 - fTemp112) * fVec18[((IOTA - (iTemp111 + 1)) & 4095)]))));
			fRec87[0] = (fSlow58 + (0.999000013f * fRec87[1]));
			fRec88[0] = (fSlow59 + (0.999000013f * fRec88[1]));
			float fTemp113 = std::max<float>(1.00000001e-07f, std::fabs(fRec82[0]));
			float fTemp114 = (fRec89[1] + (fConst2 * fTemp113));
			float fTemp115 = (fTemp114 + -1.0f);
			int iTemp116 = (fTemp115 < 0.0f);
			fRec89[0] = (iTemp116 ? fTemp114 : fTemp115);
			float fRec90 = (iTemp116 ? fTemp114 : (fTemp114 + ((1.0f - (fConst0 / fTemp113)) * fTemp115)));
			fRec91[0] = (fSlow60 + (0.999000013f * fRec91[1]));
			float fTemp117 = std::tan((fConst5 * fRec91[0]));
			float fTemp118 = (1.0f / fTemp117);
			float fTemp119 = (((fTemp118 + 1.41421354f) / fTemp117) + 1.0f);
			fRec79[0] = (((((fConst1 * (fRec80[0] * ((fTemp105 - (fVec18[((IOTA - iTemp107) & 4095)] * (fTemp108 + (1.0f - fTemp106)))) - ((fTemp106 - fTemp108) * fVec18[((IOTA - (iTemp107 + 1)) & 4095)])))) + (fRec84[0] * ftbl0mydspSIG0[int((65536.0f * fRec85[0]))])) + (fConst3 * ((fRec82[0] * fRec86[0]) * fRec87[0]))) + (fRec88[0] * ((2.0f * fRec90) + -1.0f))) - (((fRec79[2] * (((fTemp118 + -1.41421354f) / fTemp117) + 1.0f)) + (2.0f * (fRec79[1] * (1.0f - (1.0f / mydsp_faustpower2_f(fTemp117)))))) / fTemp119));
			float fTemp120 = (fRec79[2] + (fRec79[0] + (2.0f * fRec79[1])));
			fRec92[0] = (fSlow62 + (0.999000013f * fRec92[1]));
			fRec93[0] = (fSlow63 + (0.999000013f * fRec93[1]));
			fRec95[0] = (fSlow64 + (0.999000013f * fRec95[1]));
			fRec97[0] = (fSlow65 + (0.999000013f * fRec97[1]));
			float fTemp121 = std::max<float>(fRec97[0], 23.4489498f);
			float fTemp122 = std::max<float>(20.0f, std::fabs(fTemp121));
			fVec19[0] = fTemp122;
			float fTemp123 = (fRec96[1] + (fConst2 * fVec19[1]));
			fRec96[0] = (fTemp123 - std::floor(fTemp123));
			float fTemp124 = mydsp_faustpower2_f(((2.0f * fRec96[0]) + -1.0f));
			fVec20[0] = fTemp124;
			float fTemp125 = ((fTemp0 * (fTemp124 - fVec20[1])) / fTemp122);
			fVec21[(IOTA & 4095)] = fTemp125;
			fRec98[0] = (fSlow66 + (0.999000013f * fRec98[1]));
			float fTemp126 = std::max<float>(0.0f, std::min<float>(2047.0f, (fConst0 * (fRec98[0] / fTemp121))));
			int iTemp127 = int(fTemp126);
			float fTemp128 = std::floor(fTemp126);
			fRec99[0] = (fSlow67 + (0.999000013f * fRec99[1]));
			float fTemp129 = (fRec100[1] + (fConst2 * fRec97[0]));
			fRec100[0] = (fTemp129 - std::floor(fTemp129));
			float fTemp130 = std::max<float>(0.0f, std::min<float>(2047.0f, (fConst4 / fTemp121)));
			int iTemp131 = int(fTemp130);
			float fTemp132 = std::floor(fTemp130);
			fRec101[0] = ((0.999000013f * fRec101[1]) + (fConst1 * ((fTemp125 - (fVec21[((IOTA - iTemp131) & 4095)] * (fTemp132 + (1.0f - fTemp130)))) - ((fTemp130 - fTemp132) * fVec21[((IOTA - (iTemp131 + 1)) & 4095)]))));
			fRec102[0] = (fSlow68 + (0.999000013f * fRec102[1]));
			fRec103[0] = (fSlow69 + (0.999000013f * fRec103[1]));
			float fTemp133 = std::max<float>(1.00000001e-07f, std::fabs(fRec97[0]));
			float fTemp134 = (fRec104[1] + (fConst2 * fTemp133));
			float fTemp135 = (fTemp134 + -1.0f);
			int iTemp136 = (fTemp135 < 0.0f);
			fRec104[0] = (iTemp136 ? fTemp134 : fTemp135);
			float fRec105 = (iTemp136 ? fTemp134 : (fTemp134 + ((1.0f - (fConst0 / fTemp133)) * fTemp135)));
			fRec106[0] = (fSlow70 + (0.999000013f * fRec106[1]));
			float fTemp137 = std::tan((fConst5 * fRec106[0]));
			float fTemp138 = (1.0f / fTemp137);
			float fTemp139 = (((fTemp138 + 1.41421354f) / fTemp137) + 1.0f);
			fRec94[0] = (((((fConst1 * (fRec95[0] * ((fTemp125 - (fVec21[((IOTA - iTemp127) & 4095)] * (fTemp128 + (1.0f - fTemp126)))) - ((fTemp126 - fTemp128) * fVec21[((IOTA - (iTemp127 + 1)) & 4095)])))) + (fRec99[0] * ftbl0mydspSIG0[int((65536.0f * fRec100[0]))])) + (fConst3 * ((fRec97[0] * fRec101[0]) * fRec102[0]))) + (fRec103[0] * ((2.0f * fRec105) + -1.0f))) - (((fRec94[2] * (((fTemp138 + -1.41421354f) / fTemp137) + 1.0f)) + (2.0f * (fRec94[1] * (1.0f - (1.0f / mydsp_faustpower2_f(fTemp137)))))) / fTemp139));
			float fTemp140 = (fRec94[2] + (fRec94[0] + (2.0f * fRec94[1])));
			fRec107[0] = (fSlow72 + (0.999000013f * fRec107[1]));
			fRec108[0] = (fSlow73 + (0.999000013f * fRec108[1]));
			fRec110[0] = (fSlow74 + (0.999000013f * fRec110[1]));
			fRec112[0] = (fSlow75 + (0.999000013f * fRec112[1]));
			float fTemp141 = std::max<float>(fRec112[0], 23.4489498f);
			float fTemp142 = std::max<float>(20.0f, std::fabs(fTemp141));
			fVec22[0] = fTemp142;
			float fTemp143 = (fRec111[1] + (fConst2 * fVec22[1]));
			fRec111[0] = (fTemp143 - std::floor(fTemp143));
			float fTemp144 = mydsp_faustpower2_f(((2.0f * fRec111[0]) + -1.0f));
			fVec23[0] = fTemp144;
			float fTemp145 = ((fTemp0 * (fTemp144 - fVec23[1])) / fTemp142);
			fVec24[(IOTA & 4095)] = fTemp145;
			fRec113[0] = (fSlow76 + (0.999000013f * fRec113[1]));
			float fTemp146 = std::max<float>(0.0f, std::min<float>(2047.0f, (fConst0 * (fRec113[0] / fTemp141))));
			int iTemp147 = int(fTemp146);
			float fTemp148 = std::floor(fTemp146);
			fRec114[0] = (fSlow77 + (0.999000013f * fRec114[1]));
			float fTemp149 = (fRec115[1] + (fConst2 * fRec112[0]));
			fRec115[0] = (fTemp149 - std::floor(fTemp149));
			float fTemp150 = std::max<float>(0.0f, std::min<float>(2047.0f, (fConst4 / fTemp141)));
			int iTemp151 = int(fTemp150);
			float fTemp152 = std::floor(fTemp150);
			fRec116[0] = ((0.999000013f * fRec116[1]) + (fConst1 * ((fTemp145 - (fVec24[((IOTA - iTemp151) & 4095)] * (fTemp152 + (1.0f - fTemp150)))) - ((fTemp150 - fTemp152) * fVec24[((IOTA - (iTemp151 + 1)) & 4095)]))));
			fRec117[0] = (fSlow78 + (0.999000013f * fRec117[1]));
			fRec118[0] = (fSlow79 + (0.999000013f * fRec118[1]));
			float fTemp153 = std::max<float>(1.00000001e-07f, std::fabs(fRec112[0]));
			float fTemp154 = (fRec119[1] + (fConst2 * fTemp153));
			float fTemp155 = (fTemp154 + -1.0f);
			int iTemp156 = (fTemp155 < 0.0f);
			fRec119[0] = (iTemp156 ? fTemp154 : fTemp155);
			float fRec120 = (iTemp156 ? fTemp154 : (fTemp154 + ((1.0f - (fConst0 / fTemp153)) * fTemp155)));
			fRec121[0] = (fSlow80 + (0.999000013f * fRec121[1]));
			float fTemp157 = std::tan((fConst5 * fRec121[0]));
			float fTemp158 = (1.0f / fTemp157);
			float fTemp159 = (((fTemp158 + 1.41421354f) / fTemp157) + 1.0f);
			fRec109[0] = (((((fConst1 * (fRec110[0] * ((fTemp145 - (fVec24[((IOTA - iTemp147) & 4095)] * (fTemp148 + (1.0f - fTemp146)))) - ((fTemp146 - fTemp148) * fVec24[((IOTA - (iTemp147 + 1)) & 4095)])))) + (fRec114[0] * ftbl0mydspSIG0[int((65536.0f * fRec115[0]))])) + (fConst3 * ((fRec112[0] * fRec116[0]) * fRec117[0]))) + (fRec118[0] * ((2.0f * fRec120) + -1.0f))) - (((fRec109[2] * (((fTemp158 + -1.41421354f) / fTemp157) + 1.0f)) + (2.0f * (fRec109[1] * (1.0f - (1.0f / mydsp_faustpower2_f(fTemp157)))))) / fTemp159));
			float fTemp160 = (fRec109[2] + (fRec109[0] + (2.0f * fRec109[1])));
			fRec122[0] = (fSlow82 + (0.999000013f * fRec122[1]));
			fRec123[0] = (fSlow83 + (0.999000013f * fRec123[1]));
			fRec125[0] = (fSlow84 + (0.999000013f * fRec125[1]));
			fRec127[0] = (fSlow85 + (0.999000013f * fRec127[1]));
			float fTemp161 = std::max<float>(fRec127[0], 23.4489498f);
			float fTemp162 = std::max<float>(20.0f, std::fabs(fTemp161));
			fVec25[0] = fTemp162;
			float fTemp163 = (fRec126[1] + (fConst2 * fVec25[1]));
			fRec126[0] = (fTemp163 - std::floor(fTemp163));
			float fTemp164 = mydsp_faustpower2_f(((2.0f * fRec126[0]) + -1.0f));
			fVec26[0] = fTemp164;
			float fTemp165 = ((fTemp0 * (fTemp164 - fVec26[1])) / fTemp162);
			fVec27[(IOTA & 4095)] = fTemp165;
			fRec128[0] = (fSlow86 + (0.999000013f * fRec128[1]));
			float fTemp166 = std::max<float>(0.0f, std::min<float>(2047.0f, (fConst0 * (fRec128[0] / fTemp161))));
			int iTemp167 = int(fTemp166);
			float fTemp168 = std::floor(fTemp166);
			fRec129[0] = (fSlow87 + (0.999000013f * fRec129[1]));
			float fTemp169 = (fRec130[1] + (fConst2 * fRec127[0]));
			fRec130[0] = (fTemp169 - std::floor(fTemp169));
			float fTemp170 = std::max<float>(0.0f, std::min<float>(2047.0f, (fConst4 / fTemp161)));
			int iTemp171 = int(fTemp170);
			float fTemp172 = std::floor(fTemp170);
			fRec131[0] = ((0.999000013f * fRec131[1]) + (fConst1 * ((fTemp165 - (fVec27[((IOTA - iTemp171) & 4095)] * (fTemp172 + (1.0f - fTemp170)))) - ((fTemp170 - fTemp172) * fVec27[((IOTA - (iTemp171 + 1)) & 4095)]))));
			fRec132[0] = (fSlow88 + (0.999000013f * fRec132[1]));
			fRec133[0] = (fSlow89 + (0.999000013f * fRec133[1]));
			float fTemp173 = std::max<float>(1.00000001e-07f, std::fabs(fRec127[0]));
			float fTemp174 = (fRec134[1] + (fConst2 * fTemp173));
			float fTemp175 = (fTemp174 + -1.0f);
			int iTemp176 = (fTemp175 < 0.0f);
			fRec134[0] = (iTemp176 ? fTemp174 : fTemp175);
			float fRec135 = (iTemp176 ? fTemp174 : (fTemp174 + ((1.0f - (fConst0 / fTemp173)) * fTemp175)));
			fRec136[0] = (fSlow90 + (0.999000013f * fRec136[1]));
			float fTemp177 = std::tan((fConst5 * fRec136[0]));
			float fTemp178 = (1.0f / fTemp177);
			float fTemp179 = (((fTemp178 + 1.41421354f) / fTemp177) + 1.0f);
			fRec124[0] = (((((fConst1 * (fRec125[0] * ((fTemp165 - (fVec27[((IOTA - iTemp167) & 4095)] * (fTemp168 + (1.0f - fTemp166)))) - ((fTemp166 - fTemp168) * fVec27[((IOTA - (iTemp167 + 1)) & 4095)])))) + (fRec129[0] * ftbl0mydspSIG0[int((65536.0f * fRec130[0]))])) + (fConst3 * ((fRec127[0] * fRec131[0]) * fRec132[0]))) + (fRec133[0] * ((2.0f * fRec135) + -1.0f))) - (((fRec124[2] * (((fTemp178 + -1.41421354f) / fTemp177) + 1.0f)) + (2.0f * (fRec124[1] * (1.0f - (1.0f / mydsp_faustpower2_f(fTemp177)))))) / fTemp179));
			float fTemp180 = (fRec124[2] + (fRec124[0] + (2.0f * fRec124[1])));
			fRec137[0] = (fSlow92 + (0.999000013f * fRec137[1]));
			fRec138[0] = (fSlow93 + (0.999000013f * fRec138[1]));
			fRec140[0] = (fSlow94 + (0.999000013f * fRec140[1]));
			fRec142[0] = (fSlow95 + (0.999000013f * fRec142[1]));
			float fTemp181 = std::max<float>(fRec142[0], 23.4489498f);
			float fTemp182 = std::max<float>(20.0f, std::fabs(fTemp181));
			fVec28[0] = fTemp182;
			float fTemp183 = (fRec141[1] + (fConst2 * fVec28[1]));
			fRec141[0] = (fTemp183 - std::floor(fTemp183));
			float fTemp184 = mydsp_faustpower2_f(((2.0f * fRec141[0]) + -1.0f));
			fVec29[0] = fTemp184;
			float fTemp185 = ((fTemp0 * (fTemp184 - fVec29[1])) / fTemp182);
			fVec30[(IOTA & 4095)] = fTemp185;
			fRec143[0] = (fSlow96 + (0.999000013f * fRec143[1]));
			float fTemp186 = std::max<float>(0.0f, std::min<float>(2047.0f, (fConst0 * (fRec143[0] / fTemp181))));
			int iTemp187 = int(fTemp186);
			float fTemp188 = std::floor(fTemp186);
			fRec144[0] = (fSlow97 + (0.999000013f * fRec144[1]));
			float fTemp189 = (fRec145[1] + (fConst2 * fRec142[0]));
			fRec145[0] = (fTemp189 - std::floor(fTemp189));
			float fTemp190 = std::max<float>(0.0f, std::min<float>(2047.0f, (fConst4 / fTemp181)));
			int iTemp191 = int(fTemp190);
			float fTemp192 = std::floor(fTemp190);
			fRec146[0] = ((0.999000013f * fRec146[1]) + (fConst1 * ((fTemp185 - (fVec30[((IOTA - iTemp191) & 4095)] * (fTemp192 + (1.0f - fTemp190)))) - ((fTemp190 - fTemp192) * fVec30[((IOTA - (iTemp191 + 1)) & 4095)]))));
			fRec147[0] = (fSlow98 + (0.999000013f * fRec147[1]));
			fRec148[0] = (fSlow99 + (0.999000013f * fRec148[1]));
			float fTemp193 = std::max<float>(1.00000001e-07f, std::fabs(fRec142[0]));
			float fTemp194 = (fRec149[1] + (fConst2 * fTemp193));
			float fTemp195 = (fTemp194 + -1.0f);
			int iTemp196 = (fTemp195 < 0.0f);
			fRec149[0] = (iTemp196 ? fTemp194 : fTemp195);
			float fRec150 = (iTemp196 ? fTemp194 : (fTemp194 + ((1.0f - (fConst0 / fTemp193)) * fTemp195)));
			fRec151[0] = (fSlow100 + (0.999000013f * fRec151[1]));
			float fTemp197 = std::tan((fConst5 * fRec151[0]));
			float fTemp198 = (1.0f / fTemp197);
			float fTemp199 = (((fTemp198 + 1.41421354f) / fTemp197) + 1.0f);
			fRec139[0] = (((((fConst1 * (fRec140[0] * ((fTemp185 - (fVec30[((IOTA - iTemp187) & 4095)] * (fTemp188 + (1.0f - fTemp186)))) - ((fTemp186 - fTemp188) * fVec30[((IOTA - (iTemp187 + 1)) & 4095)])))) + (fRec144[0] * ftbl0mydspSIG0[int((65536.0f * fRec145[0]))])) + (fConst3 * ((fRec142[0] * fRec146[0]) * fRec147[0]))) + (fRec148[0] * ((2.0f * fRec150) + -1.0f))) - (((fRec139[2] * (((fTemp198 + -1.41421354f) / fTemp197) + 1.0f)) + (2.0f * (fRec139[1] * (1.0f - (1.0f / mydsp_faustpower2_f(fTemp197)))))) / fTemp199));
			float fTemp200 = (fRec139[2] + (fRec139[0] + (2.0f * fRec139[1])));
			fRec152[0] = (fSlow102 + (0.999000013f * fRec152[1]));
			fRec153[0] = (fSlow103 + (0.999000013f * fRec153[1]));
			fRec155[0] = (fSlow104 + (0.999000013f * fRec155[1]));
			fRec157[0] = (fSlow105 + (0.999000013f * fRec157[1]));
			float fTemp201 = std::max<float>(fRec157[0], 23.4489498f);
			float fTemp202 = std::max<float>(20.0f, std::fabs(fTemp201));
			fVec31[0] = fTemp202;
			float fTemp203 = (fRec156[1] + (fConst2 * fVec31[1]));
			fRec156[0] = (fTemp203 - std::floor(fTemp203));
			float fTemp204 = mydsp_faustpower2_f(((2.0f * fRec156[0]) + -1.0f));
			fVec32[0] = fTemp204;
			float fTemp205 = ((fTemp0 * (fTemp204 - fVec32[1])) / fTemp202);
			fVec33[(IOTA & 4095)] = fTemp205;
			fRec158[0] = (fSlow106 + (0.999000013f * fRec158[1]));
			float fTemp206 = std::max<float>(0.0f, std::min<float>(2047.0f, (fConst0 * (fRec158[0] / fTemp201))));
			int iTemp207 = int(fTemp206);
			float fTemp208 = std::floor(fTemp206);
			fRec159[0] = (fSlow107 + (0.999000013f * fRec159[1]));
			float fTemp209 = (fRec160[1] + (fConst2 * fRec157[0]));
			fRec160[0] = (fTemp209 - std::floor(fTemp209));
			float fTemp210 = std::max<float>(0.0f, std::min<float>(2047.0f, (fConst4 / fTemp201)));
			int iTemp211 = int(fTemp210);
			float fTemp212 = std::floor(fTemp210);
			fRec161[0] = ((0.999000013f * fRec161[1]) + (fConst1 * ((fTemp205 - (fVec33[((IOTA - iTemp211) & 4095)] * (fTemp212 + (1.0f - fTemp210)))) - ((fTemp210 - fTemp212) * fVec33[((IOTA - (iTemp211 + 1)) & 4095)]))));
			fRec162[0] = (fSlow108 + (0.999000013f * fRec162[1]));
			fRec163[0] = (fSlow109 + (0.999000013f * fRec163[1]));
			float fTemp213 = std::max<float>(1.00000001e-07f, std::fabs(fRec157[0]));
			float fTemp214 = (fRec164[1] + (fConst2 * fTemp213));
			float fTemp215 = (fTemp214 + -1.0f);
			int iTemp216 = (fTemp215 < 0.0f);
			fRec164[0] = (iTemp216 ? fTemp214 : fTemp215);
			float fRec165 = (iTemp216 ? fTemp214 : (fTemp214 + ((1.0f - (fConst0 / fTemp213)) * fTemp215)));
			fRec166[0] = (fSlow110 + (0.999000013f * fRec166[1]));
			float fTemp217 = std::tan((fConst5 * fRec166[0]));
			float fTemp218 = (1.0f / fTemp217);
			float fTemp219 = (((fTemp218 + 1.41421354f) / fTemp217) + 1.0f);
			fRec154[0] = (((((fConst1 * (fRec155[0] * ((fTemp205 - (fVec33[((IOTA - iTemp207) & 4095)] * (fTemp208 + (1.0f - fTemp206)))) - ((fTemp206 - fTemp208) * fVec33[((IOTA - (iTemp207 + 1)) & 4095)])))) + (fRec159[0] * ftbl0mydspSIG0[int((65536.0f * fRec160[0]))])) + (fConst3 * ((fRec157[0] * fRec161[0]) * fRec162[0]))) + (fRec163[0] * ((2.0f * fRec165) + -1.0f))) - (((fRec154[2] * (((fTemp218 + -1.41421354f) / fTemp217) + 1.0f)) + (2.0f * (fRec154[1] * (1.0f - (1.0f / mydsp_faustpower2_f(fTemp217)))))) / fTemp219));
			float fTemp220 = (fRec154[2] + (fRec154[0] + (2.0f * fRec154[1])));
			fRec167[0] = (fSlow112 + (0.999000013f * fRec167[1]));
			fRec168[0] = (fSlow113 + (0.999000013f * fRec168[1]));
			fRec170[0] = (fSlow114 + (0.999000013f * fRec170[1]));
			fRec172[0] = (fSlow115 + (0.999000013f * fRec172[1]));
			float fTemp221 = std::max<float>(fRec172[0], 23.4489498f);
			float fTemp222 = std::max<float>(20.0f, std::fabs(fTemp221));
			fVec34[0] = fTemp222;
			float fTemp223 = (fRec171[1] + (fConst2 * fVec34[1]));
			fRec171[0] = (fTemp223 - std::floor(fTemp223));
			float fTemp224 = mydsp_faustpower2_f(((2.0f * fRec171[0]) + -1.0f));
			fVec35[0] = fTemp224;
			float fTemp225 = ((fTemp0 * (fTemp224 - fVec35[1])) / fTemp222);
			fVec36[(IOTA & 4095)] = fTemp225;
			fRec173[0] = (fSlow116 + (0.999000013f * fRec173[1]));
			float fTemp226 = std::max<float>(0.0f, std::min<float>(2047.0f, (fConst0 * (fRec173[0] / fTemp221))));
			int iTemp227 = int(fTemp226);
			float fTemp228 = std::floor(fTemp226);
			fRec174[0] = (fSlow117 + (0.999000013f * fRec174[1]));
			float fTemp229 = (fRec175[1] + (fConst2 * fRec172[0]));
			fRec175[0] = (fTemp229 - std::floor(fTemp229));
			float fTemp230 = std::max<float>(0.0f, std::min<float>(2047.0f, (fConst4 / fTemp221)));
			int iTemp231 = int(fTemp230);
			float fTemp232 = std::floor(fTemp230);
			fRec176[0] = ((0.999000013f * fRec176[1]) + (fConst1 * ((fTemp225 - (fVec36[((IOTA - iTemp231) & 4095)] * (fTemp232 + (1.0f - fTemp230)))) - ((fTemp230 - fTemp232) * fVec36[((IOTA - (iTemp231 + 1)) & 4095)]))));
			fRec177[0] = (fSlow118 + (0.999000013f * fRec177[1]));
			fRec178[0] = (fSlow119 + (0.999000013f * fRec178[1]));
			float fTemp233 = std::max<float>(1.00000001e-07f, std::fabs(fRec172[0]));
			float fTemp234 = (fRec179[1] + (fConst2 * fTemp233));
			float fTemp235 = (fTemp234 + -1.0f);
			int iTemp236 = (fTemp235 < 0.0f);
			fRec179[0] = (iTemp236 ? fTemp234 : fTemp235);
			float fRec180 = (iTemp236 ? fTemp234 : (fTemp234 + ((1.0f - (fConst0 / fTemp233)) * fTemp235)));
			fRec181[0] = (fSlow120 + (0.999000013f * fRec181[1]));
			float fTemp237 = std::tan((fConst5 * fRec181[0]));
			float fTemp238 = (1.0f / fTemp237);
			float fTemp239 = (((fTemp238 + 1.41421354f) / fTemp237) + 1.0f);
			fRec169[0] = (((((fConst1 * (fRec170[0] * ((fTemp225 - (fVec36[((IOTA - iTemp227) & 4095)] * (fTemp228 + (1.0f - fTemp226)))) - ((fTemp226 - fTemp228) * fVec36[((IOTA - (iTemp227 + 1)) & 4095)])))) + (fRec174[0] * ftbl0mydspSIG0[int((65536.0f * fRec175[0]))])) + (fConst3 * ((fRec172[0] * fRec176[0]) * fRec177[0]))) + (fRec178[0] * ((2.0f * fRec180) + -1.0f))) - (((fRec169[2] * (((fTemp238 + -1.41421354f) / fTemp237) + 1.0f)) + (2.0f * (fRec169[1] * (1.0f - (1.0f / mydsp_faustpower2_f(fTemp237)))))) / fTemp239));
			float fTemp240 = (fRec169[2] + (fRec169[0] + (2.0f * fRec169[1])));
			fRec182[0] = (fSlow122 + (0.999000013f * fRec182[1]));
			fRec183[0] = (fSlow123 + (0.999000013f * fRec183[1]));
			fRec185[0] = (fSlow124 + (0.999000013f * fRec185[1]));
			fRec187[0] = (fSlow125 + (0.999000013f * fRec187[1]));
			float fTemp241 = std::max<float>(fRec187[0], 23.4489498f);
			float fTemp242 = std::max<float>(20.0f, std::fabs(fTemp241));
			fVec37[0] = fTemp242;
			float fTemp243 = (fRec186[1] + (fConst2 * fVec37[1]));
			fRec186[0] = (fTemp243 - std::floor(fTemp243));
			float fTemp244 = mydsp_faustpower2_f(((2.0f * fRec186[0]) + -1.0f));
			fVec38[0] = fTemp244;
			float fTemp245 = ((fTemp0 * (fTemp244 - fVec38[1])) / fTemp242);
			fVec39[(IOTA & 4095)] = fTemp245;
			fRec188[0] = (fSlow126 + (0.999000013f * fRec188[1]));
			float fTemp246 = std::max<float>(0.0f, std::min<float>(2047.0f, (fConst0 * (fRec188[0] / fTemp241))));
			int iTemp247 = int(fTemp246);
			float fTemp248 = std::floor(fTemp246);
			fRec189[0] = (fSlow127 + (0.999000013f * fRec189[1]));
			float fTemp249 = (fRec190[1] + (fConst2 * fRec187[0]));
			fRec190[0] = (fTemp249 - std::floor(fTemp249));
			float fTemp250 = std::max<float>(0.0f, std::min<float>(2047.0f, (fConst4 / fTemp241)));
			int iTemp251 = int(fTemp250);
			float fTemp252 = std::floor(fTemp250);
			fRec191[0] = ((0.999000013f * fRec191[1]) + (fConst1 * ((fTemp245 - (fVec39[((IOTA - iTemp251) & 4095)] * (fTemp252 + (1.0f - fTemp250)))) - ((fTemp250 - fTemp252) * fVec39[((IOTA - (iTemp251 + 1)) & 4095)]))));
			fRec192[0] = (fSlow128 + (0.999000013f * fRec192[1]));
			fRec193[0] = (fSlow129 + (0.999000013f * fRec193[1]));
			float fTemp253 = std::max<float>(1.00000001e-07f, std::fabs(fRec187[0]));
			float fTemp254 = (fRec194[1] + (fConst2 * fTemp253));
			float fTemp255 = (fTemp254 + -1.0f);
			int iTemp256 = (fTemp255 < 0.0f);
			fRec194[0] = (iTemp256 ? fTemp254 : fTemp255);
			float fRec195 = (iTemp256 ? fTemp254 : (fTemp254 + ((1.0f - (fConst0 / fTemp253)) * fTemp255)));
			fRec196[0] = (fSlow130 + (0.999000013f * fRec196[1]));
			float fTemp257 = std::tan((fConst5 * fRec196[0]));
			float fTemp258 = (1.0f / fTemp257);
			float fTemp259 = (((fTemp258 + 1.41421354f) / fTemp257) + 1.0f);
			fRec184[0] = (((((fConst1 * (fRec185[0] * ((fTemp245 - (fVec39[((IOTA - iTemp247) & 4095)] * (fTemp248 + (1.0f - fTemp246)))) - ((fTemp246 - fTemp248) * fVec39[((IOTA - (iTemp247 + 1)) & 4095)])))) + (fRec189[0] * ftbl0mydspSIG0[int((65536.0f * fRec190[0]))])) + (fConst3 * ((fRec187[0] * fRec191[0]) * fRec192[0]))) + (fRec193[0] * ((2.0f * fRec195) + -1.0f))) - (((fRec184[2] * (((fTemp258 + -1.41421354f) / fTemp257) + 1.0f)) + (2.0f * (fRec184[1] * (1.0f - (1.0f / mydsp_faustpower2_f(fTemp257)))))) / fTemp259));
			float fTemp260 = (fRec184[2] + (fRec184[0] + (2.0f * fRec184[1])));
			fRec197[0] = (fSlow132 + (0.999000013f * fRec197[1]));
			fRec198[0] = (fSlow133 + (0.999000013f * fRec198[1]));
			fRec200[0] = (fSlow134 + (0.999000013f * fRec200[1]));
			fRec202[0] = (fSlow135 + (0.999000013f * fRec202[1]));
			float fTemp261 = std::max<float>(fRec202[0], 23.4489498f);
			float fTemp262 = std::max<float>(20.0f, std::fabs(fTemp261));
			fVec40[0] = fTemp262;
			float fTemp263 = (fRec201[1] + (fConst2 * fVec40[1]));
			fRec201[0] = (fTemp263 - std::floor(fTemp263));
			float fTemp264 = mydsp_faustpower2_f(((2.0f * fRec201[0]) + -1.0f));
			fVec41[0] = fTemp264;
			float fTemp265 = ((fTemp0 * (fTemp264 - fVec41[1])) / fTemp262);
			fVec42[(IOTA & 4095)] = fTemp265;
			fRec203[0] = (fSlow136 + (0.999000013f * fRec203[1]));
			float fTemp266 = std::max<float>(0.0f, std::min<float>(2047.0f, (fConst0 * (fRec203[0] / fTemp261))));
			int iTemp267 = int(fTemp266);
			float fTemp268 = std::floor(fTemp266);
			fRec204[0] = (fSlow137 + (0.999000013f * fRec204[1]));
			float fTemp269 = (fRec205[1] + (fConst2 * fRec202[0]));
			fRec205[0] = (fTemp269 - std::floor(fTemp269));
			float fTemp270 = std::max<float>(0.0f, std::min<float>(2047.0f, (fConst4 / fTemp261)));
			int iTemp271 = int(fTemp270);
			float fTemp272 = std::floor(fTemp270);
			fRec206[0] = ((0.999000013f * fRec206[1]) + (fConst1 * ((fTemp265 - (fVec42[((IOTA - iTemp271) & 4095)] * (fTemp272 + (1.0f - fTemp270)))) - ((fTemp270 - fTemp272) * fVec42[((IOTA - (iTemp271 + 1)) & 4095)]))));
			fRec207[0] = (fSlow138 + (0.999000013f * fRec207[1]));
			fRec208[0] = (fSlow139 + (0.999000013f * fRec208[1]));
			float fTemp273 = std::max<float>(1.00000001e-07f, std::fabs(fRec202[0]));
			float fTemp274 = (fRec209[1] + (fConst2 * fTemp273));
			float fTemp275 = (fTemp274 + -1.0f);
			int iTemp276 = (fTemp275 < 0.0f);
			fRec209[0] = (iTemp276 ? fTemp274 : fTemp275);
			float fRec210 = (iTemp276 ? fTemp274 : (fTemp274 + ((1.0f - (fConst0 / fTemp273)) * fTemp275)));
			fRec211[0] = (fSlow140 + (0.999000013f * fRec211[1]));
			float fTemp277 = std::tan((fConst5 * fRec211[0]));
			float fTemp278 = (1.0f / fTemp277);
			float fTemp279 = (((fTemp278 + 1.41421354f) / fTemp277) + 1.0f);
			fRec199[0] = (((((fConst1 * (fRec200[0] * ((fTemp265 - (fVec42[((IOTA - iTemp267) & 4095)] * (fTemp268 + (1.0f - fTemp266)))) - ((fTemp266 - fTemp268) * fVec42[((IOTA - (iTemp267 + 1)) & 4095)])))) + (fRec204[0] * ftbl0mydspSIG0[int((65536.0f * fRec205[0]))])) + (fConst3 * ((fRec202[0] * fRec206[0]) * fRec207[0]))) + (fRec208[0] * ((2.0f * fRec210) + -1.0f))) - (((fRec199[2] * (((fTemp278 + -1.41421354f) / fTemp277) + 1.0f)) + (2.0f * (fRec199[1] * (1.0f - (1.0f / mydsp_faustpower2_f(fTemp277)))))) / fTemp279));
			float fTemp280 = (fRec199[2] + (fRec199[0] + (2.0f * fRec199[1])));
			fRec212[0] = (fSlow142 + (0.999000013f * fRec212[1]));
			fRec213[0] = (fSlow143 + (0.999000013f * fRec213[1]));
			fRec215[0] = (fSlow144 + (0.999000013f * fRec215[1]));
			fRec217[0] = (fSlow145 + (0.999000013f * fRec217[1]));
			float fTemp281 = std::max<float>(fRec217[0], 23.4489498f);
			float fTemp282 = std::max<float>(20.0f, std::fabs(fTemp281));
			fVec43[0] = fTemp282;
			float fTemp283 = (fRec216[1] + (fConst2 * fVec43[1]));
			fRec216[0] = (fTemp283 - std::floor(fTemp283));
			float fTemp284 = mydsp_faustpower2_f(((2.0f * fRec216[0]) + -1.0f));
			fVec44[0] = fTemp284;
			float fTemp285 = ((fTemp0 * (fTemp284 - fVec44[1])) / fTemp282);
			fVec45[(IOTA & 4095)] = fTemp285;
			fRec218[0] = (fSlow146 + (0.999000013f * fRec218[1]));
			float fTemp286 = std::max<float>(0.0f, std::min<float>(2047.0f, (fConst0 * (fRec218[0] / fTemp281))));
			int iTemp287 = int(fTemp286);
			float fTemp288 = std::floor(fTemp286);
			fRec219[0] = (fSlow147 + (0.999000013f * fRec219[1]));
			float fTemp289 = (fRec220[1] + (fConst2 * fRec217[0]));
			fRec220[0] = (fTemp289 - std::floor(fTemp289));
			float fTemp290 = std::max<float>(0.0f, std::min<float>(2047.0f, (fConst4 / fTemp281)));
			int iTemp291 = int(fTemp290);
			float fTemp292 = std::floor(fTemp290);
			fRec221[0] = ((0.999000013f * fRec221[1]) + (fConst1 * ((fTemp285 - (fVec45[((IOTA - iTemp291) & 4095)] * (fTemp292 + (1.0f - fTemp290)))) - ((fTemp290 - fTemp292) * fVec45[((IOTA - (iTemp291 + 1)) & 4095)]))));
			fRec222[0] = (fSlow148 + (0.999000013f * fRec222[1]));
			fRec223[0] = (fSlow149 + (0.999000013f * fRec223[1]));
			float fTemp293 = std::max<float>(1.00000001e-07f, std::fabs(fRec217[0]));
			float fTemp294 = (fRec224[1] + (fConst2 * fTemp293));
			float fTemp295 = (fTemp294 + -1.0f);
			int iTemp296 = (fTemp295 < 0.0f);
			fRec224[0] = (iTemp296 ? fTemp294 : fTemp295);
			float fRec225 = (iTemp296 ? fTemp294 : (fTemp294 + ((1.0f - (fConst0 / fTemp293)) * fTemp295)));
			fRec226[0] = (fSlow150 + (0.999000013f * fRec226[1]));
			float fTemp297 = std::tan((fConst5 * fRec226[0]));
			float fTemp298 = (1.0f / fTemp297);
			float fTemp299 = (((fTemp298 + 1.41421354f) / fTemp297) + 1.0f);
			fRec214[0] = (((((fConst1 * (fRec215[0] * ((fTemp285 - (fVec45[((IOTA - iTemp287) & 4095)] * (fTemp288 + (1.0f - fTemp286)))) - ((fTemp286 - fTemp288) * fVec45[((IOTA - (iTemp287 + 1)) & 4095)])))) + (fRec219[0] * ftbl0mydspSIG0[int((65536.0f * fRec220[0]))])) + (fConst3 * ((fRec217[0] * fRec221[0]) * fRec222[0]))) + (fRec223[0] * ((2.0f * fRec225) + -1.0f))) - (((fRec214[2] * (((fTemp298 + -1.41421354f) / fTemp297) + 1.0f)) + (2.0f * (fRec214[1] * (1.0f - (1.0f / mydsp_faustpower2_f(fTemp297)))))) / fTemp299));
			float fTemp300 = (fRec214[2] + (fRec214[0] + (2.0f * fRec214[1])));
			fRec227[0] = (fSlow152 + (0.999000013f * fRec227[1]));
			fRec228[0] = (fSlow153 + (0.999000013f * fRec228[1]));
			fRec230[0] = (fSlow154 + (0.999000013f * fRec230[1]));
			fRec232[0] = (fSlow155 + (0.999000013f * fRec232[1]));
			float fTemp301 = std::max<float>(fRec232[0], 23.4489498f);
			float fTemp302 = std::max<float>(20.0f, std::fabs(fTemp301));
			fVec46[0] = fTemp302;
			float fTemp303 = (fRec231[1] + (fConst2 * fVec46[1]));
			fRec231[0] = (fTemp303 - std::floor(fTemp303));
			float fTemp304 = mydsp_faustpower2_f(((2.0f * fRec231[0]) + -1.0f));
			fVec47[0] = fTemp304;
			float fTemp305 = ((fTemp0 * (fTemp304 - fVec47[1])) / fTemp302);
			fVec48[(IOTA & 4095)] = fTemp305;
			fRec233[0] = (fSlow156 + (0.999000013f * fRec233[1]));
			float fTemp306 = std::max<float>(0.0f, std::min<float>(2047.0f, (fConst0 * (fRec233[0] / fTemp301))));
			int iTemp307 = int(fTemp306);
			float fTemp308 = std::floor(fTemp306);
			fRec234[0] = (fSlow157 + (0.999000013f * fRec234[1]));
			float fTemp309 = (fRec235[1] + (fConst2 * fRec232[0]));
			fRec235[0] = (fTemp309 - std::floor(fTemp309));
			float fTemp310 = std::max<float>(0.0f, std::min<float>(2047.0f, (fConst4 / fTemp301)));
			int iTemp311 = int(fTemp310);
			float fTemp312 = std::floor(fTemp310);
			fRec236[0] = ((0.999000013f * fRec236[1]) + (fConst1 * ((fTemp305 - (fVec48[((IOTA - iTemp311) & 4095)] * (fTemp312 + (1.0f - fTemp310)))) - ((fTemp310 - fTemp312) * fVec48[((IOTA - (iTemp311 + 1)) & 4095)]))));
			fRec237[0] = (fSlow158 + (0.999000013f * fRec237[1]));
			fRec238[0] = (fSlow159 + (0.999000013f * fRec238[1]));
			float fTemp313 = std::max<float>(1.00000001e-07f, std::fabs(fRec232[0]));
			float fTemp314 = (fRec239[1] + (fConst2 * fTemp313));
			float fTemp315 = (fTemp314 + -1.0f);
			int iTemp316 = (fTemp315 < 0.0f);
			fRec239[0] = (iTemp316 ? fTemp314 : fTemp315);
			float fRec240 = (iTemp316 ? fTemp314 : (fTemp314 + ((1.0f - (fConst0 / fTemp313)) * fTemp315)));
			fRec241[0] = (fSlow160 + (0.999000013f * fRec241[1]));
			float fTemp317 = std::tan((fConst5 * fRec241[0]));
			float fTemp318 = (1.0f / fTemp317);
			float fTemp319 = (((fTemp318 + 1.41421354f) / fTemp317) + 1.0f);
			fRec229[0] = (((((fConst1 * (fRec230[0] * ((fTemp305 - (fVec48[((IOTA - iTemp307) & 4095)] * (fTemp308 + (1.0f - fTemp306)))) - ((fTemp306 - fTemp308) * fVec48[((IOTA - (iTemp307 + 1)) & 4095)])))) + (fRec234[0] * ftbl0mydspSIG0[int((65536.0f * fRec235[0]))])) + (fConst3 * ((fRec232[0] * fRec236[0]) * fRec237[0]))) + (fRec238[0] * ((2.0f * fRec240) + -1.0f))) - (((fRec229[2] * (((fTemp318 + -1.41421354f) / fTemp317) + 1.0f)) + (2.0f * (fRec229[1] * (1.0f - (1.0f / mydsp_faustpower2_f(fTemp317)))))) / fTemp319));
			float fTemp320 = (fRec229[2] + (fRec229[0] + (2.0f * fRec229[1])));
			fRec244[0] = (fSlow161 + (0.999000013f * fRec244[1]));
			iRec245[0] = ((1103515245 * iRec245[1]) + 12345);
			fRec247[0] = (fSlow162 + (0.999000013f * fRec247[1]));
			float fTemp321 = (fRec246[1] + (fConst2 * fRec247[1]));
			fRec246[0] = (fTemp321 - std::floor(fTemp321));
			fRec248[0] = (fSlow163 + (0.999000013f * fRec248[1]));
			float fTemp322 = std::tan((fConst5 * fRec248[0]));
			float fTemp323 = (1.0f / fTemp322);
			float fTemp324 = (1.0f - (1.0f / mydsp_faustpower2_f(fTemp322)));
			float fTemp325 = (((fTemp323 + 1.84775901f) / fTemp322) + 1.0f);
			fRec243[0] = ((4.65661287e-10f * ((fRec244[0] * float(iRec245[0])) * ((2.0f * fRec246[0]) + -1.0f))) - (((fRec243[2] * (((fTemp323 + -1.84775901f) / fTemp322) + 1.0f)) + (2.0f * (fRec243[1] * fTemp324))) / fTemp325));
			float fTemp326 = (((fTemp323 + 0.765366852f) / fTemp322) + 1.0f);
			fRec242[0] = (((fRec243[2] + (fRec243[0] + (2.0f * fRec243[1]))) / fTemp325) - (((fRec242[2] * (((fTemp323 + -0.765366852f) / fTemp322) + 1.0f)) + (2.0f * (fTemp324 * fRec242[1]))) / fTemp326));
			float fTemp327 = ((fRec242[2] + (fRec242[0] + (2.0f * fRec242[1]))) / fTemp326);
			output0[i] = FAUSTFLOAT((fRec0[0] * ((0.0625f * ((((((((((((((((fSlow1 * (((fRec1[0] * (1.0f - fRec2[0])) * fTemp20) / fTemp19)) + (fSlow11 * (((fRec17[0] * (1.0f - fRec18[0])) * fTemp40) / fTemp39))) + (fSlow21 * (((fRec32[0] * (1.0f - fRec33[0])) * fTemp60) / fTemp59))) + (fSlow31 * (((fRec47[0] * (1.0f - fRec48[0])) * fTemp80) / fTemp79))) + (fSlow41 * (((fRec62[0] * (1.0f - fRec63[0])) * fTemp100) / fTemp99))) + (fSlow51 * (((fRec77[0] * (1.0f - fRec78[0])) * fTemp120) / fTemp119))) + (fSlow61 * (((fRec92[0] * (1.0f - fRec93[0])) * fTemp140) / fTemp139))) + (fSlow71 * (((fRec107[0] * (1.0f - fRec108[0])) * fTemp160) / fTemp159))) + (fSlow81 * (((fRec122[0] * (1.0f - fRec123[0])) * fTemp180) / fTemp179))) + (fSlow91 * (((fRec137[0] * (1.0f - fRec138[0])) * fTemp200) / fTemp199))) + (fSlow101 * (((fRec152[0] * (1.0f - fRec153[0])) * fTemp220) / fTemp219))) + (fSlow111 * (((fRec167[0] * (1.0f - fRec168[0])) * fTemp240) / fTemp239))) + (fSlow121 * (((fRec182[0] * (1.0f - fRec183[0])) * fTemp260) / fTemp259))) + (fSlow131 * (((fRec197[0] * (1.0f - fRec198[0])) * fTemp280) / fTemp279))) + (fSlow141 * (((fRec212[0] * (1.0f - fRec213[0])) * fTemp300) / fTemp299))) + (fSlow151 * (((fRec227[0] * (1.0f - fRec228[0])) * fTemp320) / fTemp319)))) + fTemp327)));
			output1[i] = FAUSTFLOAT((fRec0[0] * (fTemp327 + (0.0625f * ((((((((((((((((fSlow1 * (((fRec1[0] * fRec2[0]) * fTemp20) / fTemp19)) + (fSlow11 * (((fRec17[0] * fRec18[0]) * fTemp40) / fTemp39))) + (fSlow21 * (((fRec32[0] * fRec33[0]) * fTemp60) / fTemp59))) + (fSlow31 * (((fRec47[0] * fRec48[0]) * fTemp80) / fTemp79))) + (fSlow41 * (((fRec62[0] * fRec63[0]) * fTemp100) / fTemp99))) + (fSlow51 * (((fRec77[0] * fRec78[0]) * fTemp120) / fTemp119))) + (fSlow61 * (((fRec92[0] * fRec93[0]) * fTemp140) / fTemp139))) + (fSlow71 * (((fRec107[0] * fRec108[0]) * fTemp160) / fTemp159))) + (fSlow81 * (((fRec122[0] * fRec123[0]) * fTemp180) / fTemp179))) + (fSlow91 * (((fRec137[0] * fRec138[0]) * fTemp200) / fTemp199))) + (fSlow101 * (((fRec152[0] * fRec153[0]) * fTemp220) / fTemp219))) + (fSlow111 * (((fRec167[0] * fRec168[0]) * fTemp240) / fTemp239))) + (fSlow121 * (((fRec182[0] * fRec183[0]) * fTemp260) / fTemp259))) + (fSlow131 * (((fRec197[0] * fRec198[0]) * fTemp280) / fTemp279))) + (fSlow141 * (((fRec212[0] * fRec213[0]) * fTemp300) / fTemp299))) + (fSlow151 * (((fRec227[0] * fRec228[0]) * fTemp320) / fTemp319)))))));
			iVec0[1] = iVec0[0];
			fRec0[1] = fRec0[0];
			fRec1[1] = fRec1[0];
			fRec2[1] = fRec2[0];
			fRec4[1] = fRec4[0];
			fRec6[1] = fRec6[0];
			fVec1[1] = fVec1[0];
			fRec5[1] = fRec5[0];
			fVec2[1] = fVec2[0];
			IOTA = (IOTA + 1);
			fRec7[1] = fRec7[0];
			fRec8[1] = fRec8[0];
			fRec10[1] = fRec10[0];
			fRec11[1] = fRec11[0];
			fRec12[1] = fRec12[0];
			fRec13[1] = fRec13[0];
			fRec14[1] = fRec14[0];
			fRec16[1] = fRec16[0];
			fRec3[2] = fRec3[1];
			fRec3[1] = fRec3[0];
			fRec17[1] = fRec17[0];
			fRec18[1] = fRec18[0];
			fRec20[1] = fRec20[0];
			fRec22[1] = fRec22[0];
			fVec4[1] = fVec4[0];
			fRec21[1] = fRec21[0];
			fVec5[1] = fVec5[0];
			fRec23[1] = fRec23[0];
			fRec24[1] = fRec24[0];
			fRec25[1] = fRec25[0];
			fRec26[1] = fRec26[0];
			fRec27[1] = fRec27[0];
			fRec28[1] = fRec28[0];
			fRec29[1] = fRec29[0];
			fRec31[1] = fRec31[0];
			fRec19[2] = fRec19[1];
			fRec19[1] = fRec19[0];
			fRec32[1] = fRec32[0];
			fRec33[1] = fRec33[0];
			fRec35[1] = fRec35[0];
			fRec37[1] = fRec37[0];
			fVec7[1] = fVec7[0];
			fRec36[1] = fRec36[0];
			fVec8[1] = fVec8[0];
			fRec38[1] = fRec38[0];
			fRec39[1] = fRec39[0];
			fRec40[1] = fRec40[0];
			fRec41[1] = fRec41[0];
			fRec42[1] = fRec42[0];
			fRec43[1] = fRec43[0];
			fRec44[1] = fRec44[0];
			fRec46[1] = fRec46[0];
			fRec34[2] = fRec34[1];
			fRec34[1] = fRec34[0];
			fRec47[1] = fRec47[0];
			fRec48[1] = fRec48[0];
			fRec50[1] = fRec50[0];
			fRec52[1] = fRec52[0];
			fVec10[1] = fVec10[0];
			fRec51[1] = fRec51[0];
			fVec11[1] = fVec11[0];
			fRec53[1] = fRec53[0];
			fRec54[1] = fRec54[0];
			fRec55[1] = fRec55[0];
			fRec56[1] = fRec56[0];
			fRec57[1] = fRec57[0];
			fRec58[1] = fRec58[0];
			fRec59[1] = fRec59[0];
			fRec61[1] = fRec61[0];
			fRec49[2] = fRec49[1];
			fRec49[1] = fRec49[0];
			fRec62[1] = fRec62[0];
			fRec63[1] = fRec63[0];
			fRec65[1] = fRec65[0];
			fRec67[1] = fRec67[0];
			fVec13[1] = fVec13[0];
			fRec66[1] = fRec66[0];
			fVec14[1] = fVec14[0];
			fRec68[1] = fRec68[0];
			fRec69[1] = fRec69[0];
			fRec70[1] = fRec70[0];
			fRec71[1] = fRec71[0];
			fRec72[1] = fRec72[0];
			fRec73[1] = fRec73[0];
			fRec74[1] = fRec74[0];
			fRec76[1] = fRec76[0];
			fRec64[2] = fRec64[1];
			fRec64[1] = fRec64[0];
			fRec77[1] = fRec77[0];
			fRec78[1] = fRec78[0];
			fRec80[1] = fRec80[0];
			fRec82[1] = fRec82[0];
			fVec16[1] = fVec16[0];
			fRec81[1] = fRec81[0];
			fVec17[1] = fVec17[0];
			fRec83[1] = fRec83[0];
			fRec84[1] = fRec84[0];
			fRec85[1] = fRec85[0];
			fRec86[1] = fRec86[0];
			fRec87[1] = fRec87[0];
			fRec88[1] = fRec88[0];
			fRec89[1] = fRec89[0];
			fRec91[1] = fRec91[0];
			fRec79[2] = fRec79[1];
			fRec79[1] = fRec79[0];
			fRec92[1] = fRec92[0];
			fRec93[1] = fRec93[0];
			fRec95[1] = fRec95[0];
			fRec97[1] = fRec97[0];
			fVec19[1] = fVec19[0];
			fRec96[1] = fRec96[0];
			fVec20[1] = fVec20[0];
			fRec98[1] = fRec98[0];
			fRec99[1] = fRec99[0];
			fRec100[1] = fRec100[0];
			fRec101[1] = fRec101[0];
			fRec102[1] = fRec102[0];
			fRec103[1] = fRec103[0];
			fRec104[1] = fRec104[0];
			fRec106[1] = fRec106[0];
			fRec94[2] = fRec94[1];
			fRec94[1] = fRec94[0];
			fRec107[1] = fRec107[0];
			fRec108[1] = fRec108[0];
			fRec110[1] = fRec110[0];
			fRec112[1] = fRec112[0];
			fVec22[1] = fVec22[0];
			fRec111[1] = fRec111[0];
			fVec23[1] = fVec23[0];
			fRec113[1] = fRec113[0];
			fRec114[1] = fRec114[0];
			fRec115[1] = fRec115[0];
			fRec116[1] = fRec116[0];
			fRec117[1] = fRec117[0];
			fRec118[1] = fRec118[0];
			fRec119[1] = fRec119[0];
			fRec121[1] = fRec121[0];
			fRec109[2] = fRec109[1];
			fRec109[1] = fRec109[0];
			fRec122[1] = fRec122[0];
			fRec123[1] = fRec123[0];
			fRec125[1] = fRec125[0];
			fRec127[1] = fRec127[0];
			fVec25[1] = fVec25[0];
			fRec126[1] = fRec126[0];
			fVec26[1] = fVec26[0];
			fRec128[1] = fRec128[0];
			fRec129[1] = fRec129[0];
			fRec130[1] = fRec130[0];
			fRec131[1] = fRec131[0];
			fRec132[1] = fRec132[0];
			fRec133[1] = fRec133[0];
			fRec134[1] = fRec134[0];
			fRec136[1] = fRec136[0];
			fRec124[2] = fRec124[1];
			fRec124[1] = fRec124[0];
			fRec137[1] = fRec137[0];
			fRec138[1] = fRec138[0];
			fRec140[1] = fRec140[0];
			fRec142[1] = fRec142[0];
			fVec28[1] = fVec28[0];
			fRec141[1] = fRec141[0];
			fVec29[1] = fVec29[0];
			fRec143[1] = fRec143[0];
			fRec144[1] = fRec144[0];
			fRec145[1] = fRec145[0];
			fRec146[1] = fRec146[0];
			fRec147[1] = fRec147[0];
			fRec148[1] = fRec148[0];
			fRec149[1] = fRec149[0];
			fRec151[1] = fRec151[0];
			fRec139[2] = fRec139[1];
			fRec139[1] = fRec139[0];
			fRec152[1] = fRec152[0];
			fRec153[1] = fRec153[0];
			fRec155[1] = fRec155[0];
			fRec157[1] = fRec157[0];
			fVec31[1] = fVec31[0];
			fRec156[1] = fRec156[0];
			fVec32[1] = fVec32[0];
			fRec158[1] = fRec158[0];
			fRec159[1] = fRec159[0];
			fRec160[1] = fRec160[0];
			fRec161[1] = fRec161[0];
			fRec162[1] = fRec162[0];
			fRec163[1] = fRec163[0];
			fRec164[1] = fRec164[0];
			fRec166[1] = fRec166[0];
			fRec154[2] = fRec154[1];
			fRec154[1] = fRec154[0];
			fRec167[1] = fRec167[0];
			fRec168[1] = fRec168[0];
			fRec170[1] = fRec170[0];
			fRec172[1] = fRec172[0];
			fVec34[1] = fVec34[0];
			fRec171[1] = fRec171[0];
			fVec35[1] = fVec35[0];
			fRec173[1] = fRec173[0];
			fRec174[1] = fRec174[0];
			fRec175[1] = fRec175[0];
			fRec176[1] = fRec176[0];
			fRec177[1] = fRec177[0];
			fRec178[1] = fRec178[0];
			fRec179[1] = fRec179[0];
			fRec181[1] = fRec181[0];
			fRec169[2] = fRec169[1];
			fRec169[1] = fRec169[0];
			fRec182[1] = fRec182[0];
			fRec183[1] = fRec183[0];
			fRec185[1] = fRec185[0];
			fRec187[1] = fRec187[0];
			fVec37[1] = fVec37[0];
			fRec186[1] = fRec186[0];
			fVec38[1] = fVec38[0];
			fRec188[1] = fRec188[0];
			fRec189[1] = fRec189[0];
			fRec190[1] = fRec190[0];
			fRec191[1] = fRec191[0];
			fRec192[1] = fRec192[0];
			fRec193[1] = fRec193[0];
			fRec194[1] = fRec194[0];
			fRec196[1] = fRec196[0];
			fRec184[2] = fRec184[1];
			fRec184[1] = fRec184[0];
			fRec197[1] = fRec197[0];
			fRec198[1] = fRec198[0];
			fRec200[1] = fRec200[0];
			fRec202[1] = fRec202[0];
			fVec40[1] = fVec40[0];
			fRec201[1] = fRec201[0];
			fVec41[1] = fVec41[0];
			fRec203[1] = fRec203[0];
			fRec204[1] = fRec204[0];
			fRec205[1] = fRec205[0];
			fRec206[1] = fRec206[0];
			fRec207[1] = fRec207[0];
			fRec208[1] = fRec208[0];
			fRec209[1] = fRec209[0];
			fRec211[1] = fRec211[0];
			fRec199[2] = fRec199[1];
			fRec199[1] = fRec199[0];
			fRec212[1] = fRec212[0];
			fRec213[1] = fRec213[0];
			fRec215[1] = fRec215[0];
			fRec217[1] = fRec217[0];
			fVec43[1] = fVec43[0];
			fRec216[1] = fRec216[0];
			fVec44[1] = fVec44[0];
			fRec218[1] = fRec218[0];
			fRec219[1] = fRec219[0];
			fRec220[1] = fRec220[0];
			fRec221[1] = fRec221[0];
			fRec222[1] = fRec222[0];
			fRec223[1] = fRec223[0];
			fRec224[1] = fRec224[0];
			fRec226[1] = fRec226[0];
			fRec214[2] = fRec214[1];
			fRec214[1] = fRec214[0];
			fRec227[1] = fRec227[0];
			fRec228[1] = fRec228[0];
			fRec230[1] = fRec230[0];
			fRec232[1] = fRec232[0];
			fVec46[1] = fVec46[0];
			fRec231[1] = fRec231[0];
			fVec47[1] = fVec47[0];
			fRec233[1] = fRec233[0];
			fRec234[1] = fRec234[0];
			fRec235[1] = fRec235[0];
			fRec236[1] = fRec236[0];
			fRec237[1] = fRec237[0];
			fRec238[1] = fRec238[0];
			fRec239[1] = fRec239[0];
			fRec241[1] = fRec241[0];
			fRec229[2] = fRec229[1];
			fRec229[1] = fRec229[0];
			fRec244[1] = fRec244[0];
			iRec245[1] = iRec245[0];
			fRec247[1] = fRec247[0];
			fRec246[1] = fRec246[0];
			fRec248[1] = fRec248[0];
			fRec243[2] = fRec243[1];
			fRec243[1] = fRec243[0];
			fRec242[2] = fRec242[1];
			fRec242[1] = fRec242[0];
		}
	}

};

#endif
