/* ------------------------------------------------------------
name: "BASIS.2.tmp"
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
	
	int iRec1[2];
	
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
			iRec1[l1] = 0;
		}
	}
	
	void fillmydspSIG0(int count, float* table) {
		for (int i = 0; (i < count); i = (i + 1)) {
			iRec1[0] = (iRec1[1] + 1);
			table[i] = std::sin((9.58738019e-05f * float((iRec1[0] + -1))));
			iRec1[1] = iRec1[0];
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
	FAUSTFLOAT fVslider1;
	float fRec0[2];
	int fSampleRate;
	float fConst0;
	float fConst1;
	FAUSTFLOAT fEntry0;
	float fRec3[2];
	float fRec2[2];
	FAUSTFLOAT fVslider2;
	float fRec4[2];
	FAUSTFLOAT fEntry1;
	float fRec6[2];
	float fRec5[2];
	FAUSTFLOAT fVslider3;
	float fRec7[2];
	FAUSTFLOAT fEntry2;
	float fRec9[2];
	float fRec8[2];
	FAUSTFLOAT fVslider4;
	float fRec10[2];
	FAUSTFLOAT fEntry3;
	float fRec12[2];
	float fRec11[2];
	FAUSTFLOAT fVslider5;
	float fRec13[2];
	FAUSTFLOAT fEntry4;
	float fRec15[2];
	float fRec14[2];
	FAUSTFLOAT fVslider6;
	float fRec16[2];
	FAUSTFLOAT fEntry5;
	float fRec18[2];
	float fRec17[2];
	FAUSTFLOAT fVslider7;
	float fRec19[2];
	FAUSTFLOAT fEntry6;
	float fRec21[2];
	float fRec20[2];
	FAUSTFLOAT fVslider8;
	float fRec22[2];
	FAUSTFLOAT fEntry7;
	float fRec24[2];
	float fRec23[2];
	FAUSTFLOAT fVslider9;
	float fRec25[2];
	FAUSTFLOAT fEntry8;
	float fRec27[2];
	float fRec26[2];
	FAUSTFLOAT fVslider10;
	float fRec28[2];
	FAUSTFLOAT fEntry9;
	float fRec30[2];
	float fRec29[2];
	FAUSTFLOAT fVslider11;
	float fRec31[2];
	FAUSTFLOAT fEntry10;
	float fRec33[2];
	float fRec32[2];
	FAUSTFLOAT fVslider12;
	float fRec34[2];
	FAUSTFLOAT fEntry11;
	float fRec36[2];
	float fRec35[2];
	FAUSTFLOAT fVslider13;
	float fRec37[2];
	FAUSTFLOAT fEntry12;
	float fRec39[2];
	float fRec38[2];
	FAUSTFLOAT fVslider14;
	float fRec40[2];
	FAUSTFLOAT fEntry13;
	float fRec42[2];
	float fRec41[2];
	FAUSTFLOAT fVslider15;
	float fRec43[2];
	FAUSTFLOAT fEntry14;
	float fRec45[2];
	float fRec44[2];
	FAUSTFLOAT fVslider16;
	float fRec46[2];
	FAUSTFLOAT fEntry15;
	float fRec48[2];
	float fRec47[2];
	FAUSTFLOAT fVslider17;
	float fRec52[2];
	int iRec53[2];
	FAUSTFLOAT fVslider18;
	float fRec55[2];
	float fRec54[2];
	float fConst2;
	FAUSTFLOAT fVslider19;
	float fRec56[2];
	float fRec51[3];
	float fRec50[3];
	float fRec49[3];
	
 public:
	
	void metadata(Meta* m) { 
		m->declare("basics.lib/name", "Faust Basic Element Library");
		m->declare("basics.lib/version", "0.1");
		m->declare("filename", "BASIS.2.tmp.dsp");
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
		m->declare("name", "BASIS.2.tmp");
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
		fVslider1 = FAUSTFLOAT(0.0f);
		fEntry0 = FAUSTFLOAT(200.0f);
		fVslider2 = FAUSTFLOAT(0.0f);
		fEntry1 = FAUSTFLOAT(200.0f);
		fVslider3 = FAUSTFLOAT(0.0f);
		fEntry2 = FAUSTFLOAT(200.0f);
		fVslider4 = FAUSTFLOAT(0.0f);
		fEntry3 = FAUSTFLOAT(200.0f);
		fVslider5 = FAUSTFLOAT(0.0f);
		fEntry4 = FAUSTFLOAT(200.0f);
		fVslider6 = FAUSTFLOAT(0.0f);
		fEntry5 = FAUSTFLOAT(200.0f);
		fVslider7 = FAUSTFLOAT(0.0f);
		fEntry6 = FAUSTFLOAT(200.0f);
		fVslider8 = FAUSTFLOAT(0.0f);
		fEntry7 = FAUSTFLOAT(200.0f);
		fVslider9 = FAUSTFLOAT(0.0f);
		fEntry8 = FAUSTFLOAT(200.0f);
		fVslider10 = FAUSTFLOAT(0.0f);
		fEntry9 = FAUSTFLOAT(200.0f);
		fVslider11 = FAUSTFLOAT(0.0f);
		fEntry10 = FAUSTFLOAT(200.0f);
		fVslider12 = FAUSTFLOAT(0.0f);
		fEntry11 = FAUSTFLOAT(200.0f);
		fVslider13 = FAUSTFLOAT(0.0f);
		fEntry12 = FAUSTFLOAT(200.0f);
		fVslider14 = FAUSTFLOAT(0.0f);
		fEntry13 = FAUSTFLOAT(200.0f);
		fVslider15 = FAUSTFLOAT(0.0f);
		fEntry14 = FAUSTFLOAT(200.0f);
		fVslider16 = FAUSTFLOAT(0.0f);
		fEntry15 = FAUSTFLOAT(200.0f);
		fVslider17 = FAUSTFLOAT(1.0f);
		fVslider18 = FAUSTFLOAT(0.0f);
		fVslider19 = FAUSTFLOAT(100.0f);
	}
	
	virtual void instanceClear() {
		for (int l0 = 0; (l0 < 2); l0 = (l0 + 1)) {
			fRec0[l0] = 0.0f;
		}
		for (int l2 = 0; (l2 < 2); l2 = (l2 + 1)) {
			fRec3[l2] = 0.0f;
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
			fRec5[l6] = 0.0f;
		}
		for (int l7 = 0; (l7 < 2); l7 = (l7 + 1)) {
			fRec7[l7] = 0.0f;
		}
		for (int l8 = 0; (l8 < 2); l8 = (l8 + 1)) {
			fRec9[l8] = 0.0f;
		}
		for (int l9 = 0; (l9 < 2); l9 = (l9 + 1)) {
			fRec8[l9] = 0.0f;
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
			fRec15[l14] = 0.0f;
		}
		for (int l15 = 0; (l15 < 2); l15 = (l15 + 1)) {
			fRec14[l15] = 0.0f;
		}
		for (int l16 = 0; (l16 < 2); l16 = (l16 + 1)) {
			fRec16[l16] = 0.0f;
		}
		for (int l17 = 0; (l17 < 2); l17 = (l17 + 1)) {
			fRec18[l17] = 0.0f;
		}
		for (int l18 = 0; (l18 < 2); l18 = (l18 + 1)) {
			fRec17[l18] = 0.0f;
		}
		for (int l19 = 0; (l19 < 2); l19 = (l19 + 1)) {
			fRec19[l19] = 0.0f;
		}
		for (int l20 = 0; (l20 < 2); l20 = (l20 + 1)) {
			fRec21[l20] = 0.0f;
		}
		for (int l21 = 0; (l21 < 2); l21 = (l21 + 1)) {
			fRec20[l21] = 0.0f;
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
			fRec27[l26] = 0.0f;
		}
		for (int l27 = 0; (l27 < 2); l27 = (l27 + 1)) {
			fRec26[l27] = 0.0f;
		}
		for (int l28 = 0; (l28 < 2); l28 = (l28 + 1)) {
			fRec28[l28] = 0.0f;
		}
		for (int l29 = 0; (l29 < 2); l29 = (l29 + 1)) {
			fRec30[l29] = 0.0f;
		}
		for (int l30 = 0; (l30 < 2); l30 = (l30 + 1)) {
			fRec29[l30] = 0.0f;
		}
		for (int l31 = 0; (l31 < 2); l31 = (l31 + 1)) {
			fRec31[l31] = 0.0f;
		}
		for (int l32 = 0; (l32 < 2); l32 = (l32 + 1)) {
			fRec33[l32] = 0.0f;
		}
		for (int l33 = 0; (l33 < 2); l33 = (l33 + 1)) {
			fRec32[l33] = 0.0f;
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
			fRec39[l38] = 0.0f;
		}
		for (int l39 = 0; (l39 < 2); l39 = (l39 + 1)) {
			fRec38[l39] = 0.0f;
		}
		for (int l40 = 0; (l40 < 2); l40 = (l40 + 1)) {
			fRec40[l40] = 0.0f;
		}
		for (int l41 = 0; (l41 < 2); l41 = (l41 + 1)) {
			fRec42[l41] = 0.0f;
		}
		for (int l42 = 0; (l42 < 2); l42 = (l42 + 1)) {
			fRec41[l42] = 0.0f;
		}
		for (int l43 = 0; (l43 < 2); l43 = (l43 + 1)) {
			fRec43[l43] = 0.0f;
		}
		for (int l44 = 0; (l44 < 2); l44 = (l44 + 1)) {
			fRec45[l44] = 0.0f;
		}
		for (int l45 = 0; (l45 < 2); l45 = (l45 + 1)) {
			fRec44[l45] = 0.0f;
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
			fRec52[l49] = 0.0f;
		}
		for (int l50 = 0; (l50 < 2); l50 = (l50 + 1)) {
			iRec53[l50] = 0;
		}
		for (int l51 = 0; (l51 < 2); l51 = (l51 + 1)) {
			fRec55[l51] = 0.0f;
		}
		for (int l52 = 0; (l52 < 2); l52 = (l52 + 1)) {
			fRec54[l52] = 0.0f;
		}
		for (int l53 = 0; (l53 < 2); l53 = (l53 + 1)) {
			fRec56[l53] = 0.0f;
		}
		for (int l54 = 0; (l54 < 3); l54 = (l54 + 1)) {
			fRec51[l54] = 0.0f;
		}
		for (int l55 = 0; (l55 < 3); l55 = (l55 + 1)) {
			fRec50[l55] = 0.0f;
		}
		for (int l56 = 0; (l56 < 3); l56 = (l56 + 1)) {
			fRec49[l56] = 0.0f;
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
		ui_interface->openVerticalBox("BASIS.2.tmp");
		ui_interface->openHorizontalBox("Noise");
		ui_interface->addVerticalSlider("noiseCO", &fVslider19, 100.0f, 100.0f, 2000.0f, 0.100000001f);
		ui_interface->addVerticalSlider("noiseLfoFreq", &fVslider18, 0.0f, 0.0f, 1000.0f, 0.00999999978f);
		ui_interface->addVerticalSlider("noiseVol", &fVslider17, 1.0f, 0.0f, 8.0f, 0.00100000005f);
		ui_interface->addVerticalSlider("volume", &fVslider0, 0.0f, 0.0f, 1.0f, 0.00999999978f);
		ui_interface->closeBox();
		ui_interface->openHorizontalBox("SINUS");
		ui_interface->declare(0, "10", "");
		ui_interface->openVerticalBox("BL0");
		ui_interface->declare(&fEntry0, "0", "");
		ui_interface->declare(&fEntry0, "style", "knob");
		ui_interface->addNumEntry("freq", &fEntry0, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fVslider1, "1", "");
		ui_interface->addVerticalSlider("gain", &fVslider1, 0.0f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->closeBox();
		ui_interface->declare(0, "11", "");
		ui_interface->openVerticalBox("BL1");
		ui_interface->declare(&fEntry1, "0", "");
		ui_interface->declare(&fEntry1, "style", "knob");
		ui_interface->addNumEntry("freq", &fEntry1, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fVslider2, "1", "");
		ui_interface->addVerticalSlider("gain", &fVslider2, 0.0f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->closeBox();
		ui_interface->declare(0, "12", "");
		ui_interface->openVerticalBox("BL2");
		ui_interface->declare(&fEntry2, "0", "");
		ui_interface->declare(&fEntry2, "style", "knob");
		ui_interface->addNumEntry("freq", &fEntry2, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fVslider3, "1", "");
		ui_interface->addVerticalSlider("gain", &fVslider3, 0.0f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->closeBox();
		ui_interface->declare(0, "13", "");
		ui_interface->openVerticalBox("BL3");
		ui_interface->declare(&fEntry3, "0", "");
		ui_interface->declare(&fEntry3, "style", "knob");
		ui_interface->addNumEntry("freq", &fEntry3, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fVslider4, "1", "");
		ui_interface->addVerticalSlider("gain", &fVslider4, 0.0f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->closeBox();
		ui_interface->declare(0, "14", "");
		ui_interface->openVerticalBox("BL4");
		ui_interface->declare(&fEntry4, "0", "");
		ui_interface->declare(&fEntry4, "style", "knob");
		ui_interface->addNumEntry("freq", &fEntry4, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fVslider5, "1", "");
		ui_interface->addVerticalSlider("gain", &fVslider5, 0.0f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->closeBox();
		ui_interface->declare(0, "15", "");
		ui_interface->openVerticalBox("BL5");
		ui_interface->declare(&fEntry5, "0", "");
		ui_interface->declare(&fEntry5, "style", "knob");
		ui_interface->addNumEntry("freq", &fEntry5, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fVslider6, "1", "");
		ui_interface->addVerticalSlider("gain", &fVslider6, 0.0f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->closeBox();
		ui_interface->declare(0, "16", "");
		ui_interface->openVerticalBox("BL6");
		ui_interface->declare(&fEntry6, "0", "");
		ui_interface->declare(&fEntry6, "style", "knob");
		ui_interface->addNumEntry("freq", &fEntry6, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fVslider7, "1", "");
		ui_interface->addVerticalSlider("gain", &fVslider7, 0.0f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->closeBox();
		ui_interface->declare(0, "17", "");
		ui_interface->openVerticalBox("BL7");
		ui_interface->declare(&fEntry7, "0", "");
		ui_interface->declare(&fEntry7, "style", "knob");
		ui_interface->addNumEntry("freq", &fEntry7, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fVslider8, "1", "");
		ui_interface->addVerticalSlider("gain", &fVslider8, 0.0f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->closeBox();
		ui_interface->declare(0, "18", "");
		ui_interface->openVerticalBox("BL8");
		ui_interface->declare(&fEntry8, "0", "");
		ui_interface->declare(&fEntry8, "style", "knob");
		ui_interface->addNumEntry("freq", &fEntry8, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fVslider9, "1", "");
		ui_interface->addVerticalSlider("gain", &fVslider9, 0.0f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->closeBox();
		ui_interface->declare(0, "19", "");
		ui_interface->openVerticalBox("BL9");
		ui_interface->declare(&fEntry9, "0", "");
		ui_interface->declare(&fEntry9, "style", "knob");
		ui_interface->addNumEntry("freq", &fEntry9, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fVslider10, "1", "");
		ui_interface->addVerticalSlider("gain", &fVslider10, 0.0f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->closeBox();
		ui_interface->declare(0, "20", "");
		ui_interface->openVerticalBox("BL10");
		ui_interface->declare(&fEntry10, "0", "");
		ui_interface->declare(&fEntry10, "style", "knob");
		ui_interface->addNumEntry("freq", &fEntry10, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fVslider11, "1", "");
		ui_interface->addVerticalSlider("gain", &fVslider11, 0.0f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->closeBox();
		ui_interface->declare(0, "21", "");
		ui_interface->openVerticalBox("BL11");
		ui_interface->declare(&fEntry11, "0", "");
		ui_interface->declare(&fEntry11, "style", "knob");
		ui_interface->addNumEntry("freq", &fEntry11, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fVslider12, "1", "");
		ui_interface->addVerticalSlider("gain", &fVslider12, 0.0f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->closeBox();
		ui_interface->declare(0, "22", "");
		ui_interface->openVerticalBox("BL12");
		ui_interface->declare(&fEntry12, "0", "");
		ui_interface->declare(&fEntry12, "style", "knob");
		ui_interface->addNumEntry("freq", &fEntry12, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fVslider13, "1", "");
		ui_interface->addVerticalSlider("gain", &fVslider13, 0.0f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->closeBox();
		ui_interface->declare(0, "23", "");
		ui_interface->openVerticalBox("BL13");
		ui_interface->declare(&fEntry13, "0", "");
		ui_interface->declare(&fEntry13, "style", "knob");
		ui_interface->addNumEntry("freq", &fEntry13, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fVslider14, "1", "");
		ui_interface->addVerticalSlider("gain", &fVslider14, 0.0f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->closeBox();
		ui_interface->declare(0, "24", "");
		ui_interface->openVerticalBox("BL14");
		ui_interface->declare(&fEntry14, "0", "");
		ui_interface->declare(&fEntry14, "style", "knob");
		ui_interface->addNumEntry("freq", &fEntry14, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fVslider15, "1", "");
		ui_interface->addVerticalSlider("gain", &fVslider15, 0.0f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->closeBox();
		ui_interface->declare(0, "25", "");
		ui_interface->openVerticalBox("BL15");
		ui_interface->declare(&fEntry15, "0", "");
		ui_interface->declare(&fEntry15, "style", "knob");
		ui_interface->addNumEntry("freq", &fEntry15, 200.0f, 60.0f, 1000.0f, 0.00999999978f);
		ui_interface->declare(&fVslider16, "1", "");
		ui_interface->addVerticalSlider("gain", &fVslider16, 0.0f, 0.0f, 1.0f, 0.00100000005f);
		ui_interface->closeBox();
		ui_interface->closeBox();
		ui_interface->closeBox();
	}
	
	virtual void compute(int count, FAUSTFLOAT** inputs, FAUSTFLOAT** outputs) {
		FAUSTFLOAT* output0 = outputs[0];
		FAUSTFLOAT* output1 = outputs[1];
		float fSlow0 = (0.400000006f * float(fVslider0));
		float fSlow1 = (0.00100000005f * std::sqrt(float(fVslider1)));
		float fSlow2 = (0.00100000005f * float(fEntry0));
		float fSlow3 = (0.00100000005f * std::sqrt(float(fVslider2)));
		float fSlow4 = (0.00100000005f * float(fEntry1));
		float fSlow5 = (0.00100000005f * std::sqrt(float(fVslider3)));
		float fSlow6 = (0.00100000005f * float(fEntry2));
		float fSlow7 = (0.00100000005f * std::sqrt(float(fVslider4)));
		float fSlow8 = (0.00100000005f * float(fEntry3));
		float fSlow9 = (0.00100000005f * std::sqrt(float(fVslider5)));
		float fSlow10 = (0.00100000005f * float(fEntry4));
		float fSlow11 = (0.00100000005f * std::sqrt(float(fVslider6)));
		float fSlow12 = (0.00100000005f * float(fEntry5));
		float fSlow13 = (0.00100000005f * std::sqrt(float(fVslider7)));
		float fSlow14 = (0.00100000005f * float(fEntry6));
		float fSlow15 = (0.00100000005f * std::sqrt(float(fVslider8)));
		float fSlow16 = (0.00100000005f * float(fEntry7));
		float fSlow17 = (0.00100000005f * std::sqrt(float(fVslider9)));
		float fSlow18 = (0.00100000005f * float(fEntry8));
		float fSlow19 = (0.00100000005f * std::sqrt(float(fVslider10)));
		float fSlow20 = (0.00100000005f * float(fEntry9));
		float fSlow21 = (0.00100000005f * std::sqrt(float(fVslider11)));
		float fSlow22 = (0.00100000005f * float(fEntry10));
		float fSlow23 = (0.00100000005f * std::sqrt(float(fVslider12)));
		float fSlow24 = (0.00100000005f * float(fEntry11));
		float fSlow25 = (0.00100000005f * std::sqrt(float(fVslider13)));
		float fSlow26 = (0.00100000005f * float(fEntry12));
		float fSlow27 = (0.00100000005f * std::sqrt(float(fVslider14)));
		float fSlow28 = (0.00100000005f * float(fEntry13));
		float fSlow29 = (0.00100000005f * std::sqrt(float(fVslider15)));
		float fSlow30 = (0.00100000005f * float(fEntry14));
		float fSlow31 = (0.00100000005f * std::sqrt(float(fVslider16)));
		float fSlow32 = (0.00100000005f * float(fEntry15));
		float fSlow33 = (0.00100000005f * float(fVslider17));
		float fSlow34 = (0.00100000005f * float(fVslider18));
		float fSlow35 = (0.00100000005f * float(fVslider19));
		for (int i = 0; (i < count); i = (i + 1)) {
			fRec0[0] = (fSlow1 + (0.999000013f * fRec0[1]));
			fRec3[0] = (fSlow2 + (0.999000013f * fRec3[1]));
			float fTemp0 = (fRec2[1] + (fConst1 * fRec3[0]));
			fRec2[0] = (fTemp0 - std::floor(fTemp0));
			fRec4[0] = (fSlow3 + (0.999000013f * fRec4[1]));
			fRec6[0] = (fSlow4 + (0.999000013f * fRec6[1]));
			float fTemp1 = (fRec5[1] + (fConst1 * fRec6[0]));
			fRec5[0] = (fTemp1 - std::floor(fTemp1));
			fRec7[0] = (fSlow5 + (0.999000013f * fRec7[1]));
			fRec9[0] = (fSlow6 + (0.999000013f * fRec9[1]));
			float fTemp2 = (fRec8[1] + (fConst1 * fRec9[0]));
			fRec8[0] = (fTemp2 - std::floor(fTemp2));
			fRec10[0] = (fSlow7 + (0.999000013f * fRec10[1]));
			fRec12[0] = (fSlow8 + (0.999000013f * fRec12[1]));
			float fTemp3 = (fRec11[1] + (fConst1 * fRec12[0]));
			fRec11[0] = (fTemp3 - std::floor(fTemp3));
			fRec13[0] = (fSlow9 + (0.999000013f * fRec13[1]));
			fRec15[0] = (fSlow10 + (0.999000013f * fRec15[1]));
			float fTemp4 = (fRec14[1] + (fConst1 * fRec15[0]));
			fRec14[0] = (fTemp4 - std::floor(fTemp4));
			fRec16[0] = (fSlow11 + (0.999000013f * fRec16[1]));
			fRec18[0] = (fSlow12 + (0.999000013f * fRec18[1]));
			float fTemp5 = (fRec17[1] + (fConst1 * fRec18[0]));
			fRec17[0] = (fTemp5 - std::floor(fTemp5));
			fRec19[0] = (fSlow13 + (0.999000013f * fRec19[1]));
			fRec21[0] = (fSlow14 + (0.999000013f * fRec21[1]));
			float fTemp6 = (fRec20[1] + (fConst1 * fRec21[0]));
			fRec20[0] = (fTemp6 - std::floor(fTemp6));
			fRec22[0] = (fSlow15 + (0.999000013f * fRec22[1]));
			fRec24[0] = (fSlow16 + (0.999000013f * fRec24[1]));
			float fTemp7 = (fRec23[1] + (fConst1 * fRec24[0]));
			fRec23[0] = (fTemp7 - std::floor(fTemp7));
			fRec25[0] = (fSlow17 + (0.999000013f * fRec25[1]));
			fRec27[0] = (fSlow18 + (0.999000013f * fRec27[1]));
			float fTemp8 = (fRec26[1] + (fConst1 * fRec27[0]));
			fRec26[0] = (fTemp8 - std::floor(fTemp8));
			fRec28[0] = (fSlow19 + (0.999000013f * fRec28[1]));
			fRec30[0] = (fSlow20 + (0.999000013f * fRec30[1]));
			float fTemp9 = (fRec29[1] + (fConst1 * fRec30[0]));
			fRec29[0] = (fTemp9 - std::floor(fTemp9));
			fRec31[0] = (fSlow21 + (0.999000013f * fRec31[1]));
			fRec33[0] = (fSlow22 + (0.999000013f * fRec33[1]));
			float fTemp10 = (fRec32[1] + (fConst1 * fRec33[0]));
			fRec32[0] = (fTemp10 - std::floor(fTemp10));
			fRec34[0] = (fSlow23 + (0.999000013f * fRec34[1]));
			fRec36[0] = (fSlow24 + (0.999000013f * fRec36[1]));
			float fTemp11 = (fRec35[1] + (fConst1 * fRec36[0]));
			fRec35[0] = (fTemp11 - std::floor(fTemp11));
			fRec37[0] = (fSlow25 + (0.999000013f * fRec37[1]));
			fRec39[0] = (fSlow26 + (0.999000013f * fRec39[1]));
			float fTemp12 = (fRec38[1] + (fConst1 * fRec39[0]));
			fRec38[0] = (fTemp12 - std::floor(fTemp12));
			fRec40[0] = (fSlow27 + (0.999000013f * fRec40[1]));
			fRec42[0] = (fSlow28 + (0.999000013f * fRec42[1]));
			float fTemp13 = (fRec41[1] + (fConst1 * fRec42[0]));
			fRec41[0] = (fTemp13 - std::floor(fTemp13));
			fRec43[0] = (fSlow29 + (0.999000013f * fRec43[1]));
			fRec45[0] = (fSlow30 + (0.999000013f * fRec45[1]));
			float fTemp14 = (fRec44[1] + (fConst1 * fRec45[0]));
			fRec44[0] = (fTemp14 - std::floor(fTemp14));
			fRec46[0] = (fSlow31 + (0.999000013f * fRec46[1]));
			fRec48[0] = (fSlow32 + (0.999000013f * fRec48[1]));
			float fTemp15 = (fRec47[1] + (fConst1 * fRec48[0]));
			fRec47[0] = (fTemp15 - std::floor(fTemp15));
			fRec52[0] = (fSlow33 + (0.999000013f * fRec52[1]));
			iRec53[0] = ((1103515245 * iRec53[1]) + 12345);
			fRec55[0] = (fSlow34 + (0.999000013f * fRec55[1]));
			float fTemp16 = (fRec54[1] + (fConst1 * fRec55[0]));
			fRec54[0] = (fTemp16 - std::floor(fTemp16));
			fRec56[0] = (fSlow35 + (0.999000013f * fRec56[1]));
			float fTemp17 = std::tan((fConst2 * fRec56[0]));
			float fTemp18 = (1.0f / fTemp17);
			float fTemp19 = (1.0f - (1.0f / mydsp_faustpower2_f(fTemp17)));
			float fTemp20 = (((fTemp18 + 1.93185163f) / fTemp17) + 1.0f);
			fRec51[0] = ((4.65661287e-10f * ((fRec52[0] * float(iRec53[0])) * ((2.0f * fRec54[0]) + -1.0f))) - (((fRec51[2] * (((fTemp18 + -1.93185163f) / fTemp17) + 1.0f)) + (2.0f * (fRec51[1] * fTemp19))) / fTemp20));
			float fTemp21 = (((fTemp18 + 1.41421354f) / fTemp17) + 1.0f);
			fRec50[0] = (((fRec51[2] + (fRec51[0] + (2.0f * fRec51[1]))) / fTemp20) - (((fRec50[2] * (((fTemp18 + -1.41421354f) / fTemp17) + 1.0f)) + (2.0f * (fTemp19 * fRec50[1]))) / fTemp21));
			float fTemp22 = (((fTemp18 + 0.517638087f) / fTemp17) + 1.0f);
			fRec49[0] = (((fRec50[2] + (fRec50[0] + (2.0f * fRec50[1]))) / fTemp21) - (((fRec49[2] * (((fTemp18 + -0.517638087f) / fTemp17) + 1.0f)) + (2.0f * (fTemp19 * fRec49[1]))) / fTemp22));
			float fTemp23 = (fSlow0 * ((0.5f * ((((((((((((((((fRec0[0] * ftbl0mydspSIG0[int((65536.0f * fRec2[0]))]) + (fRec4[0] * ftbl0mydspSIG0[int((65536.0f * fRec5[0]))])) + (fRec7[0] * ftbl0mydspSIG0[int((65536.0f * fRec8[0]))])) + (fRec10[0] * ftbl0mydspSIG0[int((65536.0f * fRec11[0]))])) + (fRec13[0] * ftbl0mydspSIG0[int((65536.0f * fRec14[0]))])) + (fRec16[0] * ftbl0mydspSIG0[int((65536.0f * fRec17[0]))])) + (fRec19[0] * ftbl0mydspSIG0[int((65536.0f * fRec20[0]))])) + (fRec22[0] * ftbl0mydspSIG0[int((65536.0f * fRec23[0]))])) + (fRec25[0] * ftbl0mydspSIG0[int((65536.0f * fRec26[0]))])) + (fRec28[0] * ftbl0mydspSIG0[int((65536.0f * fRec29[0]))])) + (fRec31[0] * ftbl0mydspSIG0[int((65536.0f * fRec32[0]))])) + (fRec34[0] * ftbl0mydspSIG0[int((65536.0f * fRec35[0]))])) + (fRec37[0] * ftbl0mydspSIG0[int((65536.0f * fRec38[0]))])) + (fRec40[0] * ftbl0mydspSIG0[int((65536.0f * fRec41[0]))])) + (fRec43[0] * ftbl0mydspSIG0[int((65536.0f * fRec44[0]))])) + (fRec46[0] * ftbl0mydspSIG0[int((65536.0f * fRec47[0]))]))) + ((fRec49[2] + (fRec49[0] + (2.0f * fRec49[1]))) / fTemp22)));
			output0[i] = FAUSTFLOAT(fTemp23);
			output1[i] = FAUSTFLOAT(fTemp23);
			fRec0[1] = fRec0[0];
			fRec3[1] = fRec3[0];
			fRec2[1] = fRec2[0];
			fRec4[1] = fRec4[0];
			fRec6[1] = fRec6[0];
			fRec5[1] = fRec5[0];
			fRec7[1] = fRec7[0];
			fRec9[1] = fRec9[0];
			fRec8[1] = fRec8[0];
			fRec10[1] = fRec10[0];
			fRec12[1] = fRec12[0];
			fRec11[1] = fRec11[0];
			fRec13[1] = fRec13[0];
			fRec15[1] = fRec15[0];
			fRec14[1] = fRec14[0];
			fRec16[1] = fRec16[0];
			fRec18[1] = fRec18[0];
			fRec17[1] = fRec17[0];
			fRec19[1] = fRec19[0];
			fRec21[1] = fRec21[0];
			fRec20[1] = fRec20[0];
			fRec22[1] = fRec22[0];
			fRec24[1] = fRec24[0];
			fRec23[1] = fRec23[0];
			fRec25[1] = fRec25[0];
			fRec27[1] = fRec27[0];
			fRec26[1] = fRec26[0];
			fRec28[1] = fRec28[0];
			fRec30[1] = fRec30[0];
			fRec29[1] = fRec29[0];
			fRec31[1] = fRec31[0];
			fRec33[1] = fRec33[0];
			fRec32[1] = fRec32[0];
			fRec34[1] = fRec34[0];
			fRec36[1] = fRec36[0];
			fRec35[1] = fRec35[0];
			fRec37[1] = fRec37[0];
			fRec39[1] = fRec39[0];
			fRec38[1] = fRec38[0];
			fRec40[1] = fRec40[0];
			fRec42[1] = fRec42[0];
			fRec41[1] = fRec41[0];
			fRec43[1] = fRec43[0];
			fRec45[1] = fRec45[0];
			fRec44[1] = fRec44[0];
			fRec46[1] = fRec46[0];
			fRec48[1] = fRec48[0];
			fRec47[1] = fRec47[0];
			fRec52[1] = fRec52[0];
			iRec53[1] = iRec53[0];
			fRec55[1] = fRec55[0];
			fRec54[1] = fRec54[0];
			fRec56[1] = fRec56[0];
			fRec51[2] = fRec51[1];
			fRec51[1] = fRec51[0];
			fRec50[2] = fRec50[1];
			fRec50[1] = fRec50[0];
			fRec49[2] = fRec49[1];
			fRec49[1] = fRec49[0];
		}
	}

};

#endif
