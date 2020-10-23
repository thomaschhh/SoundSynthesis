/* ------------------------------------------------------------
name: "BASIS_pulse.2.tmp"
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
	FAUSTFLOAT fVslider1;
	int iVec0[2];
	float fRec0[2];
	int fSampleRate;
	float fConst0;
	float fConst1;
	float fConst2;
	FAUSTFLOAT fEntry0;
	float fRec5[2];
	float fRec4[2];
	float fVec1[2];
	int IOTA;
	float fVec2[4096];
	FAUSTFLOAT fEntry1;
	float fRec6[2];
	float fConst3;
	FAUSTFLOAT fVslider2;
	float fRec7[2];
	float fRec3[3];
	float fRec2[3];
	float fRec1[3];
	FAUSTFLOAT fVslider3;
	float fRec8[2];
	FAUSTFLOAT fEntry2;
	float fRec13[2];
	float fRec12[2];
	float fVec3[2];
	float fVec4[4096];
	FAUSTFLOAT fEntry3;
	float fRec14[2];
	FAUSTFLOAT fVslider4;
	float fRec15[2];
	float fRec11[3];
	float fRec10[3];
	float fRec9[3];
	FAUSTFLOAT fVslider5;
	float fRec16[2];
	FAUSTFLOAT fEntry4;
	float fRec21[2];
	float fRec20[2];
	float fVec5[2];
	float fVec6[4096];
	FAUSTFLOAT fEntry5;
	float fRec22[2];
	FAUSTFLOAT fVslider6;
	float fRec23[2];
	float fRec19[3];
	float fRec18[3];
	float fRec17[3];
	FAUSTFLOAT fVslider7;
	float fRec24[2];
	FAUSTFLOAT fEntry6;
	float fRec29[2];
	float fRec28[2];
	float fVec7[2];
	float fVec8[4096];
	FAUSTFLOAT fEntry7;
	float fRec30[2];
	FAUSTFLOAT fVslider8;
	float fRec31[2];
	float fRec27[3];
	float fRec26[3];
	float fRec25[3];
	FAUSTFLOAT fVslider9;
	float fRec32[2];
	FAUSTFLOAT fEntry8;
	float fRec37[2];
	float fRec36[2];
	float fVec9[2];
	float fVec10[4096];
	FAUSTFLOAT fEntry9;
	float fRec38[2];
	FAUSTFLOAT fVslider10;
	float fRec39[2];
	float fRec35[3];
	float fRec34[3];
	float fRec33[3];
	FAUSTFLOAT fVslider11;
	float fRec40[2];
	FAUSTFLOAT fEntry10;
	float fRec45[2];
	float fRec44[2];
	float fVec11[2];
	float fVec12[4096];
	FAUSTFLOAT fEntry11;
	float fRec46[2];
	FAUSTFLOAT fVslider12;
	float fRec47[2];
	float fRec43[3];
	float fRec42[3];
	float fRec41[3];
	FAUSTFLOAT fVslider13;
	float fRec48[2];
	FAUSTFLOAT fEntry12;
	float fRec53[2];
	float fRec52[2];
	float fVec13[2];
	float fVec14[4096];
	FAUSTFLOAT fEntry13;
	float fRec54[2];
	FAUSTFLOAT fVslider14;
	float fRec55[2];
	float fRec51[3];
	float fRec50[3];
	float fRec49[3];
	FAUSTFLOAT fVslider15;
	float fRec56[2];
	FAUSTFLOAT fEntry14;
	float fRec61[2];
	float fRec60[2];
	float fVec15[2];
	float fVec16[4096];
	FAUSTFLOAT fEntry15;
	float fRec62[2];
	FAUSTFLOAT fVslider16;
	float fRec63[2];
	float fRec59[3];
	float fRec58[3];
	float fRec57[3];
	FAUSTFLOAT fVslider17;
	float fRec64[2];
	FAUSTFLOAT fEntry16;
	float fRec69[2];
	float fRec68[2];
	float fVec17[2];
	float fVec18[4096];
	FAUSTFLOAT fEntry17;
	float fRec70[2];
	FAUSTFLOAT fVslider18;
	float fRec71[2];
	float fRec67[3];
	float fRec66[3];
	float fRec65[3];
	FAUSTFLOAT fVslider19;
	float fRec72[2];
	FAUSTFLOAT fEntry18;
	float fRec77[2];
	float fRec76[2];
	float fVec19[2];
	float fVec20[4096];
	FAUSTFLOAT fEntry19;
	float fRec78[2];
	FAUSTFLOAT fVslider20;
	float fRec79[2];
	float fRec75[3];
	float fRec74[3];
	float fRec73[3];
	FAUSTFLOAT fVslider21;
	float fRec80[2];
	FAUSTFLOAT fEntry20;
	float fRec85[2];
	float fRec84[2];
	float fVec21[2];
	float fVec22[4096];
	FAUSTFLOAT fEntry21;
	float fRec86[2];
	FAUSTFLOAT fVslider22;
	float fRec87[2];
	float fRec83[3];
	float fRec82[3];
	float fRec81[3];
	FAUSTFLOAT fVslider23;
	float fRec88[2];
	FAUSTFLOAT fEntry22;
	float fRec93[2];
	float fRec92[2];
	float fVec23[2];
	float fVec24[4096];
	FAUSTFLOAT fEntry23;
	float fRec94[2];
	FAUSTFLOAT fVslider24;
	float fRec95[2];
	float fRec91[3];
	float fRec90[3];
	float fRec89[3];
	FAUSTFLOAT fVslider25;
	float fRec96[2];
	FAUSTFLOAT fEntry24;
	float fRec101[2];
	float fRec100[2];
	float fVec25[2];
	float fVec26[4096];
	FAUSTFLOAT fEntry25;
	float fRec102[2];
	FAUSTFLOAT fVslider26;
	float fRec103[2];
	float fRec99[3];
	float fRec98[3];
	float fRec97[3];
	FAUSTFLOAT fVslider27;
	float fRec104[2];
	FAUSTFLOAT fEntry26;
	float fRec109[2];
	float fRec108[2];
	float fVec27[2];
	float fVec28[4096];
	FAUSTFLOAT fEntry27;
	float fRec110[2];
	FAUSTFLOAT fVslider28;
	float fRec111[2];
	float fRec107[3];
	float fRec106[3];
	float fRec105[3];
	FAUSTFLOAT fVslider29;
	float fRec112[2];
	FAUSTFLOAT fEntry28;
	float fRec117[2];
	float fRec116[2];
	float fVec29[2];
	float fVec30[4096];
	FAUSTFLOAT fEntry29;
	float fRec118[2];
	FAUSTFLOAT fVslider30;
	float fRec119[2];
	float fRec115[3];
	float fRec114[3];
	float fRec113[3];
	FAUSTFLOAT fVslider31;
	float fRec120[2];
	FAUSTFLOAT fEntry30;
	float fRec125[2];
	float fRec124[2];
	float fVec31[2];
	float fVec32[4096];
	FAUSTFLOAT fEntry31;
	float fRec126[2];
	FAUSTFLOAT fVslider32;
	float fRec127[2];
	float fRec123[3];
	float fRec122[3];
	float fRec121[3];
	FAUSTFLOAT fVslider33;
	float fRec131[2];
	int iRec132[2];
	FAUSTFLOAT fVslider34;
	float fRec134[2];
	float fRec133[2];
	FAUSTFLOAT fVslider35;
	float fRec135[2];
	float fRec130[3];
	float fRec129[3];
	float fRec128[3];
	
 public:
	
	void metadata(Meta* m) { 
		m->declare("filename", "BASIS_pulse.2.tmp.dsp");
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
		m->declare("name", "BASIS_pulse.2.tmp");
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
		fVslider1 = FAUSTFLOAT(0.5f);
		fEntry0 = FAUSTFLOAT(200.0f);
		fEntry1 = FAUSTFLOAT(0.5f);
		fVslider2 = FAUSTFLOAT(500.0f);
		fVslider3 = FAUSTFLOAT(0.5f);
		fEntry2 = FAUSTFLOAT(200.0f);
		fEntry3 = FAUSTFLOAT(0.5f);
		fVslider4 = FAUSTFLOAT(500.0f);
		fVslider5 = FAUSTFLOAT(0.5f);
		fEntry4 = FAUSTFLOAT(200.0f);
		fEntry5 = FAUSTFLOAT(0.5f);
		fVslider6 = FAUSTFLOAT(500.0f);
		fVslider7 = FAUSTFLOAT(0.5f);
		fEntry6 = FAUSTFLOAT(200.0f);
		fEntry7 = FAUSTFLOAT(0.5f);
		fVslider8 = FAUSTFLOAT(500.0f);
		fVslider9 = FAUSTFLOAT(0.5f);
		fEntry8 = FAUSTFLOAT(200.0f);
		fEntry9 = FAUSTFLOAT(0.5f);
		fVslider10 = FAUSTFLOAT(500.0f);
		fVslider11 = FAUSTFLOAT(0.5f);
		fEntry10 = FAUSTFLOAT(200.0f);
		fEntry11 = FAUSTFLOAT(0.5f);
		fVslider12 = FAUSTFLOAT(500.0f);
		fVslider13 = FAUSTFLOAT(0.5f);
		fEntry12 = FAUSTFLOAT(200.0f);
		fEntry13 = FAUSTFLOAT(0.5f);
		fVslider14 = FAUSTFLOAT(500.0f);
		fVslider15 = FAUSTFLOAT(0.5f);
		fEntry14 = FAUSTFLOAT(200.0f);
		fEntry15 = FAUSTFLOAT(0.5f);
		fVslider16 = FAUSTFLOAT(500.0f);
		fVslider17 = FAUSTFLOAT(0.5f);
		fEntry16 = FAUSTFLOAT(200.0f);
		fEntry17 = FAUSTFLOAT(0.5f);
		fVslider18 = FAUSTFLOAT(500.0f);
		fVslider19 = FAUSTFLOAT(0.5f);
		fEntry18 = FAUSTFLOAT(200.0f);
		fEntry19 = FAUSTFLOAT(0.5f);
		fVslider20 = FAUSTFLOAT(500.0f);
		fVslider21 = FAUSTFLOAT(0.5f);
		fEntry20 = FAUSTFLOAT(200.0f);
		fEntry21 = FAUSTFLOAT(0.5f);
		fVslider22 = FAUSTFLOAT(500.0f);
		fVslider23 = FAUSTFLOAT(0.5f);
		fEntry22 = FAUSTFLOAT(200.0f);
		fEntry23 = FAUSTFLOAT(0.5f);
		fVslider24 = FAUSTFLOAT(500.0f);
		fVslider25 = FAUSTFLOAT(0.5f);
		fEntry24 = FAUSTFLOAT(200.0f);
		fEntry25 = FAUSTFLOAT(0.5f);
		fVslider26 = FAUSTFLOAT(500.0f);
		fVslider27 = FAUSTFLOAT(0.5f);
		fEntry26 = FAUSTFLOAT(200.0f);
		fEntry27 = FAUSTFLOAT(0.5f);
		fVslider28 = FAUSTFLOAT(500.0f);
		fVslider29 = FAUSTFLOAT(0.5f);
		fEntry28 = FAUSTFLOAT(200.0f);
		fEntry29 = FAUSTFLOAT(0.5f);
		fVslider30 = FAUSTFLOAT(500.0f);
		fVslider31 = FAUSTFLOAT(0.5f);
		fEntry30 = FAUSTFLOAT(200.0f);
		fEntry31 = FAUSTFLOAT(0.5f);
		fVslider32 = FAUSTFLOAT(500.0f);
		fVslider33 = FAUSTFLOAT(1.0f);
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
			fRec5[l2] = 0.0f;
		}
		for (int l3 = 0; (l3 < 2); l3 = (l3 + 1)) {
			fRec4[l3] = 0.0f;
		}
		for (int l4 = 0; (l4 < 2); l4 = (l4 + 1)) {
			fVec1[l4] = 0.0f;
		}
		IOTA = 0;
		for (int l5 = 0; (l5 < 4096); l5 = (l5 + 1)) {
			fVec2[l5] = 0.0f;
		}
		for (int l6 = 0; (l6 < 2); l6 = (l6 + 1)) {
			fRec6[l6] = 0.0f;
		}
		for (int l7 = 0; (l7 < 2); l7 = (l7 + 1)) {
			fRec7[l7] = 0.0f;
		}
		for (int l8 = 0; (l8 < 3); l8 = (l8 + 1)) {
			fRec3[l8] = 0.0f;
		}
		for (int l9 = 0; (l9 < 3); l9 = (l9 + 1)) {
			fRec2[l9] = 0.0f;
		}
		for (int l10 = 0; (l10 < 3); l10 = (l10 + 1)) {
			fRec1[l10] = 0.0f;
		}
		for (int l11 = 0; (l11 < 2); l11 = (l11 + 1)) {
			fRec8[l11] = 0.0f;
		}
		for (int l12 = 0; (l12 < 2); l12 = (l12 + 1)) {
			fRec13[l12] = 0.0f;
		}
		for (int l13 = 0; (l13 < 2); l13 = (l13 + 1)) {
			fRec12[l13] = 0.0f;
		}
		for (int l14 = 0; (l14 < 2); l14 = (l14 + 1)) {
			fVec3[l14] = 0.0f;
		}
		for (int l15 = 0; (l15 < 4096); l15 = (l15 + 1)) {
			fVec4[l15] = 0.0f;
		}
		for (int l16 = 0; (l16 < 2); l16 = (l16 + 1)) {
			fRec14[l16] = 0.0f;
		}
		for (int l17 = 0; (l17 < 2); l17 = (l17 + 1)) {
			fRec15[l17] = 0.0f;
		}
		for (int l18 = 0; (l18 < 3); l18 = (l18 + 1)) {
			fRec11[l18] = 0.0f;
		}
		for (int l19 = 0; (l19 < 3); l19 = (l19 + 1)) {
			fRec10[l19] = 0.0f;
		}
		for (int l20 = 0; (l20 < 3); l20 = (l20 + 1)) {
			fRec9[l20] = 0.0f;
		}
		for (int l21 = 0; (l21 < 2); l21 = (l21 + 1)) {
			fRec16[l21] = 0.0f;
		}
		for (int l22 = 0; (l22 < 2); l22 = (l22 + 1)) {
			fRec21[l22] = 0.0f;
		}
		for (int l23 = 0; (l23 < 2); l23 = (l23 + 1)) {
			fRec20[l23] = 0.0f;
		}
		for (int l24 = 0; (l24 < 2); l24 = (l24 + 1)) {
			fVec5[l24] = 0.0f;
		}
		for (int l25 = 0; (l25 < 4096); l25 = (l25 + 1)) {
			fVec6[l25] = 0.0f;
		}
		for (int l26 = 0; (l26 < 2); l26 = (l26 + 1)) {
			fRec22[l26] = 0.0f;
		}
		for (int l27 = 0; (l27 < 2); l27 = (l27 + 1)) {
			fRec23[l27] = 0.0f;
		}
		for (int l28 = 0; (l28 < 3); l28 = (l28 + 1)) {
			fRec19[l28] = 0.0f;
		}
		for (int l29 = 0; (l29 < 3); l29 = (l29 + 1)) {
			fRec18[l29] = 0.0f;
		}
		for (int l30 = 0; (l30 < 3); l30 = (l30 + 1)) {
			fRec17[l30] = 0.0f;
		}
		for (int l31 = 0; (l31 < 2); l31 = (l31 + 1)) {
			fRec24[l31] = 0.0f;
		}
		for (int l32 = 0; (l32 < 2); l32 = (l32 + 1)) {
			fRec29[l32] = 0.0f;
		}
		for (int l33 = 0; (l33 < 2); l33 = (l33 + 1)) {
			fRec28[l33] = 0.0f;
		}
		for (int l34 = 0; (l34 < 2); l34 = (l34 + 1)) {
			fVec7[l34] = 0.0f;
		}
		for (int l35 = 0; (l35 < 4096); l35 = (l35 + 1)) {
			fVec8[l35] = 0.0f;
		}
		for (int l36 = 0; (l36 < 2); l36 = (l36 + 1)) {
			fRec30[l36] = 0.0f;
		}
		for (int l37 = 0; (l37 < 2); l37 = (l37 + 1)) {
			fRec31[l37] = 0.0f;
		}
		for (int l38 = 0; (l38 < 3); l38 = (l38 + 1)) {
			fRec27[l38] = 0.0f;
		}
		for (int l39 = 0; (l39 < 3); l39 = (l39 + 1)) {
			fRec26[l39] = 0.0f;
		}
		for (int l40 = 0; (l40 < 3); l40 = (l40 + 1)) {
			fRec25[l40] = 0.0f;
		}
		for (int l41 = 0; (l41 < 2); l41 = (l41 + 1)) {
			fRec32[l41] = 0.0f;
		}
		for (int l42 = 0; (l42 < 2); l42 = (l42 + 1)) {
			fRec37[l42] = 0.0f;
		}
		for (int l43 = 0; (l43 < 2); l43 = (l43 + 1)) {
			fRec36[l43] = 0.0f;
		}
		for (int l44 = 0; (l44 < 2); l44 = (l44 + 1)) {
			fVec9[l44] = 0.0f;
		}
		for (int l45 = 0; (l45 < 4096); l45 = (l45 + 1)) {
			fVec10[l45] = 0.0f;
		}
		for (int l46 = 0; (l46 < 2); l46 = (l46 + 1)) {
			fRec38[l46] = 0.0f;
		}
		for (int l47 = 0; (l47 < 2); l47 = (l47 + 1)) {
			fRec39[l47] = 0.0f;
		}
		for (int l48 = 0; (l48 < 3); l48 = (l48 + 1)) {
			fRec35[l48] = 0.0f;
		}
		for (int l49 = 0; (l49 < 3); l49 = (l49 + 1)) {
			fRec34[l49] = 0.0f;
		}
		for (int l50 = 0; (l50 < 3); l50 = (l50 + 1)) {
			fRec33[l50] = 0.0f;
		}
		for (int l51 = 0; (l51 < 2); l51 = (l51 + 1)) {
			fRec40[l51] = 0.0f;
		}
		for (int l52 = 0; (l52 < 2); l52 = (l52 + 1)) {
			fRec45[l52] = 0.0f;
		}
		for (int l53 = 0; (l53 < 2); l53 = (l53 + 1)) {
			fRec44[l53] = 0.0f;
		}
		for (int l54 = 0; (l54 < 2); l54 = (l54 + 1)) {
			fVec11[l54] = 0.0f;
		}
		for (int l55 = 0; (l55 < 4096); l55 = (l55 + 1)) {
			fVec12[l55] = 0.0f;
		}
		for (int l56 = 0; (l56 < 2); l56 = (l56 + 1)) {
			fRec46[l56] = 0.0f;
		}
		for (int l57 = 0; (l57 < 2); l57 = (l57 + 1)) {
			fRec47[l57] = 0.0f;
		}
		for (int l58 = 0; (l58 < 3); l58 = (l58 + 1)) {
			fRec43[l58] = 0.0f;
		}
		for (int l59 = 0; (l59 < 3); l59 = (l59 + 1)) {
			fRec42[l59] = 0.0f;
		}
		for (int l60 = 0; (l60 < 3); l60 = (l60 + 1)) {
			fRec41[l60] = 0.0f;
		}
		for (int l61 = 0; (l61 < 2); l61 = (l61 + 1)) {
			fRec48[l61] = 0.0f;
		}
		for (int l62 = 0; (l62 < 2); l62 = (l62 + 1)) {
			fRec53[l62] = 0.0f;
		}
		for (int l63 = 0; (l63 < 2); l63 = (l63 + 1)) {
			fRec52[l63] = 0.0f;
		}
		for (int l64 = 0; (l64 < 2); l64 = (l64 + 1)) {
			fVec13[l64] = 0.0f;
		}
		for (int l65 = 0; (l65 < 4096); l65 = (l65 + 1)) {
			fVec14[l65] = 0.0f;
		}
		for (int l66 = 0; (l66 < 2); l66 = (l66 + 1)) {
			fRec54[l66] = 0.0f;
		}
		for (int l67 = 0; (l67 < 2); l67 = (l67 + 1)) {
			fRec55[l67] = 0.0f;
		}
		for (int l68 = 0; (l68 < 3); l68 = (l68 + 1)) {
			fRec51[l68] = 0.0f;
		}
		for (int l69 = 0; (l69 < 3); l69 = (l69 + 1)) {
			fRec50[l69] = 0.0f;
		}
		for (int l70 = 0; (l70 < 3); l70 = (l70 + 1)) {
			fRec49[l70] = 0.0f;
		}
		for (int l71 = 0; (l71 < 2); l71 = (l71 + 1)) {
			fRec56[l71] = 0.0f;
		}
		for (int l72 = 0; (l72 < 2); l72 = (l72 + 1)) {
			fRec61[l72] = 0.0f;
		}
		for (int l73 = 0; (l73 < 2); l73 = (l73 + 1)) {
			fRec60[l73] = 0.0f;
		}
		for (int l74 = 0; (l74 < 2); l74 = (l74 + 1)) {
			fVec15[l74] = 0.0f;
		}
		for (int l75 = 0; (l75 < 4096); l75 = (l75 + 1)) {
			fVec16[l75] = 0.0f;
		}
		for (int l76 = 0; (l76 < 2); l76 = (l76 + 1)) {
			fRec62[l76] = 0.0f;
		}
		for (int l77 = 0; (l77 < 2); l77 = (l77 + 1)) {
			fRec63[l77] = 0.0f;
		}
		for (int l78 = 0; (l78 < 3); l78 = (l78 + 1)) {
			fRec59[l78] = 0.0f;
		}
		for (int l79 = 0; (l79 < 3); l79 = (l79 + 1)) {
			fRec58[l79] = 0.0f;
		}
		for (int l80 = 0; (l80 < 3); l80 = (l80 + 1)) {
			fRec57[l80] = 0.0f;
		}
		for (int l81 = 0; (l81 < 2); l81 = (l81 + 1)) {
			fRec64[l81] = 0.0f;
		}
		for (int l82 = 0; (l82 < 2); l82 = (l82 + 1)) {
			fRec69[l82] = 0.0f;
		}
		for (int l83 = 0; (l83 < 2); l83 = (l83 + 1)) {
			fRec68[l83] = 0.0f;
		}
		for (int l84 = 0; (l84 < 2); l84 = (l84 + 1)) {
			fVec17[l84] = 0.0f;
		}
		for (int l85 = 0; (l85 < 4096); l85 = (l85 + 1)) {
			fVec18[l85] = 0.0f;
		}
		for (int l86 = 0; (l86 < 2); l86 = (l86 + 1)) {
			fRec70[l86] = 0.0f;
		}
		for (int l87 = 0; (l87 < 2); l87 = (l87 + 1)) {
			fRec71[l87] = 0.0f;
		}
		for (int l88 = 0; (l88 < 3); l88 = (l88 + 1)) {
			fRec67[l88] = 0.0f;
		}
		for (int l89 = 0; (l89 < 3); l89 = (l89 + 1)) {
			fRec66[l89] = 0.0f;
		}
		for (int l90 = 0; (l90 < 3); l90 = (l90 + 1)) {
			fRec65[l90] = 0.0f;
		}
		for (int l91 = 0; (l91 < 2); l91 = (l91 + 1)) {
			fRec72[l91] = 0.0f;
		}
		for (int l92 = 0; (l92 < 2); l92 = (l92 + 1)) {
			fRec77[l92] = 0.0f;
		}
		for (int l93 = 0; (l93 < 2); l93 = (l93 + 1)) {
			fRec76[l93] = 0.0f;
		}
		for (int l94 = 0; (l94 < 2); l94 = (l94 + 1)) {
			fVec19[l94] = 0.0f;
		}
		for (int l95 = 0; (l95 < 4096); l95 = (l95 + 1)) {
			fVec20[l95] = 0.0f;
		}
		for (int l96 = 0; (l96 < 2); l96 = (l96 + 1)) {
			fRec78[l96] = 0.0f;
		}
		for (int l97 = 0; (l97 < 2); l97 = (l97 + 1)) {
			fRec79[l97] = 0.0f;
		}
		for (int l98 = 0; (l98 < 3); l98 = (l98 + 1)) {
			fRec75[l98] = 0.0f;
		}
		for (int l99 = 0; (l99 < 3); l99 = (l99 + 1)) {
			fRec74[l99] = 0.0f;
		}
		for (int l100 = 0; (l100 < 3); l100 = (l100 + 1)) {
			fRec73[l100] = 0.0f;
		}
		for (int l101 = 0; (l101 < 2); l101 = (l101 + 1)) {
			fRec80[l101] = 0.0f;
		}
		for (int l102 = 0; (l102 < 2); l102 = (l102 + 1)) {
			fRec85[l102] = 0.0f;
		}
		for (int l103 = 0; (l103 < 2); l103 = (l103 + 1)) {
			fRec84[l103] = 0.0f;
		}
		for (int l104 = 0; (l104 < 2); l104 = (l104 + 1)) {
			fVec21[l104] = 0.0f;
		}
		for (int l105 = 0; (l105 < 4096); l105 = (l105 + 1)) {
			fVec22[l105] = 0.0f;
		}
		for (int l106 = 0; (l106 < 2); l106 = (l106 + 1)) {
			fRec86[l106] = 0.0f;
		}
		for (int l107 = 0; (l107 < 2); l107 = (l107 + 1)) {
			fRec87[l107] = 0.0f;
		}
		for (int l108 = 0; (l108 < 3); l108 = (l108 + 1)) {
			fRec83[l108] = 0.0f;
		}
		for (int l109 = 0; (l109 < 3); l109 = (l109 + 1)) {
			fRec82[l109] = 0.0f;
		}
		for (int l110 = 0; (l110 < 3); l110 = (l110 + 1)) {
			fRec81[l110] = 0.0f;
		}
		for (int l111 = 0; (l111 < 2); l111 = (l111 + 1)) {
			fRec88[l111] = 0.0f;
		}
		for (int l112 = 0; (l112 < 2); l112 = (l112 + 1)) {
			fRec93[l112] = 0.0f;
		}
		for (int l113 = 0; (l113 < 2); l113 = (l113 + 1)) {
			fRec92[l113] = 0.0f;
		}
		for (int l114 = 0; (l114 < 2); l114 = (l114 + 1)) {
			fVec23[l114] = 0.0f;
		}
		for (int l115 = 0; (l115 < 4096); l115 = (l115 + 1)) {
			fVec24[l115] = 0.0f;
		}
		for (int l116 = 0; (l116 < 2); l116 = (l116 + 1)) {
			fRec94[l116] = 0.0f;
		}
		for (int l117 = 0; (l117 < 2); l117 = (l117 + 1)) {
			fRec95[l117] = 0.0f;
		}
		for (int l118 = 0; (l118 < 3); l118 = (l118 + 1)) {
			fRec91[l118] = 0.0f;
		}
		for (int l119 = 0; (l119 < 3); l119 = (l119 + 1)) {
			fRec90[l119] = 0.0f;
		}
		for (int l120 = 0; (l120 < 3); l120 = (l120 + 1)) {
			fRec89[l120] = 0.0f;
		}
		for (int l121 = 0; (l121 < 2); l121 = (l121 + 1)) {
			fRec96[l121] = 0.0f;
		}
		for (int l122 = 0; (l122 < 2); l122 = (l122 + 1)) {
			fRec101[l122] = 0.0f;
		}
		for (int l123 = 0; (l123 < 2); l123 = (l123 + 1)) {
			fRec100[l123] = 0.0f;
		}
		for (int l124 = 0; (l124 < 2); l124 = (l124 + 1)) {
			fVec25[l124] = 0.0f;
		}
		for (int l125 = 0; (l125 < 4096); l125 = (l125 + 1)) {
			fVec26[l125] = 0.0f;
		}
		for (int l126 = 0; (l126 < 2); l126 = (l126 + 1)) {
			fRec102[l126] = 0.0f;
		}
		for (int l127 = 0; (l127 < 2); l127 = (l127 + 1)) {
			fRec103[l127] = 0.0f;
		}
		for (int l128 = 0; (l128 < 3); l128 = (l128 + 1)) {
			fRec99[l128] = 0.0f;
		}
		for (int l129 = 0; (l129 < 3); l129 = (l129 + 1)) {
			fRec98[l129] = 0.0f;
		}
		for (int l130 = 0; (l130 < 3); l130 = (l130 + 1)) {
			fRec97[l130] = 0.0f;
		}
		for (int l131 = 0; (l131 < 2); l131 = (l131 + 1)) {
			fRec104[l131] = 0.0f;
		}
		for (int l132 = 0; (l132 < 2); l132 = (l132 + 1)) {
			fRec109[l132] = 0.0f;
		}
		for (int l133 = 0; (l133 < 2); l133 = (l133 + 1)) {
			fRec108[l133] = 0.0f;
		}
		for (int l134 = 0; (l134 < 2); l134 = (l134 + 1)) {
			fVec27[l134] = 0.0f;
		}
		for (int l135 = 0; (l135 < 4096); l135 = (l135 + 1)) {
			fVec28[l135] = 0.0f;
		}
		for (int l136 = 0; (l136 < 2); l136 = (l136 + 1)) {
			fRec110[l136] = 0.0f;
		}
		for (int l137 = 0; (l137 < 2); l137 = (l137 + 1)) {
			fRec111[l137] = 0.0f;
		}
		for (int l138 = 0; (l138 < 3); l138 = (l138 + 1)) {
			fRec107[l138] = 0.0f;
		}
		for (int l139 = 0; (l139 < 3); l139 = (l139 + 1)) {
			fRec106[l139] = 0.0f;
		}
		for (int l140 = 0; (l140 < 3); l140 = (l140 + 1)) {
			fRec105[l140] = 0.0f;
		}
		for (int l141 = 0; (l141 < 2); l141 = (l141 + 1)) {
			fRec112[l141] = 0.0f;
		}
		for (int l142 = 0; (l142 < 2); l142 = (l142 + 1)) {
			fRec117[l142] = 0.0f;
		}
		for (int l143 = 0; (l143 < 2); l143 = (l143 + 1)) {
			fRec116[l143] = 0.0f;
		}
		for (int l144 = 0; (l144 < 2); l144 = (l144 + 1)) {
			fVec29[l144] = 0.0f;
		}
		for (int l145 = 0; (l145 < 4096); l145 = (l145 + 1)) {
			fVec30[l145] = 0.0f;
		}
		for (int l146 = 0; (l146 < 2); l146 = (l146 + 1)) {
			fRec118[l146] = 0.0f;
		}
		for (int l147 = 0; (l147 < 2); l147 = (l147 + 1)) {
			fRec119[l147] = 0.0f;
		}
		for (int l148 = 0; (l148 < 3); l148 = (l148 + 1)) {
			fRec115[l148] = 0.0f;
		}
		for (int l149 = 0; (l149 < 3); l149 = (l149 + 1)) {
			fRec114[l149] = 0.0f;
		}
		for (int l150 = 0; (l150 < 3); l150 = (l150 + 1)) {
			fRec113[l150] = 0.0f;
		}
		for (int l151 = 0; (l151 < 2); l151 = (l151 + 1)) {
			fRec120[l151] = 0.0f;
		}
		for (int l152 = 0; (l152 < 2); l152 = (l152 + 1)) {
			fRec125[l152] = 0.0f;
		}
		for (int l153 = 0; (l153 < 2); l153 = (l153 + 1)) {
			fRec124[l153] = 0.0f;
		}
		for (int l154 = 0; (l154 < 2); l154 = (l154 + 1)) {
			fVec31[l154] = 0.0f;
		}
		for (int l155 = 0; (l155 < 4096); l155 = (l155 + 1)) {
			fVec32[l155] = 0.0f;
		}
		for (int l156 = 0; (l156 < 2); l156 = (l156 + 1)) {
			fRec126[l156] = 0.0f;
		}
		for (int l157 = 0; (l157 < 2); l157 = (l157 + 1)) {
			fRec127[l157] = 0.0f;
		}
		for (int l158 = 0; (l158 < 3); l158 = (l158 + 1)) {
			fRec123[l158] = 0.0f;
		}
		for (int l159 = 0; (l159 < 3); l159 = (l159 + 1)) {
			fRec122[l159] = 0.0f;
		}
		for (int l160 = 0; (l160 < 3); l160 = (l160 + 1)) {
			fRec121[l160] = 0.0f;
		}
		for (int l161 = 0; (l161 < 2); l161 = (l161 + 1)) {
			fRec131[l161] = 0.0f;
		}
		for (int l162 = 0; (l162 < 2); l162 = (l162 + 1)) {
			iRec132[l162] = 0;
		}
		for (int l163 = 0; (l163 < 2); l163 = (l163 + 1)) {
			fRec134[l163] = 0.0f;
		}
		for (int l164 = 0; (l164 < 2); l164 = (l164 + 1)) {
			fRec133[l164] = 0.0f;
		}
		for (int l165 = 0; (l165 < 2); l165 = (l165 + 1)) {
			fRec135[l165] = 0.0f;
		}
		for (int l166 = 0; (l166 < 3); l166 = (l166 + 1)) {
			fRec130[l166] = 0.0f;
		}
		for (int l167 = 0; (l167 < 3); l167 = (l167 + 1)) {
			fRec129[l167] = 0.0f;
		}
		for (int l168 = 0; (l168 < 3); l168 = (l168 + 1)) {
			fRec128[l168] = 0.0f;
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
		ui_interface->openVerticalBox("BASIS_pulse.2.tmp");
		ui_interface->openHorizontalBox("Noise");
		ui_interface->addVerticalSlider("noiseCO", &fVslider35, 100.0f, 100.0f, 2000.0f, 0.100000001f);
		ui_interface->addVerticalSlider("noiseLfoFreq", &fVslider34, 0.0f, 0.0f, 1000.0f, 0.00999999978f);
		ui_interface->addVerticalSlider("noiseVol", &fVslider33, 1.0f, 0.0f, 10.0f, 0.00100000005f);
		ui_interface->addVerticalSlider("volume", &fVslider0, 0.0f, 0.0f, 1.0f, 0.00999999978f);
		ui_interface->closeBox();
		ui_interface->openHorizontalBox("square");
		ui_interface->declare(0, "10", "");
		ui_interface->openVerticalBox("BL0");
		ui_interface->declare(&fEntry1, "0", "");
		ui_interface->declare(&fEntry1, "style", "knob");
		ui_interface->addNumEntry("duty", &fEntry1, 0.5f, 0.00100000005f, 0.999000013f, 0.00100000005f);
		ui_interface->declare(&fEntry0, "1", "");
		ui_interface->declare(&fEntry0, "style", "knob");
		ui_interface->addNumEntry("freq", &fEntry0, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fVslider1, "2", "");
		ui_interface->declare(&fVslider1, "scale", "exp");
		ui_interface->addVerticalSlider("gain", &fVslider1, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fVslider2, "3", "");
		ui_interface->addVerticalSlider("cutoff", &fVslider2, 500.0f, 60.0f, 3000.0f, 1.0f);
		ui_interface->closeBox();
		ui_interface->declare(0, "11", "");
		ui_interface->openVerticalBox("BL1");
		ui_interface->declare(&fEntry3, "0", "");
		ui_interface->declare(&fEntry3, "style", "knob");
		ui_interface->addNumEntry("duty", &fEntry3, 0.5f, 0.00100000005f, 0.999000013f, 0.00100000005f);
		ui_interface->declare(&fEntry2, "1", "");
		ui_interface->declare(&fEntry2, "style", "knob");
		ui_interface->addNumEntry("freq", &fEntry2, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fVslider3, "2", "");
		ui_interface->declare(&fVslider3, "scale", "exp");
		ui_interface->addVerticalSlider("gain", &fVslider3, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fVslider4, "3", "");
		ui_interface->addVerticalSlider("cutoff", &fVslider4, 500.0f, 60.0f, 3000.0f, 1.0f);
		ui_interface->closeBox();
		ui_interface->declare(0, "12", "");
		ui_interface->openVerticalBox("BL2");
		ui_interface->declare(&fEntry5, "0", "");
		ui_interface->declare(&fEntry5, "style", "knob");
		ui_interface->addNumEntry("duty", &fEntry5, 0.5f, 0.00100000005f, 0.999000013f, 0.00100000005f);
		ui_interface->declare(&fEntry4, "1", "");
		ui_interface->declare(&fEntry4, "style", "knob");
		ui_interface->addNumEntry("freq", &fEntry4, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fVslider5, "2", "");
		ui_interface->declare(&fVslider5, "scale", "exp");
		ui_interface->addVerticalSlider("gain", &fVslider5, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fVslider6, "3", "");
		ui_interface->addVerticalSlider("cutoff", &fVslider6, 500.0f, 60.0f, 3000.0f, 1.0f);
		ui_interface->closeBox();
		ui_interface->declare(0, "13", "");
		ui_interface->openVerticalBox("BL3");
		ui_interface->declare(&fEntry7, "0", "");
		ui_interface->declare(&fEntry7, "style", "knob");
		ui_interface->addNumEntry("duty", &fEntry7, 0.5f, 0.00100000005f, 0.999000013f, 0.00100000005f);
		ui_interface->declare(&fEntry6, "1", "");
		ui_interface->declare(&fEntry6, "style", "knob");
		ui_interface->addNumEntry("freq", &fEntry6, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fVslider7, "2", "");
		ui_interface->declare(&fVslider7, "scale", "exp");
		ui_interface->addVerticalSlider("gain", &fVslider7, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fVslider8, "3", "");
		ui_interface->addVerticalSlider("cutoff", &fVslider8, 500.0f, 60.0f, 3000.0f, 1.0f);
		ui_interface->closeBox();
		ui_interface->declare(0, "14", "");
		ui_interface->openVerticalBox("BL4");
		ui_interface->declare(&fEntry9, "0", "");
		ui_interface->declare(&fEntry9, "style", "knob");
		ui_interface->addNumEntry("duty", &fEntry9, 0.5f, 0.00100000005f, 0.999000013f, 0.00100000005f);
		ui_interface->declare(&fEntry8, "1", "");
		ui_interface->declare(&fEntry8, "style", "knob");
		ui_interface->addNumEntry("freq", &fEntry8, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fVslider9, "2", "");
		ui_interface->declare(&fVslider9, "scale", "exp");
		ui_interface->addVerticalSlider("gain", &fVslider9, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fVslider10, "3", "");
		ui_interface->addVerticalSlider("cutoff", &fVslider10, 500.0f, 60.0f, 3000.0f, 1.0f);
		ui_interface->closeBox();
		ui_interface->declare(0, "15", "");
		ui_interface->openVerticalBox("BL5");
		ui_interface->declare(&fEntry11, "0", "");
		ui_interface->declare(&fEntry11, "style", "knob");
		ui_interface->addNumEntry("duty", &fEntry11, 0.5f, 0.00100000005f, 0.999000013f, 0.00100000005f);
		ui_interface->declare(&fEntry10, "1", "");
		ui_interface->declare(&fEntry10, "style", "knob");
		ui_interface->addNumEntry("freq", &fEntry10, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fVslider11, "2", "");
		ui_interface->declare(&fVslider11, "scale", "exp");
		ui_interface->addVerticalSlider("gain", &fVslider11, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fVslider12, "3", "");
		ui_interface->addVerticalSlider("cutoff", &fVslider12, 500.0f, 60.0f, 3000.0f, 1.0f);
		ui_interface->closeBox();
		ui_interface->declare(0, "16", "");
		ui_interface->openVerticalBox("BL6");
		ui_interface->declare(&fEntry13, "0", "");
		ui_interface->declare(&fEntry13, "style", "knob");
		ui_interface->addNumEntry("duty", &fEntry13, 0.5f, 0.00100000005f, 0.999000013f, 0.00100000005f);
		ui_interface->declare(&fEntry12, "1", "");
		ui_interface->declare(&fEntry12, "style", "knob");
		ui_interface->addNumEntry("freq", &fEntry12, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fVslider13, "2", "");
		ui_interface->declare(&fVslider13, "scale", "exp");
		ui_interface->addVerticalSlider("gain", &fVslider13, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fVslider14, "3", "");
		ui_interface->addVerticalSlider("cutoff", &fVslider14, 500.0f, 60.0f, 3000.0f, 1.0f);
		ui_interface->closeBox();
		ui_interface->declare(0, "17", "");
		ui_interface->openVerticalBox("BL7");
		ui_interface->declare(&fEntry15, "0", "");
		ui_interface->declare(&fEntry15, "style", "knob");
		ui_interface->addNumEntry("duty", &fEntry15, 0.5f, 0.00100000005f, 0.999000013f, 0.00100000005f);
		ui_interface->declare(&fEntry14, "1", "");
		ui_interface->declare(&fEntry14, "style", "knob");
		ui_interface->addNumEntry("freq", &fEntry14, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fVslider15, "2", "");
		ui_interface->declare(&fVslider15, "scale", "exp");
		ui_interface->addVerticalSlider("gain", &fVslider15, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fVslider16, "3", "");
		ui_interface->addVerticalSlider("cutoff", &fVslider16, 500.0f, 60.0f, 3000.0f, 1.0f);
		ui_interface->closeBox();
		ui_interface->declare(0, "18", "");
		ui_interface->openVerticalBox("BL8");
		ui_interface->declare(&fEntry17, "0", "");
		ui_interface->declare(&fEntry17, "style", "knob");
		ui_interface->addNumEntry("duty", &fEntry17, 0.5f, 0.00100000005f, 0.999000013f, 0.00100000005f);
		ui_interface->declare(&fEntry16, "1", "");
		ui_interface->declare(&fEntry16, "style", "knob");
		ui_interface->addNumEntry("freq", &fEntry16, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fVslider17, "2", "");
		ui_interface->declare(&fVslider17, "scale", "exp");
		ui_interface->addVerticalSlider("gain", &fVslider17, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fVslider18, "3", "");
		ui_interface->addVerticalSlider("cutoff", &fVslider18, 500.0f, 60.0f, 3000.0f, 1.0f);
		ui_interface->closeBox();
		ui_interface->declare(0, "19", "");
		ui_interface->openVerticalBox("BL9");
		ui_interface->declare(&fEntry19, "0", "");
		ui_interface->declare(&fEntry19, "style", "knob");
		ui_interface->addNumEntry("duty", &fEntry19, 0.5f, 0.00100000005f, 0.999000013f, 0.00100000005f);
		ui_interface->declare(&fEntry18, "1", "");
		ui_interface->declare(&fEntry18, "style", "knob");
		ui_interface->addNumEntry("freq", &fEntry18, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fVslider19, "2", "");
		ui_interface->declare(&fVslider19, "scale", "exp");
		ui_interface->addVerticalSlider("gain", &fVslider19, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fVslider20, "3", "");
		ui_interface->addVerticalSlider("cutoff", &fVslider20, 500.0f, 60.0f, 3000.0f, 1.0f);
		ui_interface->closeBox();
		ui_interface->declare(0, "20", "");
		ui_interface->openVerticalBox("BL10");
		ui_interface->declare(&fEntry21, "0", "");
		ui_interface->declare(&fEntry21, "style", "knob");
		ui_interface->addNumEntry("duty", &fEntry21, 0.5f, 0.00100000005f, 0.999000013f, 0.00100000005f);
		ui_interface->declare(&fEntry20, "1", "");
		ui_interface->declare(&fEntry20, "style", "knob");
		ui_interface->addNumEntry("freq", &fEntry20, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fVslider21, "2", "");
		ui_interface->declare(&fVslider21, "scale", "exp");
		ui_interface->addVerticalSlider("gain", &fVslider21, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fVslider22, "3", "");
		ui_interface->addVerticalSlider("cutoff", &fVslider22, 500.0f, 60.0f, 3000.0f, 1.0f);
		ui_interface->closeBox();
		ui_interface->declare(0, "21", "");
		ui_interface->openVerticalBox("BL11");
		ui_interface->declare(&fEntry23, "0", "");
		ui_interface->declare(&fEntry23, "style", "knob");
		ui_interface->addNumEntry("duty", &fEntry23, 0.5f, 0.00100000005f, 0.999000013f, 0.00100000005f);
		ui_interface->declare(&fEntry22, "1", "");
		ui_interface->declare(&fEntry22, "style", "knob");
		ui_interface->addNumEntry("freq", &fEntry22, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fVslider23, "2", "");
		ui_interface->declare(&fVslider23, "scale", "exp");
		ui_interface->addVerticalSlider("gain", &fVslider23, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fVslider24, "3", "");
		ui_interface->addVerticalSlider("cutoff", &fVslider24, 500.0f, 60.0f, 3000.0f, 1.0f);
		ui_interface->closeBox();
		ui_interface->declare(0, "22", "");
		ui_interface->openVerticalBox("BL12");
		ui_interface->declare(&fEntry25, "0", "");
		ui_interface->declare(&fEntry25, "style", "knob");
		ui_interface->addNumEntry("duty", &fEntry25, 0.5f, 0.00100000005f, 0.999000013f, 0.00100000005f);
		ui_interface->declare(&fEntry24, "1", "");
		ui_interface->declare(&fEntry24, "style", "knob");
		ui_interface->addNumEntry("freq", &fEntry24, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fVslider25, "2", "");
		ui_interface->declare(&fVslider25, "scale", "exp");
		ui_interface->addVerticalSlider("gain", &fVslider25, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fVslider26, "3", "");
		ui_interface->addVerticalSlider("cutoff", &fVslider26, 500.0f, 60.0f, 3000.0f, 1.0f);
		ui_interface->closeBox();
		ui_interface->declare(0, "23", "");
		ui_interface->openVerticalBox("BL13");
		ui_interface->declare(&fEntry27, "0", "");
		ui_interface->declare(&fEntry27, "style", "knob");
		ui_interface->addNumEntry("duty", &fEntry27, 0.5f, 0.00100000005f, 0.999000013f, 0.00100000005f);
		ui_interface->declare(&fEntry26, "1", "");
		ui_interface->declare(&fEntry26, "style", "knob");
		ui_interface->addNumEntry("freq", &fEntry26, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fVslider27, "2", "");
		ui_interface->declare(&fVslider27, "scale", "exp");
		ui_interface->addVerticalSlider("gain", &fVslider27, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fVslider28, "3", "");
		ui_interface->addVerticalSlider("cutoff", &fVslider28, 500.0f, 60.0f, 3000.0f, 1.0f);
		ui_interface->closeBox();
		ui_interface->declare(0, "24", "");
		ui_interface->openVerticalBox("BL14");
		ui_interface->declare(&fEntry29, "0", "");
		ui_interface->declare(&fEntry29, "style", "knob");
		ui_interface->addNumEntry("duty", &fEntry29, 0.5f, 0.00100000005f, 0.999000013f, 0.00100000005f);
		ui_interface->declare(&fEntry28, "1", "");
		ui_interface->declare(&fEntry28, "style", "knob");
		ui_interface->addNumEntry("freq", &fEntry28, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fVslider29, "2", "");
		ui_interface->declare(&fVslider29, "scale", "exp");
		ui_interface->addVerticalSlider("gain", &fVslider29, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fVslider30, "3", "");
		ui_interface->addVerticalSlider("cutoff", &fVslider30, 500.0f, 60.0f, 3000.0f, 1.0f);
		ui_interface->closeBox();
		ui_interface->declare(0, "25", "");
		ui_interface->openVerticalBox("BL15");
		ui_interface->declare(&fEntry31, "0", "");
		ui_interface->declare(&fEntry31, "style", "knob");
		ui_interface->addNumEntry("duty", &fEntry31, 0.5f, 0.00100000005f, 0.999000013f, 0.00100000005f);
		ui_interface->declare(&fEntry30, "1", "");
		ui_interface->declare(&fEntry30, "style", "knob");
		ui_interface->addNumEntry("freq", &fEntry30, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fVslider31, "2", "");
		ui_interface->declare(&fVslider31, "scale", "exp");
		ui_interface->addVerticalSlider("gain", &fVslider31, 0.5f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->declare(&fVslider32, "3", "");
		ui_interface->addVerticalSlider("cutoff", &fVslider32, 500.0f, 60.0f, 3000.0f, 1.0f);
		ui_interface->closeBox();
		ui_interface->closeBox();
		ui_interface->closeBox();
	}
	
	virtual void compute(int count, FAUSTFLOAT** inputs, FAUSTFLOAT** outputs) {
		FAUSTFLOAT* output0 = outputs[0];
		FAUSTFLOAT* output1 = outputs[1];
		float fSlow0 = (0.400000006f * float(fVslider0));
		float fSlow1 = (0.00100000005f * float(fVslider1));
		float fSlow2 = (0.00100000005f * float(fEntry0));
		float fSlow3 = (0.00100000005f * float(fEntry1));
		float fSlow4 = (0.00100000005f * float(fVslider2));
		float fSlow5 = (0.00100000005f * float(fVslider3));
		float fSlow6 = (0.00100000005f * float(fEntry2));
		float fSlow7 = (0.00100000005f * float(fEntry3));
		float fSlow8 = (0.00100000005f * float(fVslider4));
		float fSlow9 = (0.00100000005f * float(fVslider5));
		float fSlow10 = (0.00100000005f * float(fEntry4));
		float fSlow11 = (0.00100000005f * float(fEntry5));
		float fSlow12 = (0.00100000005f * float(fVslider6));
		float fSlow13 = (0.00100000005f * float(fVslider7));
		float fSlow14 = (0.00100000005f * float(fEntry6));
		float fSlow15 = (0.00100000005f * float(fEntry7));
		float fSlow16 = (0.00100000005f * float(fVslider8));
		float fSlow17 = (0.00100000005f * float(fVslider9));
		float fSlow18 = (0.00100000005f * float(fEntry8));
		float fSlow19 = (0.00100000005f * float(fEntry9));
		float fSlow20 = (0.00100000005f * float(fVslider10));
		float fSlow21 = (0.00100000005f * float(fVslider11));
		float fSlow22 = (0.00100000005f * float(fEntry10));
		float fSlow23 = (0.00100000005f * float(fEntry11));
		float fSlow24 = (0.00100000005f * float(fVslider12));
		float fSlow25 = (0.00100000005f * float(fVslider13));
		float fSlow26 = (0.00100000005f * float(fEntry12));
		float fSlow27 = (0.00100000005f * float(fEntry13));
		float fSlow28 = (0.00100000005f * float(fVslider14));
		float fSlow29 = (0.00100000005f * float(fVslider15));
		float fSlow30 = (0.00100000005f * float(fEntry14));
		float fSlow31 = (0.00100000005f * float(fEntry15));
		float fSlow32 = (0.00100000005f * float(fVslider16));
		float fSlow33 = (0.00100000005f * float(fVslider17));
		float fSlow34 = (0.00100000005f * float(fEntry16));
		float fSlow35 = (0.00100000005f * float(fEntry17));
		float fSlow36 = (0.00100000005f * float(fVslider18));
		float fSlow37 = (0.00100000005f * float(fVslider19));
		float fSlow38 = (0.00100000005f * float(fEntry18));
		float fSlow39 = (0.00100000005f * float(fEntry19));
		float fSlow40 = (0.00100000005f * float(fVslider20));
		float fSlow41 = (0.00100000005f * float(fVslider21));
		float fSlow42 = (0.00100000005f * float(fEntry20));
		float fSlow43 = (0.00100000005f * float(fEntry21));
		float fSlow44 = (0.00100000005f * float(fVslider22));
		float fSlow45 = (0.00100000005f * float(fVslider23));
		float fSlow46 = (0.00100000005f * float(fEntry22));
		float fSlow47 = (0.00100000005f * float(fEntry23));
		float fSlow48 = (0.00100000005f * float(fVslider24));
		float fSlow49 = (0.00100000005f * float(fVslider25));
		float fSlow50 = (0.00100000005f * float(fEntry24));
		float fSlow51 = (0.00100000005f * float(fEntry25));
		float fSlow52 = (0.00100000005f * float(fVslider26));
		float fSlow53 = (0.00100000005f * float(fVslider27));
		float fSlow54 = (0.00100000005f * float(fEntry26));
		float fSlow55 = (0.00100000005f * float(fEntry27));
		float fSlow56 = (0.00100000005f * float(fVslider28));
		float fSlow57 = (0.00100000005f * float(fVslider29));
		float fSlow58 = (0.00100000005f * float(fEntry28));
		float fSlow59 = (0.00100000005f * float(fEntry29));
		float fSlow60 = (0.00100000005f * float(fVslider30));
		float fSlow61 = (0.00100000005f * float(fVslider31));
		float fSlow62 = (0.00100000005f * float(fEntry30));
		float fSlow63 = (0.00100000005f * float(fEntry31));
		float fSlow64 = (0.00100000005f * float(fVslider32));
		float fSlow65 = (0.00100000005f * float(fVslider33));
		float fSlow66 = (0.00100000005f * float(fVslider34));
		float fSlow67 = (0.00100000005f * float(fVslider35));
		for (int i = 0; (i < count); i = (i + 1)) {
			iVec0[0] = 1;
			fRec0[0] = (fSlow1 + (0.999000013f * fRec0[1]));
			float fTemp0 = float(iVec0[1]);
			fRec5[0] = (fSlow2 + (0.999000013f * fRec5[1]));
			float fTemp1 = std::max<float>(fRec5[0], 23.4489498f);
			float fTemp2 = std::max<float>(20.0f, std::fabs(fTemp1));
			float fTemp3 = (fRec4[1] + (fConst2 * fTemp2));
			fRec4[0] = (fTemp3 - std::floor(fTemp3));
			float fTemp4 = mydsp_faustpower2_f(((2.0f * fRec4[0]) + -1.0f));
			fVec1[0] = fTemp4;
			float fTemp5 = ((fTemp0 * (fTemp4 - fVec1[1])) / fTemp2);
			fVec2[(IOTA & 4095)] = fTemp5;
			fRec6[0] = (fSlow3 + (0.999000013f * fRec6[1]));
			float fTemp6 = std::max<float>(0.0f, std::min<float>(2047.0f, (fConst0 * (fRec6[0] / fTemp1))));
			int iTemp7 = int(fTemp6);
			float fTemp8 = std::floor(fTemp6);
			fRec7[0] = (fSlow4 + (0.999000013f * fRec7[1]));
			float fTemp9 = std::tan((fConst3 * fRec7[0]));
			float fTemp10 = (1.0f / fTemp9);
			float fTemp11 = (1.0f - (1.0f / mydsp_faustpower2_f(fTemp9)));
			float fTemp12 = (((fTemp10 + 1.93185163f) / fTemp9) + 1.0f);
			fRec3[0] = ((fConst1 * ((fTemp5 - (fVec2[((IOTA - iTemp7) & 4095)] * (fTemp8 + (1.0f - fTemp6)))) - ((fTemp6 - fTemp8) * fVec2[((IOTA - (iTemp7 + 1)) & 4095)]))) - (((fRec3[2] * (((fTemp10 + -1.93185163f) / fTemp9) + 1.0f)) + (2.0f * (fRec3[1] * fTemp11))) / fTemp12));
			float fTemp13 = (((fTemp10 + 1.41421354f) / fTemp9) + 1.0f);
			fRec2[0] = (((fRec3[2] + (fRec3[0] + (2.0f * fRec3[1]))) / fTemp12) - (((fRec2[2] * (((fTemp10 + -1.41421354f) / fTemp9) + 1.0f)) + (2.0f * (fTemp11 * fRec2[1]))) / fTemp13));
			float fTemp14 = (((fTemp10 + 0.517638087f) / fTemp9) + 1.0f);
			fRec1[0] = (((fRec2[2] + (fRec2[0] + (2.0f * fRec2[1]))) / fTemp13) - (((fRec1[2] * (((fTemp10 + -0.517638087f) / fTemp9) + 1.0f)) + (2.0f * (fTemp11 * fRec1[1]))) / fTemp14));
			fRec8[0] = (fSlow5 + (0.999000013f * fRec8[1]));
			fRec13[0] = (fSlow6 + (0.999000013f * fRec13[1]));
			float fTemp15 = std::max<float>(fRec13[0], 23.4489498f);
			float fTemp16 = std::max<float>(20.0f, std::fabs(fTemp15));
			float fTemp17 = (fRec12[1] + (fConst2 * fTemp16));
			fRec12[0] = (fTemp17 - std::floor(fTemp17));
			float fTemp18 = mydsp_faustpower2_f(((2.0f * fRec12[0]) + -1.0f));
			fVec3[0] = fTemp18;
			float fTemp19 = ((fTemp0 * (fTemp18 - fVec3[1])) / fTemp16);
			fVec4[(IOTA & 4095)] = fTemp19;
			fRec14[0] = (fSlow7 + (0.999000013f * fRec14[1]));
			float fTemp20 = std::max<float>(0.0f, std::min<float>(2047.0f, (fConst0 * (fRec14[0] / fTemp15))));
			int iTemp21 = int(fTemp20);
			float fTemp22 = std::floor(fTemp20);
			fRec15[0] = (fSlow8 + (0.999000013f * fRec15[1]));
			float fTemp23 = std::tan((fConst3 * fRec15[0]));
			float fTemp24 = (1.0f / fTemp23);
			float fTemp25 = (1.0f - (1.0f / mydsp_faustpower2_f(fTemp23)));
			float fTemp26 = (((fTemp24 + 1.93185163f) / fTemp23) + 1.0f);
			fRec11[0] = ((fConst1 * ((fTemp19 - (fVec4[((IOTA - iTemp21) & 4095)] * (fTemp22 + (1.0f - fTemp20)))) - ((fTemp20 - fTemp22) * fVec4[((IOTA - (iTemp21 + 1)) & 4095)]))) - (((fRec11[2] * (((fTemp24 + -1.93185163f) / fTemp23) + 1.0f)) + (2.0f * (fRec11[1] * fTemp25))) / fTemp26));
			float fTemp27 = (((fTemp24 + 1.41421354f) / fTemp23) + 1.0f);
			fRec10[0] = (((fRec11[2] + (fRec11[0] + (2.0f * fRec11[1]))) / fTemp26) - (((fRec10[2] * (((fTemp24 + -1.41421354f) / fTemp23) + 1.0f)) + (2.0f * (fTemp25 * fRec10[1]))) / fTemp27));
			float fTemp28 = (((fTemp24 + 0.517638087f) / fTemp23) + 1.0f);
			fRec9[0] = (((fRec10[2] + (fRec10[0] + (2.0f * fRec10[1]))) / fTemp27) - (((fRec9[2] * (((fTemp24 + -0.517638087f) / fTemp23) + 1.0f)) + (2.0f * (fTemp25 * fRec9[1]))) / fTemp28));
			fRec16[0] = (fSlow9 + (0.999000013f * fRec16[1]));
			fRec21[0] = (fSlow10 + (0.999000013f * fRec21[1]));
			float fTemp29 = std::max<float>(fRec21[0], 23.4489498f);
			float fTemp30 = std::max<float>(20.0f, std::fabs(fTemp29));
			float fTemp31 = (fRec20[1] + (fConst2 * fTemp30));
			fRec20[0] = (fTemp31 - std::floor(fTemp31));
			float fTemp32 = mydsp_faustpower2_f(((2.0f * fRec20[0]) + -1.0f));
			fVec5[0] = fTemp32;
			float fTemp33 = ((fTemp0 * (fTemp32 - fVec5[1])) / fTemp30);
			fVec6[(IOTA & 4095)] = fTemp33;
			fRec22[0] = (fSlow11 + (0.999000013f * fRec22[1]));
			float fTemp34 = std::max<float>(0.0f, std::min<float>(2047.0f, (fConst0 * (fRec22[0] / fTemp29))));
			int iTemp35 = int(fTemp34);
			float fTemp36 = std::floor(fTemp34);
			fRec23[0] = (fSlow12 + (0.999000013f * fRec23[1]));
			float fTemp37 = std::tan((fConst3 * fRec23[0]));
			float fTemp38 = (1.0f / fTemp37);
			float fTemp39 = (1.0f - (1.0f / mydsp_faustpower2_f(fTemp37)));
			float fTemp40 = (((fTemp38 + 1.93185163f) / fTemp37) + 1.0f);
			fRec19[0] = ((fConst1 * ((fTemp33 - (fVec6[((IOTA - iTemp35) & 4095)] * (fTemp36 + (1.0f - fTemp34)))) - ((fTemp34 - fTemp36) * fVec6[((IOTA - (iTemp35 + 1)) & 4095)]))) - (((fRec19[2] * (((fTemp38 + -1.93185163f) / fTemp37) + 1.0f)) + (2.0f * (fRec19[1] * fTemp39))) / fTemp40));
			float fTemp41 = (((fTemp38 + 1.41421354f) / fTemp37) + 1.0f);
			fRec18[0] = (((fRec19[2] + (fRec19[0] + (2.0f * fRec19[1]))) / fTemp40) - (((fRec18[2] * (((fTemp38 + -1.41421354f) / fTemp37) + 1.0f)) + (2.0f * (fTemp39 * fRec18[1]))) / fTemp41));
			float fTemp42 = (((fTemp38 + 0.517638087f) / fTemp37) + 1.0f);
			fRec17[0] = (((fRec18[2] + (fRec18[0] + (2.0f * fRec18[1]))) / fTemp41) - (((fRec17[2] * (((fTemp38 + -0.517638087f) / fTemp37) + 1.0f)) + (2.0f * (fTemp39 * fRec17[1]))) / fTemp42));
			fRec24[0] = (fSlow13 + (0.999000013f * fRec24[1]));
			fRec29[0] = (fSlow14 + (0.999000013f * fRec29[1]));
			float fTemp43 = std::max<float>(fRec29[0], 23.4489498f);
			float fTemp44 = std::max<float>(20.0f, std::fabs(fTemp43));
			float fTemp45 = (fRec28[1] + (fConst2 * fTemp44));
			fRec28[0] = (fTemp45 - std::floor(fTemp45));
			float fTemp46 = mydsp_faustpower2_f(((2.0f * fRec28[0]) + -1.0f));
			fVec7[0] = fTemp46;
			float fTemp47 = ((fTemp0 * (fTemp46 - fVec7[1])) / fTemp44);
			fVec8[(IOTA & 4095)] = fTemp47;
			fRec30[0] = (fSlow15 + (0.999000013f * fRec30[1]));
			float fTemp48 = std::max<float>(0.0f, std::min<float>(2047.0f, (fConst0 * (fRec30[0] / fTemp43))));
			int iTemp49 = int(fTemp48);
			float fTemp50 = std::floor(fTemp48);
			fRec31[0] = (fSlow16 + (0.999000013f * fRec31[1]));
			float fTemp51 = std::tan((fConst3 * fRec31[0]));
			float fTemp52 = (1.0f / fTemp51);
			float fTemp53 = (1.0f - (1.0f / mydsp_faustpower2_f(fTemp51)));
			float fTemp54 = (((fTemp52 + 1.93185163f) / fTemp51) + 1.0f);
			fRec27[0] = ((fConst1 * ((fTemp47 - (fVec8[((IOTA - iTemp49) & 4095)] * (fTemp50 + (1.0f - fTemp48)))) - ((fTemp48 - fTemp50) * fVec8[((IOTA - (iTemp49 + 1)) & 4095)]))) - (((fRec27[2] * (((fTemp52 + -1.93185163f) / fTemp51) + 1.0f)) + (2.0f * (fRec27[1] * fTemp53))) / fTemp54));
			float fTemp55 = (((fTemp52 + 1.41421354f) / fTemp51) + 1.0f);
			fRec26[0] = (((fRec27[2] + (fRec27[0] + (2.0f * fRec27[1]))) / fTemp54) - (((fRec26[2] * (((fTemp52 + -1.41421354f) / fTemp51) + 1.0f)) + (2.0f * (fTemp53 * fRec26[1]))) / fTemp55));
			float fTemp56 = (((fTemp52 + 0.517638087f) / fTemp51) + 1.0f);
			fRec25[0] = (((fRec26[2] + (fRec26[0] + (2.0f * fRec26[1]))) / fTemp55) - (((fRec25[2] * (((fTemp52 + -0.517638087f) / fTemp51) + 1.0f)) + (2.0f * (fTemp53 * fRec25[1]))) / fTemp56));
			fRec32[0] = (fSlow17 + (0.999000013f * fRec32[1]));
			fRec37[0] = (fSlow18 + (0.999000013f * fRec37[1]));
			float fTemp57 = std::max<float>(fRec37[0], 23.4489498f);
			float fTemp58 = std::max<float>(20.0f, std::fabs(fTemp57));
			float fTemp59 = (fRec36[1] + (fConst2 * fTemp58));
			fRec36[0] = (fTemp59 - std::floor(fTemp59));
			float fTemp60 = mydsp_faustpower2_f(((2.0f * fRec36[0]) + -1.0f));
			fVec9[0] = fTemp60;
			float fTemp61 = ((fTemp0 * (fTemp60 - fVec9[1])) / fTemp58);
			fVec10[(IOTA & 4095)] = fTemp61;
			fRec38[0] = (fSlow19 + (0.999000013f * fRec38[1]));
			float fTemp62 = std::max<float>(0.0f, std::min<float>(2047.0f, (fConst0 * (fRec38[0] / fTemp57))));
			int iTemp63 = int(fTemp62);
			float fTemp64 = std::floor(fTemp62);
			fRec39[0] = (fSlow20 + (0.999000013f * fRec39[1]));
			float fTemp65 = std::tan((fConst3 * fRec39[0]));
			float fTemp66 = (1.0f / fTemp65);
			float fTemp67 = (1.0f - (1.0f / mydsp_faustpower2_f(fTemp65)));
			float fTemp68 = (((fTemp66 + 1.93185163f) / fTemp65) + 1.0f);
			fRec35[0] = ((fConst1 * ((fTemp61 - (fVec10[((IOTA - iTemp63) & 4095)] * (fTemp64 + (1.0f - fTemp62)))) - ((fTemp62 - fTemp64) * fVec10[((IOTA - (iTemp63 + 1)) & 4095)]))) - (((fRec35[2] * (((fTemp66 + -1.93185163f) / fTemp65) + 1.0f)) + (2.0f * (fRec35[1] * fTemp67))) / fTemp68));
			float fTemp69 = (((fTemp66 + 1.41421354f) / fTemp65) + 1.0f);
			fRec34[0] = (((fRec35[2] + (fRec35[0] + (2.0f * fRec35[1]))) / fTemp68) - (((fRec34[2] * (((fTemp66 + -1.41421354f) / fTemp65) + 1.0f)) + (2.0f * (fTemp67 * fRec34[1]))) / fTemp69));
			float fTemp70 = (((fTemp66 + 0.517638087f) / fTemp65) + 1.0f);
			fRec33[0] = (((fRec34[2] + (fRec34[0] + (2.0f * fRec34[1]))) / fTemp69) - (((fRec33[2] * (((fTemp66 + -0.517638087f) / fTemp65) + 1.0f)) + (2.0f * (fTemp67 * fRec33[1]))) / fTemp70));
			fRec40[0] = (fSlow21 + (0.999000013f * fRec40[1]));
			fRec45[0] = (fSlow22 + (0.999000013f * fRec45[1]));
			float fTemp71 = std::max<float>(fRec45[0], 23.4489498f);
			float fTemp72 = std::max<float>(20.0f, std::fabs(fTemp71));
			float fTemp73 = (fRec44[1] + (fConst2 * fTemp72));
			fRec44[0] = (fTemp73 - std::floor(fTemp73));
			float fTemp74 = mydsp_faustpower2_f(((2.0f * fRec44[0]) + -1.0f));
			fVec11[0] = fTemp74;
			float fTemp75 = ((fTemp0 * (fTemp74 - fVec11[1])) / fTemp72);
			fVec12[(IOTA & 4095)] = fTemp75;
			fRec46[0] = (fSlow23 + (0.999000013f * fRec46[1]));
			float fTemp76 = std::max<float>(0.0f, std::min<float>(2047.0f, (fConst0 * (fRec46[0] / fTemp71))));
			int iTemp77 = int(fTemp76);
			float fTemp78 = std::floor(fTemp76);
			fRec47[0] = (fSlow24 + (0.999000013f * fRec47[1]));
			float fTemp79 = std::tan((fConst3 * fRec47[0]));
			float fTemp80 = (1.0f / fTemp79);
			float fTemp81 = (1.0f - (1.0f / mydsp_faustpower2_f(fTemp79)));
			float fTemp82 = (((fTemp80 + 1.93185163f) / fTemp79) + 1.0f);
			fRec43[0] = ((fConst1 * ((fTemp75 - (fVec12[((IOTA - iTemp77) & 4095)] * (fTemp78 + (1.0f - fTemp76)))) - ((fTemp76 - fTemp78) * fVec12[((IOTA - (iTemp77 + 1)) & 4095)]))) - (((fRec43[2] * (((fTemp80 + -1.93185163f) / fTemp79) + 1.0f)) + (2.0f * (fRec43[1] * fTemp81))) / fTemp82));
			float fTemp83 = (((fTemp80 + 1.41421354f) / fTemp79) + 1.0f);
			fRec42[0] = (((fRec43[2] + (fRec43[0] + (2.0f * fRec43[1]))) / fTemp82) - (((fRec42[2] * (((fTemp80 + -1.41421354f) / fTemp79) + 1.0f)) + (2.0f * (fTemp81 * fRec42[1]))) / fTemp83));
			float fTemp84 = (((fTemp80 + 0.517638087f) / fTemp79) + 1.0f);
			fRec41[0] = (((fRec42[2] + (fRec42[0] + (2.0f * fRec42[1]))) / fTemp83) - (((fRec41[2] * (((fTemp80 + -0.517638087f) / fTemp79) + 1.0f)) + (2.0f * (fTemp81 * fRec41[1]))) / fTemp84));
			fRec48[0] = (fSlow25 + (0.999000013f * fRec48[1]));
			fRec53[0] = (fSlow26 + (0.999000013f * fRec53[1]));
			float fTemp85 = std::max<float>(fRec53[0], 23.4489498f);
			float fTemp86 = std::max<float>(20.0f, std::fabs(fTemp85));
			float fTemp87 = (fRec52[1] + (fConst2 * fTemp86));
			fRec52[0] = (fTemp87 - std::floor(fTemp87));
			float fTemp88 = mydsp_faustpower2_f(((2.0f * fRec52[0]) + -1.0f));
			fVec13[0] = fTemp88;
			float fTemp89 = ((fTemp0 * (fTemp88 - fVec13[1])) / fTemp86);
			fVec14[(IOTA & 4095)] = fTemp89;
			fRec54[0] = (fSlow27 + (0.999000013f * fRec54[1]));
			float fTemp90 = std::max<float>(0.0f, std::min<float>(2047.0f, (fConst0 * (fRec54[0] / fTemp85))));
			int iTemp91 = int(fTemp90);
			float fTemp92 = std::floor(fTemp90);
			fRec55[0] = (fSlow28 + (0.999000013f * fRec55[1]));
			float fTemp93 = std::tan((fConst3 * fRec55[0]));
			float fTemp94 = (1.0f / fTemp93);
			float fTemp95 = (1.0f - (1.0f / mydsp_faustpower2_f(fTemp93)));
			float fTemp96 = (((fTemp94 + 1.93185163f) / fTemp93) + 1.0f);
			fRec51[0] = ((fConst1 * ((fTemp89 - (fVec14[((IOTA - iTemp91) & 4095)] * (fTemp92 + (1.0f - fTemp90)))) - ((fTemp90 - fTemp92) * fVec14[((IOTA - (iTemp91 + 1)) & 4095)]))) - (((fRec51[2] * (((fTemp94 + -1.93185163f) / fTemp93) + 1.0f)) + (2.0f * (fRec51[1] * fTemp95))) / fTemp96));
			float fTemp97 = (((fTemp94 + 1.41421354f) / fTemp93) + 1.0f);
			fRec50[0] = (((fRec51[2] + (fRec51[0] + (2.0f * fRec51[1]))) / fTemp96) - (((fRec50[2] * (((fTemp94 + -1.41421354f) / fTemp93) + 1.0f)) + (2.0f * (fTemp95 * fRec50[1]))) / fTemp97));
			float fTemp98 = (((fTemp94 + 0.517638087f) / fTemp93) + 1.0f);
			fRec49[0] = (((fRec50[2] + (fRec50[0] + (2.0f * fRec50[1]))) / fTemp97) - (((fRec49[2] * (((fTemp94 + -0.517638087f) / fTemp93) + 1.0f)) + (2.0f * (fTemp95 * fRec49[1]))) / fTemp98));
			fRec56[0] = (fSlow29 + (0.999000013f * fRec56[1]));
			fRec61[0] = (fSlow30 + (0.999000013f * fRec61[1]));
			float fTemp99 = std::max<float>(fRec61[0], 23.4489498f);
			float fTemp100 = std::max<float>(20.0f, std::fabs(fTemp99));
			float fTemp101 = (fRec60[1] + (fConst2 * fTemp100));
			fRec60[0] = (fTemp101 - std::floor(fTemp101));
			float fTemp102 = mydsp_faustpower2_f(((2.0f * fRec60[0]) + -1.0f));
			fVec15[0] = fTemp102;
			float fTemp103 = ((fTemp0 * (fTemp102 - fVec15[1])) / fTemp100);
			fVec16[(IOTA & 4095)] = fTemp103;
			fRec62[0] = (fSlow31 + (0.999000013f * fRec62[1]));
			float fTemp104 = std::max<float>(0.0f, std::min<float>(2047.0f, (fConst0 * (fRec62[0] / fTemp99))));
			int iTemp105 = int(fTemp104);
			float fTemp106 = std::floor(fTemp104);
			fRec63[0] = (fSlow32 + (0.999000013f * fRec63[1]));
			float fTemp107 = std::tan((fConst3 * fRec63[0]));
			float fTemp108 = (1.0f / fTemp107);
			float fTemp109 = (1.0f - (1.0f / mydsp_faustpower2_f(fTemp107)));
			float fTemp110 = (((fTemp108 + 1.93185163f) / fTemp107) + 1.0f);
			fRec59[0] = ((fConst1 * ((fTemp103 - (fVec16[((IOTA - iTemp105) & 4095)] * (fTemp106 + (1.0f - fTemp104)))) - ((fTemp104 - fTemp106) * fVec16[((IOTA - (iTemp105 + 1)) & 4095)]))) - (((fRec59[2] * (((fTemp108 + -1.93185163f) / fTemp107) + 1.0f)) + (2.0f * (fRec59[1] * fTemp109))) / fTemp110));
			float fTemp111 = (((fTemp108 + 1.41421354f) / fTemp107) + 1.0f);
			fRec58[0] = (((fRec59[2] + (fRec59[0] + (2.0f * fRec59[1]))) / fTemp110) - (((fRec58[2] * (((fTemp108 + -1.41421354f) / fTemp107) + 1.0f)) + (2.0f * (fTemp109 * fRec58[1]))) / fTemp111));
			float fTemp112 = (((fTemp108 + 0.517638087f) / fTemp107) + 1.0f);
			fRec57[0] = (((fRec58[2] + (fRec58[0] + (2.0f * fRec58[1]))) / fTemp111) - (((fRec57[2] * (((fTemp108 + -0.517638087f) / fTemp107) + 1.0f)) + (2.0f * (fTemp109 * fRec57[1]))) / fTemp112));
			fRec64[0] = (fSlow33 + (0.999000013f * fRec64[1]));
			fRec69[0] = (fSlow34 + (0.999000013f * fRec69[1]));
			float fTemp113 = std::max<float>(fRec69[0], 23.4489498f);
			float fTemp114 = std::max<float>(20.0f, std::fabs(fTemp113));
			float fTemp115 = (fRec68[1] + (fConst2 * fTemp114));
			fRec68[0] = (fTemp115 - std::floor(fTemp115));
			float fTemp116 = mydsp_faustpower2_f(((2.0f * fRec68[0]) + -1.0f));
			fVec17[0] = fTemp116;
			float fTemp117 = ((fTemp0 * (fTemp116 - fVec17[1])) / fTemp114);
			fVec18[(IOTA & 4095)] = fTemp117;
			fRec70[0] = (fSlow35 + (0.999000013f * fRec70[1]));
			float fTemp118 = std::max<float>(0.0f, std::min<float>(2047.0f, (fConst0 * (fRec70[0] / fTemp113))));
			int iTemp119 = int(fTemp118);
			float fTemp120 = std::floor(fTemp118);
			fRec71[0] = (fSlow36 + (0.999000013f * fRec71[1]));
			float fTemp121 = std::tan((fConst3 * fRec71[0]));
			float fTemp122 = (1.0f / fTemp121);
			float fTemp123 = (1.0f - (1.0f / mydsp_faustpower2_f(fTemp121)));
			float fTemp124 = (((fTemp122 + 1.93185163f) / fTemp121) + 1.0f);
			fRec67[0] = ((fConst1 * ((fTemp117 - (fVec18[((IOTA - iTemp119) & 4095)] * (fTemp120 + (1.0f - fTemp118)))) - ((fTemp118 - fTemp120) * fVec18[((IOTA - (iTemp119 + 1)) & 4095)]))) - (((fRec67[2] * (((fTemp122 + -1.93185163f) / fTemp121) + 1.0f)) + (2.0f * (fRec67[1] * fTemp123))) / fTemp124));
			float fTemp125 = (((fTemp122 + 1.41421354f) / fTemp121) + 1.0f);
			fRec66[0] = (((fRec67[2] + (fRec67[0] + (2.0f * fRec67[1]))) / fTemp124) - (((fRec66[2] * (((fTemp122 + -1.41421354f) / fTemp121) + 1.0f)) + (2.0f * (fTemp123 * fRec66[1]))) / fTemp125));
			float fTemp126 = (((fTemp122 + 0.517638087f) / fTemp121) + 1.0f);
			fRec65[0] = (((fRec66[2] + (fRec66[0] + (2.0f * fRec66[1]))) / fTemp125) - (((fRec65[2] * (((fTemp122 + -0.517638087f) / fTemp121) + 1.0f)) + (2.0f * (fTemp123 * fRec65[1]))) / fTemp126));
			fRec72[0] = (fSlow37 + (0.999000013f * fRec72[1]));
			fRec77[0] = (fSlow38 + (0.999000013f * fRec77[1]));
			float fTemp127 = std::max<float>(fRec77[0], 23.4489498f);
			float fTemp128 = std::max<float>(20.0f, std::fabs(fTemp127));
			float fTemp129 = (fRec76[1] + (fConst2 * fTemp128));
			fRec76[0] = (fTemp129 - std::floor(fTemp129));
			float fTemp130 = mydsp_faustpower2_f(((2.0f * fRec76[0]) + -1.0f));
			fVec19[0] = fTemp130;
			float fTemp131 = ((fTemp0 * (fTemp130 - fVec19[1])) / fTemp128);
			fVec20[(IOTA & 4095)] = fTemp131;
			fRec78[0] = (fSlow39 + (0.999000013f * fRec78[1]));
			float fTemp132 = std::max<float>(0.0f, std::min<float>(2047.0f, (fConst0 * (fRec78[0] / fTemp127))));
			int iTemp133 = int(fTemp132);
			float fTemp134 = std::floor(fTemp132);
			fRec79[0] = (fSlow40 + (0.999000013f * fRec79[1]));
			float fTemp135 = std::tan((fConst3 * fRec79[0]));
			float fTemp136 = (1.0f / fTemp135);
			float fTemp137 = (1.0f - (1.0f / mydsp_faustpower2_f(fTemp135)));
			float fTemp138 = (((fTemp136 + 1.93185163f) / fTemp135) + 1.0f);
			fRec75[0] = ((fConst1 * ((fTemp131 - (fVec20[((IOTA - iTemp133) & 4095)] * (fTemp134 + (1.0f - fTemp132)))) - ((fTemp132 - fTemp134) * fVec20[((IOTA - (iTemp133 + 1)) & 4095)]))) - (((fRec75[2] * (((fTemp136 + -1.93185163f) / fTemp135) + 1.0f)) + (2.0f * (fRec75[1] * fTemp137))) / fTemp138));
			float fTemp139 = (((fTemp136 + 1.41421354f) / fTemp135) + 1.0f);
			fRec74[0] = (((fRec75[2] + (fRec75[0] + (2.0f * fRec75[1]))) / fTemp138) - (((fRec74[2] * (((fTemp136 + -1.41421354f) / fTemp135) + 1.0f)) + (2.0f * (fTemp137 * fRec74[1]))) / fTemp139));
			float fTemp140 = (((fTemp136 + 0.517638087f) / fTemp135) + 1.0f);
			fRec73[0] = (((fRec74[2] + (fRec74[0] + (2.0f * fRec74[1]))) / fTemp139) - (((fRec73[2] * (((fTemp136 + -0.517638087f) / fTemp135) + 1.0f)) + (2.0f * (fTemp137 * fRec73[1]))) / fTemp140));
			fRec80[0] = (fSlow41 + (0.999000013f * fRec80[1]));
			fRec85[0] = (fSlow42 + (0.999000013f * fRec85[1]));
			float fTemp141 = std::max<float>(fRec85[0], 23.4489498f);
			float fTemp142 = std::max<float>(20.0f, std::fabs(fTemp141));
			float fTemp143 = (fRec84[1] + (fConst2 * fTemp142));
			fRec84[0] = (fTemp143 - std::floor(fTemp143));
			float fTemp144 = mydsp_faustpower2_f(((2.0f * fRec84[0]) + -1.0f));
			fVec21[0] = fTemp144;
			float fTemp145 = ((fTemp0 * (fTemp144 - fVec21[1])) / fTemp142);
			fVec22[(IOTA & 4095)] = fTemp145;
			fRec86[0] = (fSlow43 + (0.999000013f * fRec86[1]));
			float fTemp146 = std::max<float>(0.0f, std::min<float>(2047.0f, (fConst0 * (fRec86[0] / fTemp141))));
			int iTemp147 = int(fTemp146);
			float fTemp148 = std::floor(fTemp146);
			fRec87[0] = (fSlow44 + (0.999000013f * fRec87[1]));
			float fTemp149 = std::tan((fConst3 * fRec87[0]));
			float fTemp150 = (1.0f / fTemp149);
			float fTemp151 = (1.0f - (1.0f / mydsp_faustpower2_f(fTemp149)));
			float fTemp152 = (((fTemp150 + 1.93185163f) / fTemp149) + 1.0f);
			fRec83[0] = ((fConst1 * ((fTemp145 - (fVec22[((IOTA - iTemp147) & 4095)] * (fTemp148 + (1.0f - fTemp146)))) - ((fTemp146 - fTemp148) * fVec22[((IOTA - (iTemp147 + 1)) & 4095)]))) - (((fRec83[2] * (((fTemp150 + -1.93185163f) / fTemp149) + 1.0f)) + (2.0f * (fRec83[1] * fTemp151))) / fTemp152));
			float fTemp153 = (((fTemp150 + 1.41421354f) / fTemp149) + 1.0f);
			fRec82[0] = (((fRec83[2] + (fRec83[0] + (2.0f * fRec83[1]))) / fTemp152) - (((fRec82[2] * (((fTemp150 + -1.41421354f) / fTemp149) + 1.0f)) + (2.0f * (fTemp151 * fRec82[1]))) / fTemp153));
			float fTemp154 = (((fTemp150 + 0.517638087f) / fTemp149) + 1.0f);
			fRec81[0] = (((fRec82[2] + (fRec82[0] + (2.0f * fRec82[1]))) / fTemp153) - (((fRec81[2] * (((fTemp150 + -0.517638087f) / fTemp149) + 1.0f)) + (2.0f * (fTemp151 * fRec81[1]))) / fTemp154));
			fRec88[0] = (fSlow45 + (0.999000013f * fRec88[1]));
			fRec93[0] = (fSlow46 + (0.999000013f * fRec93[1]));
			float fTemp155 = std::max<float>(fRec93[0], 23.4489498f);
			float fTemp156 = std::max<float>(20.0f, std::fabs(fTemp155));
			float fTemp157 = (fRec92[1] + (fConst2 * fTemp156));
			fRec92[0] = (fTemp157 - std::floor(fTemp157));
			float fTemp158 = mydsp_faustpower2_f(((2.0f * fRec92[0]) + -1.0f));
			fVec23[0] = fTemp158;
			float fTemp159 = ((fTemp0 * (fTemp158 - fVec23[1])) / fTemp156);
			fVec24[(IOTA & 4095)] = fTemp159;
			fRec94[0] = (fSlow47 + (0.999000013f * fRec94[1]));
			float fTemp160 = std::max<float>(0.0f, std::min<float>(2047.0f, (fConst0 * (fRec94[0] / fTemp155))));
			int iTemp161 = int(fTemp160);
			float fTemp162 = std::floor(fTemp160);
			fRec95[0] = (fSlow48 + (0.999000013f * fRec95[1]));
			float fTemp163 = std::tan((fConst3 * fRec95[0]));
			float fTemp164 = (1.0f / fTemp163);
			float fTemp165 = (1.0f - (1.0f / mydsp_faustpower2_f(fTemp163)));
			float fTemp166 = (((fTemp164 + 1.93185163f) / fTemp163) + 1.0f);
			fRec91[0] = ((fConst1 * ((fTemp159 - (fVec24[((IOTA - iTemp161) & 4095)] * (fTemp162 + (1.0f - fTemp160)))) - ((fTemp160 - fTemp162) * fVec24[((IOTA - (iTemp161 + 1)) & 4095)]))) - (((fRec91[2] * (((fTemp164 + -1.93185163f) / fTemp163) + 1.0f)) + (2.0f * (fRec91[1] * fTemp165))) / fTemp166));
			float fTemp167 = (((fTemp164 + 1.41421354f) / fTemp163) + 1.0f);
			fRec90[0] = (((fRec91[2] + (fRec91[0] + (2.0f * fRec91[1]))) / fTemp166) - (((fRec90[2] * (((fTemp164 + -1.41421354f) / fTemp163) + 1.0f)) + (2.0f * (fTemp165 * fRec90[1]))) / fTemp167));
			float fTemp168 = (((fTemp164 + 0.517638087f) / fTemp163) + 1.0f);
			fRec89[0] = (((fRec90[2] + (fRec90[0] + (2.0f * fRec90[1]))) / fTemp167) - (((fRec89[2] * (((fTemp164 + -0.517638087f) / fTemp163) + 1.0f)) + (2.0f * (fTemp165 * fRec89[1]))) / fTemp168));
			fRec96[0] = (fSlow49 + (0.999000013f * fRec96[1]));
			fRec101[0] = (fSlow50 + (0.999000013f * fRec101[1]));
			float fTemp169 = std::max<float>(fRec101[0], 23.4489498f);
			float fTemp170 = std::max<float>(20.0f, std::fabs(fTemp169));
			float fTemp171 = (fRec100[1] + (fConst2 * fTemp170));
			fRec100[0] = (fTemp171 - std::floor(fTemp171));
			float fTemp172 = mydsp_faustpower2_f(((2.0f * fRec100[0]) + -1.0f));
			fVec25[0] = fTemp172;
			float fTemp173 = ((fTemp0 * (fTemp172 - fVec25[1])) / fTemp170);
			fVec26[(IOTA & 4095)] = fTemp173;
			fRec102[0] = (fSlow51 + (0.999000013f * fRec102[1]));
			float fTemp174 = std::max<float>(0.0f, std::min<float>(2047.0f, (fConst0 * (fRec102[0] / fTemp169))));
			int iTemp175 = int(fTemp174);
			float fTemp176 = std::floor(fTemp174);
			fRec103[0] = (fSlow52 + (0.999000013f * fRec103[1]));
			float fTemp177 = std::tan((fConst3 * fRec103[0]));
			float fTemp178 = (1.0f / fTemp177);
			float fTemp179 = (1.0f - (1.0f / mydsp_faustpower2_f(fTemp177)));
			float fTemp180 = (((fTemp178 + 1.93185163f) / fTemp177) + 1.0f);
			fRec99[0] = ((fConst1 * ((fTemp173 - (fVec26[((IOTA - iTemp175) & 4095)] * (fTemp176 + (1.0f - fTemp174)))) - ((fTemp174 - fTemp176) * fVec26[((IOTA - (iTemp175 + 1)) & 4095)]))) - (((fRec99[2] * (((fTemp178 + -1.93185163f) / fTemp177) + 1.0f)) + (2.0f * (fRec99[1] * fTemp179))) / fTemp180));
			float fTemp181 = (((fTemp178 + 1.41421354f) / fTemp177) + 1.0f);
			fRec98[0] = (((fRec99[2] + (fRec99[0] + (2.0f * fRec99[1]))) / fTemp180) - (((fRec98[2] * (((fTemp178 + -1.41421354f) / fTemp177) + 1.0f)) + (2.0f * (fTemp179 * fRec98[1]))) / fTemp181));
			float fTemp182 = (((fTemp178 + 0.517638087f) / fTemp177) + 1.0f);
			fRec97[0] = (((fRec98[2] + (fRec98[0] + (2.0f * fRec98[1]))) / fTemp181) - (((fRec97[2] * (((fTemp178 + -0.517638087f) / fTemp177) + 1.0f)) + (2.0f * (fTemp179 * fRec97[1]))) / fTemp182));
			fRec104[0] = (fSlow53 + (0.999000013f * fRec104[1]));
			fRec109[0] = (fSlow54 + (0.999000013f * fRec109[1]));
			float fTemp183 = std::max<float>(fRec109[0], 23.4489498f);
			float fTemp184 = std::max<float>(20.0f, std::fabs(fTemp183));
			float fTemp185 = (fRec108[1] + (fConst2 * fTemp184));
			fRec108[0] = (fTemp185 - std::floor(fTemp185));
			float fTemp186 = mydsp_faustpower2_f(((2.0f * fRec108[0]) + -1.0f));
			fVec27[0] = fTemp186;
			float fTemp187 = ((fTemp0 * (fTemp186 - fVec27[1])) / fTemp184);
			fVec28[(IOTA & 4095)] = fTemp187;
			fRec110[0] = (fSlow55 + (0.999000013f * fRec110[1]));
			float fTemp188 = std::max<float>(0.0f, std::min<float>(2047.0f, (fConst0 * (fRec110[0] / fTemp183))));
			int iTemp189 = int(fTemp188);
			float fTemp190 = std::floor(fTemp188);
			fRec111[0] = (fSlow56 + (0.999000013f * fRec111[1]));
			float fTemp191 = std::tan((fConst3 * fRec111[0]));
			float fTemp192 = (1.0f / fTemp191);
			float fTemp193 = (1.0f - (1.0f / mydsp_faustpower2_f(fTemp191)));
			float fTemp194 = (((fTemp192 + 1.93185163f) / fTemp191) + 1.0f);
			fRec107[0] = ((fConst1 * ((fTemp187 - (fVec28[((IOTA - iTemp189) & 4095)] * (fTemp190 + (1.0f - fTemp188)))) - ((fTemp188 - fTemp190) * fVec28[((IOTA - (iTemp189 + 1)) & 4095)]))) - (((fRec107[2] * (((fTemp192 + -1.93185163f) / fTemp191) + 1.0f)) + (2.0f * (fRec107[1] * fTemp193))) / fTemp194));
			float fTemp195 = (((fTemp192 + 1.41421354f) / fTemp191) + 1.0f);
			fRec106[0] = (((fRec107[2] + (fRec107[0] + (2.0f * fRec107[1]))) / fTemp194) - (((fRec106[2] * (((fTemp192 + -1.41421354f) / fTemp191) + 1.0f)) + (2.0f * (fTemp193 * fRec106[1]))) / fTemp195));
			float fTemp196 = (((fTemp192 + 0.517638087f) / fTemp191) + 1.0f);
			fRec105[0] = (((fRec106[2] + (fRec106[0] + (2.0f * fRec106[1]))) / fTemp195) - (((fRec105[2] * (((fTemp192 + -0.517638087f) / fTemp191) + 1.0f)) + (2.0f * (fTemp193 * fRec105[1]))) / fTemp196));
			fRec112[0] = (fSlow57 + (0.999000013f * fRec112[1]));
			fRec117[0] = (fSlow58 + (0.999000013f * fRec117[1]));
			float fTemp197 = std::max<float>(fRec117[0], 23.4489498f);
			float fTemp198 = std::max<float>(20.0f, std::fabs(fTemp197));
			float fTemp199 = (fRec116[1] + (fConst2 * fTemp198));
			fRec116[0] = (fTemp199 - std::floor(fTemp199));
			float fTemp200 = mydsp_faustpower2_f(((2.0f * fRec116[0]) + -1.0f));
			fVec29[0] = fTemp200;
			float fTemp201 = ((fTemp0 * (fTemp200 - fVec29[1])) / fTemp198);
			fVec30[(IOTA & 4095)] = fTemp201;
			fRec118[0] = (fSlow59 + (0.999000013f * fRec118[1]));
			float fTemp202 = std::max<float>(0.0f, std::min<float>(2047.0f, (fConst0 * (fRec118[0] / fTemp197))));
			int iTemp203 = int(fTemp202);
			float fTemp204 = std::floor(fTemp202);
			fRec119[0] = (fSlow60 + (0.999000013f * fRec119[1]));
			float fTemp205 = std::tan((fConst3 * fRec119[0]));
			float fTemp206 = (1.0f / fTemp205);
			float fTemp207 = (1.0f - (1.0f / mydsp_faustpower2_f(fTemp205)));
			float fTemp208 = (((fTemp206 + 1.93185163f) / fTemp205) + 1.0f);
			fRec115[0] = ((fConst1 * ((fTemp201 - (fVec30[((IOTA - iTemp203) & 4095)] * (fTemp204 + (1.0f - fTemp202)))) - ((fTemp202 - fTemp204) * fVec30[((IOTA - (iTemp203 + 1)) & 4095)]))) - (((fRec115[2] * (((fTemp206 + -1.93185163f) / fTemp205) + 1.0f)) + (2.0f * (fRec115[1] * fTemp207))) / fTemp208));
			float fTemp209 = (((fTemp206 + 1.41421354f) / fTemp205) + 1.0f);
			fRec114[0] = (((fRec115[2] + (fRec115[0] + (2.0f * fRec115[1]))) / fTemp208) - (((fRec114[2] * (((fTemp206 + -1.41421354f) / fTemp205) + 1.0f)) + (2.0f * (fTemp207 * fRec114[1]))) / fTemp209));
			float fTemp210 = (((fTemp206 + 0.517638087f) / fTemp205) + 1.0f);
			fRec113[0] = (((fRec114[2] + (fRec114[0] + (2.0f * fRec114[1]))) / fTemp209) - (((fRec113[2] * (((fTemp206 + -0.517638087f) / fTemp205) + 1.0f)) + (2.0f * (fTemp207 * fRec113[1]))) / fTemp210));
			fRec120[0] = (fSlow61 + (0.999000013f * fRec120[1]));
			fRec125[0] = (fSlow62 + (0.999000013f * fRec125[1]));
			float fTemp211 = std::max<float>(fRec125[0], 23.4489498f);
			float fTemp212 = std::max<float>(20.0f, std::fabs(fTemp211));
			float fTemp213 = (fRec124[1] + (fConst2 * fTemp212));
			fRec124[0] = (fTemp213 - std::floor(fTemp213));
			float fTemp214 = mydsp_faustpower2_f(((2.0f * fRec124[0]) + -1.0f));
			fVec31[0] = fTemp214;
			float fTemp215 = ((fTemp0 * (fTemp214 - fVec31[1])) / fTemp212);
			fVec32[(IOTA & 4095)] = fTemp215;
			fRec126[0] = (fSlow63 + (0.999000013f * fRec126[1]));
			float fTemp216 = std::max<float>(0.0f, std::min<float>(2047.0f, (fConst0 * (fRec126[0] / fTemp211))));
			int iTemp217 = int(fTemp216);
			float fTemp218 = std::floor(fTemp216);
			fRec127[0] = (fSlow64 + (0.999000013f * fRec127[1]));
			float fTemp219 = std::tan((fConst3 * fRec127[0]));
			float fTemp220 = (1.0f / fTemp219);
			float fTemp221 = (1.0f - (1.0f / mydsp_faustpower2_f(fTemp219)));
			float fTemp222 = (((fTemp220 + 1.93185163f) / fTemp219) + 1.0f);
			fRec123[0] = ((fConst1 * ((fTemp215 - (fVec32[((IOTA - iTemp217) & 4095)] * (fTemp218 + (1.0f - fTemp216)))) - ((fTemp216 - fTemp218) * fVec32[((IOTA - (iTemp217 + 1)) & 4095)]))) - (((fRec123[2] * (((fTemp220 + -1.93185163f) / fTemp219) + 1.0f)) + (2.0f * (fRec123[1] * fTemp221))) / fTemp222));
			float fTemp223 = (((fTemp220 + 1.41421354f) / fTemp219) + 1.0f);
			fRec122[0] = (((fRec123[2] + (fRec123[0] + (2.0f * fRec123[1]))) / fTemp222) - (((fRec122[2] * (((fTemp220 + -1.41421354f) / fTemp219) + 1.0f)) + (2.0f * (fTemp221 * fRec122[1]))) / fTemp223));
			float fTemp224 = (((fTemp220 + 0.517638087f) / fTemp219) + 1.0f);
			fRec121[0] = (((fRec122[2] + (fRec122[0] + (2.0f * fRec122[1]))) / fTemp223) - (((fRec121[2] * (((fTemp220 + -0.517638087f) / fTemp219) + 1.0f)) + (2.0f * (fTemp221 * fRec121[1]))) / fTemp224));
			fRec131[0] = (fSlow65 + (0.999000013f * fRec131[1]));
			iRec132[0] = ((1103515245 * iRec132[1]) + 12345);
			fRec134[0] = (fSlow66 + (0.999000013f * fRec134[1]));
			float fTemp225 = (fRec133[1] + (fConst2 * fRec134[0]));
			fRec133[0] = (fTemp225 - std::floor(fTemp225));
			fRec135[0] = (fSlow67 + (0.999000013f * fRec135[1]));
			float fTemp226 = std::tan((fConst3 * fRec135[0]));
			float fTemp227 = (1.0f / fTemp226);
			float fTemp228 = (1.0f - (1.0f / mydsp_faustpower2_f(fTemp226)));
			float fTemp229 = (((fTemp227 + 1.93185163f) / fTemp226) + 1.0f);
			fRec130[0] = ((4.65661287e-10f * ((fRec131[0] * float(iRec132[0])) * ((2.0f * fRec133[0]) + -1.0f))) - (((fRec130[2] * (((fTemp227 + -1.93185163f) / fTemp226) + 1.0f)) + (2.0f * (fRec130[1] * fTemp228))) / fTemp229));
			float fTemp230 = (((fTemp227 + 1.41421354f) / fTemp226) + 1.0f);
			fRec129[0] = (((fRec130[2] + (fRec130[0] + (2.0f * fRec130[1]))) / fTemp229) - (((fRec129[2] * (((fTemp227 + -1.41421354f) / fTemp226) + 1.0f)) + (2.0f * (fTemp228 * fRec129[1]))) / fTemp230));
			float fTemp231 = (((fTemp227 + 0.517638087f) / fTemp226) + 1.0f);
			fRec128[0] = (((fRec129[2] + (fRec129[0] + (2.0f * fRec129[1]))) / fTemp230) - (((fRec128[2] * (((fTemp227 + -0.517638087f) / fTemp226) + 1.0f)) + (2.0f * (fTemp228 * fRec128[1]))) / fTemp231));
			float fTemp232 = (fSlow0 * ((0.25f * (((((((((((((((((fRec0[0] * (fRec1[2] + (fRec1[0] + (2.0f * fRec1[1])))) / fTemp14) + ((fRec8[0] * (fRec9[2] + (fRec9[0] + (2.0f * fRec9[1])))) / fTemp28)) + ((fRec16[0] * (fRec17[2] + (fRec17[0] + (2.0f * fRec17[1])))) / fTemp42)) + ((fRec24[0] * (fRec25[2] + (fRec25[0] + (2.0f * fRec25[1])))) / fTemp56)) + ((fRec32[0] * (fRec33[2] + (fRec33[0] + (2.0f * fRec33[1])))) / fTemp70)) + ((fRec40[0] * (fRec41[2] + (fRec41[0] + (2.0f * fRec41[1])))) / fTemp84)) + ((fRec48[0] * (fRec49[2] + (fRec49[0] + (2.0f * fRec49[1])))) / fTemp98)) + ((fRec56[0] * (fRec57[2] + (fRec57[0] + (2.0f * fRec57[1])))) / fTemp112)) + ((fRec64[0] * (fRec65[2] + (fRec65[0] + (2.0f * fRec65[1])))) / fTemp126)) + ((fRec72[0] * (fRec73[2] + (fRec73[0] + (2.0f * fRec73[1])))) / fTemp140)) + ((fRec80[0] * (fRec81[2] + (fRec81[0] + (2.0f * fRec81[1])))) / fTemp154)) + ((fRec88[0] * (fRec89[2] + (fRec89[0] + (2.0f * fRec89[1])))) / fTemp168)) + ((fRec96[0] * (fRec97[2] + (fRec97[0] + (2.0f * fRec97[1])))) / fTemp182)) + ((fRec104[0] * (fRec105[2] + (fRec105[0] + (2.0f * fRec105[1])))) / fTemp196)) + ((fRec112[0] * (fRec113[2] + (fRec113[0] + (2.0f * fRec113[1])))) / fTemp210)) + ((fRec120[0] * (fRec121[2] + (fRec121[0] + (2.0f * fRec121[1])))) / fTemp224))) + ((fRec128[2] + (fRec128[0] + (2.0f * fRec128[1]))) / fTemp231)));
			output0[i] = FAUSTFLOAT(fTemp232);
			output1[i] = FAUSTFLOAT(fTemp232);
			iVec0[1] = iVec0[0];
			fRec0[1] = fRec0[0];
			fRec5[1] = fRec5[0];
			fRec4[1] = fRec4[0];
			fVec1[1] = fVec1[0];
			IOTA = (IOTA + 1);
			fRec6[1] = fRec6[0];
			fRec7[1] = fRec7[0];
			fRec3[2] = fRec3[1];
			fRec3[1] = fRec3[0];
			fRec2[2] = fRec2[1];
			fRec2[1] = fRec2[0];
			fRec1[2] = fRec1[1];
			fRec1[1] = fRec1[0];
			fRec8[1] = fRec8[0];
			fRec13[1] = fRec13[0];
			fRec12[1] = fRec12[0];
			fVec3[1] = fVec3[0];
			fRec14[1] = fRec14[0];
			fRec15[1] = fRec15[0];
			fRec11[2] = fRec11[1];
			fRec11[1] = fRec11[0];
			fRec10[2] = fRec10[1];
			fRec10[1] = fRec10[0];
			fRec9[2] = fRec9[1];
			fRec9[1] = fRec9[0];
			fRec16[1] = fRec16[0];
			fRec21[1] = fRec21[0];
			fRec20[1] = fRec20[0];
			fVec5[1] = fVec5[0];
			fRec22[1] = fRec22[0];
			fRec23[1] = fRec23[0];
			fRec19[2] = fRec19[1];
			fRec19[1] = fRec19[0];
			fRec18[2] = fRec18[1];
			fRec18[1] = fRec18[0];
			fRec17[2] = fRec17[1];
			fRec17[1] = fRec17[0];
			fRec24[1] = fRec24[0];
			fRec29[1] = fRec29[0];
			fRec28[1] = fRec28[0];
			fVec7[1] = fVec7[0];
			fRec30[1] = fRec30[0];
			fRec31[1] = fRec31[0];
			fRec27[2] = fRec27[1];
			fRec27[1] = fRec27[0];
			fRec26[2] = fRec26[1];
			fRec26[1] = fRec26[0];
			fRec25[2] = fRec25[1];
			fRec25[1] = fRec25[0];
			fRec32[1] = fRec32[0];
			fRec37[1] = fRec37[0];
			fRec36[1] = fRec36[0];
			fVec9[1] = fVec9[0];
			fRec38[1] = fRec38[0];
			fRec39[1] = fRec39[0];
			fRec35[2] = fRec35[1];
			fRec35[1] = fRec35[0];
			fRec34[2] = fRec34[1];
			fRec34[1] = fRec34[0];
			fRec33[2] = fRec33[1];
			fRec33[1] = fRec33[0];
			fRec40[1] = fRec40[0];
			fRec45[1] = fRec45[0];
			fRec44[1] = fRec44[0];
			fVec11[1] = fVec11[0];
			fRec46[1] = fRec46[0];
			fRec47[1] = fRec47[0];
			fRec43[2] = fRec43[1];
			fRec43[1] = fRec43[0];
			fRec42[2] = fRec42[1];
			fRec42[1] = fRec42[0];
			fRec41[2] = fRec41[1];
			fRec41[1] = fRec41[0];
			fRec48[1] = fRec48[0];
			fRec53[1] = fRec53[0];
			fRec52[1] = fRec52[0];
			fVec13[1] = fVec13[0];
			fRec54[1] = fRec54[0];
			fRec55[1] = fRec55[0];
			fRec51[2] = fRec51[1];
			fRec51[1] = fRec51[0];
			fRec50[2] = fRec50[1];
			fRec50[1] = fRec50[0];
			fRec49[2] = fRec49[1];
			fRec49[1] = fRec49[0];
			fRec56[1] = fRec56[0];
			fRec61[1] = fRec61[0];
			fRec60[1] = fRec60[0];
			fVec15[1] = fVec15[0];
			fRec62[1] = fRec62[0];
			fRec63[1] = fRec63[0];
			fRec59[2] = fRec59[1];
			fRec59[1] = fRec59[0];
			fRec58[2] = fRec58[1];
			fRec58[1] = fRec58[0];
			fRec57[2] = fRec57[1];
			fRec57[1] = fRec57[0];
			fRec64[1] = fRec64[0];
			fRec69[1] = fRec69[0];
			fRec68[1] = fRec68[0];
			fVec17[1] = fVec17[0];
			fRec70[1] = fRec70[0];
			fRec71[1] = fRec71[0];
			fRec67[2] = fRec67[1];
			fRec67[1] = fRec67[0];
			fRec66[2] = fRec66[1];
			fRec66[1] = fRec66[0];
			fRec65[2] = fRec65[1];
			fRec65[1] = fRec65[0];
			fRec72[1] = fRec72[0];
			fRec77[1] = fRec77[0];
			fRec76[1] = fRec76[0];
			fVec19[1] = fVec19[0];
			fRec78[1] = fRec78[0];
			fRec79[1] = fRec79[0];
			fRec75[2] = fRec75[1];
			fRec75[1] = fRec75[0];
			fRec74[2] = fRec74[1];
			fRec74[1] = fRec74[0];
			fRec73[2] = fRec73[1];
			fRec73[1] = fRec73[0];
			fRec80[1] = fRec80[0];
			fRec85[1] = fRec85[0];
			fRec84[1] = fRec84[0];
			fVec21[1] = fVec21[0];
			fRec86[1] = fRec86[0];
			fRec87[1] = fRec87[0];
			fRec83[2] = fRec83[1];
			fRec83[1] = fRec83[0];
			fRec82[2] = fRec82[1];
			fRec82[1] = fRec82[0];
			fRec81[2] = fRec81[1];
			fRec81[1] = fRec81[0];
			fRec88[1] = fRec88[0];
			fRec93[1] = fRec93[0];
			fRec92[1] = fRec92[0];
			fVec23[1] = fVec23[0];
			fRec94[1] = fRec94[0];
			fRec95[1] = fRec95[0];
			fRec91[2] = fRec91[1];
			fRec91[1] = fRec91[0];
			fRec90[2] = fRec90[1];
			fRec90[1] = fRec90[0];
			fRec89[2] = fRec89[1];
			fRec89[1] = fRec89[0];
			fRec96[1] = fRec96[0];
			fRec101[1] = fRec101[0];
			fRec100[1] = fRec100[0];
			fVec25[1] = fVec25[0];
			fRec102[1] = fRec102[0];
			fRec103[1] = fRec103[0];
			fRec99[2] = fRec99[1];
			fRec99[1] = fRec99[0];
			fRec98[2] = fRec98[1];
			fRec98[1] = fRec98[0];
			fRec97[2] = fRec97[1];
			fRec97[1] = fRec97[0];
			fRec104[1] = fRec104[0];
			fRec109[1] = fRec109[0];
			fRec108[1] = fRec108[0];
			fVec27[1] = fVec27[0];
			fRec110[1] = fRec110[0];
			fRec111[1] = fRec111[0];
			fRec107[2] = fRec107[1];
			fRec107[1] = fRec107[0];
			fRec106[2] = fRec106[1];
			fRec106[1] = fRec106[0];
			fRec105[2] = fRec105[1];
			fRec105[1] = fRec105[0];
			fRec112[1] = fRec112[0];
			fRec117[1] = fRec117[0];
			fRec116[1] = fRec116[0];
			fVec29[1] = fVec29[0];
			fRec118[1] = fRec118[0];
			fRec119[1] = fRec119[0];
			fRec115[2] = fRec115[1];
			fRec115[1] = fRec115[0];
			fRec114[2] = fRec114[1];
			fRec114[1] = fRec114[0];
			fRec113[2] = fRec113[1];
			fRec113[1] = fRec113[0];
			fRec120[1] = fRec120[0];
			fRec125[1] = fRec125[0];
			fRec124[1] = fRec124[0];
			fVec31[1] = fVec31[0];
			fRec126[1] = fRec126[0];
			fRec127[1] = fRec127[0];
			fRec123[2] = fRec123[1];
			fRec123[1] = fRec123[0];
			fRec122[2] = fRec122[1];
			fRec122[1] = fRec122[0];
			fRec121[2] = fRec121[1];
			fRec121[1] = fRec121[0];
			fRec131[1] = fRec131[0];
			iRec132[1] = iRec132[0];
			fRec134[1] = fRec134[0];
			fRec133[1] = fRec133[0];
			fRec135[1] = fRec135[0];
			fRec130[2] = fRec130[1];
			fRec130[1] = fRec130[0];
			fRec129[2] = fRec129[1];
			fRec129[1] = fRec129[0];
			fRec128[2] = fRec128[1];
			fRec128[1] = fRec128[0];
		}
	}

};

#endif
