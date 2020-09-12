/* ------------------------------------------------------------
name: "additive.0.tmp"
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
		for (int l2 = 0; (l2 < 2); l2 = (l2 + 1)) {
			iRec2[l2] = 0;
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

#ifndef FAUSTCLASS 
#define FAUSTCLASS mydsp
#endif

#ifdef __APPLE__ 
#define exp10f __exp10f
#define exp10 __exp10
#endif

class mydsp : public dsp {
	
 private:
	
	FAUSTFLOAT fHslider0;
	FAUSTFLOAT fVslider0;
	float fRec0[2];
	FAUSTFLOAT fEntry0;
	float fRec1[2];
	int fSampleRate;
	float fConst0;
	FAUSTFLOAT fEntry1;
	float fRec4[2];
	float fRec3[2];
	FAUSTFLOAT fVslider1;
	float fRec5[2];
	FAUSTFLOAT fEntry2;
	float fRec6[2];
	FAUSTFLOAT fEntry3;
	float fRec8[2];
	float fRec7[2];
	FAUSTFLOAT fVslider2;
	float fRec9[2];
	FAUSTFLOAT fEntry4;
	float fRec10[2];
	FAUSTFLOAT fEntry5;
	float fRec12[2];
	float fRec11[2];
	FAUSTFLOAT fVslider3;
	float fRec13[2];
	FAUSTFLOAT fEntry6;
	float fRec14[2];
	FAUSTFLOAT fEntry7;
	float fRec16[2];
	float fRec15[2];
	FAUSTFLOAT fVslider4;
	float fRec17[2];
	FAUSTFLOAT fEntry8;
	float fRec18[2];
	FAUSTFLOAT fEntry9;
	float fRec20[2];
	float fRec19[2];
	FAUSTFLOAT fVslider5;
	float fRec21[2];
	FAUSTFLOAT fEntry10;
	float fRec22[2];
	FAUSTFLOAT fEntry11;
	float fRec24[2];
	float fRec23[2];
	FAUSTFLOAT fVslider6;
	float fRec25[2];
	FAUSTFLOAT fEntry12;
	float fRec26[2];
	FAUSTFLOAT fEntry13;
	float fRec28[2];
	float fRec27[2];
	FAUSTFLOAT fVslider7;
	float fRec29[2];
	FAUSTFLOAT fEntry14;
	float fRec30[2];
	FAUSTFLOAT fEntry15;
	float fRec32[2];
	float fRec31[2];
	FAUSTFLOAT fVslider8;
	float fRec33[2];
	FAUSTFLOAT fEntry16;
	float fRec34[2];
	FAUSTFLOAT fEntry17;
	float fRec36[2];
	float fRec35[2];
	FAUSTFLOAT fVslider9;
	float fRec37[2];
	FAUSTFLOAT fEntry18;
	float fRec38[2];
	FAUSTFLOAT fEntry19;
	float fRec40[2];
	float fRec39[2];
	FAUSTFLOAT fVslider10;
	float fRec41[2];
	FAUSTFLOAT fEntry20;
	float fRec42[2];
	FAUSTFLOAT fEntry21;
	float fRec44[2];
	float fRec43[2];
	FAUSTFLOAT fVslider11;
	float fRec45[2];
	FAUSTFLOAT fEntry22;
	float fRec46[2];
	FAUSTFLOAT fEntry23;
	float fRec48[2];
	float fRec47[2];
	FAUSTFLOAT fVslider12;
	float fRec49[2];
	FAUSTFLOAT fEntry24;
	float fRec50[2];
	FAUSTFLOAT fEntry25;
	float fRec52[2];
	float fRec51[2];
	FAUSTFLOAT fVslider13;
	float fRec53[2];
	FAUSTFLOAT fEntry26;
	float fRec54[2];
	FAUSTFLOAT fEntry27;
	float fRec56[2];
	float fRec55[2];
	FAUSTFLOAT fVslider14;
	float fRec57[2];
	FAUSTFLOAT fEntry28;
	float fRec58[2];
	FAUSTFLOAT fEntry29;
	float fRec60[2];
	float fRec59[2];
	FAUSTFLOAT fVslider15;
	float fRec61[2];
	FAUSTFLOAT fEntry30;
	float fRec62[2];
	FAUSTFLOAT fEntry31;
	float fRec64[2];
	float fRec63[2];
	
 public:
	
	void metadata(Meta* m) { 
		m->declare("basics.lib/name", "Faust Basic Element Library");
		m->declare("basics.lib/version", "0.1");
		m->declare("filename", "additive.0.tmp.dsp");
		m->declare("maths.lib/author", "GRAME");
		m->declare("maths.lib/copyright", "GRAME");
		m->declare("maths.lib/license", "LGPL with exception");
		m->declare("maths.lib/name", "Faust Math Library");
		m->declare("maths.lib/version", "2.2");
		m->declare("name", "additive.0.tmp");
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
		fConst0 = (1.0f / std::min<float>(192000.0f, std::max<float>(1.0f, float(fSampleRate))));
	}
	
	virtual void instanceResetUserInterface() {
		fHslider0 = FAUSTFLOAT(0.0f);
		fVslider0 = FAUSTFLOAT(0.0f);
		fEntry0 = FAUSTFLOAT(0.0f);
		fEntry1 = FAUSTFLOAT(200.0f);
		fVslider1 = FAUSTFLOAT(0.0f);
		fEntry2 = FAUSTFLOAT(0.0f);
		fEntry3 = FAUSTFLOAT(200.0f);
		fVslider2 = FAUSTFLOAT(0.0f);
		fEntry4 = FAUSTFLOAT(0.0f);
		fEntry5 = FAUSTFLOAT(200.0f);
		fVslider3 = FAUSTFLOAT(0.0f);
		fEntry6 = FAUSTFLOAT(0.0f);
		fEntry7 = FAUSTFLOAT(200.0f);
		fVslider4 = FAUSTFLOAT(0.0f);
		fEntry8 = FAUSTFLOAT(0.0f);
		fEntry9 = FAUSTFLOAT(200.0f);
		fVslider5 = FAUSTFLOAT(0.0f);
		fEntry10 = FAUSTFLOAT(0.0f);
		fEntry11 = FAUSTFLOAT(200.0f);
		fVslider6 = FAUSTFLOAT(0.0f);
		fEntry12 = FAUSTFLOAT(0.0f);
		fEntry13 = FAUSTFLOAT(200.0f);
		fVslider7 = FAUSTFLOAT(0.0f);
		fEntry14 = FAUSTFLOAT(0.0f);
		fEntry15 = FAUSTFLOAT(200.0f);
		fVslider8 = FAUSTFLOAT(0.0f);
		fEntry16 = FAUSTFLOAT(0.0f);
		fEntry17 = FAUSTFLOAT(200.0f);
		fVslider9 = FAUSTFLOAT(0.0f);
		fEntry18 = FAUSTFLOAT(0.0f);
		fEntry19 = FAUSTFLOAT(200.0f);
		fVslider10 = FAUSTFLOAT(0.0f);
		fEntry20 = FAUSTFLOAT(0.0f);
		fEntry21 = FAUSTFLOAT(200.0f);
		fVslider11 = FAUSTFLOAT(0.0f);
		fEntry22 = FAUSTFLOAT(0.0f);
		fEntry23 = FAUSTFLOAT(200.0f);
		fVslider12 = FAUSTFLOAT(0.0f);
		fEntry24 = FAUSTFLOAT(0.0f);
		fEntry25 = FAUSTFLOAT(200.0f);
		fVslider13 = FAUSTFLOAT(0.0f);
		fEntry26 = FAUSTFLOAT(0.0f);
		fEntry27 = FAUSTFLOAT(200.0f);
		fVslider14 = FAUSTFLOAT(0.0f);
		fEntry28 = FAUSTFLOAT(0.0f);
		fEntry29 = FAUSTFLOAT(200.0f);
		fVslider15 = FAUSTFLOAT(0.0f);
		fEntry30 = FAUSTFLOAT(0.0f);
		fEntry31 = FAUSTFLOAT(200.0f);
	}
	
	virtual void instanceClear() {
		for (int l0 = 0; (l0 < 2); l0 = (l0 + 1)) {
			fRec0[l0] = 0.0f;
		}
		for (int l1 = 0; (l1 < 2); l1 = (l1 + 1)) {
			fRec1[l1] = 0.0f;
		}
		for (int l3 = 0; (l3 < 2); l3 = (l3 + 1)) {
			fRec4[l3] = 0.0f;
		}
		for (int l4 = 0; (l4 < 2); l4 = (l4 + 1)) {
			fRec3[l4] = 0.0f;
		}
		for (int l5 = 0; (l5 < 2); l5 = (l5 + 1)) {
			fRec5[l5] = 0.0f;
		}
		for (int l6 = 0; (l6 < 2); l6 = (l6 + 1)) {
			fRec6[l6] = 0.0f;
		}
		for (int l7 = 0; (l7 < 2); l7 = (l7 + 1)) {
			fRec8[l7] = 0.0f;
		}
		for (int l8 = 0; (l8 < 2); l8 = (l8 + 1)) {
			fRec7[l8] = 0.0f;
		}
		for (int l9 = 0; (l9 < 2); l9 = (l9 + 1)) {
			fRec9[l9] = 0.0f;
		}
		for (int l10 = 0; (l10 < 2); l10 = (l10 + 1)) {
			fRec10[l10] = 0.0f;
		}
		for (int l11 = 0; (l11 < 2); l11 = (l11 + 1)) {
			fRec12[l11] = 0.0f;
		}
		for (int l12 = 0; (l12 < 2); l12 = (l12 + 1)) {
			fRec11[l12] = 0.0f;
		}
		for (int l13 = 0; (l13 < 2); l13 = (l13 + 1)) {
			fRec13[l13] = 0.0f;
		}
		for (int l14 = 0; (l14 < 2); l14 = (l14 + 1)) {
			fRec14[l14] = 0.0f;
		}
		for (int l15 = 0; (l15 < 2); l15 = (l15 + 1)) {
			fRec16[l15] = 0.0f;
		}
		for (int l16 = 0; (l16 < 2); l16 = (l16 + 1)) {
			fRec15[l16] = 0.0f;
		}
		for (int l17 = 0; (l17 < 2); l17 = (l17 + 1)) {
			fRec17[l17] = 0.0f;
		}
		for (int l18 = 0; (l18 < 2); l18 = (l18 + 1)) {
			fRec18[l18] = 0.0f;
		}
		for (int l19 = 0; (l19 < 2); l19 = (l19 + 1)) {
			fRec20[l19] = 0.0f;
		}
		for (int l20 = 0; (l20 < 2); l20 = (l20 + 1)) {
			fRec19[l20] = 0.0f;
		}
		for (int l21 = 0; (l21 < 2); l21 = (l21 + 1)) {
			fRec21[l21] = 0.0f;
		}
		for (int l22 = 0; (l22 < 2); l22 = (l22 + 1)) {
			fRec22[l22] = 0.0f;
		}
		for (int l23 = 0; (l23 < 2); l23 = (l23 + 1)) {
			fRec24[l23] = 0.0f;
		}
		for (int l24 = 0; (l24 < 2); l24 = (l24 + 1)) {
			fRec23[l24] = 0.0f;
		}
		for (int l25 = 0; (l25 < 2); l25 = (l25 + 1)) {
			fRec25[l25] = 0.0f;
		}
		for (int l26 = 0; (l26 < 2); l26 = (l26 + 1)) {
			fRec26[l26] = 0.0f;
		}
		for (int l27 = 0; (l27 < 2); l27 = (l27 + 1)) {
			fRec28[l27] = 0.0f;
		}
		for (int l28 = 0; (l28 < 2); l28 = (l28 + 1)) {
			fRec27[l28] = 0.0f;
		}
		for (int l29 = 0; (l29 < 2); l29 = (l29 + 1)) {
			fRec29[l29] = 0.0f;
		}
		for (int l30 = 0; (l30 < 2); l30 = (l30 + 1)) {
			fRec30[l30] = 0.0f;
		}
		for (int l31 = 0; (l31 < 2); l31 = (l31 + 1)) {
			fRec32[l31] = 0.0f;
		}
		for (int l32 = 0; (l32 < 2); l32 = (l32 + 1)) {
			fRec31[l32] = 0.0f;
		}
		for (int l33 = 0; (l33 < 2); l33 = (l33 + 1)) {
			fRec33[l33] = 0.0f;
		}
		for (int l34 = 0; (l34 < 2); l34 = (l34 + 1)) {
			fRec34[l34] = 0.0f;
		}
		for (int l35 = 0; (l35 < 2); l35 = (l35 + 1)) {
			fRec36[l35] = 0.0f;
		}
		for (int l36 = 0; (l36 < 2); l36 = (l36 + 1)) {
			fRec35[l36] = 0.0f;
		}
		for (int l37 = 0; (l37 < 2); l37 = (l37 + 1)) {
			fRec37[l37] = 0.0f;
		}
		for (int l38 = 0; (l38 < 2); l38 = (l38 + 1)) {
			fRec38[l38] = 0.0f;
		}
		for (int l39 = 0; (l39 < 2); l39 = (l39 + 1)) {
			fRec40[l39] = 0.0f;
		}
		for (int l40 = 0; (l40 < 2); l40 = (l40 + 1)) {
			fRec39[l40] = 0.0f;
		}
		for (int l41 = 0; (l41 < 2); l41 = (l41 + 1)) {
			fRec41[l41] = 0.0f;
		}
		for (int l42 = 0; (l42 < 2); l42 = (l42 + 1)) {
			fRec42[l42] = 0.0f;
		}
		for (int l43 = 0; (l43 < 2); l43 = (l43 + 1)) {
			fRec44[l43] = 0.0f;
		}
		for (int l44 = 0; (l44 < 2); l44 = (l44 + 1)) {
			fRec43[l44] = 0.0f;
		}
		for (int l45 = 0; (l45 < 2); l45 = (l45 + 1)) {
			fRec45[l45] = 0.0f;
		}
		for (int l46 = 0; (l46 < 2); l46 = (l46 + 1)) {
			fRec46[l46] = 0.0f;
		}
		for (int l47 = 0; (l47 < 2); l47 = (l47 + 1)) {
			fRec48[l47] = 0.0f;
		}
		for (int l48 = 0; (l48 < 2); l48 = (l48 + 1)) {
			fRec47[l48] = 0.0f;
		}
		for (int l49 = 0; (l49 < 2); l49 = (l49 + 1)) {
			fRec49[l49] = 0.0f;
		}
		for (int l50 = 0; (l50 < 2); l50 = (l50 + 1)) {
			fRec50[l50] = 0.0f;
		}
		for (int l51 = 0; (l51 < 2); l51 = (l51 + 1)) {
			fRec52[l51] = 0.0f;
		}
		for (int l52 = 0; (l52 < 2); l52 = (l52 + 1)) {
			fRec51[l52] = 0.0f;
		}
		for (int l53 = 0; (l53 < 2); l53 = (l53 + 1)) {
			fRec53[l53] = 0.0f;
		}
		for (int l54 = 0; (l54 < 2); l54 = (l54 + 1)) {
			fRec54[l54] = 0.0f;
		}
		for (int l55 = 0; (l55 < 2); l55 = (l55 + 1)) {
			fRec56[l55] = 0.0f;
		}
		for (int l56 = 0; (l56 < 2); l56 = (l56 + 1)) {
			fRec55[l56] = 0.0f;
		}
		for (int l57 = 0; (l57 < 2); l57 = (l57 + 1)) {
			fRec57[l57] = 0.0f;
		}
		for (int l58 = 0; (l58 < 2); l58 = (l58 + 1)) {
			fRec58[l58] = 0.0f;
		}
		for (int l59 = 0; (l59 < 2); l59 = (l59 + 1)) {
			fRec60[l59] = 0.0f;
		}
		for (int l60 = 0; (l60 < 2); l60 = (l60 + 1)) {
			fRec59[l60] = 0.0f;
		}
		for (int l61 = 0; (l61 < 2); l61 = (l61 + 1)) {
			fRec61[l61] = 0.0f;
		}
		for (int l62 = 0; (l62 < 2); l62 = (l62 + 1)) {
			fRec62[l62] = 0.0f;
		}
		for (int l63 = 0; (l63 < 2); l63 = (l63 + 1)) {
			fRec64[l63] = 0.0f;
		}
		for (int l64 = 0; (l64 < 2); l64 = (l64 + 1)) {
			fRec63[l64] = 0.0f;
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
		ui_interface->openVerticalBox("additive.0.tmp");
		ui_interface->openHorizontalBox("freq");
		ui_interface->declare(&fEntry1, "00", "");
		ui_interface->declare(&fEntry1, "style", "knob");
		ui_interface->addNumEntry("freq0", &fEntry1, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fEntry3, "01", "");
		ui_interface->declare(&fEntry3, "style", "knob");
		ui_interface->addNumEntry("freq1", &fEntry3, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fEntry5, "02", "");
		ui_interface->declare(&fEntry5, "style", "knob");
		ui_interface->addNumEntry("freq2", &fEntry5, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fEntry7, "03", "");
		ui_interface->declare(&fEntry7, "style", "knob");
		ui_interface->addNumEntry("freq3", &fEntry7, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fEntry9, "04", "");
		ui_interface->declare(&fEntry9, "style", "knob");
		ui_interface->addNumEntry("freq4", &fEntry9, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fEntry11, "05", "");
		ui_interface->declare(&fEntry11, "style", "knob");
		ui_interface->addNumEntry("freq5", &fEntry11, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fEntry13, "06", "");
		ui_interface->declare(&fEntry13, "style", "knob");
		ui_interface->addNumEntry("freq6", &fEntry13, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fEntry15, "07", "");
		ui_interface->declare(&fEntry15, "style", "knob");
		ui_interface->addNumEntry("freq7", &fEntry15, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fEntry17, "08", "");
		ui_interface->declare(&fEntry17, "style", "knob");
		ui_interface->addNumEntry("freq8", &fEntry17, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fEntry19, "09", "");
		ui_interface->declare(&fEntry19, "style", "knob");
		ui_interface->addNumEntry("freq9", &fEntry19, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fEntry21, "10", "");
		ui_interface->declare(&fEntry21, "style", "knob");
		ui_interface->addNumEntry("freq10", &fEntry21, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fEntry23, "11", "");
		ui_interface->declare(&fEntry23, "style", "knob");
		ui_interface->addNumEntry("freq11", &fEntry23, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fEntry25, "12", "");
		ui_interface->declare(&fEntry25, "style", "knob");
		ui_interface->addNumEntry("freq12", &fEntry25, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fEntry27, "13", "");
		ui_interface->declare(&fEntry27, "style", "knob");
		ui_interface->addNumEntry("freq13", &fEntry27, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fEntry29, "14", "");
		ui_interface->declare(&fEntry29, "style", "knob");
		ui_interface->addNumEntry("freq14", &fEntry29, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fEntry31, "15", "");
		ui_interface->declare(&fEntry31, "style", "knob");
		ui_interface->addNumEntry("freq15", &fEntry31, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->closeBox();
		ui_interface->openHorizontalBox("gain");
		ui_interface->declare(&fVslider0, "00", "");
		ui_interface->addVerticalSlider("gain0", &fVslider0, 0.0f, 0.0f, 1.0f, 0.100000001f);
		ui_interface->declare(&fVslider1, "01", "");
		ui_interface->addVerticalSlider("gain1", &fVslider1, 0.0f, 0.0f, 1.0f, 0.100000001f);
		ui_interface->declare(&fVslider2, "02", "");
		ui_interface->addVerticalSlider("gain2", &fVslider2, 0.0f, 0.0f, 1.0f, 0.100000001f);
		ui_interface->declare(&fVslider3, "03", "");
		ui_interface->addVerticalSlider("gain3", &fVslider3, 0.0f, 0.0f, 1.0f, 0.100000001f);
		ui_interface->declare(&fVslider4, "04", "");
		ui_interface->addVerticalSlider("gain4", &fVslider4, 0.0f, 0.0f, 1.0f, 0.100000001f);
		ui_interface->declare(&fVslider5, "05", "");
		ui_interface->addVerticalSlider("gain5", &fVslider5, 0.0f, 0.0f, 1.0f, 0.100000001f);
		ui_interface->declare(&fVslider6, "06", "");
		ui_interface->addVerticalSlider("gain6", &fVslider6, 0.0f, 0.0f, 1.0f, 0.100000001f);
		ui_interface->declare(&fVslider7, "07", "");
		ui_interface->addVerticalSlider("gain7", &fVslider7, 0.0f, 0.0f, 1.0f, 0.100000001f);
		ui_interface->declare(&fVslider8, "08", "");
		ui_interface->addVerticalSlider("gain8", &fVslider8, 0.0f, 0.0f, 1.0f, 0.100000001f);
		ui_interface->declare(&fVslider9, "09", "");
		ui_interface->addVerticalSlider("gain9", &fVslider9, 0.0f, 0.0f, 1.0f, 0.100000001f);
		ui_interface->declare(&fVslider10, "10", "");
		ui_interface->addVerticalSlider("gain10", &fVslider10, 0.0f, 0.0f, 1.0f, 0.100000001f);
		ui_interface->declare(&fVslider11, "11", "");
		ui_interface->addVerticalSlider("gain11", &fVslider11, 0.0f, 0.0f, 1.0f, 0.100000001f);
		ui_interface->declare(&fVslider12, "12", "");
		ui_interface->addVerticalSlider("gain12", &fVslider12, 0.0f, 0.0f, 1.0f, 0.100000001f);
		ui_interface->declare(&fVslider13, "13", "");
		ui_interface->addVerticalSlider("gain13", &fVslider13, 0.0f, 0.0f, 1.0f, 0.100000001f);
		ui_interface->declare(&fVslider14, "14", "");
		ui_interface->addVerticalSlider("gain14", &fVslider14, 0.0f, 0.0f, 1.0f, 0.100000001f);
		ui_interface->declare(&fVslider15, "15", "");
		ui_interface->addVerticalSlider("gain15", &fVslider15, 0.0f, 0.0f, 1.0f, 0.100000001f);
		ui_interface->closeBox();
		ui_interface->openHorizontalBox("gate");
		ui_interface->declare(&fEntry0, "00", "");
		ui_interface->declare(&fEntry0, "style", "knob");
		ui_interface->addNumEntry("gate0", &fEntry0, 0.0f, 0.0f, 1.0f, 1.0f);
		ui_interface->declare(&fEntry2, "01", "");
		ui_interface->declare(&fEntry2, "style", "knob");
		ui_interface->addNumEntry("gate1", &fEntry2, 0.0f, 0.0f, 1.0f, 1.0f);
		ui_interface->declare(&fEntry4, "02", "");
		ui_interface->declare(&fEntry4, "style", "knob");
		ui_interface->addNumEntry("gate2", &fEntry4, 0.0f, 0.0f, 1.0f, 1.0f);
		ui_interface->declare(&fEntry6, "03", "");
		ui_interface->declare(&fEntry6, "style", "knob");
		ui_interface->addNumEntry("gate3", &fEntry6, 0.0f, 0.0f, 1.0f, 1.0f);
		ui_interface->declare(&fEntry8, "04", "");
		ui_interface->declare(&fEntry8, "style", "knob");
		ui_interface->addNumEntry("gate4", &fEntry8, 0.0f, 0.0f, 1.0f, 1.0f);
		ui_interface->declare(&fEntry10, "05", "");
		ui_interface->declare(&fEntry10, "style", "knob");
		ui_interface->addNumEntry("gate5", &fEntry10, 0.0f, 0.0f, 1.0f, 1.0f);
		ui_interface->declare(&fEntry12, "06", "");
		ui_interface->declare(&fEntry12, "style", "knob");
		ui_interface->addNumEntry("gate6", &fEntry12, 0.0f, 0.0f, 1.0f, 1.0f);
		ui_interface->declare(&fEntry14, "07", "");
		ui_interface->declare(&fEntry14, "style", "knob");
		ui_interface->addNumEntry("gate7", &fEntry14, 0.0f, 0.0f, 1.0f, 1.0f);
		ui_interface->declare(&fEntry16, "08", "");
		ui_interface->declare(&fEntry16, "style", "knob");
		ui_interface->addNumEntry("gate8", &fEntry16, 0.0f, 0.0f, 1.0f, 1.0f);
		ui_interface->declare(&fEntry18, "09", "");
		ui_interface->declare(&fEntry18, "style", "knob");
		ui_interface->addNumEntry("gate9", &fEntry18, 0.0f, 0.0f, 1.0f, 1.0f);
		ui_interface->declare(&fEntry20, "10", "");
		ui_interface->declare(&fEntry20, "style", "knob");
		ui_interface->addNumEntry("gate10", &fEntry20, 0.0f, 0.0f, 1.0f, 1.0f);
		ui_interface->declare(&fEntry22, "11", "");
		ui_interface->declare(&fEntry22, "style", "knob");
		ui_interface->addNumEntry("gate11", &fEntry22, 0.0f, 0.0f, 1.0f, 1.0f);
		ui_interface->declare(&fEntry24, "12", "");
		ui_interface->declare(&fEntry24, "style", "knob");
		ui_interface->addNumEntry("gate12", &fEntry24, 0.0f, 0.0f, 1.0f, 1.0f);
		ui_interface->declare(&fEntry26, "13", "");
		ui_interface->declare(&fEntry26, "style", "knob");
		ui_interface->addNumEntry("gate13", &fEntry26, 0.0f, 0.0f, 1.0f, 1.0f);
		ui_interface->declare(&fEntry28, "14", "");
		ui_interface->declare(&fEntry28, "style", "knob");
		ui_interface->addNumEntry("gate14", &fEntry28, 0.0f, 0.0f, 1.0f, 1.0f);
		ui_interface->declare(&fEntry30, "15", "");
		ui_interface->declare(&fEntry30, "style", "knob");
		ui_interface->addNumEntry("gate15", &fEntry30, 0.0f, 0.0f, 1.0f, 1.0f);
		ui_interface->closeBox();
		ui_interface->openHorizontalBox("volume");
		ui_interface->addHorizontalSlider("volume", &fHslider0, 0.0f, 0.0f, 1.0f, 0.00999999978f);
		ui_interface->closeBox();
		ui_interface->closeBox();
	}
	
	virtual void compute(int count, FAUSTFLOAT** inputs, FAUSTFLOAT** outputs) {
		FAUSTFLOAT* output0 = outputs[0];
		FAUSTFLOAT* output1 = outputs[1];
		float fSlow0 = (0.200000003f * float(fHslider0));
		float fSlow1 = (0.00100000005f * float(fVslider0));
		float fSlow2 = (0.00100000005f * float(fEntry0));
		float fSlow3 = (0.00100000005f * float(fEntry1));
		float fSlow4 = (0.00100000005f * float(fVslider1));
		float fSlow5 = (0.00100000005f * float(fEntry2));
		float fSlow6 = (0.00100000005f * float(fEntry3));
		float fSlow7 = (0.00100000005f * float(fVslider2));
		float fSlow8 = (0.00100000005f * float(fEntry4));
		float fSlow9 = (0.00100000005f * float(fEntry5));
		float fSlow10 = (0.00100000005f * float(fVslider3));
		float fSlow11 = (0.00100000005f * float(fEntry6));
		float fSlow12 = (0.00100000005f * float(fEntry7));
		float fSlow13 = (0.00100000005f * float(fVslider4));
		float fSlow14 = (0.00100000005f * float(fEntry8));
		float fSlow15 = (0.00100000005f * float(fEntry9));
		float fSlow16 = (0.00100000005f * float(fVslider5));
		float fSlow17 = (0.00100000005f * float(fEntry10));
		float fSlow18 = (0.00100000005f * float(fEntry11));
		float fSlow19 = (0.00100000005f * float(fVslider6));
		float fSlow20 = (0.00100000005f * float(fEntry12));
		float fSlow21 = (0.00100000005f * float(fEntry13));
		float fSlow22 = (0.00100000005f * float(fVslider7));
		float fSlow23 = (0.00100000005f * float(fEntry14));
		float fSlow24 = (0.00100000005f * float(fEntry15));
		float fSlow25 = (0.00100000005f * float(fVslider8));
		float fSlow26 = (0.00100000005f * float(fEntry16));
		float fSlow27 = (0.00100000005f * float(fEntry17));
		float fSlow28 = (0.00100000005f * float(fVslider9));
		float fSlow29 = (0.00100000005f * float(fEntry18));
		float fSlow30 = (0.00100000005f * float(fEntry19));
		float fSlow31 = (0.00100000005f * float(fVslider10));
		float fSlow32 = (0.00100000005f * float(fEntry20));
		float fSlow33 = (0.00100000005f * float(fEntry21));
		float fSlow34 = (0.00100000005f * float(fVslider11));
		float fSlow35 = (0.00100000005f * float(fEntry22));
		float fSlow36 = (0.00100000005f * float(fEntry23));
		float fSlow37 = (0.00100000005f * float(fVslider12));
		float fSlow38 = (0.00100000005f * float(fEntry24));
		float fSlow39 = (0.00100000005f * float(fEntry25));
		float fSlow40 = (0.00100000005f * float(fVslider13));
		float fSlow41 = (0.00100000005f * float(fEntry26));
		float fSlow42 = (0.00100000005f * float(fEntry27));
		float fSlow43 = (0.00100000005f * float(fVslider14));
		float fSlow44 = (0.00100000005f * float(fEntry28));
		float fSlow45 = (0.00100000005f * float(fEntry29));
		float fSlow46 = (0.00100000005f * float(fVslider15));
		float fSlow47 = (0.00100000005f * float(fEntry30));
		float fSlow48 = (0.00100000005f * float(fEntry31));
		for (int i = 0; (i < count); i = (i + 1)) {
			fRec0[0] = (fSlow1 + (0.999000013f * fRec0[1]));
			fRec1[0] = (fSlow2 + (0.999000013f * fRec1[1]));
			fRec4[0] = (fSlow3 + (0.999000013f * fRec4[1]));
			float fTemp0 = (fRec3[1] + (fConst0 * fRec4[0]));
			fRec3[0] = (fTemp0 - std::floor(fTemp0));
			fRec5[0] = (fSlow4 + (0.999000013f * fRec5[1]));
			fRec6[0] = (fSlow5 + (0.999000013f * fRec6[1]));
			fRec8[0] = (fSlow6 + (0.999000013f * fRec8[1]));
			float fTemp1 = (fRec7[1] + (fConst0 * fRec8[0]));
			fRec7[0] = (fTemp1 - std::floor(fTemp1));
			fRec9[0] = (fSlow7 + (0.999000013f * fRec9[1]));
			fRec10[0] = (fSlow8 + (0.999000013f * fRec10[1]));
			fRec12[0] = (fSlow9 + (0.999000013f * fRec12[1]));
			float fTemp2 = (fRec11[1] + (fConst0 * fRec12[0]));
			fRec11[0] = (fTemp2 - std::floor(fTemp2));
			fRec13[0] = (fSlow10 + (0.999000013f * fRec13[1]));
			fRec14[0] = (fSlow11 + (0.999000013f * fRec14[1]));
			fRec16[0] = (fSlow12 + (0.999000013f * fRec16[1]));
			float fTemp3 = (fRec15[1] + (fConst0 * fRec16[0]));
			fRec15[0] = (fTemp3 - std::floor(fTemp3));
			fRec17[0] = (fSlow13 + (0.999000013f * fRec17[1]));
			fRec18[0] = (fSlow14 + (0.999000013f * fRec18[1]));
			fRec20[0] = (fSlow15 + (0.999000013f * fRec20[1]));
			float fTemp4 = (fRec19[1] + (fConst0 * fRec20[0]));
			fRec19[0] = (fTemp4 - std::floor(fTemp4));
			fRec21[0] = (fSlow16 + (0.999000013f * fRec21[1]));
			fRec22[0] = (fSlow17 + (0.999000013f * fRec22[1]));
			fRec24[0] = (fSlow18 + (0.999000013f * fRec24[1]));
			float fTemp5 = (fRec23[1] + (fConst0 * fRec24[0]));
			fRec23[0] = (fTemp5 - std::floor(fTemp5));
			fRec25[0] = (fSlow19 + (0.999000013f * fRec25[1]));
			fRec26[0] = (fSlow20 + (0.999000013f * fRec26[1]));
			fRec28[0] = (fSlow21 + (0.999000013f * fRec28[1]));
			float fTemp6 = (fRec27[1] + (fConst0 * fRec28[0]));
			fRec27[0] = (fTemp6 - std::floor(fTemp6));
			fRec29[0] = (fSlow22 + (0.999000013f * fRec29[1]));
			fRec30[0] = (fSlow23 + (0.999000013f * fRec30[1]));
			fRec32[0] = (fSlow24 + (0.999000013f * fRec32[1]));
			float fTemp7 = (fRec31[1] + (fConst0 * fRec32[0]));
			fRec31[0] = (fTemp7 - std::floor(fTemp7));
			fRec33[0] = (fSlow25 + (0.999000013f * fRec33[1]));
			fRec34[0] = (fSlow26 + (0.999000013f * fRec34[1]));
			fRec36[0] = (fSlow27 + (0.999000013f * fRec36[1]));
			float fTemp8 = (fRec35[1] + (fConst0 * fRec36[0]));
			fRec35[0] = (fTemp8 - std::floor(fTemp8));
			fRec37[0] = (fSlow28 + (0.999000013f * fRec37[1]));
			fRec38[0] = (fSlow29 + (0.999000013f * fRec38[1]));
			fRec40[0] = (fSlow30 + (0.999000013f * fRec40[1]));
			float fTemp9 = (fRec39[1] + (fConst0 * fRec40[0]));
			fRec39[0] = (fTemp9 - std::floor(fTemp9));
			fRec41[0] = (fSlow31 + (0.999000013f * fRec41[1]));
			fRec42[0] = (fSlow32 + (0.999000013f * fRec42[1]));
			fRec44[0] = (fSlow33 + (0.999000013f * fRec44[1]));
			float fTemp10 = (fRec43[1] + (fConst0 * fRec44[0]));
			fRec43[0] = (fTemp10 - std::floor(fTemp10));
			fRec45[0] = (fSlow34 + (0.999000013f * fRec45[1]));
			fRec46[0] = (fSlow35 + (0.999000013f * fRec46[1]));
			fRec48[0] = (fSlow36 + (0.999000013f * fRec48[1]));
			float fTemp11 = (fRec47[1] + (fConst0 * fRec48[0]));
			fRec47[0] = (fTemp11 - std::floor(fTemp11));
			fRec49[0] = (fSlow37 + (0.999000013f * fRec49[1]));
			fRec50[0] = (fSlow38 + (0.999000013f * fRec50[1]));
			fRec52[0] = (fSlow39 + (0.999000013f * fRec52[1]));
			float fTemp12 = (fRec51[1] + (fConst0 * fRec52[0]));
			fRec51[0] = (fTemp12 - std::floor(fTemp12));
			fRec53[0] = (fSlow40 + (0.999000013f * fRec53[1]));
			fRec54[0] = (fSlow41 + (0.999000013f * fRec54[1]));
			fRec56[0] = (fSlow42 + (0.999000013f * fRec56[1]));
			float fTemp13 = (fRec55[1] + (fConst0 * fRec56[0]));
			fRec55[0] = (fTemp13 - std::floor(fTemp13));
			fRec57[0] = (fSlow43 + (0.999000013f * fRec57[1]));
			fRec58[0] = (fSlow44 + (0.999000013f * fRec58[1]));
			fRec60[0] = (fSlow45 + (0.999000013f * fRec60[1]));
			float fTemp14 = (fRec59[1] + (fConst0 * fRec60[0]));
			fRec59[0] = (fTemp14 - std::floor(fTemp14));
			fRec61[0] = (fSlow46 + (0.999000013f * fRec61[1]));
			fRec62[0] = (fSlow47 + (0.999000013f * fRec62[1]));
			fRec64[0] = (fSlow48 + (0.999000013f * fRec64[1]));
			float fTemp15 = (fRec63[1] + (fConst0 * fRec64[0]));
			fRec63[0] = (fTemp15 - std::floor(fTemp15));
			float fTemp16 = (fSlow0 * (((((((((((((((((fRec0[0] * fRec1[0]) * ftbl0mydspSIG0[int((65536.0f * fRec3[0]))]) + ((fRec5[0] * fRec6[0]) * ftbl0mydspSIG0[int((65536.0f * fRec7[0]))])) + ((fRec9[0] * fRec10[0]) * ftbl0mydspSIG0[int((65536.0f * fRec11[0]))])) + ((fRec13[0] * fRec14[0]) * ftbl0mydspSIG0[int((65536.0f * fRec15[0]))])) + ((fRec17[0] * fRec18[0]) * ftbl0mydspSIG0[int((65536.0f * fRec19[0]))])) + ((fRec21[0] * fRec22[0]) * ftbl0mydspSIG0[int((65536.0f * fRec23[0]))])) + ((fRec25[0] * fRec26[0]) * ftbl0mydspSIG0[int((65536.0f * fRec27[0]))])) + ((fRec29[0] * fRec30[0]) * ftbl0mydspSIG0[int((65536.0f * fRec31[0]))])) + ((fRec33[0] * fRec34[0]) * ftbl0mydspSIG0[int((65536.0f * fRec35[0]))])) + ((fRec37[0] * fRec38[0]) * ftbl0mydspSIG0[int((65536.0f * fRec39[0]))])) + ((fRec41[0] * fRec42[0]) * ftbl0mydspSIG0[int((65536.0f * fRec43[0]))])) + ((fRec45[0] * fRec46[0]) * ftbl0mydspSIG0[int((65536.0f * fRec47[0]))])) + ((fRec49[0] * fRec50[0]) * ftbl0mydspSIG0[int((65536.0f * fRec51[0]))])) + ((fRec53[0] * fRec54[0]) * ftbl0mydspSIG0[int((65536.0f * fRec55[0]))])) + ((fRec57[0] * fRec58[0]) * ftbl0mydspSIG0[int((65536.0f * fRec59[0]))])) + ((fRec61[0] * fRec62[0]) * ftbl0mydspSIG0[int((65536.0f * fRec63[0]))])));
			output0[i] = FAUSTFLOAT(fTemp16);
			output1[i] = FAUSTFLOAT(fTemp16);
			fRec0[1] = fRec0[0];
			fRec1[1] = fRec1[0];
			fRec4[1] = fRec4[0];
			fRec3[1] = fRec3[0];
			fRec5[1] = fRec5[0];
			fRec6[1] = fRec6[0];
			fRec8[1] = fRec8[0];
			fRec7[1] = fRec7[0];
			fRec9[1] = fRec9[0];
			fRec10[1] = fRec10[0];
			fRec12[1] = fRec12[0];
			fRec11[1] = fRec11[0];
			fRec13[1] = fRec13[0];
			fRec14[1] = fRec14[0];
			fRec16[1] = fRec16[0];
			fRec15[1] = fRec15[0];
			fRec17[1] = fRec17[0];
			fRec18[1] = fRec18[0];
			fRec20[1] = fRec20[0];
			fRec19[1] = fRec19[0];
			fRec21[1] = fRec21[0];
			fRec22[1] = fRec22[0];
			fRec24[1] = fRec24[0];
			fRec23[1] = fRec23[0];
			fRec25[1] = fRec25[0];
			fRec26[1] = fRec26[0];
			fRec28[1] = fRec28[0];
			fRec27[1] = fRec27[0];
			fRec29[1] = fRec29[0];
			fRec30[1] = fRec30[0];
			fRec32[1] = fRec32[0];
			fRec31[1] = fRec31[0];
			fRec33[1] = fRec33[0];
			fRec34[1] = fRec34[0];
			fRec36[1] = fRec36[0];
			fRec35[1] = fRec35[0];
			fRec37[1] = fRec37[0];
			fRec38[1] = fRec38[0];
			fRec40[1] = fRec40[0];
			fRec39[1] = fRec39[0];
			fRec41[1] = fRec41[0];
			fRec42[1] = fRec42[0];
			fRec44[1] = fRec44[0];
			fRec43[1] = fRec43[0];
			fRec45[1] = fRec45[0];
			fRec46[1] = fRec46[0];
			fRec48[1] = fRec48[0];
			fRec47[1] = fRec47[0];
			fRec49[1] = fRec49[0];
			fRec50[1] = fRec50[0];
			fRec52[1] = fRec52[0];
			fRec51[1] = fRec51[0];
			fRec53[1] = fRec53[0];
			fRec54[1] = fRec54[0];
			fRec56[1] = fRec56[0];
			fRec55[1] = fRec55[0];
			fRec57[1] = fRec57[0];
			fRec58[1] = fRec58[0];
			fRec60[1] = fRec60[0];
			fRec59[1] = fRec59[0];
			fRec61[1] = fRec61[0];
			fRec62[1] = fRec62[0];
			fRec64[1] = fRec64[0];
			fRec63[1] = fRec63[0];
		}
	}

};

#endif
