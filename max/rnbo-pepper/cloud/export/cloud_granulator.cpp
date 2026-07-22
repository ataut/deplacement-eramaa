/*******************************************************************************************************************
Copyright (c) 2023 Cycling '74

The code that Max generates automatically and that end users are capable of
exporting and using, and any associated documentation files (the “Software”)
is a work of authorship for which Cycling '74 is the author and owner for
copyright purposes.

This Software is dual-licensed either under the terms of the Cycling '74
License for Max-Generated Code for Export, or alternatively under the terms
of the General Public License (GPL) Version 3. You may use the Software
according to either of these licenses as it is most appropriate for your
project on a case-by-case basis (proprietary or not).

A) Cycling '74 License for Max-Generated Code for Export

A license is hereby granted, free of charge, to any person obtaining a copy
of the Software (“Licensee”) to use, copy, modify, merge, publish, and
distribute copies of the Software, and to permit persons to whom the Software
is furnished to do so, subject to the following conditions:

The Software is licensed to Licensee for all uses that do not include the sale,
sublicensing, or commercial distribution of software that incorporates this
source code. This means that the Licensee is free to use this software for
educational, research, and prototyping purposes, to create musical or other
creative works with software that incorporates this source code, or any other
use that does not constitute selling software that makes use of this source
code. Commercial distribution also includes the packaging of free software with
other paid software, hardware, or software-provided commercial services.

For entities with UNDER $200k in annual revenue or funding, a license is hereby
granted, free of charge, for the sale, sublicensing, or commercial distribution
of software that incorporates this source code, for as long as the entity's
annual revenue remains below $200k annual revenue or funding.

For entities with OVER $200k in annual revenue or funding interested in the
sale, sublicensing, or commercial distribution of software that incorporates
this source code, please send inquiries to licensing@cycling74.com.

The above copyright notice and this license shall be included in all copies or
substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

Please see
https://support.cycling74.com/hc/en-us/articles/10730637742483-RNBO-Export-Licensing-FAQ
for additional information

B) General Public License Version 3 (GPLv3)
Details of the GPLv3 license can be found at: https://www.gnu.org/licenses/gpl-3.0.html
*******************************************************************************************************************/

#include "RNBO_Common.h"
#include "RNBO_AudioSignal.h"

namespace RNBO {


#define trunc(x) ((Int)(x))

#if defined(__GNUC__) || defined(__clang__)
    #define RNBO_RESTRICT __restrict__
#elif defined(_MSC_VER)
    #define RNBO_RESTRICT __restrict
#endif

#define FIXEDSIZEARRAYINIT(...) { }

class rnbomatic : public PatcherInterfaceImpl {
public:

class RNBOSubpatcher_113 : public PatcherInterfaceImpl {
    
    friend class rnbomatic;
    
    public:
    
    RNBOSubpatcher_113()
    {
    }
    
    ~RNBOSubpatcher_113()
    {
    }
    
    virtual rnbomatic* getPatcher() const {
        return static_cast<rnbomatic *>(_parentPatcher);
    }
    
    rnbomatic* getTopLevelPatcher() {
        return this->getPatcher()->getTopLevelPatcher();
    }
    
    void cancelClockEvents()
    {
    }
    
    Index getNumMidiInputPorts() const {
        return 0;
    }
    
    void processMidiEvent(MillisecondTime , int , ConstByteArray , Index ) {}
    
    Index getNumMidiOutputPorts() const {
        return 0;
    }
    
    void process(
        const SampleValue * const* inputs,
        Index numInputs,
        SampleValue * const* outputs,
        Index numOutputs,
        Index n
    ) {
        RNBO_UNUSED(numOutputs);
        RNBO_UNUSED(outputs);
        RNBO_UNUSED(numInputs);
        RNBO_UNUSED(inputs);
        this->vs = n;
        this->updateTime(this->getEngine()->getCurrentTime());
        this->stackprotect_perform(n);
        this->audioProcessSampleCount += this->vs;
    }
    
    void prepareToProcess(number sampleRate, Index maxBlockSize, bool force) {
        if (this->maxvs < maxBlockSize || !this->didAllocateSignals) {
            this->zeroBuffer = resizeSignal(this->zeroBuffer, this->maxvs, maxBlockSize);
            this->dummyBuffer = resizeSignal(this->dummyBuffer, this->maxvs, maxBlockSize);
            this->didAllocateSignals = true;
        }
    
        const bool sampleRateChanged = sampleRate != this->sr;
        const bool maxvsChanged = maxBlockSize != this->maxvs;
        const bool forceDSPSetup = sampleRateChanged || maxvsChanged || force;
    
        if (sampleRateChanged || maxvsChanged) {
            this->vs = maxBlockSize;
            this->maxvs = maxBlockSize;
            this->sr = sampleRate;
            this->invsr = 1 / sampleRate;
        }
    
        RNBO_UNUSED(forceDSPSetup);
    
        if (sampleRateChanged)
            this->onSampleRateChanged(sampleRate);
    }
    
    void setProbingTarget(MessageTag id) {
        switch (id) {
        default:
            {
            this->setProbingIndex(-1);
            break;
            }
        }
    }
    
    void setProbingIndex(ProbingIndex ) {}
    
    Index getProbingChannels(MessageTag outletId) const {
        RNBO_UNUSED(outletId);
        return 0;
    }
    
    Index getIsMuted()  {
        return this->isMuted;
    }
    
    void setIsMuted(Index v)  {
        this->isMuted = v;
    }
    
    Index getPatcherSerial() const {
        return 0;
    }
    
    void getState(PatcherStateInterface& ) {}
    
    void setState() {}
    
    void getPreset(PatcherStateInterface& ) {}
    
    void processTempoEvent(MillisecondTime , Tempo ) {}
    
    void processTransportEvent(MillisecondTime , TransportState ) {}
    
    void processBeatTimeEvent(MillisecondTime , BeatTime ) {}
    
    void onSampleRateChanged(double ) {}
    
    void processTimeSignatureEvent(MillisecondTime , int , int ) {}
    
    void setParameterValue(ParameterIndex , ParameterValue , MillisecondTime ) {}
    
    void processParameterEvent(ParameterIndex index, ParameterValue value, MillisecondTime time) {
        this->setParameterValue(index, value, time);
    }
    
    void processParameterBangEvent(ParameterIndex index, MillisecondTime time) {
        this->setParameterValue(index, this->getParameterValue(index), time);
    }
    
    void processNormalizedParameterEvent(ParameterIndex index, ParameterValue value, MillisecondTime time) {
        this->setParameterValueNormalized(index, value, time);
    }
    
    ParameterValue getParameterValue(ParameterIndex index)  {
        switch (index) {
        default:
            {
            return 0;
            }
        }
    }
    
    ParameterIndex getNumSignalInParameters() const {
        return 0;
    }
    
    ParameterIndex getNumSignalOutParameters() const {
        return 0;
    }
    
    ParameterIndex getNumParameters() const {
        return 0;
    }
    
    ConstCharPointer getParameterName(ParameterIndex index) const {
        switch (index) {
        default:
            {
            return "bogus";
            }
        }
    }
    
    ConstCharPointer getParameterId(ParameterIndex index) const {
        switch (index) {
        default:
            {
            return "bogus";
            }
        }
    }
    
    void getParameterInfo(ParameterIndex , ParameterInfo * ) const {}
    
    void sendParameter(ParameterIndex index, bool ignoreValue) {
        this->getPatcher()->sendParameter(index + this->parameterOffset, ignoreValue);
    }
    
    void setParameterOffset(ParameterIndex offset) {
        this->parameterOffset = offset;
    }
    
    ParameterValue applyStepsToNormalizedParameterValue(ParameterValue normalizedValue, int steps) const {
        if (steps == 1) {
            if (normalizedValue > 0) {
                normalizedValue = 1.;
            }
        } else {
            ParameterValue oneStep = (number)1. / (steps - 1);
            ParameterValue numberOfSteps = rnbo_fround(normalizedValue / oneStep * 1 / (number)1) * (number)1;
            normalizedValue = numberOfSteps * oneStep;
        }
    
        return normalizedValue;
    }
    
    ParameterValue convertToNormalizedParameterValue(ParameterIndex index, ParameterValue value) const {
        switch (index) {
        default:
            {
            return value;
            }
        }
    }
    
    ParameterValue convertFromNormalizedParameterValue(ParameterIndex index, ParameterValue value) const {
        value = (value < 0 ? 0 : (value > 1 ? 1 : value));
    
        switch (index) {
        default:
            {
            return value;
            }
        }
    }
    
    ParameterValue constrainParameterValue(ParameterIndex index, ParameterValue value) const {
        switch (index) {
        default:
            {
            return value;
            }
        }
    }
    
    void scheduleParamInit(ParameterIndex index, Index order) {
        this->getPatcher()->scheduleParamInit(index + this->parameterOffset, order);
    }
    
    void processClockEvent(MillisecondTime , ClockId , bool , ParameterValue ) {}
    
    void processOutletAtCurrentTime(EngineLink* , OutletIndex , ParameterValue ) {}
    
    void processOutletEvent(
        EngineLink* sender,
        OutletIndex index,
        ParameterValue value,
        MillisecondTime time
    ) {
        this->updateTime(time);
        this->processOutletAtCurrentTime(sender, index, value);
    }
    
    void processNumMessage(MessageTag , MessageTag , MillisecondTime , number ) {}
    
    void processListMessage(MessageTag , MessageTag , MillisecondTime , const list& ) {}
    
    void processBangMessage(MessageTag , MessageTag , MillisecondTime ) {}
    
    MessageTagInfo resolveTag(MessageTag tag) const {
        switch (tag) {
    
        }
    
        return nullptr;
    }
    
    DataRef* getDataRef(DataRefIndex index)  {
        switch (index) {
        default:
            {
            return nullptr;
            }
        }
    }
    
    DataRefIndex getNumDataRefs() const {
        return 0;
    }
    
    void fillDataRef(DataRefIndex , DataRef& ) {}
    
    void processDataViewUpdate(DataRefIndex , MillisecondTime ) {}
    
    void initialize() {
        this->assign_defaults();
        this->setState();
    }
    
    protected:
    
    void eventinlet_01_out1_bang_bang() {
        this->eventoutlet_01_in1_bang_bang();
    }
    
    void eventinlet_01_out1_list_set(const list& v) {
        this->eventoutlet_01_in1_list_set(v);
    }
    
    void eventinlet_02_out1_bang_bang() {
        this->expr_02_in1_bang();
    }
    
    void eventinlet_02_out1_list_set(const list& v) {
        {
            if (v->length > 1)
                this->expr_02_in2_set(v[1]);
    
            number converted = (v->length > 0 ? v[0] : 0);
            this->expr_02_in1_set(converted);
        }
    }
    
    void eventinlet_03_out1_bang_bang() {
        this->expr_04_in1_bang();
    }
    
    void eventinlet_03_out1_list_set(const list& v) {
        {
            if (v->length > 1)
                this->expr_04_in2_set(v[1]);
    
            number converted = (v->length > 0 ? v[0] : 0);
            this->expr_04_in1_set(converted);
        }
    }
    
    void eventinlet_04_out1_bang_bang() {
        this->eventoutlet_04_in1_bang_bang();
    }
    
    void eventinlet_04_out1_list_set(const list& v) {
        this->eventoutlet_04_in1_list_set(v);
    }
    
    number msToSamps(MillisecondTime ms, number sampleRate) {
        return ms * sampleRate * 0.001;
    }
    
    MillisecondTime sampsToMs(SampleIndex samps) {
        return samps * (this->invsr * 1000);
    }
    
    Index getMaxBlockSize() const {
        return this->maxvs;
    }
    
    number getSampleRate() const {
        return this->sr;
    }
    
    bool hasFixedVectorSize() const {
        return false;
    }
    
    Index getNumInputChannels() const {
        return 0;
    }
    
    Index getNumOutputChannels() const {
        return 0;
    }
    
    void initializeObjects() {}
    
    void sendOutlet(OutletIndex index, ParameterValue value) {
        this->getEngine()->sendOutlet(this, index, value);
    }
    
    void startup() {}
    
    void allocateDataRefs() {}
    
    void eventoutlet_01_in1_number_set(number v) {
        this->getPatcher()->updateTime(this->_currentTime);
        this->getPatcher()->p_01_out1_number_set(v);
    }
    
    void eventinlet_01_out1_number_set(number v) {
        this->eventoutlet_01_in1_number_set(v);
    }
    
    void maximum_02_index_set(number v) {
        this->maximum_02_index = v;
    }
    
    void eventoutlet_03_in1_number_set(number v) {
        this->getPatcher()->updateTime(this->_currentTime);
        this->getPatcher()->p_01_out3_number_set(v);
    }
    
    void expr_05_out1_set(number v) {
        this->expr_05_out1 = v;
        this->eventoutlet_03_in1_number_set(this->expr_05_out1);
    }
    
    void expr_05_in1_set(number in1) {
        this->expr_05_in1 = in1;
        this->expr_05_out1_set((this->expr_05_in1 == 0. ? 0. : this->expr_05_in2 / this->expr_05_in1));//#map:density_dur/!/_obj-14:1
    }
    
    void maximum_02_out_set(number v) {
        this->maximum_02_out = v;
        this->expr_05_in1_set(v);
    }
    
    void maximum_02_input_set(const list& v) {
        this->maximum_02_input = jsCreateListCopy(v);
    
        if (v->length == 1) {
            if (v[0] > this->maximum_02_right) {
                this->maximum_02_index_set(0);
                this->maximum_02_out_set(v[0]);
            } else {
                this->maximum_02_index_set(1);
                this->maximum_02_out_set(this->maximum_02_right);
            }
        } else if (v->length > 0) {
            int idx = 0;
            number maximum = v[0];
    
            for (Index i = 1; i < v->length; i++) {
                if (v[(Index)i] > maximum) {
                    maximum = v[(Index)i];
                    idx = i;
                }
            }
    
            this->maximum_02_index_set(idx);
            this->maximum_02_out_set(maximum);
        }
    }
    
    void expr_06_out1_set(number v) {
        this->expr_06_out1 = v;
    
        {
            list converted = {this->expr_06_out1};
            this->maximum_02_input_set(converted);
        }
    }
    
    void expr_06_in1_set(number in1) {
        this->expr_06_in1 = in1;
        this->expr_06_out1_set(this->expr_06_in1 + this->expr_06_in1 * this->expr_06_in2);//#map:density_dur/expr_obj-2:1
    }
    
    void maximum_01_index_set(number v) {
        this->maximum_01_index = v;
    }
    
    void eventoutlet_02_in1_number_set(number v) {
        this->getPatcher()->updateTime(this->_currentTime);
        this->getPatcher()->p_01_out2_number_set(v);
    }
    
    void expr_01_out1_set(number v) {
        this->expr_01_out1 = v;
        this->eventoutlet_02_in1_number_set(this->expr_01_out1);
    }
    
    void expr_01_in1_set(number in1) {
        this->expr_01_in1 = in1;
        this->expr_01_out1_set((this->expr_01_in1 == 0. ? 0. : this->expr_01_in2 / this->expr_01_in1));//#map:density_dur/!/_obj-13:1
    }
    
    void maximum_01_out_set(number v) {
        this->maximum_01_out = v;
        this->expr_01_in1_set(v);
    }
    
    void maximum_01_input_set(const list& v) {
        this->maximum_01_input = jsCreateListCopy(v);
    
        if (v->length == 1) {
            if (v[0] > this->maximum_01_right) {
                this->maximum_01_index_set(0);
                this->maximum_01_out_set(v[0]);
            } else {
                this->maximum_01_index_set(1);
                this->maximum_01_out_set(this->maximum_01_right);
            }
        } else if (v->length > 0) {
            int idx = 0;
            number maximum = v[0];
    
            for (Index i = 1; i < v->length; i++) {
                if (v[(Index)i] > maximum) {
                    maximum = v[(Index)i];
                    idx = i;
                }
            }
    
            this->maximum_01_index_set(idx);
            this->maximum_01_out_set(maximum);
        }
    }
    
    void expr_03_out1_set(number v) {
        this->expr_03_out1 = v;
    
        {
            list converted = {this->expr_03_out1};
            this->maximum_01_input_set(converted);
        }
    }
    
    void expr_03_in1_set(number in1) {
        this->expr_03_in1 = in1;
        this->expr_03_out1_set(this->expr_03_in1 - this->expr_03_in1 * this->expr_03_in2);//#map:density_dur/expr_obj-3:1
    }
    
    void expr_06_in2_set(number v) {
        this->expr_06_in2 = v;
    }
    
    void expr_03_in2_set(number v) {
        this->expr_03_in2 = v;
    }
    
    void pak_01_out_set(const list& v) {
        {
            if (v->length > 1)
                this->expr_06_in2_set(v[1]);
    
            number converted = (v->length > 0 ? v[0] : 0);
            this->expr_06_in1_set(converted);
        }
    
        {
            if (v->length > 1)
                this->expr_03_in2_set(v[1]);
    
            number converted = (v->length > 0 ? v[0] : 0);
            this->expr_03_in1_set(converted);
        }
    }
    
    void pak_01_in1_set(number v) {
        this->pak_01_in1 = v;
        list array = list(0, 0);
        array[0] = this->pak_01_in1;
        array[1] = this->pak_01_in2;
        this->pak_01_out_set(array);
    }
    
    void expr_02_out1_set(number v) {
        this->expr_02_out1 = v;
        this->pak_01_in1_set(this->expr_02_out1);
    }
    
    void expr_02_in1_set(number in1) {
        this->expr_02_in1 = in1;
    
        this->expr_02_out1_set(
            (this->expr_02_in2 == 0 ? 0 : (this->expr_02_in2 == 0. ? 0. : this->expr_02_in1 / this->expr_02_in2))
        );//#map:density_dur//_obj-1:1
    }
    
    void eventinlet_02_out1_number_set(number v) {
        this->expr_02_in1_set(v);
    }
    
    void pak_01_in2_set(number v) {
        this->pak_01_in2 = v;
        list array = list(0, 0);
        array[0] = this->pak_01_in1;
        array[1] = this->pak_01_in2;
        this->pak_01_out_set(array);
    }
    
    void expr_04_out1_set(number v) {
        this->expr_04_out1 = v;
        this->pak_01_in2_set(this->expr_04_out1);
    }
    
    void expr_04_in1_set(number in1) {
        this->expr_04_in1 = in1;
    
        this->expr_04_out1_set(
            (this->expr_04_in2 == 0 ? 0 : (this->expr_04_in2 == 0. ? 0. : this->expr_04_in1 / this->expr_04_in2))
        );//#map:density_dur//_obj-15:1
    }
    
    void eventinlet_03_out1_number_set(number v) {
        this->expr_04_in1_set(v);
    }
    
    void eventoutlet_04_in1_number_set(number v) {
        this->getPatcher()->updateTime(this->_currentTime);
        this->getPatcher()->p_01_out4_number_set(v);
    }
    
    void eventinlet_04_out1_number_set(number v) {
        this->eventoutlet_04_in1_number_set(v);
    }
    
    void eventoutlet_01_in1_bang_bang() {
        ;
        this->getPatcher()->updateTime(this->_currentTime);
        this->getPatcher()->p_01_out1_bang_bang();
    }
    
    void eventoutlet_01_in1_list_set(const list& v) {
        this->getPatcher()->updateTime(this->_currentTime);
        this->getPatcher()->p_01_out1_list_set((list)v);
    }
    
    void expr_02_in1_bang() {
        this->expr_02_out1_set(
            (this->expr_02_in2 == 0 ? 0 : (this->expr_02_in2 == 0. ? 0. : this->expr_02_in1 / this->expr_02_in2))
        );//#map:density_dur//_obj-1:1
    }
    
    void expr_02_in2_set(number v) {
        this->expr_02_in2 = v;
    }
    
    void expr_04_in1_bang() {
        this->expr_04_out1_set(
            (this->expr_04_in2 == 0 ? 0 : (this->expr_04_in2 == 0. ? 0. : this->expr_04_in1 / this->expr_04_in2))
        );//#map:density_dur//_obj-15:1
    }
    
    void expr_04_in2_set(number v) {
        this->expr_04_in2 = v;
    }
    
    void eventoutlet_04_in1_bang_bang() {
        ;
        this->getPatcher()->updateTime(this->_currentTime);
        this->getPatcher()->p_01_out4_bang_bang();
    }
    
    void eventoutlet_04_in1_list_set(const list& v) {
        this->getPatcher()->updateTime(this->_currentTime);
        this->getPatcher()->p_01_out4_list_set((list)v);
    }
    
    void stackprotect_perform(Index n) {
        RNBO_UNUSED(n);
        auto __stackprotect_count = this->stackprotect_count;
        __stackprotect_count = 0;
        this->stackprotect_count = __stackprotect_count;
    }
    
    bool stackprotect_check() {
        this->stackprotect_count++;
    
        if (this->stackprotect_count > 128) {
            console->log("STACK OVERFLOW DETECTED - stopped processing branch !");
            return true;
        }
    
        return false;
    }
    
    void updateTime(MillisecondTime time) {
        this->_currentTime = time;
        this->sampleOffsetIntoNextAudioBuffer = (SampleIndex)(rnbo_fround(this->msToSamps(time - this->getEngine()->getCurrentTime(), this->sr)));
    
        if (this->sampleOffsetIntoNextAudioBuffer >= (SampleIndex)(this->vs))
            this->sampleOffsetIntoNextAudioBuffer = (SampleIndex)(this->vs) - 1;
    
        if (this->sampleOffsetIntoNextAudioBuffer < 0)
            this->sampleOffsetIntoNextAudioBuffer = 0;
    }
    
    void assign_defaults()
    {
        expr_01_in1 = 0;
        expr_01_in2 = 1;
        expr_01_out1 = 0;
        maximum_01_right = 0.001;
        maximum_01_out = 0;
        maximum_01_index = 0;
        expr_02_in1 = 0;
        expr_02_in2 = 1000;
        expr_02_out1 = 0;
        expr_03_in1 = 0;
        expr_03_in2 = 0;
        expr_03_out1 = 0;
        pak_01_in1 = 0;
        pak_01_in2 = 0;
        expr_04_in1 = 0;
        expr_04_in2 = 100;
        expr_04_out1 = 0;
        expr_05_in1 = 0;
        expr_05_in2 = 1;
        expr_05_out1 = 0;
        maximum_02_right = 0.001;
        maximum_02_out = 0;
        maximum_02_index = 0;
        expr_06_in1 = 0;
        expr_06_in2 = 0;
        expr_06_out1 = 0;
        _currentTime = 0;
        audioProcessSampleCount = 0;
        sampleOffsetIntoNextAudioBuffer = 0;
        zeroBuffer = nullptr;
        dummyBuffer = nullptr;
        didAllocateSignals = 0;
        vs = 0;
        maxvs = 0;
        sr = 44100;
        invsr = 0.00002267573696;
        stackprotect_count = 0;
        _voiceIndex = 0;
        _noteNumber = 0;
        isMuted = 1;
        parameterOffset = 0;
    }
    
    // member variables
    
        number expr_01_in1;
        number expr_01_in2;
        number expr_01_out1;
        list maximum_01_input;
        number maximum_01_right;
        number maximum_01_out;
        number maximum_01_index;
        number expr_02_in1;
        number expr_02_in2;
        number expr_02_out1;
        number expr_03_in1;
        number expr_03_in2;
        number expr_03_out1;
        number pak_01_in1;
        number pak_01_in2;
        number expr_04_in1;
        number expr_04_in2;
        number expr_04_out1;
        number expr_05_in1;
        number expr_05_in2;
        number expr_05_out1;
        list maximum_02_input;
        number maximum_02_right;
        number maximum_02_out;
        number maximum_02_index;
        number expr_06_in1;
        number expr_06_in2;
        number expr_06_out1;
        MillisecondTime _currentTime;
        SampleIndex audioProcessSampleCount;
        SampleIndex sampleOffsetIntoNextAudioBuffer;
        signal zeroBuffer;
        signal dummyBuffer;
        bool didAllocateSignals;
        Index vs;
        Index maxvs;
        number sr;
        number invsr;
        number stackprotect_count;
        Index _voiceIndex;
        Int _noteNumber;
        Index isMuted;
        ParameterIndex parameterOffset;
    
};

class RNBOSubpatcher_114 : public PatcherInterfaceImpl {
    
    friend class rnbomatic;
    
    public:
    
    RNBOSubpatcher_114()
    {
    }
    
    ~RNBOSubpatcher_114()
    {
    }
    
    virtual rnbomatic* getPatcher() const {
        return static_cast<rnbomatic *>(_parentPatcher);
    }
    
    rnbomatic* getTopLevelPatcher() {
        return this->getPatcher()->getTopLevelPatcher();
    }
    
    void cancelClockEvents()
    {
    }
    
    MillisecondTime sampstoms(number samps) {
        return samps * 1000 / this->sr;
    }
    
    Index getNumMidiInputPorts() const {
        return 0;
    }
    
    void processMidiEvent(MillisecondTime , int , ConstByteArray , Index ) {}
    
    Index getNumMidiOutputPorts() const {
        return 0;
    }
    
    void process(
        const SampleValue * const* inputs,
        Index numInputs,
        SampleValue * const* outputs,
        Index numOutputs,
        Index n
    ) {
        RNBO_UNUSED(numOutputs);
        RNBO_UNUSED(outputs);
        RNBO_UNUSED(numInputs);
        RNBO_UNUSED(inputs);
        this->vs = n;
        this->updateTime(this->getEngine()->getCurrentTime());
        this->stackprotect_perform(n);
        this->audioProcessSampleCount += this->vs;
    }
    
    void prepareToProcess(number sampleRate, Index maxBlockSize, bool force) {
        if (this->maxvs < maxBlockSize || !this->didAllocateSignals) {
            this->zeroBuffer = resizeSignal(this->zeroBuffer, this->maxvs, maxBlockSize);
            this->dummyBuffer = resizeSignal(this->dummyBuffer, this->maxvs, maxBlockSize);
            this->didAllocateSignals = true;
        }
    
        const bool sampleRateChanged = sampleRate != this->sr;
        const bool maxvsChanged = maxBlockSize != this->maxvs;
        const bool forceDSPSetup = sampleRateChanged || maxvsChanged || force;
    
        if (sampleRateChanged || maxvsChanged) {
            this->vs = maxBlockSize;
            this->maxvs = maxBlockSize;
            this->sr = sampleRate;
            this->invsr = 1 / sampleRate;
        }
    
        RNBO_UNUSED(forceDSPSetup);
    
        if (sampleRateChanged)
            this->onSampleRateChanged(sampleRate);
    }
    
    void setProbingTarget(MessageTag id) {
        switch (id) {
        default:
            {
            this->setProbingIndex(-1);
            break;
            }
        }
    }
    
    void setProbingIndex(ProbingIndex ) {}
    
    Index getProbingChannels(MessageTag outletId) const {
        RNBO_UNUSED(outletId);
        return 0;
    }
    
    Index getIsMuted()  {
        return this->isMuted;
    }
    
    void setIsMuted(Index v)  {
        this->isMuted = v;
    }
    
    Index getPatcherSerial() const {
        return 0;
    }
    
    void getState(PatcherStateInterface& ) {}
    
    void setState() {}
    
    void getPreset(PatcherStateInterface& ) {}
    
    void processTempoEvent(MillisecondTime time, Tempo tempo) {
        this->updateTime(time);
        this->translate_01_onTempoChanged(tempo);
    }
    
    void processTransportEvent(MillisecondTime , TransportState ) {}
    
    void processBeatTimeEvent(MillisecondTime , BeatTime ) {}
    
    void onSampleRateChanged(double samplerate) {
        this->translate_01_onSampleRateChanged(samplerate);
    }
    
    void processTimeSignatureEvent(MillisecondTime , int , int ) {}
    
    void setParameterValue(ParameterIndex , ParameterValue , MillisecondTime ) {}
    
    void processParameterEvent(ParameterIndex index, ParameterValue value, MillisecondTime time) {
        this->setParameterValue(index, value, time);
    }
    
    void processParameterBangEvent(ParameterIndex index, MillisecondTime time) {
        this->setParameterValue(index, this->getParameterValue(index), time);
    }
    
    void processNormalizedParameterEvent(ParameterIndex index, ParameterValue value, MillisecondTime time) {
        this->setParameterValueNormalized(index, value, time);
    }
    
    ParameterValue getParameterValue(ParameterIndex index)  {
        switch (index) {
        default:
            {
            return 0;
            }
        }
    }
    
    ParameterIndex getNumSignalInParameters() const {
        return 0;
    }
    
    ParameterIndex getNumSignalOutParameters() const {
        return 0;
    }
    
    ParameterIndex getNumParameters() const {
        return 0;
    }
    
    ConstCharPointer getParameterName(ParameterIndex index) const {
        switch (index) {
        default:
            {
            return "bogus";
            }
        }
    }
    
    ConstCharPointer getParameterId(ParameterIndex index) const {
        switch (index) {
        default:
            {
            return "bogus";
            }
        }
    }
    
    void getParameterInfo(ParameterIndex , ParameterInfo * ) const {}
    
    void sendParameter(ParameterIndex index, bool ignoreValue) {
        this->getPatcher()->sendParameter(index + this->parameterOffset, ignoreValue);
    }
    
    void setParameterOffset(ParameterIndex offset) {
        this->parameterOffset = offset;
    }
    
    ParameterValue applyStepsToNormalizedParameterValue(ParameterValue normalizedValue, int steps) const {
        if (steps == 1) {
            if (normalizedValue > 0) {
                normalizedValue = 1.;
            }
        } else {
            ParameterValue oneStep = (number)1. / (steps - 1);
            ParameterValue numberOfSteps = rnbo_fround(normalizedValue / oneStep * 1 / (number)1) * (number)1;
            normalizedValue = numberOfSteps * oneStep;
        }
    
        return normalizedValue;
    }
    
    ParameterValue convertToNormalizedParameterValue(ParameterIndex index, ParameterValue value) const {
        switch (index) {
        default:
            {
            return value;
            }
        }
    }
    
    ParameterValue convertFromNormalizedParameterValue(ParameterIndex index, ParameterValue value) const {
        value = (value < 0 ? 0 : (value > 1 ? 1 : value));
    
        switch (index) {
        default:
            {
            return value;
            }
        }
    }
    
    ParameterValue constrainParameterValue(ParameterIndex index, ParameterValue value) const {
        switch (index) {
        default:
            {
            return value;
            }
        }
    }
    
    void scheduleParamInit(ParameterIndex index, Index order) {
        this->getPatcher()->scheduleParamInit(index + this->parameterOffset, order);
    }
    
    void processClockEvent(MillisecondTime , ClockId , bool , ParameterValue ) {}
    
    void processOutletAtCurrentTime(EngineLink* , OutletIndex , ParameterValue ) {}
    
    void processOutletEvent(
        EngineLink* sender,
        OutletIndex index,
        ParameterValue value,
        MillisecondTime time
    ) {
        this->updateTime(time);
        this->processOutletAtCurrentTime(sender, index, value);
    }
    
    void processNumMessage(MessageTag tag, MessageTag objectId, MillisecondTime time, number payload) {
        this->updateTime(time);
    
        switch (tag) {
        case TAG("valin"):
            {
            if (TAG("samples/number_obj-20") == objectId)
                this->numberobj_01_valin_set(payload);
    
            break;
            }
        case TAG("format"):
            {
            if (TAG("samples/number_obj-20") == objectId)
                this->numberobj_01_format_set(payload);
    
            break;
            }
        }
    }
    
    void processListMessage(MessageTag , MessageTag , MillisecondTime , const list& ) {}
    
    void processBangMessage(MessageTag , MessageTag , MillisecondTime ) {}
    
    MessageTagInfo resolveTag(MessageTag tag) const {
        switch (tag) {
        case TAG("valout"):
            {
            return "valout";
            }
        case TAG("samples/number_obj-20"):
            {
            return "samples/number_obj-20";
            }
        case TAG("setup"):
            {
            return "setup";
            }
        case TAG("valin"):
            {
            return "valin";
            }
        case TAG("format"):
            {
            return "format";
            }
        }
    
        return nullptr;
    }
    
    DataRef* getDataRef(DataRefIndex index)  {
        switch (index) {
        default:
            {
            return nullptr;
            }
        }
    }
    
    DataRefIndex getNumDataRefs() const {
        return 0;
    }
    
    void fillDataRef(DataRefIndex , DataRef& ) {}
    
    void processDataViewUpdate(DataRefIndex , MillisecondTime ) {}
    
    void initialize() {
        this->assign_defaults();
        this->setState();
    }
    
    protected:
    
    void eventinlet_05_out1_bang_bang() {
        this->expr_07_in1_bang();
    }
    
    void eventinlet_05_out1_list_set(const list& v) {
        {
            if (v->length > 1)
                this->expr_07_in2_set(v[1]);
    
            number converted = (v->length > 0 ? v[0] : 0);
            this->expr_07_in1_set(converted);
        }
    }
    
    void eventinlet_06_out1_bang_bang() {
        this->expr_08_in1_bang();
    }
    
    void eventinlet_06_out1_list_set(const list& v) {
        {
            if (v->length > 1)
                this->expr_08_in2_set(v[1]);
    
            number converted = (v->length > 0 ? v[0] : 0);
            this->expr_08_in1_set(converted);
        }
    }
    
    void numberobj_01_valin_set(number v) {
        this->numberobj_01_value_set(v);
    }
    
    void numberobj_01_format_set(number v) {
        this->numberobj_01_currentFormat = trunc((v > 6 ? 6 : (v < 0 ? 0 : v)));
    }
    
    number msToSamps(MillisecondTime ms, number sampleRate) {
        return ms * sampleRate * 0.001;
    }
    
    MillisecondTime sampsToMs(SampleIndex samps) {
        return samps * (this->invsr * 1000);
    }
    
    Index getMaxBlockSize() const {
        return this->maxvs;
    }
    
    number getSampleRate() const {
        return this->sr;
    }
    
    bool hasFixedVectorSize() const {
        return false;
    }
    
    Index getNumInputChannels() const {
        return 0;
    }
    
    Index getNumOutputChannels() const {
        return 0;
    }
    
    void initializeObjects() {
        this->numberobj_01_init();
    }
    
    void sendOutlet(OutletIndex index, ParameterValue value) {
        this->getEngine()->sendOutlet(this, index, value);
    }
    
    void startup() {}
    
    void allocateDataRefs() {}
    
    void eventoutlet_05_in1_number_set(number v) {
        this->getPatcher()->updateTime(this->_currentTime);
        this->getPatcher()->p_02_out1_number_set(v);
    }
    
    void expr_07_out1_set(number v) {
        this->expr_07_out1 = v;
        this->eventoutlet_05_in1_number_set(this->expr_07_out1);
    }
    
    void expr_07_in1_set(number in1) {
        this->expr_07_in1 = in1;
        this->expr_07_out1_set(this->expr_07_in1 * this->expr_07_in2);//#map:samples/*_obj-9:1
    }
    
    void eventinlet_05_out1_number_set(number v) {
        this->expr_07_in1_set(v);
    }
    
    void eventoutlet_06_in1_number_set(number v) {
        this->getPatcher()->updateTime(this->_currentTime);
        this->getPatcher()->p_02_out2_number_set(v);
    }
    
    void expr_08_out1_set(number v) {
        this->expr_08_out1 = v;
        this->eventoutlet_06_in1_number_set(this->expr_08_out1);
    }
    
    void expr_08_in1_set(number in1) {
        this->expr_08_in1 = in1;
        this->expr_08_out1_set(this->expr_08_in1 * this->expr_08_in2);//#map:samples/*_obj-10:1
    }
    
    void eventinlet_06_out1_number_set(number v) {
        this->expr_08_in1_set(v);
    }
    
    void expr_07_in1_bang() {
        this->expr_07_out1_set(this->expr_07_in1 * this->expr_07_in2);//#map:samples/*_obj-9:1
    }
    
    void expr_07_in2_set(number v) {
        this->expr_07_in2 = v;
    }
    
    void expr_08_in1_bang() {
        this->expr_08_out1_set(this->expr_08_in1 * this->expr_08_in2);//#map:samples/*_obj-10:1
    }
    
    void expr_08_in2_set(number v) {
        this->expr_08_in2 = v;
    }
    
    void numberobj_01_output_set(number v) {
        this->expr_08_in2_set(v);
        this->expr_07_in2_set(v);
    }
    
    void numberobj_01_value_set(number v) {
        this->numberobj_01_value_setter(v);
        v = this->numberobj_01_value;
        number localvalue = v;
    
        if (this->numberobj_01_currentFormat != 6) {
            localvalue = trunc(localvalue);
        }
    
        this->getEngine()->sendNumMessage(
            TAG("valout"),
            TAG("samples/number_obj-20"),
            localvalue,
            this->_currentTime
        );
    
        this->numberobj_01_output_set(localvalue);
    }
    
    void translate_01_out_set(number v) {
        this->numberobj_01_value_set(v);
    }
    
    void translate_01_value_set(number v) {
        this->translate_01_value = v;
    
        {
            {
                {
                    {
                        {
                            this->translate_01_out_set(this->sampstoms(v));
                        }
                    }
                }
            }
        }
    }
    
    void receive_01_output_number_set(number v) {
        this->receive_01_output_number = v;
        this->translate_01_value_set(v);
    }
    
    void stackprotect_perform(Index n) {
        RNBO_UNUSED(n);
        auto __stackprotect_count = this->stackprotect_count;
        __stackprotect_count = 0;
        this->stackprotect_count = __stackprotect_count;
    }
    
    void numberobj_01_value_setter(number v) {
        number localvalue = v;
    
        if (this->numberobj_01_currentFormat != 6) {
            localvalue = trunc(localvalue);
        }
    
        this->numberobj_01_value = localvalue;
    }
    
    void numberobj_01_init() {
        this->numberobj_01_currentFormat = 6;
        this->getEngine()->sendNumMessage(TAG("setup"), TAG("samples/number_obj-20"), 1, this->_currentTime);
    }
    
    void numberobj_01_getPresetValue(PatcherStateInterface& preset) {
        preset["value"] = this->numberobj_01_value;
    }
    
    void numberobj_01_setPresetValue(PatcherStateInterface& preset) {
        if ((bool)(stateIsEmpty(preset)))
            return;
    
        this->numberobj_01_value_set(preset["value"]);
    }
    
    void translate_01_onTempoChanged(number ) {}
    
    void translate_01_onSampleRateChanged(number samplerate) {
        RNBO_UNUSED(samplerate);
    
        {
            this->translate_01_value_set(this->translate_01_value);
        }
    }
    
    bool stackprotect_check() {
        this->stackprotect_count++;
    
        if (this->stackprotect_count > 128) {
            console->log("STACK OVERFLOW DETECTED - stopped processing branch !");
            return true;
        }
    
        return false;
    }
    
    void updateTime(MillisecondTime time) {
        this->_currentTime = time;
        this->sampleOffsetIntoNextAudioBuffer = (SampleIndex)(rnbo_fround(this->msToSamps(time - this->getEngine()->getCurrentTime(), this->sr)));
    
        if (this->sampleOffsetIntoNextAudioBuffer >= (SampleIndex)(this->vs))
            this->sampleOffsetIntoNextAudioBuffer = (SampleIndex)(this->vs) - 1;
    
        if (this->sampleOffsetIntoNextAudioBuffer < 0)
            this->sampleOffsetIntoNextAudioBuffer = 0;
    }
    
    void assign_defaults()
    {
        expr_07_in1 = 0;
        expr_07_in2 = 0;
        expr_07_out1 = 0;
        expr_08_in1 = 0;
        expr_08_in2 = 0;
        expr_08_out1 = 0;
        numberobj_01_value = 0;
        numberobj_01_value_setter(numberobj_01_value);
        translate_01_value = 0;
        receive_01_output_number = 0;
        _currentTime = 0;
        audioProcessSampleCount = 0;
        sampleOffsetIntoNextAudioBuffer = 0;
        zeroBuffer = nullptr;
        dummyBuffer = nullptr;
        didAllocateSignals = 0;
        vs = 0;
        maxvs = 0;
        sr = 44100;
        invsr = 0.00002267573696;
        numberobj_01_currentFormat = 6;
        numberobj_01_lastValue = 0;
        stackprotect_count = 0;
        _voiceIndex = 0;
        _noteNumber = 0;
        isMuted = 1;
        parameterOffset = 0;
    }
    
    // member variables
    
        number expr_07_in1;
        number expr_07_in2;
        number expr_07_out1;
        number expr_08_in1;
        number expr_08_in2;
        number expr_08_out1;
        number numberobj_01_value;
        number translate_01_value;
        number receive_01_output_number;
        list receive_01_output_list;
        MillisecondTime _currentTime;
        SampleIndex audioProcessSampleCount;
        SampleIndex sampleOffsetIntoNextAudioBuffer;
        signal zeroBuffer;
        signal dummyBuffer;
        bool didAllocateSignals;
        Index vs;
        Index maxvs;
        number sr;
        number invsr;
        Int numberobj_01_currentFormat;
        number numberobj_01_lastValue;
        number stackprotect_count;
        Index _voiceIndex;
        Int _noteNumber;
        Index isMuted;
        ParameterIndex parameterOffset;
    
};

class RNBOSubpatcher_115 : public PatcherInterfaceImpl {
    
    friend class rnbomatic;
    
    public:
    
    RNBOSubpatcher_115()
    {
    }
    
    ~RNBOSubpatcher_115()
    {
    }
    
    virtual rnbomatic* getPatcher() const {
        return static_cast<rnbomatic *>(_parentPatcher);
    }
    
    rnbomatic* getTopLevelPatcher() {
        return this->getPatcher()->getTopLevelPatcher();
    }
    
    void cancelClockEvents()
    {
    }
    
    number mstosamps(MillisecondTime ms) {
        return ms * this->sr * 0.001;
    }
    
    Index getNumMidiInputPorts() const {
        return 0;
    }
    
    void processMidiEvent(MillisecondTime , int , ConstByteArray , Index ) {}
    
    Index getNumMidiOutputPorts() const {
        return 0;
    }
    
    void process(
        const SampleValue * const* inputs,
        Index numInputs,
        SampleValue * const* outputs,
        Index numOutputs,
        Index n
    ) {
        RNBO_UNUSED(numOutputs);
        RNBO_UNUSED(outputs);
        RNBO_UNUSED(numInputs);
        RNBO_UNUSED(inputs);
        this->vs = n;
        this->updateTime(this->getEngine()->getCurrentTime());
        this->stackprotect_perform(n);
        this->audioProcessSampleCount += this->vs;
    }
    
    void prepareToProcess(number sampleRate, Index maxBlockSize, bool force) {
        if (this->maxvs < maxBlockSize || !this->didAllocateSignals) {
            this->zeroBuffer = resizeSignal(this->zeroBuffer, this->maxvs, maxBlockSize);
            this->dummyBuffer = resizeSignal(this->dummyBuffer, this->maxvs, maxBlockSize);
            this->didAllocateSignals = true;
        }
    
        const bool sampleRateChanged = sampleRate != this->sr;
        const bool maxvsChanged = maxBlockSize != this->maxvs;
        const bool forceDSPSetup = sampleRateChanged || maxvsChanged || force;
    
        if (sampleRateChanged || maxvsChanged) {
            this->vs = maxBlockSize;
            this->maxvs = maxBlockSize;
            this->sr = sampleRate;
            this->invsr = 1 / sampleRate;
        }
    
        RNBO_UNUSED(forceDSPSetup);
    
        if (sampleRateChanged)
            this->onSampleRateChanged(sampleRate);
    }
    
    void setProbingTarget(MessageTag id) {
        switch (id) {
        default:
            {
            this->setProbingIndex(-1);
            break;
            }
        }
    }
    
    void setProbingIndex(ProbingIndex ) {}
    
    Index getProbingChannels(MessageTag outletId) const {
        RNBO_UNUSED(outletId);
        return 0;
    }
    
    Index getIsMuted()  {
        return this->isMuted;
    }
    
    void setIsMuted(Index v)  {
        this->isMuted = v;
    }
    
    Index getPatcherSerial() const {
        return 0;
    }
    
    void getState(PatcherStateInterface& ) {}
    
    void setState() {}
    
    void getPreset(PatcherStateInterface& ) {}
    
    void processTempoEvent(MillisecondTime time, Tempo tempo) {
        this->updateTime(time);
        this->translate_02_onTempoChanged(tempo);
        this->translate_03_onTempoChanged(tempo);
    }
    
    void processTransportEvent(MillisecondTime , TransportState ) {}
    
    void processBeatTimeEvent(MillisecondTime , BeatTime ) {}
    
    void onSampleRateChanged(double samplerate) {
        this->translate_02_onSampleRateChanged(samplerate);
        this->translate_03_onSampleRateChanged(samplerate);
    }
    
    void processTimeSignatureEvent(MillisecondTime , int , int ) {}
    
    void setParameterValue(ParameterIndex , ParameterValue , MillisecondTime ) {}
    
    void processParameterEvent(ParameterIndex index, ParameterValue value, MillisecondTime time) {
        this->setParameterValue(index, value, time);
    }
    
    void processParameterBangEvent(ParameterIndex index, MillisecondTime time) {
        this->setParameterValue(index, this->getParameterValue(index), time);
    }
    
    void processNormalizedParameterEvent(ParameterIndex index, ParameterValue value, MillisecondTime time) {
        this->setParameterValueNormalized(index, value, time);
    }
    
    ParameterValue getParameterValue(ParameterIndex index)  {
        switch (index) {
        default:
            {
            return 0;
            }
        }
    }
    
    ParameterIndex getNumSignalInParameters() const {
        return 0;
    }
    
    ParameterIndex getNumSignalOutParameters() const {
        return 0;
    }
    
    ParameterIndex getNumParameters() const {
        return 0;
    }
    
    ConstCharPointer getParameterName(ParameterIndex index) const {
        switch (index) {
        default:
            {
            return "bogus";
            }
        }
    }
    
    ConstCharPointer getParameterId(ParameterIndex index) const {
        switch (index) {
        default:
            {
            return "bogus";
            }
        }
    }
    
    void getParameterInfo(ParameterIndex , ParameterInfo * ) const {}
    
    void sendParameter(ParameterIndex index, bool ignoreValue) {
        this->getPatcher()->sendParameter(index + this->parameterOffset, ignoreValue);
    }
    
    void setParameterOffset(ParameterIndex offset) {
        this->parameterOffset = offset;
    }
    
    ParameterValue applyStepsToNormalizedParameterValue(ParameterValue normalizedValue, int steps) const {
        if (steps == 1) {
            if (normalizedValue > 0) {
                normalizedValue = 1.;
            }
        } else {
            ParameterValue oneStep = (number)1. / (steps - 1);
            ParameterValue numberOfSteps = rnbo_fround(normalizedValue / oneStep * 1 / (number)1) * (number)1;
            normalizedValue = numberOfSteps * oneStep;
        }
    
        return normalizedValue;
    }
    
    ParameterValue convertToNormalizedParameterValue(ParameterIndex index, ParameterValue value) const {
        switch (index) {
        default:
            {
            return value;
            }
        }
    }
    
    ParameterValue convertFromNormalizedParameterValue(ParameterIndex index, ParameterValue value) const {
        value = (value < 0 ? 0 : (value > 1 ? 1 : value));
    
        switch (index) {
        default:
            {
            return value;
            }
        }
    }
    
    ParameterValue constrainParameterValue(ParameterIndex index, ParameterValue value) const {
        switch (index) {
        default:
            {
            return value;
            }
        }
    }
    
    void scheduleParamInit(ParameterIndex index, Index order) {
        this->getPatcher()->scheduleParamInit(index + this->parameterOffset, order);
    }
    
    void processClockEvent(MillisecondTime , ClockId , bool , ParameterValue ) {}
    
    void processOutletAtCurrentTime(EngineLink* , OutletIndex , ParameterValue ) {}
    
    void processOutletEvent(
        EngineLink* sender,
        OutletIndex index,
        ParameterValue value,
        MillisecondTime time
    ) {
        this->updateTime(time);
        this->processOutletAtCurrentTime(sender, index, value);
    }
    
    void processNumMessage(MessageTag , MessageTag , MillisecondTime , number ) {}
    
    void processListMessage(MessageTag , MessageTag , MillisecondTime , const list& ) {}
    
    void processBangMessage(MessageTag , MessageTag , MillisecondTime ) {}
    
    MessageTagInfo resolveTag(MessageTag tag) const {
        switch (tag) {
    
        }
    
        return nullptr;
    }
    
    DataRef* getDataRef(DataRefIndex index)  {
        switch (index) {
        default:
            {
            return nullptr;
            }
        }
    }
    
    DataRefIndex getNumDataRefs() const {
        return 0;
    }
    
    void fillDataRef(DataRefIndex , DataRef& ) {}
    
    void processDataViewUpdate(DataRefIndex , MillisecondTime ) {}
    
    void initialize() {
        this->assign_defaults();
        this->setState();
    }
    
    protected:
    
    void eventinlet_07_out1_bang_bang() {
        this->pak_02_in1_bang();
    }
    
    void eventinlet_07_out1_list_set(const list& v) {
        {
            if (v->length > 1)
                this->pak_02_in2_set(v[1]);
    
            number converted = (v->length > 0 ? v[0] : 0);
            this->pak_02_in1_set(converted);
        }
    }
    
    void eventinlet_08_out1_bang_bang() {
        this->expr_10_in1_bang();
    }
    
    void eventinlet_08_out1_list_set(const list& v) {
        {
            if (v->length > 1)
                this->expr_10_in2_set(v[1]);
    
            number converted = (v->length > 0 ? v[0] : 0);
            this->expr_10_in1_set(converted);
        }
    }
    
    void eventinlet_09_out1_bang_bang() {
        this->maximum_03_input_bang();
    }
    
    void eventinlet_09_out1_list_set(const list& v) {
        this->maximum_03_input_set(v);
    }
    
    number msToSamps(MillisecondTime ms, number sampleRate) {
        return ms * sampleRate * 0.001;
    }
    
    MillisecondTime sampsToMs(SampleIndex samps) {
        return samps * (this->invsr * 1000);
    }
    
    Index getMaxBlockSize() const {
        return this->maxvs;
    }
    
    number getSampleRate() const {
        return this->sr;
    }
    
    bool hasFixedVectorSize() const {
        return false;
    }
    
    Index getNumInputChannels() const {
        return 0;
    }
    
    Index getNumOutputChannels() const {
        return 0;
    }
    
    void initializeObjects() {}
    
    void sendOutlet(OutletIndex index, ParameterValue value) {
        this->getEngine()->sendOutlet(this, index, value);
    }
    
    void startup() {}
    
    void allocateDataRefs() {}
    
    void eventoutlet_08_in1_number_set(number v) {
        this->getPatcher()->updateTime(this->_currentTime);
        this->getPatcher()->p_03_out2_number_set(v);
    }
    
    void translate_03_out_set(number v) {
        this->eventoutlet_08_in1_number_set(v);
    }
    
    void translate_03_value_set(number v) {
        this->translate_03_value = v;
    
        {
            {
                {
                    {
                        {
                            this->translate_03_out_set(this->mstosamps(v));
                        }
                    }
                }
            }
        }
    }
    
    void expr_11_out1_set(number v) {
        this->expr_11_out1 = v;
        this->translate_03_value_set(this->expr_11_out1);
    }
    
    void expr_11_in1_set(number in1) {
        this->expr_11_in1 = in1;
        this->expr_11_out1_set(this->expr_11_in1 + this->expr_11_in2);//#map:pos[1]/+_obj-2:1
    }
    
    void eventoutlet_07_in1_number_set(number v) {
        this->getPatcher()->updateTime(this->_currentTime);
        this->getPatcher()->p_03_out1_number_set(v);
    }
    
    void translate_02_out_set(number v) {
        this->eventoutlet_07_in1_number_set(v);
    }
    
    void translate_02_value_set(number v) {
        this->translate_02_value = v;
    
        {
            {
                {
                    {
                        {
                            this->translate_02_out_set(this->mstosamps(v));
                        }
                    }
                }
            }
        }
    }
    
    void expr_09_out1_set(number v) {
        this->expr_09_out1 = v;
        this->translate_02_value_set(this->expr_09_out1);
    }
    
    void expr_09_in1_set(number in1) {
        this->expr_09_in1 = in1;
        this->expr_09_out1_set(this->expr_09_in1 - this->expr_09_in2);//#map:pos[1]/-_obj-3:1
    }
    
    void expr_11_in2_set(number v) {
        this->expr_11_in2 = v;
    }
    
    void expr_09_in2_set(number v) {
        this->expr_09_in2 = v;
    }
    
    void pak_02_out_set(const list& v) {
        {
            if (v->length > 1)
                this->expr_11_in2_set(v[1]);
    
            number converted = (v->length > 0 ? v[0] : 0);
            this->expr_11_in1_set(converted);
        }
    
        {
            if (v->length > 1)
                this->expr_09_in2_set(v[1]);
    
            number converted = (v->length > 0 ? v[0] : 0);
            this->expr_09_in1_set(converted);
        }
    }
    
    void pak_02_in1_set(number v) {
        this->pak_02_in1 = v;
        list array = list(0, 0);
        array[0] = this->pak_02_in1;
        array[1] = this->pak_02_in2;
        this->pak_02_out_set(array);
    }
    
    void eventinlet_07_out1_number_set(number v) {
        this->pak_02_in1_set(v);
    }
    
    void pak_02_in2_set(number v) {
        this->pak_02_in2 = v;
        list array = list(0, 0);
        array[0] = this->pak_02_in1;
        array[1] = this->pak_02_in2;
        this->pak_02_out_set(array);
    }
    
    void expr_10_out1_set(number v) {
        this->expr_10_out1 = v;
        this->pak_02_in2_set(this->expr_10_out1);
    }
    
    void expr_10_in1_set(number in1) {
        this->expr_10_in1 = in1;
    
        this->expr_10_out1_set(
            (this->expr_10_in2 == 0 ? 0 : (this->expr_10_in2 == 0. ? 0. : this->expr_10_in1 / this->expr_10_in2))
        );//#map:pos[1]//_obj-15:1
    }
    
    void eventinlet_08_out1_number_set(number v) {
        this->expr_10_in1_set(v);
    }
    
    void maximum_03_index_set(number v) {
        this->maximum_03_index = v;
    }
    
    void eventoutlet_09_in1_number_set(number v) {
        this->getPatcher()->updateTime(this->_currentTime);
        this->getPatcher()->p_03_out3_number_set(v);
    }
    
    void maximum_03_out_set(number v) {
        this->maximum_03_out = v;
        this->eventoutlet_09_in1_number_set(v);
    }
    
    void maximum_03_input_set(const list& v) {
        this->maximum_03_input = jsCreateListCopy(v);
    
        if (v->length == 1) {
            if (v[0] > this->maximum_03_right) {
                this->maximum_03_index_set(0);
                this->maximum_03_out_set(v[0]);
            } else {
                this->maximum_03_index_set(1);
                this->maximum_03_out_set(this->maximum_03_right);
            }
        } else if (v->length > 0) {
            int idx = 0;
            number maximum = v[0];
    
            for (Index i = 1; i < v->length; i++) {
                if (v[(Index)i] > maximum) {
                    maximum = v[(Index)i];
                    idx = i;
                }
            }
    
            this->maximum_03_index_set(idx);
            this->maximum_03_out_set(maximum);
        }
    }
    
    void eventinlet_09_out1_number_set(number v) {
        {
            list converted = {v};
            this->maximum_03_input_set(converted);
        }
    }
    
    void pak_02_in1_bang() {
        list array = list(0, 0);
        array[0] = this->pak_02_in1;
        array[1] = this->pak_02_in2;
        this->pak_02_out_set(array);
    }
    
    void expr_10_in1_bang() {
        this->expr_10_out1_set(
            (this->expr_10_in2 == 0 ? 0 : (this->expr_10_in2 == 0. ? 0. : this->expr_10_in1 / this->expr_10_in2))
        );//#map:pos[1]//_obj-15:1
    }
    
    void expr_10_in2_set(number v) {
        this->expr_10_in2 = v;
    }
    
    void maximum_03_input_bang() {
        list v = this->maximum_03_input;
    
        if (v->length == 1) {
            if (v[0] > this->maximum_03_right) {
                this->maximum_03_index_set(0);
                this->maximum_03_out_set(v[0]);
            } else {
                this->maximum_03_index_set(1);
                this->maximum_03_out_set(this->maximum_03_right);
            }
        } else if (v->length > 0) {
            int idx = 0;
            number maximum = v[0];
    
            for (Index i = 1; i < v->length; i++) {
                if (v[(Index)i] > maximum) {
                    maximum = v[(Index)i];
                    idx = i;
                }
            }
    
            this->maximum_03_index_set(idx);
            this->maximum_03_out_set(maximum);
        }
    }
    
    void stackprotect_perform(Index n) {
        RNBO_UNUSED(n);
        auto __stackprotect_count = this->stackprotect_count;
        __stackprotect_count = 0;
        this->stackprotect_count = __stackprotect_count;
    }
    
    void translate_02_onTempoChanged(number ) {}
    
    void translate_02_onSampleRateChanged(number samplerate) {
        RNBO_UNUSED(samplerate);
    
        {
            this->translate_02_value_set(this->translate_02_value);
        }
    }
    
    void translate_03_onTempoChanged(number ) {}
    
    void translate_03_onSampleRateChanged(number samplerate) {
        RNBO_UNUSED(samplerate);
    
        {
            this->translate_03_value_set(this->translate_03_value);
        }
    }
    
    bool stackprotect_check() {
        this->stackprotect_count++;
    
        if (this->stackprotect_count > 128) {
            console->log("STACK OVERFLOW DETECTED - stopped processing branch !");
            return true;
        }
    
        return false;
    }
    
    void updateTime(MillisecondTime time) {
        this->_currentTime = time;
        this->sampleOffsetIntoNextAudioBuffer = (SampleIndex)(rnbo_fround(this->msToSamps(time - this->getEngine()->getCurrentTime(), this->sr)));
    
        if (this->sampleOffsetIntoNextAudioBuffer >= (SampleIndex)(this->vs))
            this->sampleOffsetIntoNextAudioBuffer = (SampleIndex)(this->vs) - 1;
    
        if (this->sampleOffsetIntoNextAudioBuffer < 0)
            this->sampleOffsetIntoNextAudioBuffer = 0;
    }
    
    void assign_defaults()
    {
        translate_02_value = 0;
        expr_09_in1 = 0;
        expr_09_in2 = 0;
        expr_09_out1 = 0;
        pak_02_in1 = 0;
        pak_02_in2 = 0;
        expr_10_in1 = 0;
        expr_10_in2 = 2;
        expr_10_out1 = 0;
        translate_03_value = 0;
        expr_11_in1 = 0;
        expr_11_in2 = 0;
        expr_11_out1 = 0;
        maximum_03_right = 0;
        maximum_03_out = 0;
        maximum_03_index = 0;
        _currentTime = 0;
        audioProcessSampleCount = 0;
        sampleOffsetIntoNextAudioBuffer = 0;
        zeroBuffer = nullptr;
        dummyBuffer = nullptr;
        didAllocateSignals = 0;
        vs = 0;
        maxvs = 0;
        sr = 44100;
        invsr = 0.00002267573696;
        stackprotect_count = 0;
        _voiceIndex = 0;
        _noteNumber = 0;
        isMuted = 1;
        parameterOffset = 0;
    }
    
    // member variables
    
        number translate_02_value;
        number expr_09_in1;
        number expr_09_in2;
        number expr_09_out1;
        number pak_02_in1;
        number pak_02_in2;
        number expr_10_in1;
        number expr_10_in2;
        number expr_10_out1;
        number translate_03_value;
        number expr_11_in1;
        number expr_11_in2;
        number expr_11_out1;
        list maximum_03_input;
        number maximum_03_right;
        number maximum_03_out;
        number maximum_03_index;
        MillisecondTime _currentTime;
        SampleIndex audioProcessSampleCount;
        SampleIndex sampleOffsetIntoNextAudioBuffer;
        signal zeroBuffer;
        signal dummyBuffer;
        bool didAllocateSignals;
        Index vs;
        Index maxvs;
        number sr;
        number invsr;
        number stackprotect_count;
        Index _voiceIndex;
        Int _noteNumber;
        Index isMuted;
        ParameterIndex parameterOffset;
    
};

class RNBOSubpatcher_116 : public PatcherInterfaceImpl {
    
    friend class rnbomatic;
    
    public:
    
    RNBOSubpatcher_116()
    {
    }
    
    ~RNBOSubpatcher_116()
    {
    }
    
    virtual rnbomatic* getPatcher() const {
        return static_cast<rnbomatic *>(_parentPatcher);
    }
    
    rnbomatic* getTopLevelPatcher() {
        return this->getPatcher()->getTopLevelPatcher();
    }
    
    void cancelClockEvents()
    {
    }
    
    Index getNumMidiInputPorts() const {
        return 0;
    }
    
    void processMidiEvent(MillisecondTime , int , ConstByteArray , Index ) {}
    
    Index getNumMidiOutputPorts() const {
        return 0;
    }
    
    void process(
        const SampleValue * const* inputs,
        Index numInputs,
        SampleValue * const* outputs,
        Index numOutputs,
        Index n
    ) {
        RNBO_UNUSED(numOutputs);
        RNBO_UNUSED(outputs);
        RNBO_UNUSED(numInputs);
        RNBO_UNUSED(inputs);
        this->vs = n;
        this->updateTime(this->getEngine()->getCurrentTime());
        this->stackprotect_perform(n);
        this->audioProcessSampleCount += this->vs;
    }
    
    void prepareToProcess(number sampleRate, Index maxBlockSize, bool force) {
        if (this->maxvs < maxBlockSize || !this->didAllocateSignals) {
            this->zeroBuffer = resizeSignal(this->zeroBuffer, this->maxvs, maxBlockSize);
            this->dummyBuffer = resizeSignal(this->dummyBuffer, this->maxvs, maxBlockSize);
            this->didAllocateSignals = true;
        }
    
        const bool sampleRateChanged = sampleRate != this->sr;
        const bool maxvsChanged = maxBlockSize != this->maxvs;
        const bool forceDSPSetup = sampleRateChanged || maxvsChanged || force;
    
        if (sampleRateChanged || maxvsChanged) {
            this->vs = maxBlockSize;
            this->maxvs = maxBlockSize;
            this->sr = sampleRate;
            this->invsr = 1 / sampleRate;
        }
    
        RNBO_UNUSED(forceDSPSetup);
    
        if (sampleRateChanged)
            this->onSampleRateChanged(sampleRate);
    }
    
    void setProbingTarget(MessageTag id) {
        switch (id) {
        default:
            {
            this->setProbingIndex(-1);
            break;
            }
        }
    }
    
    void setProbingIndex(ProbingIndex ) {}
    
    Index getProbingChannels(MessageTag outletId) const {
        RNBO_UNUSED(outletId);
        return 0;
    }
    
    Index getIsMuted()  {
        return this->isMuted;
    }
    
    void setIsMuted(Index v)  {
        this->isMuted = v;
    }
    
    Index getPatcherSerial() const {
        return 0;
    }
    
    void getState(PatcherStateInterface& ) {}
    
    void setState() {}
    
    void getPreset(PatcherStateInterface& ) {}
    
    void processTempoEvent(MillisecondTime , Tempo ) {}
    
    void processTransportEvent(MillisecondTime , TransportState ) {}
    
    void processBeatTimeEvent(MillisecondTime , BeatTime ) {}
    
    void onSampleRateChanged(double ) {}
    
    void processTimeSignatureEvent(MillisecondTime , int , int ) {}
    
    void setParameterValue(ParameterIndex , ParameterValue , MillisecondTime ) {}
    
    void processParameterEvent(ParameterIndex index, ParameterValue value, MillisecondTime time) {
        this->setParameterValue(index, value, time);
    }
    
    void processParameterBangEvent(ParameterIndex index, MillisecondTime time) {
        this->setParameterValue(index, this->getParameterValue(index), time);
    }
    
    void processNormalizedParameterEvent(ParameterIndex index, ParameterValue value, MillisecondTime time) {
        this->setParameterValueNormalized(index, value, time);
    }
    
    ParameterValue getParameterValue(ParameterIndex index)  {
        switch (index) {
        default:
            {
            return 0;
            }
        }
    }
    
    ParameterIndex getNumSignalInParameters() const {
        return 0;
    }
    
    ParameterIndex getNumSignalOutParameters() const {
        return 0;
    }
    
    ParameterIndex getNumParameters() const {
        return 0;
    }
    
    ConstCharPointer getParameterName(ParameterIndex index) const {
        switch (index) {
        default:
            {
            return "bogus";
            }
        }
    }
    
    ConstCharPointer getParameterId(ParameterIndex index) const {
        switch (index) {
        default:
            {
            return "bogus";
            }
        }
    }
    
    void getParameterInfo(ParameterIndex , ParameterInfo * ) const {}
    
    void sendParameter(ParameterIndex index, bool ignoreValue) {
        this->getPatcher()->sendParameter(index + this->parameterOffset, ignoreValue);
    }
    
    void setParameterOffset(ParameterIndex offset) {
        this->parameterOffset = offset;
    }
    
    ParameterValue applyStepsToNormalizedParameterValue(ParameterValue normalizedValue, int steps) const {
        if (steps == 1) {
            if (normalizedValue > 0) {
                normalizedValue = 1.;
            }
        } else {
            ParameterValue oneStep = (number)1. / (steps - 1);
            ParameterValue numberOfSteps = rnbo_fround(normalizedValue / oneStep * 1 / (number)1) * (number)1;
            normalizedValue = numberOfSteps * oneStep;
        }
    
        return normalizedValue;
    }
    
    ParameterValue convertToNormalizedParameterValue(ParameterIndex index, ParameterValue value) const {
        switch (index) {
        default:
            {
            return value;
            }
        }
    }
    
    ParameterValue convertFromNormalizedParameterValue(ParameterIndex index, ParameterValue value) const {
        value = (value < 0 ? 0 : (value > 1 ? 1 : value));
    
        switch (index) {
        default:
            {
            return value;
            }
        }
    }
    
    ParameterValue constrainParameterValue(ParameterIndex index, ParameterValue value) const {
        switch (index) {
        default:
            {
            return value;
            }
        }
    }
    
    void scheduleParamInit(ParameterIndex index, Index order) {
        this->getPatcher()->scheduleParamInit(index + this->parameterOffset, order);
    }
    
    void processClockEvent(MillisecondTime , ClockId , bool , ParameterValue ) {}
    
    void processOutletAtCurrentTime(EngineLink* , OutletIndex , ParameterValue ) {}
    
    void processOutletEvent(
        EngineLink* sender,
        OutletIndex index,
        ParameterValue value,
        MillisecondTime time
    ) {
        this->updateTime(time);
        this->processOutletAtCurrentTime(sender, index, value);
    }
    
    void processNumMessage(MessageTag , MessageTag , MillisecondTime , number ) {}
    
    void processListMessage(MessageTag , MessageTag , MillisecondTime , const list& ) {}
    
    void processBangMessage(MessageTag , MessageTag , MillisecondTime ) {}
    
    MessageTagInfo resolveTag(MessageTag tag) const {
        switch (tag) {
    
        }
    
        return nullptr;
    }
    
    DataRef* getDataRef(DataRefIndex index)  {
        switch (index) {
        default:
            {
            return nullptr;
            }
        }
    }
    
    DataRefIndex getNumDataRefs() const {
        return 0;
    }
    
    void fillDataRef(DataRefIndex , DataRef& ) {}
    
    void processDataViewUpdate(DataRefIndex , MillisecondTime ) {}
    
    void initialize() {
        this->assign_defaults();
        this->setState();
    }
    
    protected:
    
    void eventinlet_10_out1_bang_bang() {
        this->pak_03_in1_bang();
    }
    
    void eventinlet_10_out1_list_set(const list& v) {
        {
            if (v->length > 1)
                this->pak_03_in2_set(v[1]);
    
            number converted = (v->length > 0 ? v[0] : 0);
            this->pak_03_in1_set(converted);
        }
    }
    
    void eventinlet_11_out1_bang_bang() {
        this->expr_13_in1_bang();
    }
    
    void eventinlet_11_out1_list_set(const list& v) {
        {
            if (v->length > 1)
                this->expr_13_in2_set(v[1]);
    
            number converted = (v->length > 0 ? v[0] : 0);
            this->expr_13_in1_set(converted);
        }
    }
    
    void eventinlet_12_out1_bang_bang() {
        this->maximum_04_input_bang();
    }
    
    void eventinlet_12_out1_list_set(const list& v) {
        this->maximum_04_input_set(v);
    }
    
    number msToSamps(MillisecondTime ms, number sampleRate) {
        return ms * sampleRate * 0.001;
    }
    
    MillisecondTime sampsToMs(SampleIndex samps) {
        return samps * (this->invsr * 1000);
    }
    
    Index getMaxBlockSize() const {
        return this->maxvs;
    }
    
    number getSampleRate() const {
        return this->sr;
    }
    
    bool hasFixedVectorSize() const {
        return false;
    }
    
    Index getNumInputChannels() const {
        return 0;
    }
    
    Index getNumOutputChannels() const {
        return 0;
    }
    
    void initializeObjects() {}
    
    void sendOutlet(OutletIndex index, ParameterValue value) {
        this->getEngine()->sendOutlet(this, index, value);
    }
    
    void startup() {}
    
    void allocateDataRefs() {}
    
    void eventoutlet_11_in1_number_set(number v) {
        this->getPatcher()->updateTime(this->_currentTime);
        this->getPatcher()->p_04_out2_number_set(v);
    }
    
    void expr_14_out1_set(number v) {
        this->expr_14_out1 = v;
        this->eventoutlet_11_in1_number_set(this->expr_14_out1);
    }
    
    void expr_14_in1_set(number in1) {
        this->expr_14_in1 = in1;
        this->expr_14_out1_set(this->expr_14_in1 + this->expr_14_in1 * this->expr_14_in2);//#map:amp[1]/expr_obj-2:1
    }
    
    void eventoutlet_10_in1_number_set(number v) {
        this->getPatcher()->updateTime(this->_currentTime);
        this->getPatcher()->p_04_out1_number_set(v);
    }
    
    void expr_12_out1_set(number v) {
        this->expr_12_out1 = v;
        this->eventoutlet_10_in1_number_set(this->expr_12_out1);
    }
    
    void expr_12_in1_set(number in1) {
        this->expr_12_in1 = in1;
        this->expr_12_out1_set(this->expr_12_in1 - this->expr_12_in1 * this->expr_12_in2);//#map:amp[1]/expr_obj-3:1
    }
    
    void expr_14_in2_set(number v) {
        this->expr_14_in2 = v;
    }
    
    void expr_12_in2_set(number v) {
        this->expr_12_in2 = v;
    }
    
    void pak_03_out_set(const list& v) {
        {
            if (v->length > 1)
                this->expr_14_in2_set(v[1]);
    
            number converted = (v->length > 0 ? v[0] : 0);
            this->expr_14_in1_set(converted);
        }
    
        {
            if (v->length > 1)
                this->expr_12_in2_set(v[1]);
    
            number converted = (v->length > 0 ? v[0] : 0);
            this->expr_12_in1_set(converted);
        }
    }
    
    void pak_03_in1_set(number v) {
        this->pak_03_in1 = v;
        list array = list(0, 0);
        array[0] = this->pak_03_in1;
        array[1] = this->pak_03_in2;
        this->pak_03_out_set(array);
    }
    
    void eventinlet_10_out1_number_set(number v) {
        this->pak_03_in1_set(v);
    }
    
    void pak_03_in2_set(number v) {
        this->pak_03_in2 = v;
        list array = list(0, 0);
        array[0] = this->pak_03_in1;
        array[1] = this->pak_03_in2;
        this->pak_03_out_set(array);
    }
    
    void expr_13_out1_set(number v) {
        this->expr_13_out1 = v;
        this->pak_03_in2_set(this->expr_13_out1);
    }
    
    void expr_13_in1_set(number in1) {
        this->expr_13_in1 = in1;
    
        this->expr_13_out1_set(
            (this->expr_13_in2 == 0 ? 0 : (this->expr_13_in2 == 0. ? 0. : this->expr_13_in1 / this->expr_13_in2))
        );//#map:amp[1]//_obj-15:1
    }
    
    void eventinlet_11_out1_number_set(number v) {
        this->expr_13_in1_set(v);
    }
    
    void maximum_04_index_set(number v) {
        this->maximum_04_index = v;
    }
    
    void eventoutlet_12_in1_number_set(number v) {
        this->getPatcher()->updateTime(this->_currentTime);
        this->getPatcher()->p_04_out3_number_set(v);
    }
    
    void maximum_04_out_set(number v) {
        this->maximum_04_out = v;
        this->eventoutlet_12_in1_number_set(v);
    }
    
    void maximum_04_input_set(const list& v) {
        this->maximum_04_input = jsCreateListCopy(v);
    
        if (v->length == 1) {
            if (v[0] > this->maximum_04_right) {
                this->maximum_04_index_set(0);
                this->maximum_04_out_set(v[0]);
            } else {
                this->maximum_04_index_set(1);
                this->maximum_04_out_set(this->maximum_04_right);
            }
        } else if (v->length > 0) {
            int idx = 0;
            number maximum = v[0];
    
            for (Index i = 1; i < v->length; i++) {
                if (v[(Index)i] > maximum) {
                    maximum = v[(Index)i];
                    idx = i;
                }
            }
    
            this->maximum_04_index_set(idx);
            this->maximum_04_out_set(maximum);
        }
    }
    
    void eventinlet_12_out1_number_set(number v) {
        {
            list converted = {v};
            this->maximum_04_input_set(converted);
        }
    }
    
    void pak_03_in1_bang() {
        list array = list(0, 0);
        array[0] = this->pak_03_in1;
        array[1] = this->pak_03_in2;
        this->pak_03_out_set(array);
    }
    
    void expr_13_in1_bang() {
        this->expr_13_out1_set(
            (this->expr_13_in2 == 0 ? 0 : (this->expr_13_in2 == 0. ? 0. : this->expr_13_in1 / this->expr_13_in2))
        );//#map:amp[1]//_obj-15:1
    }
    
    void expr_13_in2_set(number v) {
        this->expr_13_in2 = v;
    }
    
    void maximum_04_input_bang() {
        list v = this->maximum_04_input;
    
        if (v->length == 1) {
            if (v[0] > this->maximum_04_right) {
                this->maximum_04_index_set(0);
                this->maximum_04_out_set(v[0]);
            } else {
                this->maximum_04_index_set(1);
                this->maximum_04_out_set(this->maximum_04_right);
            }
        } else if (v->length > 0) {
            int idx = 0;
            number maximum = v[0];
    
            for (Index i = 1; i < v->length; i++) {
                if (v[(Index)i] > maximum) {
                    maximum = v[(Index)i];
                    idx = i;
                }
            }
    
            this->maximum_04_index_set(idx);
            this->maximum_04_out_set(maximum);
        }
    }
    
    void stackprotect_perform(Index n) {
        RNBO_UNUSED(n);
        auto __stackprotect_count = this->stackprotect_count;
        __stackprotect_count = 0;
        this->stackprotect_count = __stackprotect_count;
    }
    
    bool stackprotect_check() {
        this->stackprotect_count++;
    
        if (this->stackprotect_count > 128) {
            console->log("STACK OVERFLOW DETECTED - stopped processing branch !");
            return true;
        }
    
        return false;
    }
    
    void updateTime(MillisecondTime time) {
        this->_currentTime = time;
        this->sampleOffsetIntoNextAudioBuffer = (SampleIndex)(rnbo_fround(this->msToSamps(time - this->getEngine()->getCurrentTime(), this->sr)));
    
        if (this->sampleOffsetIntoNextAudioBuffer >= (SampleIndex)(this->vs))
            this->sampleOffsetIntoNextAudioBuffer = (SampleIndex)(this->vs) - 1;
    
        if (this->sampleOffsetIntoNextAudioBuffer < 0)
            this->sampleOffsetIntoNextAudioBuffer = 0;
    }
    
    void assign_defaults()
    {
        expr_12_in1 = 0;
        expr_12_in2 = 0;
        expr_12_out1 = 0;
        pak_03_in1 = 0;
        pak_03_in2 = 0;
        expr_13_in1 = 0;
        expr_13_in2 = 100;
        expr_13_out1 = 0;
        expr_14_in1 = 0;
        expr_14_in2 = 0;
        expr_14_out1 = 0;
        maximum_04_right = 0;
        maximum_04_out = 0;
        maximum_04_index = 0;
        _currentTime = 0;
        audioProcessSampleCount = 0;
        sampleOffsetIntoNextAudioBuffer = 0;
        zeroBuffer = nullptr;
        dummyBuffer = nullptr;
        didAllocateSignals = 0;
        vs = 0;
        maxvs = 0;
        sr = 44100;
        invsr = 0.00002267573696;
        stackprotect_count = 0;
        _voiceIndex = 0;
        _noteNumber = 0;
        isMuted = 1;
        parameterOffset = 0;
    }
    
    // member variables
    
        number expr_12_in1;
        number expr_12_in2;
        number expr_12_out1;
        number pak_03_in1;
        number pak_03_in2;
        number expr_13_in1;
        number expr_13_in2;
        number expr_13_out1;
        number expr_14_in1;
        number expr_14_in2;
        number expr_14_out1;
        list maximum_04_input;
        number maximum_04_right;
        number maximum_04_out;
        number maximum_04_index;
        MillisecondTime _currentTime;
        SampleIndex audioProcessSampleCount;
        SampleIndex sampleOffsetIntoNextAudioBuffer;
        signal zeroBuffer;
        signal dummyBuffer;
        bool didAllocateSignals;
        Index vs;
        Index maxvs;
        number sr;
        number invsr;
        number stackprotect_count;
        Index _voiceIndex;
        Int _noteNumber;
        Index isMuted;
        ParameterIndex parameterOffset;
    
};

class RNBOSubpatcher_117 : public PatcherInterfaceImpl {
    
    friend class rnbomatic;
    
    public:
    
    RNBOSubpatcher_117()
    {
    }
    
    ~RNBOSubpatcher_117()
    {
    }
    
    virtual rnbomatic* getPatcher() const {
        return static_cast<rnbomatic *>(_parentPatcher);
    }
    
    rnbomatic* getTopLevelPatcher() {
        return this->getPatcher()->getTopLevelPatcher();
    }
    
    void cancelClockEvents()
    {
    }
    
    Index getNumMidiInputPorts() const {
        return 0;
    }
    
    void processMidiEvent(MillisecondTime , int , ConstByteArray , Index ) {}
    
    Index getNumMidiOutputPorts() const {
        return 0;
    }
    
    void process(
        const SampleValue * const* inputs,
        Index numInputs,
        SampleValue * const* outputs,
        Index numOutputs,
        Index n
    ) {
        RNBO_UNUSED(numOutputs);
        RNBO_UNUSED(outputs);
        RNBO_UNUSED(numInputs);
        RNBO_UNUSED(inputs);
        this->vs = n;
        this->updateTime(this->getEngine()->getCurrentTime());
        this->stackprotect_perform(n);
        this->audioProcessSampleCount += this->vs;
    }
    
    void prepareToProcess(number sampleRate, Index maxBlockSize, bool force) {
        if (this->maxvs < maxBlockSize || !this->didAllocateSignals) {
            this->zeroBuffer = resizeSignal(this->zeroBuffer, this->maxvs, maxBlockSize);
            this->dummyBuffer = resizeSignal(this->dummyBuffer, this->maxvs, maxBlockSize);
            this->didAllocateSignals = true;
        }
    
        const bool sampleRateChanged = sampleRate != this->sr;
        const bool maxvsChanged = maxBlockSize != this->maxvs;
        const bool forceDSPSetup = sampleRateChanged || maxvsChanged || force;
    
        if (sampleRateChanged || maxvsChanged) {
            this->vs = maxBlockSize;
            this->maxvs = maxBlockSize;
            this->sr = sampleRate;
            this->invsr = 1 / sampleRate;
        }
    
        RNBO_UNUSED(forceDSPSetup);
    
        if (sampleRateChanged)
            this->onSampleRateChanged(sampleRate);
    }
    
    void setProbingTarget(MessageTag id) {
        switch (id) {
        default:
            {
            this->setProbingIndex(-1);
            break;
            }
        }
    }
    
    void setProbingIndex(ProbingIndex ) {}
    
    Index getProbingChannels(MessageTag outletId) const {
        RNBO_UNUSED(outletId);
        return 0;
    }
    
    Index getIsMuted()  {
        return this->isMuted;
    }
    
    void setIsMuted(Index v)  {
        this->isMuted = v;
    }
    
    Index getPatcherSerial() const {
        return 0;
    }
    
    void getState(PatcherStateInterface& ) {}
    
    void setState() {}
    
    void getPreset(PatcherStateInterface& ) {}
    
    void processTempoEvent(MillisecondTime , Tempo ) {}
    
    void processTransportEvent(MillisecondTime , TransportState ) {}
    
    void processBeatTimeEvent(MillisecondTime , BeatTime ) {}
    
    void onSampleRateChanged(double ) {}
    
    void processTimeSignatureEvent(MillisecondTime , int , int ) {}
    
    void setParameterValue(ParameterIndex , ParameterValue , MillisecondTime ) {}
    
    void processParameterEvent(ParameterIndex index, ParameterValue value, MillisecondTime time) {
        this->setParameterValue(index, value, time);
    }
    
    void processParameterBangEvent(ParameterIndex index, MillisecondTime time) {
        this->setParameterValue(index, this->getParameterValue(index), time);
    }
    
    void processNormalizedParameterEvent(ParameterIndex index, ParameterValue value, MillisecondTime time) {
        this->setParameterValueNormalized(index, value, time);
    }
    
    ParameterValue getParameterValue(ParameterIndex index)  {
        switch (index) {
        default:
            {
            return 0;
            }
        }
    }
    
    ParameterIndex getNumSignalInParameters() const {
        return 0;
    }
    
    ParameterIndex getNumSignalOutParameters() const {
        return 0;
    }
    
    ParameterIndex getNumParameters() const {
        return 0;
    }
    
    ConstCharPointer getParameterName(ParameterIndex index) const {
        switch (index) {
        default:
            {
            return "bogus";
            }
        }
    }
    
    ConstCharPointer getParameterId(ParameterIndex index) const {
        switch (index) {
        default:
            {
            return "bogus";
            }
        }
    }
    
    void getParameterInfo(ParameterIndex , ParameterInfo * ) const {}
    
    void sendParameter(ParameterIndex index, bool ignoreValue) {
        this->getPatcher()->sendParameter(index + this->parameterOffset, ignoreValue);
    }
    
    void setParameterOffset(ParameterIndex offset) {
        this->parameterOffset = offset;
    }
    
    ParameterValue applyStepsToNormalizedParameterValue(ParameterValue normalizedValue, int steps) const {
        if (steps == 1) {
            if (normalizedValue > 0) {
                normalizedValue = 1.;
            }
        } else {
            ParameterValue oneStep = (number)1. / (steps - 1);
            ParameterValue numberOfSteps = rnbo_fround(normalizedValue / oneStep * 1 / (number)1) * (number)1;
            normalizedValue = numberOfSteps * oneStep;
        }
    
        return normalizedValue;
    }
    
    ParameterValue convertToNormalizedParameterValue(ParameterIndex index, ParameterValue value) const {
        switch (index) {
        default:
            {
            return value;
            }
        }
    }
    
    ParameterValue convertFromNormalizedParameterValue(ParameterIndex index, ParameterValue value) const {
        value = (value < 0 ? 0 : (value > 1 ? 1 : value));
    
        switch (index) {
        default:
            {
            return value;
            }
        }
    }
    
    ParameterValue constrainParameterValue(ParameterIndex index, ParameterValue value) const {
        switch (index) {
        default:
            {
            return value;
            }
        }
    }
    
    void scheduleParamInit(ParameterIndex index, Index order) {
        this->getPatcher()->scheduleParamInit(index + this->parameterOffset, order);
    }
    
    void processClockEvent(MillisecondTime , ClockId , bool , ParameterValue ) {}
    
    void processOutletAtCurrentTime(EngineLink* , OutletIndex , ParameterValue ) {}
    
    void processOutletEvent(
        EngineLink* sender,
        OutletIndex index,
        ParameterValue value,
        MillisecondTime time
    ) {
        this->updateTime(time);
        this->processOutletAtCurrentTime(sender, index, value);
    }
    
    void processNumMessage(MessageTag , MessageTag , MillisecondTime , number ) {}
    
    void processListMessage(MessageTag , MessageTag , MillisecondTime , const list& ) {}
    
    void processBangMessage(MessageTag , MessageTag , MillisecondTime ) {}
    
    MessageTagInfo resolveTag(MessageTag tag) const {
        switch (tag) {
    
        }
    
        return nullptr;
    }
    
    DataRef* getDataRef(DataRefIndex index)  {
        switch (index) {
        default:
            {
            return nullptr;
            }
        }
    }
    
    DataRefIndex getNumDataRefs() const {
        return 0;
    }
    
    void fillDataRef(DataRefIndex , DataRef& ) {}
    
    void processDataViewUpdate(DataRefIndex , MillisecondTime ) {}
    
    void initialize() {
        this->assign_defaults();
        this->setState();
    }
    
    protected:
    
    void eventinlet_13_out1_bang_bang() {
        this->pak_04_in1_bang();
    }
    
    void eventinlet_13_out1_list_set(const list& v) {
        {
            if (v->length > 1)
                this->pak_04_in2_set(v[1]);
    
            number converted = (v->length > 0 ? v[0] : 0);
            this->pak_04_in1_set(converted);
        }
    }
    
    void eventinlet_14_out1_bang_bang() {
        this->expr_16_in1_bang();
    }
    
    void eventinlet_14_out1_list_set(const list& v) {
        {
            if (v->length > 1)
                this->expr_16_in2_set(v[1]);
    
            number converted = (v->length > 0 ? v[0] : 0);
            this->expr_16_in1_set(converted);
        }
    }
    
    void eventinlet_15_out1_bang_bang() {
        this->maximum_05_input_bang();
    }
    
    void eventinlet_15_out1_list_set(const list& v) {
        this->maximum_05_input_set(v);
    }
    
    number msToSamps(MillisecondTime ms, number sampleRate) {
        return ms * sampleRate * 0.001;
    }
    
    MillisecondTime sampsToMs(SampleIndex samps) {
        return samps * (this->invsr * 1000);
    }
    
    Index getMaxBlockSize() const {
        return this->maxvs;
    }
    
    number getSampleRate() const {
        return this->sr;
    }
    
    bool hasFixedVectorSize() const {
        return false;
    }
    
    Index getNumInputChannels() const {
        return 0;
    }
    
    Index getNumOutputChannels() const {
        return 0;
    }
    
    void initializeObjects() {}
    
    void sendOutlet(OutletIndex index, ParameterValue value) {
        this->getEngine()->sendOutlet(this, index, value);
    }
    
    void startup() {}
    
    void allocateDataRefs() {}
    
    void eventoutlet_14_in1_number_set(number v) {
        this->getPatcher()->updateTime(this->_currentTime);
        this->getPatcher()->p_05_out2_number_set(v);
    }
    
    void expr_17_out1_set(number v) {
        this->expr_17_out1 = v;
        this->eventoutlet_14_in1_number_set(this->expr_17_out1);
    }
    
    void expr_17_in1_set(number in1) {
        this->expr_17_in1 = in1;
        this->expr_17_out1_set(this->expr_17_in1 + this->expr_17_in1 * this->expr_17_in2);//#map:freq/expr_obj-2:1
    }
    
    void eventoutlet_13_in1_number_set(number v) {
        this->getPatcher()->updateTime(this->_currentTime);
        this->getPatcher()->p_05_out1_number_set(v);
    }
    
    void expr_15_out1_set(number v) {
        this->expr_15_out1 = v;
        this->eventoutlet_13_in1_number_set(this->expr_15_out1);
    }
    
    void expr_15_in1_set(number in1) {
        this->expr_15_in1 = in1;
        this->expr_15_out1_set(this->expr_15_in1 - this->expr_15_in1 * this->expr_15_in2);//#map:freq/expr_obj-3:1
    }
    
    void expr_17_in2_set(number v) {
        this->expr_17_in2 = v;
    }
    
    void expr_15_in2_set(number v) {
        this->expr_15_in2 = v;
    }
    
    void pak_04_out_set(const list& v) {
        {
            if (v->length > 1)
                this->expr_17_in2_set(v[1]);
    
            number converted = (v->length > 0 ? v[0] : 0);
            this->expr_17_in1_set(converted);
        }
    
        {
            if (v->length > 1)
                this->expr_15_in2_set(v[1]);
    
            number converted = (v->length > 0 ? v[0] : 0);
            this->expr_15_in1_set(converted);
        }
    }
    
    void pak_04_in1_set(number v) {
        this->pak_04_in1 = v;
        list array = list(0, 0);
        array[0] = this->pak_04_in1;
        array[1] = this->pak_04_in2;
        this->pak_04_out_set(array);
    }
    
    void eventinlet_13_out1_number_set(number v) {
        this->pak_04_in1_set(v);
    }
    
    void pak_04_in2_set(number v) {
        this->pak_04_in2 = v;
        list array = list(0, 0);
        array[0] = this->pak_04_in1;
        array[1] = this->pak_04_in2;
        this->pak_04_out_set(array);
    }
    
    void expr_16_out1_set(number v) {
        this->expr_16_out1 = v;
        this->pak_04_in2_set(this->expr_16_out1);
    }
    
    void expr_16_in1_set(number in1) {
        this->expr_16_in1 = in1;
    
        this->expr_16_out1_set(
            (this->expr_16_in2 == 0 ? 0 : (this->expr_16_in2 == 0. ? 0. : this->expr_16_in1 / this->expr_16_in2))
        );//#map:freq//_obj-15:1
    }
    
    void eventinlet_14_out1_number_set(number v) {
        this->expr_16_in1_set(v);
    }
    
    void maximum_05_index_set(number v) {
        this->maximum_05_index = v;
    }
    
    void eventoutlet_15_in1_number_set(number v) {
        this->getPatcher()->updateTime(this->_currentTime);
        this->getPatcher()->p_05_out3_number_set(v);
    }
    
    void maximum_05_out_set(number v) {
        this->maximum_05_out = v;
        this->eventoutlet_15_in1_number_set(v);
    }
    
    void maximum_05_input_set(const list& v) {
        this->maximum_05_input = jsCreateListCopy(v);
    
        if (v->length == 1) {
            if (v[0] > this->maximum_05_right) {
                this->maximum_05_index_set(0);
                this->maximum_05_out_set(v[0]);
            } else {
                this->maximum_05_index_set(1);
                this->maximum_05_out_set(this->maximum_05_right);
            }
        } else if (v->length > 0) {
            int idx = 0;
            number maximum = v[0];
    
            for (Index i = 1; i < v->length; i++) {
                if (v[(Index)i] > maximum) {
                    maximum = v[(Index)i];
                    idx = i;
                }
            }
    
            this->maximum_05_index_set(idx);
            this->maximum_05_out_set(maximum);
        }
    }
    
    void eventinlet_15_out1_number_set(number v) {
        {
            list converted = {v};
            this->maximum_05_input_set(converted);
        }
    }
    
    void pak_04_in1_bang() {
        list array = list(0, 0);
        array[0] = this->pak_04_in1;
        array[1] = this->pak_04_in2;
        this->pak_04_out_set(array);
    }
    
    void expr_16_in1_bang() {
        this->expr_16_out1_set(
            (this->expr_16_in2 == 0 ? 0 : (this->expr_16_in2 == 0. ? 0. : this->expr_16_in1 / this->expr_16_in2))
        );//#map:freq//_obj-15:1
    }
    
    void expr_16_in2_set(number v) {
        this->expr_16_in2 = v;
    }
    
    void maximum_05_input_bang() {
        list v = this->maximum_05_input;
    
        if (v->length == 1) {
            if (v[0] > this->maximum_05_right) {
                this->maximum_05_index_set(0);
                this->maximum_05_out_set(v[0]);
            } else {
                this->maximum_05_index_set(1);
                this->maximum_05_out_set(this->maximum_05_right);
            }
        } else if (v->length > 0) {
            int idx = 0;
            number maximum = v[0];
    
            for (Index i = 1; i < v->length; i++) {
                if (v[(Index)i] > maximum) {
                    maximum = v[(Index)i];
                    idx = i;
                }
            }
    
            this->maximum_05_index_set(idx);
            this->maximum_05_out_set(maximum);
        }
    }
    
    void stackprotect_perform(Index n) {
        RNBO_UNUSED(n);
        auto __stackprotect_count = this->stackprotect_count;
        __stackprotect_count = 0;
        this->stackprotect_count = __stackprotect_count;
    }
    
    bool stackprotect_check() {
        this->stackprotect_count++;
    
        if (this->stackprotect_count > 128) {
            console->log("STACK OVERFLOW DETECTED - stopped processing branch !");
            return true;
        }
    
        return false;
    }
    
    void updateTime(MillisecondTime time) {
        this->_currentTime = time;
        this->sampleOffsetIntoNextAudioBuffer = (SampleIndex)(rnbo_fround(this->msToSamps(time - this->getEngine()->getCurrentTime(), this->sr)));
    
        if (this->sampleOffsetIntoNextAudioBuffer >= (SampleIndex)(this->vs))
            this->sampleOffsetIntoNextAudioBuffer = (SampleIndex)(this->vs) - 1;
    
        if (this->sampleOffsetIntoNextAudioBuffer < 0)
            this->sampleOffsetIntoNextAudioBuffer = 0;
    }
    
    void assign_defaults()
    {
        expr_15_in1 = 0;
        expr_15_in2 = 0;
        expr_15_out1 = 0;
        pak_04_in1 = 0;
        pak_04_in2 = 0;
        expr_16_in1 = 0;
        expr_16_in2 = 100;
        expr_16_out1 = 0;
        expr_17_in1 = 0;
        expr_17_in2 = 0;
        expr_17_out1 = 0;
        maximum_05_right = 0;
        maximum_05_out = 0;
        maximum_05_index = 0;
        _currentTime = 0;
        audioProcessSampleCount = 0;
        sampleOffsetIntoNextAudioBuffer = 0;
        zeroBuffer = nullptr;
        dummyBuffer = nullptr;
        didAllocateSignals = 0;
        vs = 0;
        maxvs = 0;
        sr = 44100;
        invsr = 0.00002267573696;
        stackprotect_count = 0;
        _voiceIndex = 0;
        _noteNumber = 0;
        isMuted = 1;
        parameterOffset = 0;
    }
    
    // member variables
    
        number expr_15_in1;
        number expr_15_in2;
        number expr_15_out1;
        number pak_04_in1;
        number pak_04_in2;
        number expr_16_in1;
        number expr_16_in2;
        number expr_16_out1;
        number expr_17_in1;
        number expr_17_in2;
        number expr_17_out1;
        list maximum_05_input;
        number maximum_05_right;
        number maximum_05_out;
        number maximum_05_index;
        MillisecondTime _currentTime;
        SampleIndex audioProcessSampleCount;
        SampleIndex sampleOffsetIntoNextAudioBuffer;
        signal zeroBuffer;
        signal dummyBuffer;
        bool didAllocateSignals;
        Index vs;
        Index maxvs;
        number sr;
        number invsr;
        number stackprotect_count;
        Index _voiceIndex;
        Int _noteNumber;
        Index isMuted;
        ParameterIndex parameterOffset;
    
};

class RNBOSubpatcher_118 : public PatcherInterfaceImpl {
    
    friend class rnbomatic;
    
    public:
    
    RNBOSubpatcher_118()
    {
    }
    
    ~RNBOSubpatcher_118()
    {
    }
    
    virtual rnbomatic* getPatcher() const {
        return static_cast<rnbomatic *>(_parentPatcher);
    }
    
    rnbomatic* getTopLevelPatcher() {
        return this->getPatcher()->getTopLevelPatcher();
    }
    
    void cancelClockEvents()
    {
    }
    
    Index getNumMidiInputPorts() const {
        return 0;
    }
    
    void processMidiEvent(MillisecondTime , int , ConstByteArray , Index ) {}
    
    Index getNumMidiOutputPorts() const {
        return 0;
    }
    
    void process(
        const SampleValue * const* inputs,
        Index numInputs,
        SampleValue * const* outputs,
        Index numOutputs,
        Index n
    ) {
        RNBO_UNUSED(numOutputs);
        RNBO_UNUSED(outputs);
        RNBO_UNUSED(numInputs);
        RNBO_UNUSED(inputs);
        this->vs = n;
        this->updateTime(this->getEngine()->getCurrentTime());
        this->stackprotect_perform(n);
        this->audioProcessSampleCount += this->vs;
    }
    
    void prepareToProcess(number sampleRate, Index maxBlockSize, bool force) {
        if (this->maxvs < maxBlockSize || !this->didAllocateSignals) {
            this->zeroBuffer = resizeSignal(this->zeroBuffer, this->maxvs, maxBlockSize);
            this->dummyBuffer = resizeSignal(this->dummyBuffer, this->maxvs, maxBlockSize);
            this->didAllocateSignals = true;
        }
    
        const bool sampleRateChanged = sampleRate != this->sr;
        const bool maxvsChanged = maxBlockSize != this->maxvs;
        const bool forceDSPSetup = sampleRateChanged || maxvsChanged || force;
    
        if (sampleRateChanged || maxvsChanged) {
            this->vs = maxBlockSize;
            this->maxvs = maxBlockSize;
            this->sr = sampleRate;
            this->invsr = 1 / sampleRate;
        }
    
        RNBO_UNUSED(forceDSPSetup);
    
        if (sampleRateChanged)
            this->onSampleRateChanged(sampleRate);
    }
    
    void setProbingTarget(MessageTag id) {
        switch (id) {
        default:
            {
            this->setProbingIndex(-1);
            break;
            }
        }
    }
    
    void setProbingIndex(ProbingIndex ) {}
    
    Index getProbingChannels(MessageTag outletId) const {
        RNBO_UNUSED(outletId);
        return 0;
    }
    
    Index getIsMuted()  {
        return this->isMuted;
    }
    
    void setIsMuted(Index v)  {
        this->isMuted = v;
    }
    
    Index getPatcherSerial() const {
        return 0;
    }
    
    void getState(PatcherStateInterface& ) {}
    
    void setState() {}
    
    void getPreset(PatcherStateInterface& ) {}
    
    void processTempoEvent(MillisecondTime , Tempo ) {}
    
    void processTransportEvent(MillisecondTime , TransportState ) {}
    
    void processBeatTimeEvent(MillisecondTime , BeatTime ) {}
    
    void onSampleRateChanged(double ) {}
    
    void processTimeSignatureEvent(MillisecondTime , int , int ) {}
    
    void setParameterValue(ParameterIndex , ParameterValue , MillisecondTime ) {}
    
    void processParameterEvent(ParameterIndex index, ParameterValue value, MillisecondTime time) {
        this->setParameterValue(index, value, time);
    }
    
    void processParameterBangEvent(ParameterIndex index, MillisecondTime time) {
        this->setParameterValue(index, this->getParameterValue(index), time);
    }
    
    void processNormalizedParameterEvent(ParameterIndex index, ParameterValue value, MillisecondTime time) {
        this->setParameterValueNormalized(index, value, time);
    }
    
    ParameterValue getParameterValue(ParameterIndex index)  {
        switch (index) {
        default:
            {
            return 0;
            }
        }
    }
    
    ParameterIndex getNumSignalInParameters() const {
        return 0;
    }
    
    ParameterIndex getNumSignalOutParameters() const {
        return 0;
    }
    
    ParameterIndex getNumParameters() const {
        return 0;
    }
    
    ConstCharPointer getParameterName(ParameterIndex index) const {
        switch (index) {
        default:
            {
            return "bogus";
            }
        }
    }
    
    ConstCharPointer getParameterId(ParameterIndex index) const {
        switch (index) {
        default:
            {
            return "bogus";
            }
        }
    }
    
    void getParameterInfo(ParameterIndex , ParameterInfo * ) const {}
    
    void sendParameter(ParameterIndex index, bool ignoreValue) {
        this->getPatcher()->sendParameter(index + this->parameterOffset, ignoreValue);
    }
    
    void setParameterOffset(ParameterIndex offset) {
        this->parameterOffset = offset;
    }
    
    ParameterValue applyStepsToNormalizedParameterValue(ParameterValue normalizedValue, int steps) const {
        if (steps == 1) {
            if (normalizedValue > 0) {
                normalizedValue = 1.;
            }
        } else {
            ParameterValue oneStep = (number)1. / (steps - 1);
            ParameterValue numberOfSteps = rnbo_fround(normalizedValue / oneStep * 1 / (number)1) * (number)1;
            normalizedValue = numberOfSteps * oneStep;
        }
    
        return normalizedValue;
    }
    
    ParameterValue convertToNormalizedParameterValue(ParameterIndex index, ParameterValue value) const {
        switch (index) {
        default:
            {
            return value;
            }
        }
    }
    
    ParameterValue convertFromNormalizedParameterValue(ParameterIndex index, ParameterValue value) const {
        value = (value < 0 ? 0 : (value > 1 ? 1 : value));
    
        switch (index) {
        default:
            {
            return value;
            }
        }
    }
    
    ParameterValue constrainParameterValue(ParameterIndex index, ParameterValue value) const {
        switch (index) {
        default:
            {
            return value;
            }
        }
    }
    
    void scheduleParamInit(ParameterIndex index, Index order) {
        this->getPatcher()->scheduleParamInit(index + this->parameterOffset, order);
    }
    
    void processClockEvent(MillisecondTime , ClockId , bool , ParameterValue ) {}
    
    void processOutletAtCurrentTime(EngineLink* , OutletIndex , ParameterValue ) {}
    
    void processOutletEvent(
        EngineLink* sender,
        OutletIndex index,
        ParameterValue value,
        MillisecondTime time
    ) {
        this->updateTime(time);
        this->processOutletAtCurrentTime(sender, index, value);
    }
    
    void processNumMessage(MessageTag , MessageTag , MillisecondTime , number ) {}
    
    void processListMessage(MessageTag , MessageTag , MillisecondTime , const list& ) {}
    
    void processBangMessage(MessageTag , MessageTag , MillisecondTime ) {}
    
    MessageTagInfo resolveTag(MessageTag tag) const {
        switch (tag) {
    
        }
    
        return nullptr;
    }
    
    DataRef* getDataRef(DataRefIndex index)  {
        switch (index) {
        default:
            {
            return nullptr;
            }
        }
    }
    
    DataRefIndex getNumDataRefs() const {
        return 0;
    }
    
    void fillDataRef(DataRefIndex , DataRef& ) {}
    
    void processDataViewUpdate(DataRefIndex , MillisecondTime ) {}
    
    void initialize() {
        this->assign_defaults();
        this->setState();
    }
    
    protected:
    
    void eventinlet_16_out1_bang_bang() {
        this->expr_18_in1_bang();
    }
    
    void eventinlet_16_out1_list_set(const list& v) {
        {
            if (v->length > 1)
                this->expr_18_in2_set(v[1]);
    
            number converted = (v->length > 0 ? v[0] : 0);
            this->expr_18_in1_set(converted);
        }
    }
    
    void eventinlet_17_out1_bang_bang() {
        this->expr_20_in1_bang();
    }
    
    void eventinlet_17_out1_list_set(const list& v) {
        {
            if (v->length > 1)
                this->expr_20_in2_set(v[1]);
    
            number converted = (v->length > 0 ? v[0] : 0);
            this->expr_20_in1_set(converted);
        }
    }
    
    void eventinlet_18_out1_bang_bang() {
        this->maximum_06_input_bang();
    }
    
    void eventinlet_18_out1_list_set(const list& v) {
        this->maximum_06_input_set(v);
    }
    
    number msToSamps(MillisecondTime ms, number sampleRate) {
        return ms * sampleRate * 0.001;
    }
    
    MillisecondTime sampsToMs(SampleIndex samps) {
        return samps * (this->invsr * 1000);
    }
    
    Index getMaxBlockSize() const {
        return this->maxvs;
    }
    
    number getSampleRate() const {
        return this->sr;
    }
    
    bool hasFixedVectorSize() const {
        return false;
    }
    
    Index getNumInputChannels() const {
        return 0;
    }
    
    Index getNumOutputChannels() const {
        return 0;
    }
    
    void initializeObjects() {}
    
    void sendOutlet(OutletIndex index, ParameterValue value) {
        this->getEngine()->sendOutlet(this, index, value);
    }
    
    void startup() {}
    
    void allocateDataRefs() {}
    
    void eventoutlet_17_in1_number_set(number v) {
        this->getPatcher()->updateTime(this->_currentTime);
        this->getPatcher()->p_06_out2_number_set(v);
    }
    
    void expr_21_out1_set(number v) {
        this->expr_21_out1 = v;
        this->eventoutlet_17_in1_number_set(this->expr_21_out1);
    }
    
    void expr_21_in1_set(number in1) {
        this->expr_21_in1 = in1;
        this->expr_21_out1_set(this->expr_21_in1 + this->expr_21_in1 * this->expr_21_in2);//#map:speed/expr_obj-2:1
    }
    
    void eventoutlet_16_in1_number_set(number v) {
        this->getPatcher()->updateTime(this->_currentTime);
        this->getPatcher()->p_06_out1_number_set(v);
    }
    
    void expr_19_out1_set(number v) {
        this->expr_19_out1 = v;
        this->eventoutlet_16_in1_number_set(this->expr_19_out1);
    }
    
    void expr_19_in1_set(number in1) {
        this->expr_19_in1 = in1;
        this->expr_19_out1_set(this->expr_19_in1 - this->expr_19_in1 * this->expr_19_in2);//#map:speed/expr_obj-3:1
    }
    
    void expr_21_in2_set(number v) {
        this->expr_21_in2 = v;
    }
    
    void expr_19_in2_set(number v) {
        this->expr_19_in2 = v;
    }
    
    void pak_05_out_set(const list& v) {
        {
            if (v->length > 1)
                this->expr_21_in2_set(v[1]);
    
            number converted = (v->length > 0 ? v[0] : 0);
            this->expr_21_in1_set(converted);
        }
    
        {
            if (v->length > 1)
                this->expr_19_in2_set(v[1]);
    
            number converted = (v->length > 0 ? v[0] : 0);
            this->expr_19_in1_set(converted);
        }
    }
    
    void pak_05_in1_set(number v) {
        this->pak_05_in1 = v;
        list array = list(0, 0);
        array[0] = this->pak_05_in1;
        array[1] = this->pak_05_in2;
        this->pak_05_out_set(array);
    }
    
    void expr_18_out1_set(number v) {
        this->expr_18_out1 = v;
        this->pak_05_in1_set(this->expr_18_out1);
    }
    
    void expr_18_in1_set(number in1) {
        this->expr_18_in1 = in1;
        this->expr_18_out1_set(this->expr_18_in1 * this->expr_18_in2);//#map:speed/*_obj-1:1
    }
    
    void eventinlet_16_out1_number_set(number v) {
        this->expr_18_in1_set(v);
    }
    
    void pak_05_in2_set(number v) {
        this->pak_05_in2 = v;
        list array = list(0, 0);
        array[0] = this->pak_05_in1;
        array[1] = this->pak_05_in2;
        this->pak_05_out_set(array);
    }
    
    void expr_20_out1_set(number v) {
        this->expr_20_out1 = v;
        this->pak_05_in2_set(this->expr_20_out1);
    }
    
    void expr_20_in1_set(number in1) {
        this->expr_20_in1 = in1;
    
        this->expr_20_out1_set(
            (this->expr_20_in2 == 0 ? 0 : (this->expr_20_in2 == 0. ? 0. : this->expr_20_in1 / this->expr_20_in2))
        );//#map:speed//_obj-15:1
    }
    
    void eventinlet_17_out1_number_set(number v) {
        this->expr_20_in1_set(v);
    }
    
    void maximum_06_index_set(number v) {
        this->maximum_06_index = v;
    }
    
    void eventoutlet_18_in1_number_set(number v) {
        this->getPatcher()->updateTime(this->_currentTime);
        this->getPatcher()->p_06_out3_number_set(v);
    }
    
    void maximum_06_out_set(number v) {
        this->maximum_06_out = v;
        this->eventoutlet_18_in1_number_set(v);
    }
    
    void maximum_06_input_set(const list& v) {
        this->maximum_06_input = jsCreateListCopy(v);
    
        if (v->length == 1) {
            if (v[0] > this->maximum_06_right) {
                this->maximum_06_index_set(0);
                this->maximum_06_out_set(v[0]);
            } else {
                this->maximum_06_index_set(1);
                this->maximum_06_out_set(this->maximum_06_right);
            }
        } else if (v->length > 0) {
            int idx = 0;
            number maximum = v[0];
    
            for (Index i = 1; i < v->length; i++) {
                if (v[(Index)i] > maximum) {
                    maximum = v[(Index)i];
                    idx = i;
                }
            }
    
            this->maximum_06_index_set(idx);
            this->maximum_06_out_set(maximum);
        }
    }
    
    void eventinlet_18_out1_number_set(number v) {
        {
            list converted = {v};
            this->maximum_06_input_set(converted);
        }
    }
    
    void expr_18_in1_bang() {
        this->expr_18_out1_set(this->expr_18_in1 * this->expr_18_in2);//#map:speed/*_obj-1:1
    }
    
    void expr_18_in2_set(number v) {
        this->expr_18_in2 = v;
    }
    
    void expr_20_in1_bang() {
        this->expr_20_out1_set(
            (this->expr_20_in2 == 0 ? 0 : (this->expr_20_in2 == 0. ? 0. : this->expr_20_in1 / this->expr_20_in2))
        );//#map:speed//_obj-15:1
    }
    
    void expr_20_in2_set(number v) {
        this->expr_20_in2 = v;
    }
    
    void maximum_06_input_bang() {
        list v = this->maximum_06_input;
    
        if (v->length == 1) {
            if (v[0] > this->maximum_06_right) {
                this->maximum_06_index_set(0);
                this->maximum_06_out_set(v[0]);
            } else {
                this->maximum_06_index_set(1);
                this->maximum_06_out_set(this->maximum_06_right);
            }
        } else if (v->length > 0) {
            int idx = 0;
            number maximum = v[0];
    
            for (Index i = 1; i < v->length; i++) {
                if (v[(Index)i] > maximum) {
                    maximum = v[(Index)i];
                    idx = i;
                }
            }
    
            this->maximum_06_index_set(idx);
            this->maximum_06_out_set(maximum);
        }
    }
    
    void stackprotect_perform(Index n) {
        RNBO_UNUSED(n);
        auto __stackprotect_count = this->stackprotect_count;
        __stackprotect_count = 0;
        this->stackprotect_count = __stackprotect_count;
    }
    
    bool stackprotect_check() {
        this->stackprotect_count++;
    
        if (this->stackprotect_count > 128) {
            console->log("STACK OVERFLOW DETECTED - stopped processing branch !");
            return true;
        }
    
        return false;
    }
    
    void updateTime(MillisecondTime time) {
        this->_currentTime = time;
        this->sampleOffsetIntoNextAudioBuffer = (SampleIndex)(rnbo_fround(this->msToSamps(time - this->getEngine()->getCurrentTime(), this->sr)));
    
        if (this->sampleOffsetIntoNextAudioBuffer >= (SampleIndex)(this->vs))
            this->sampleOffsetIntoNextAudioBuffer = (SampleIndex)(this->vs) - 1;
    
        if (this->sampleOffsetIntoNextAudioBuffer < 0)
            this->sampleOffsetIntoNextAudioBuffer = 0;
    }
    
    void assign_defaults()
    {
        expr_18_in1 = 0;
        expr_18_in2 = 0.5;
        expr_18_out1 = 0;
        expr_19_in1 = 0;
        expr_19_in2 = 0;
        expr_19_out1 = 0;
        pak_05_in1 = 0;
        pak_05_in2 = 0;
        expr_20_in1 = 0;
        expr_20_in2 = 100;
        expr_20_out1 = 0;
        expr_21_in1 = 0;
        expr_21_in2 = 0;
        expr_21_out1 = 0;
        maximum_06_right = 0;
        maximum_06_out = 0;
        maximum_06_index = 0;
        _currentTime = 0;
        audioProcessSampleCount = 0;
        sampleOffsetIntoNextAudioBuffer = 0;
        zeroBuffer = nullptr;
        dummyBuffer = nullptr;
        didAllocateSignals = 0;
        vs = 0;
        maxvs = 0;
        sr = 44100;
        invsr = 0.00002267573696;
        stackprotect_count = 0;
        _voiceIndex = 0;
        _noteNumber = 0;
        isMuted = 1;
        parameterOffset = 0;
    }
    
    // member variables
    
        number expr_18_in1;
        number expr_18_in2;
        number expr_18_out1;
        number expr_19_in1;
        number expr_19_in2;
        number expr_19_out1;
        number pak_05_in1;
        number pak_05_in2;
        number expr_20_in1;
        number expr_20_in2;
        number expr_20_out1;
        number expr_21_in1;
        number expr_21_in2;
        number expr_21_out1;
        list maximum_06_input;
        number maximum_06_right;
        number maximum_06_out;
        number maximum_06_index;
        MillisecondTime _currentTime;
        SampleIndex audioProcessSampleCount;
        SampleIndex sampleOffsetIntoNextAudioBuffer;
        signal zeroBuffer;
        signal dummyBuffer;
        bool didAllocateSignals;
        Index vs;
        Index maxvs;
        number sr;
        number invsr;
        number stackprotect_count;
        Index _voiceIndex;
        Int _noteNumber;
        Index isMuted;
        ParameterIndex parameterOffset;
    
};

class RNBOSubpatcher_119 : public PatcherInterfaceImpl {
    
    friend class rnbomatic;
    
    public:
    
    RNBOSubpatcher_119()
    {
    }
    
    ~RNBOSubpatcher_119()
    {
    }
    
    virtual rnbomatic* getPatcher() const {
        return static_cast<rnbomatic *>(_parentPatcher);
    }
    
    rnbomatic* getTopLevelPatcher() {
        return this->getPatcher()->getTopLevelPatcher();
    }
    
    void cancelClockEvents()
    {
    }
    
    Index getNumMidiInputPorts() const {
        return 0;
    }
    
    void processMidiEvent(MillisecondTime , int , ConstByteArray , Index ) {}
    
    Index getNumMidiOutputPorts() const {
        return 0;
    }
    
    void process(
        const SampleValue * const* inputs,
        Index numInputs,
        SampleValue * const* outputs,
        Index numOutputs,
        Index n
    ) {
        RNBO_UNUSED(numOutputs);
        RNBO_UNUSED(outputs);
        RNBO_UNUSED(numInputs);
        RNBO_UNUSED(inputs);
        this->vs = n;
        this->updateTime(this->getEngine()->getCurrentTime());
        this->stackprotect_perform(n);
        this->audioProcessSampleCount += this->vs;
    }
    
    void prepareToProcess(number sampleRate, Index maxBlockSize, bool force) {
        if (this->maxvs < maxBlockSize || !this->didAllocateSignals) {
            this->zeroBuffer = resizeSignal(this->zeroBuffer, this->maxvs, maxBlockSize);
            this->dummyBuffer = resizeSignal(this->dummyBuffer, this->maxvs, maxBlockSize);
            this->didAllocateSignals = true;
        }
    
        const bool sampleRateChanged = sampleRate != this->sr;
        const bool maxvsChanged = maxBlockSize != this->maxvs;
        const bool forceDSPSetup = sampleRateChanged || maxvsChanged || force;
    
        if (sampleRateChanged || maxvsChanged) {
            this->vs = maxBlockSize;
            this->maxvs = maxBlockSize;
            this->sr = sampleRate;
            this->invsr = 1 / sampleRate;
        }
    
        RNBO_UNUSED(forceDSPSetup);
    
        if (sampleRateChanged)
            this->onSampleRateChanged(sampleRate);
    }
    
    void setProbingTarget(MessageTag id) {
        switch (id) {
        default:
            {
            this->setProbingIndex(-1);
            break;
            }
        }
    }
    
    void setProbingIndex(ProbingIndex ) {}
    
    Index getProbingChannels(MessageTag outletId) const {
        RNBO_UNUSED(outletId);
        return 0;
    }
    
    Index getIsMuted()  {
        return this->isMuted;
    }
    
    void setIsMuted(Index v)  {
        this->isMuted = v;
    }
    
    Index getPatcherSerial() const {
        return 0;
    }
    
    void getState(PatcherStateInterface& ) {}
    
    void setState() {}
    
    void getPreset(PatcherStateInterface& ) {}
    
    void processTempoEvent(MillisecondTime , Tempo ) {}
    
    void processTransportEvent(MillisecondTime , TransportState ) {}
    
    void processBeatTimeEvent(MillisecondTime , BeatTime ) {}
    
    void onSampleRateChanged(double ) {}
    
    void processTimeSignatureEvent(MillisecondTime , int , int ) {}
    
    void setParameterValue(ParameterIndex , ParameterValue , MillisecondTime ) {}
    
    void processParameterEvent(ParameterIndex index, ParameterValue value, MillisecondTime time) {
        this->setParameterValue(index, value, time);
    }
    
    void processParameterBangEvent(ParameterIndex index, MillisecondTime time) {
        this->setParameterValue(index, this->getParameterValue(index), time);
    }
    
    void processNormalizedParameterEvent(ParameterIndex index, ParameterValue value, MillisecondTime time) {
        this->setParameterValueNormalized(index, value, time);
    }
    
    ParameterValue getParameterValue(ParameterIndex index)  {
        switch (index) {
        default:
            {
            return 0;
            }
        }
    }
    
    ParameterIndex getNumSignalInParameters() const {
        return 0;
    }
    
    ParameterIndex getNumSignalOutParameters() const {
        return 0;
    }
    
    ParameterIndex getNumParameters() const {
        return 0;
    }
    
    ConstCharPointer getParameterName(ParameterIndex index) const {
        switch (index) {
        default:
            {
            return "bogus";
            }
        }
    }
    
    ConstCharPointer getParameterId(ParameterIndex index) const {
        switch (index) {
        default:
            {
            return "bogus";
            }
        }
    }
    
    void getParameterInfo(ParameterIndex , ParameterInfo * ) const {}
    
    void sendParameter(ParameterIndex index, bool ignoreValue) {
        this->getPatcher()->sendParameter(index + this->parameterOffset, ignoreValue);
    }
    
    void setParameterOffset(ParameterIndex offset) {
        this->parameterOffset = offset;
    }
    
    ParameterValue applyStepsToNormalizedParameterValue(ParameterValue normalizedValue, int steps) const {
        if (steps == 1) {
            if (normalizedValue > 0) {
                normalizedValue = 1.;
            }
        } else {
            ParameterValue oneStep = (number)1. / (steps - 1);
            ParameterValue numberOfSteps = rnbo_fround(normalizedValue / oneStep * 1 / (number)1) * (number)1;
            normalizedValue = numberOfSteps * oneStep;
        }
    
        return normalizedValue;
    }
    
    ParameterValue convertToNormalizedParameterValue(ParameterIndex index, ParameterValue value) const {
        switch (index) {
        default:
            {
            return value;
            }
        }
    }
    
    ParameterValue convertFromNormalizedParameterValue(ParameterIndex index, ParameterValue value) const {
        value = (value < 0 ? 0 : (value > 1 ? 1 : value));
    
        switch (index) {
        default:
            {
            return value;
            }
        }
    }
    
    ParameterValue constrainParameterValue(ParameterIndex index, ParameterValue value) const {
        switch (index) {
        default:
            {
            return value;
            }
        }
    }
    
    void scheduleParamInit(ParameterIndex index, Index order) {
        this->getPatcher()->scheduleParamInit(index + this->parameterOffset, order);
    }
    
    void processClockEvent(MillisecondTime , ClockId , bool , ParameterValue ) {}
    
    void processOutletAtCurrentTime(EngineLink* , OutletIndex , ParameterValue ) {}
    
    void processOutletEvent(
        EngineLink* sender,
        OutletIndex index,
        ParameterValue value,
        MillisecondTime time
    ) {
        this->updateTime(time);
        this->processOutletAtCurrentTime(sender, index, value);
    }
    
    void processNumMessage(MessageTag , MessageTag , MillisecondTime , number ) {}
    
    void processListMessage(MessageTag , MessageTag , MillisecondTime , const list& ) {}
    
    void processBangMessage(MessageTag , MessageTag , MillisecondTime ) {}
    
    MessageTagInfo resolveTag(MessageTag tag) const {
        switch (tag) {
    
        }
    
        return nullptr;
    }
    
    DataRef* getDataRef(DataRefIndex index)  {
        switch (index) {
        default:
            {
            return nullptr;
            }
        }
    }
    
    DataRefIndex getNumDataRefs() const {
        return 0;
    }
    
    void fillDataRef(DataRefIndex , DataRef& ) {}
    
    void processDataViewUpdate(DataRefIndex , MillisecondTime ) {}
    
    void initialize() {
        this->assign_defaults();
        this->setState();
    }
    
    protected:
    
    void eventinlet_19_out1_bang_bang() {
        this->expr_23_in1_bang();
    }
    
    void eventinlet_19_out1_list_set(const list& v) {
        {
            if (v->length > 1)
                this->expr_23_in2_set(v[1]);
    
            number converted = (v->length > 0 ? v[0] : 0);
            this->expr_23_in1_set(converted);
        }
    }
    
    number msToSamps(MillisecondTime ms, number sampleRate) {
        return ms * sampleRate * 0.001;
    }
    
    MillisecondTime sampsToMs(SampleIndex samps) {
        return samps * (this->invsr * 1000);
    }
    
    Index getMaxBlockSize() const {
        return this->maxvs;
    }
    
    number getSampleRate() const {
        return this->sr;
    }
    
    bool hasFixedVectorSize() const {
        return false;
    }
    
    Index getNumInputChannels() const {
        return 0;
    }
    
    Index getNumOutputChannels() const {
        return 0;
    }
    
    void initializeObjects() {}
    
    void sendOutlet(OutletIndex index, ParameterValue value) {
        this->getEngine()->sendOutlet(this, index, value);
    }
    
    void startup() {}
    
    void allocateDataRefs() {}
    
    void eventoutlet_20_in1_number_set(number v) {
        this->getPatcher()->updateTime(this->_currentTime);
        this->getPatcher()->p_07_out2_number_set(v);
    }
    
    void expr_24_out1_set(number v) {
        this->expr_24_out1 = v;
        this->eventoutlet_20_in1_number_set(this->expr_24_out1);
    }
    
    void expr_24_in1_set(number in1) {
        this->expr_24_in1 = in1;
        this->expr_24_out1_set(this->expr_24_in1 + this->expr_24_in2);//#map:pan[1]/+_obj-2:1
    }
    
    void eventoutlet_19_in1_number_set(number v) {
        this->getPatcher()->updateTime(this->_currentTime);
        this->getPatcher()->p_07_out1_number_set(v);
    }
    
    void expr_22_out1_set(number v) {
        this->expr_22_out1 = v;
        this->eventoutlet_19_in1_number_set(this->expr_22_out1);
    }
    
    void expr_22_in1_set(number in1) {
        this->expr_22_in1 = in1;
        this->expr_22_out1_set(this->expr_22_in2 - this->expr_22_in1);//#map:pan[1]/!-_obj-3:1
    }
    
    void expr_23_out1_set(number v) {
        this->expr_23_out1 = v;
        this->expr_24_in1_set(this->expr_23_out1);
        this->expr_22_in1_set(this->expr_23_out1);
    }
    
    void expr_23_in1_set(number in1) {
        this->expr_23_in1 = in1;
    
        this->expr_23_out1_set(
            (this->expr_23_in2 == 0 ? 0 : (this->expr_23_in2 == 0. ? 0. : this->expr_23_in1 / this->expr_23_in2))
        );//#map:pan[1]//_obj-15:1
    }
    
    void eventinlet_19_out1_number_set(number v) {
        this->expr_23_in1_set(v);
    }
    
    void expr_23_in1_bang() {
        this->expr_23_out1_set(
            (this->expr_23_in2 == 0 ? 0 : (this->expr_23_in2 == 0. ? 0. : this->expr_23_in1 / this->expr_23_in2))
        );//#map:pan[1]//_obj-15:1
    }
    
    void expr_23_in2_set(number v) {
        this->expr_23_in2 = v;
    }
    
    void stackprotect_perform(Index n) {
        RNBO_UNUSED(n);
        auto __stackprotect_count = this->stackprotect_count;
        __stackprotect_count = 0;
        this->stackprotect_count = __stackprotect_count;
    }
    
    bool stackprotect_check() {
        this->stackprotect_count++;
    
        if (this->stackprotect_count > 128) {
            console->log("STACK OVERFLOW DETECTED - stopped processing branch !");
            return true;
        }
    
        return false;
    }
    
    void updateTime(MillisecondTime time) {
        this->_currentTime = time;
        this->sampleOffsetIntoNextAudioBuffer = (SampleIndex)(rnbo_fround(this->msToSamps(time - this->getEngine()->getCurrentTime(), this->sr)));
    
        if (this->sampleOffsetIntoNextAudioBuffer >= (SampleIndex)(this->vs))
            this->sampleOffsetIntoNextAudioBuffer = (SampleIndex)(this->vs) - 1;
    
        if (this->sampleOffsetIntoNextAudioBuffer < 0)
            this->sampleOffsetIntoNextAudioBuffer = 0;
    }
    
    void assign_defaults()
    {
        expr_22_in1 = 0;
        expr_22_in2 = 0.5;
        expr_22_out1 = 0;
        expr_23_in1 = 0;
        expr_23_in2 = 200;
        expr_23_out1 = 0;
        expr_24_in1 = 0;
        expr_24_in2 = 0.5;
        expr_24_out1 = 0;
        _currentTime = 0;
        audioProcessSampleCount = 0;
        sampleOffsetIntoNextAudioBuffer = 0;
        zeroBuffer = nullptr;
        dummyBuffer = nullptr;
        didAllocateSignals = 0;
        vs = 0;
        maxvs = 0;
        sr = 44100;
        invsr = 0.00002267573696;
        stackprotect_count = 0;
        _voiceIndex = 0;
        _noteNumber = 0;
        isMuted = 1;
        parameterOffset = 0;
    }
    
    // member variables
    
        number expr_22_in1;
        number expr_22_in2;
        number expr_22_out1;
        number expr_23_in1;
        number expr_23_in2;
        number expr_23_out1;
        number expr_24_in1;
        number expr_24_in2;
        number expr_24_out1;
        MillisecondTime _currentTime;
        SampleIndex audioProcessSampleCount;
        SampleIndex sampleOffsetIntoNextAudioBuffer;
        signal zeroBuffer;
        signal dummyBuffer;
        bool didAllocateSignals;
        Index vs;
        Index maxvs;
        number sr;
        number invsr;
        number stackprotect_count;
        Index _voiceIndex;
        Int _noteNumber;
        Index isMuted;
        ParameterIndex parameterOffset;
    
};

rnbomatic()
{
}

~rnbomatic()
{
    delete this->p_01;
    delete this->p_02;
    delete this->p_03;
    delete this->p_04;
    delete this->p_05;
    delete this->p_06;
    delete this->p_07;
}

rnbomatic* getTopLevelPatcher() {
    return this;
}

void cancelClockEvents()
{
    getEngine()->flushClockEvents(this, -871642103, false);
}

template <typename T> void listquicksort(T& arr, T& sortindices, Int l, Int h, bool ascending) {
    if (l < h) {
        Int p = (Int)(this->listpartition(arr, sortindices, l, h, ascending));
        this->listquicksort(arr, sortindices, l, p - 1, ascending);
        this->listquicksort(arr, sortindices, p + 1, h, ascending);
    }
}

template <typename T> Int listpartition(T& arr, T& sortindices, Int l, Int h, bool ascending) {
    number x = arr[(Index)h];
    Int i = (Int)(l - 1);

    for (Int j = (Int)(l); j <= h - 1; j++) {
        bool asc = (bool)((bool)(ascending) && arr[(Index)j] <= x);
        bool desc = (bool)((bool)(!(bool)(ascending)) && arr[(Index)j] >= x);

        if ((bool)(asc) || (bool)(desc)) {
            i++;
            this->listswapelements(arr, i, j);
            this->listswapelements(sortindices, i, j);
        }
    }

    i++;
    this->listswapelements(arr, i, h);
    this->listswapelements(sortindices, i, h);
    return i;
}

template <typename T> void listswapelements(T& arr, Int a, Int b) {
    auto tmp = arr[(Index)a];
    arr[(Index)a] = arr[(Index)b];
    arr[(Index)b] = tmp;
}

number wrap(number x, number low, number high) {
    number lo;
    number hi;

    if (low == high)
        return low;

    if (low > high) {
        hi = low;
        lo = high;
    } else {
        lo = low;
        hi = high;
    }

    number range = hi - lo;

    if (x >= lo && x < hi)
        return x;

    if (range <= 0.000000001)
        return lo;

    long numWraps = (long)(trunc((x - lo) / range));
    numWraps = numWraps - ((x < lo ? 1 : 0));
    number result = x - range * numWraps;

    if (result >= hi)
        return result - range;
    else
        return result;
}

inline number linearinterp(number frac, number x, number y) {
    return x + (y - x) * frac;
}

inline number cubicinterp(number a, number w, number x, number y, number z) {
    number a2 = a * a;
    number f0 = z - y - w + x;
    number f1 = w - x - f0;
    number f2 = y - w;
    number f3 = x;
    return f0 * a * a2 + f1 * a2 + f2 * a + f3;
}

inline number splineinterp(number a, number w, number x, number y, number z) {
    number a2 = a * a;
    number f0 = -0.5 * w + 1.5 * x - 1.5 * y + 0.5 * z;
    number f1 = w - 2.5 * x + 2 * y - 0.5 * z;
    number f2 = -0.5 * w + 0.5 * y;
    return f0 * a * a2 + f1 * a2 + f2 * a + x;
}

inline number cosT8(number r) {
    number t84 = 56.0;
    number t83 = 1680.0;
    number t82 = 20160.0;
    number t81 = 2.4801587302e-05;
    number t73 = 42.0;
    number t72 = 840.0;
    number t71 = 1.9841269841e-04;

    if (r < 0.785398163397448309615660845819875721 && r > -0.785398163397448309615660845819875721) {
        number rr = r * r;
        return 1.0 - rr * t81 * (t82 - rr * (t83 - rr * (t84 - rr)));
    } else if (r > 0.0) {
        r -= 1.57079632679489661923132169163975144;
        number rr = r * r;
        return -r * (1.0 - t71 * rr * (t72 - rr * (t73 - rr)));
    } else {
        r += 1.57079632679489661923132169163975144;
        number rr = r * r;
        return r * (1.0 - t71 * rr * (t72 - rr * (t73 - rr)));
    }
}

inline number cosineinterp(number frac, number x, number y) {
    number a2 = (1.0 - this->cosT8(frac * 3.14159265358979323846)) / (number)2.0;
    return x * (1.0 - a2) + y * a2;
}

number samplerate() {
    return this->sr;
}

template <typename T> inline number dim(T& buffer) {
    return buffer->getSize();
}

template <typename T> inline number channels(T& buffer) {
    return buffer->getChannels();
}

inline number safemod(number f, number m) {
    if (m != 0) {
        Int f_trunc = (Int)(trunc(f));
        Int m_trunc = (Int)(trunc(m));

        if (f == f_trunc && m == m_trunc) {
            f = f_trunc % m_trunc;
        } else {
            if (m < 0) {
                m = -m;
            }

            if (f >= m) {
                if (f >= m * 2.0) {
                    number d = f / m;
                    Int i = (Int)(trunc(d));
                    d = d - i;
                    f = d * m;
                } else {
                    f -= m;
                }
            } else if (f <= -m) {
                if (f <= -m * 2.0) {
                    number d = f / m;
                    Int i = (Int)(trunc(d));
                    d = d - i;
                    f = d * m;
                } else {
                    f += m;
                }
            }
        }
    } else {
        f = 0.0;
    }

    return f;
}

template <typename T> inline array<SampleValue, 1 + 1> sample_interp_spline(T& buffer, SampleValue sampleIndex, Index channelOffset) {
    number bufferSize = buffer->getSize();
    const Index bufferChannels = (const Index)(buffer->getChannels());
    constexpr int ___N3 = 1 + 1;
    array<SampleValue, ___N3> out = FIXEDSIZEARRAYINIT(1 + 1);

    {
        SampleValue bufferphasetoindex_result;

        {
            auto __end = bufferSize;
            auto __start = 0;
            auto __phase = sampleIndex;

            {
                number size = __end - 1 - __start;
                bufferphasetoindex_result = __phase * size;
            }
        }

        sampleIndex = bufferphasetoindex_result;
    }

    if (bufferSize == 0 || (5 == 5 && (sampleIndex < 0 || sampleIndex >= bufferSize))) {
        for (Index i = 0; i < 1 + 1; i++) {
            out[(Index)i] = 0;
        }
    } else {
        for (Index channel = 0; channel < 1; channel++) {
            Index channelIndex = (Index)(channel + channelOffset);

            {
                if (channelIndex >= bufferChannels || channelIndex < 0) {
                    out[(Index)channel] = 0;
                    continue;
                }
            }

            SampleValue bufferreadsample_result;

            {
                auto& __buffer = buffer;

                if (sampleIndex < 0.0) {
                    bufferreadsample_result = 0.0;
                }

                SampleIndex index1 = (SampleIndex)(trunc(sampleIndex));

                {
                    {
                        {
                            number frac = sampleIndex - index1;
                            number wrap = bufferSize - 1;
                            SampleIndex index2 = (SampleIndex)(index1 + 1);

                            if (index2 > wrap)
                                index2 = 0;

                            SampleIndex index3 = (SampleIndex)(index2 + 1);

                            if (index3 > wrap)
                                index3 = 0;

                            SampleIndex index4 = (SampleIndex)(index3 + 1);

                            if (index4 > wrap)
                                index4 = 0;

                            bufferreadsample_result = this->splineinterp(
                                frac,
                                __buffer->getSample(channelIndex, index1),
                                __buffer->getSample(channelIndex, index2),
                                __buffer->getSample(channelIndex, index3),
                                __buffer->getSample(channelIndex, index4)
                            );
                        }
                    }
                }
            }

            out[(Index)channel] = bufferreadsample_result;
        }

        out[1] = sampleIndex;
    }

    return out;
}

template <typename T> inline array<SampleValue, 1 + 1> wave_boundmode_clamp_interp_spline(
    T& buffer,
    SampleValue phase,
    SampleValue start,
    SampleValue end,
    int channelOffset
) {
    number bufferSize = buffer->getSize();
    const Index bufferChannels = (const Index)(buffer->getChannels());
    constexpr int ___N4 = 1 + 1;
    array<SampleValue, ___N4> out = FIXEDSIZEARRAYINIT(1 + 1);

    if (start < 0)
        start = 0;

    if (end > bufferSize)
        end = bufferSize;

    if (end - start <= 0) {
        start = 0;
        end = bufferSize;
    }

    number sampleIndex;

    {
        SampleValue bufferphasetoindex_result;

        {
            auto __end = end + 1;
            auto __start = start;
            auto __phase = phase;

            {
                {
                    {
                        number size = __end - 1 - __start;
                        bufferphasetoindex_result = __start + __phase * size;
                    }
                }
            }
        }

        sampleIndex = bufferphasetoindex_result;
    }

    if (bufferSize == 0 || (1 == 5 && (sampleIndex < start || sampleIndex >= end))) {
        return out;
    } else {
        {
            SampleIndex bufferbindindex_result;

            {
                {
                    {
                        bufferbindindex_result = (sampleIndex > end - 1 ? end - 1 : (sampleIndex < start ? start : sampleIndex));
                    }
                }
            }

            sampleIndex = bufferbindindex_result;
        }

        for (Index channel = 0; channel < 1; channel++) {
            Index channelIndex = (Index)(channel + channelOffset);

            {
                Index bufferbindchannel_result;

                {
                    {
                        {
                            bufferbindchannel_result = (bufferChannels == 0 ? 0 : channelIndex % bufferChannels);
                        }
                    }
                }

                channelIndex = bufferbindchannel_result;
            }

            SampleValue bufferreadsample_result;

            {
                auto& __buffer = buffer;

                if (sampleIndex < 0.0) {
                    bufferreadsample_result = 0.0;
                }

                SampleIndex index1 = (SampleIndex)(trunc(sampleIndex));

                {
                    {
                        {
                            number frac = sampleIndex - index1;
                            number wrap = end - 1;
                            SampleIndex index2 = (SampleIndex)(index1 + 1);

                            if (index2 > wrap)
                                index2 = start;

                            SampleIndex index3 = (SampleIndex)(index2 + 1);

                            if (index3 > wrap)
                                index3 = start;

                            SampleIndex index4 = (SampleIndex)(index3 + 1);

                            if (index4 > wrap)
                                index4 = start;

                            bufferreadsample_result = this->splineinterp(
                                frac,
                                __buffer->getSample(channelIndex, index1),
                                __buffer->getSample(channelIndex, index2),
                                __buffer->getSample(channelIndex, index3),
                                __buffer->getSample(channelIndex, index4)
                            );
                        }
                    }
                }
            }

            out[(Index)channel] = bufferreadsample_result;
        }

        out[1] = sampleIndex - start;
        return out;
    }
}

template <typename T> inline array<SampleValue, 1 + 1> sample_boundmode_clamp_interp_spline(T& buffer, SampleValue sampleIndex, Index channelOffset) {
    number bufferSize = buffer->getSize();
    const Index bufferChannels = (const Index)(buffer->getChannels());
    constexpr int ___N3 = 1 + 1;
    array<SampleValue, ___N3> out = FIXEDSIZEARRAYINIT(1 + 1);

    {
        SampleValue bufferphasetoindex_result;

        {
            auto __end = bufferSize;
            auto __start = 0;
            auto __phase = sampleIndex;

            {
                number size = __end - 1 - __start;
                bufferphasetoindex_result = __phase * size;
            }
        }

        sampleIndex = bufferphasetoindex_result;
    }

    if (bufferSize == 0 || (1 == 5 && (sampleIndex < 0 || sampleIndex >= bufferSize))) {
        for (Index i = 0; i < 1 + 1; i++) {
            out[(Index)i] = 0;
        }
    } else {
        {
            SampleIndex bufferbindindex_result;

            {
                {
                    {
                        bufferbindindex_result = (sampleIndex > bufferSize - 1 ? bufferSize - 1 : (sampleIndex < 0 ? 0 : sampleIndex));
                    }
                }
            }

            sampleIndex = bufferbindindex_result;
        }

        for (Index channel = 0; channel < 1; channel++) {
            Index channelIndex = (Index)(channel + channelOffset);

            {
                if (channelIndex >= bufferChannels || channelIndex < 0) {
                    out[(Index)channel] = 0;
                    continue;
                }
            }

            SampleValue bufferreadsample_result;

            {
                auto& __buffer = buffer;

                if (sampleIndex < 0.0) {
                    bufferreadsample_result = 0.0;
                }

                SampleIndex index1 = (SampleIndex)(trunc(sampleIndex));

                {
                    {
                        {
                            number frac = sampleIndex - index1;
                            number wrap = bufferSize - 1;
                            SampleIndex index2 = (SampleIndex)(index1 + 1);

                            if (index2 > wrap)
                                index2 = 0;

                            SampleIndex index3 = (SampleIndex)(index2 + 1);

                            if (index3 > wrap)
                                index3 = 0;

                            SampleIndex index4 = (SampleIndex)(index3 + 1);

                            if (index4 > wrap)
                                index4 = 0;

                            bufferreadsample_result = this->splineinterp(
                                frac,
                                __buffer->getSample(channelIndex, index1),
                                __buffer->getSample(channelIndex, index2),
                                __buffer->getSample(channelIndex, index3),
                                __buffer->getSample(channelIndex, index4)
                            );
                        }
                    }
                }
            }

            out[(Index)channel] = bufferreadsample_result;
        }

        out[1] = sampleIndex;
    }

    return out;
}

Index voice() {
    return this->_voiceIndex;
}

number random(number low, number high) {
    number range = high - low;
    return rand01() * range + low;
}

inline number safediv(number num, number denom) {
    return (denom == 0.0 ? 0.0 : num / denom);
}

number safepow(number base, number exponent) {
    return fixnan(rnbo_pow(base, exponent));
}

number scale(
    number x,
    number lowin,
    number hiin,
    number lowout,
    number highout,
    number pow
) {
    auto inscale = this->safediv(1., hiin - lowin);
    number outdiff = highout - lowout;
    number value = (x - lowin) * inscale;

    if (pow != 1) {
        if (value > 0)
            value = this->safepow(value, pow);
        else
            value = -this->safepow(-value, pow);
    }

    value = value * outdiff + lowout;
    return value;
}

inline number intnum(const number value) {
    return trunc(value);
}

number maximum(number x, number y) {
    return (x < y ? y : x);
}

number blackman(number x) {
    x = (x > 1 ? 1 : (x < 0 ? 0 : x));

    if (x >= 0.5)
        x = -(x - 1);

    return 0.42 - 0.5 * rnbo_cos(6.28318530717958647692 * x) + 0.08 * rnbo_cos(4 * 3.14159265358979323846 * x);
}

number mstosamps(MillisecondTime ms) {
    return ms * this->sr * 0.001;
}

Index vectorsize() {
    return this->vs;
}

MillisecondTime currenttime() {
    return this->_currentTime;
}

number tempo() {
    return this->getTopLevelPatcher()->globaltransport_getTempo(this->currenttime());
}

number mstobeats(number ms) {
    return ms * this->tempo() * 0.008 / (number)480;
}

MillisecondTime sampstoms(number samps) {
    return samps * 1000 / this->sr;
}

Index getNumMidiInputPorts() const {
    return 0;
}

void processMidiEvent(MillisecondTime , int , ConstByteArray , Index ) {}

Index getNumMidiOutputPorts() const {
    return 0;
}

void process(
    const SampleValue * const* inputs,
    Index numInputs,
    SampleValue * const* outputs,
    Index numOutputs,
    Index n
) {
    RNBO_UNUSED(numInputs);
    RNBO_UNUSED(inputs);
    this->vs = n;
    this->updateTime(this->getEngine()->getCurrentTime());
    SampleValue * out1 = (numOutputs >= 1 && outputs[0] ? outputs[0] : this->dummyBuffer);
    SampleValue * out2 = (numOutputs >= 2 && outputs[1] ? outputs[1] : this->dummyBuffer);
    SampleValue * out3 = (numOutputs >= 3 && outputs[2] ? outputs[2] : this->dummyBuffer);
    SampleValue * out4 = (numOutputs >= 4 && outputs[3] ? outputs[3] : this->dummyBuffer);

    this->gen_02_perform(
        this->gen_02_in1,
        this->gen_02_durcurve,
        this->gen_02_panmax,
        this->gen_02_freqmax,
        this->gen_02_revcurve,
        this->gen_02_speedmax,
        this->gen_02_ampmin,
        this->gen_02_speedcurve,
        this->gen_02_durmax,
        this->gen_02_freqmin,
        this->gen_02_revmax,
        this->gen_02_panmin,
        this->gen_02_poscurve,
        this->gen_02_ampmax,
        this->gen_02_revmin,
        this->gen_02_posmax,
        this->gen_02_durmin,
        this->gen_02_speedmin,
        this->gen_02_posmin,
        this->gen_02_ampcurve,
        this->gen_02_freqcurve,
        this->gen_02_density,
        this->signals[0],
        this->signals[1],
        this->signals[2],
        this->signals[3],
        this->signals[4],
        this->signals[5],
        this->signals[6],
        this->signals[7],
        n
    );

    this->gen_01_perform(
        this->signals[0],
        this->signals[1],
        this->signals[2],
        this->signals[3],
        this->signals[4],
        this->signals[5],
        this->signals[6],
        this->signals[7],
        out1,
        out2,
        out3,
        out4,
        n
    );

    this->p_01_perform(n);
    this->p_02_perform(n);
    this->p_03_perform(n);
    this->p_04_perform(n);
    this->p_05_perform(n);
    this->p_06_perform(n);
    this->p_07_perform(n);
    this->stackprotect_perform(n);
    this->globaltransport_advance();
    this->audioProcessSampleCount += this->vs;
}

void prepareToProcess(number sampleRate, Index maxBlockSize, bool force) {
    if (this->maxvs < maxBlockSize || !this->didAllocateSignals) {
        Index i;

        for (i = 0; i < 8; i++) {
            this->signals[i] = resizeSignal(this->signals[i], this->maxvs, maxBlockSize);
        }

        this->globaltransport_tempo = resizeSignal(this->globaltransport_tempo, this->maxvs, maxBlockSize);
        this->globaltransport_state = resizeSignal(this->globaltransport_state, this->maxvs, maxBlockSize);
        this->zeroBuffer = resizeSignal(this->zeroBuffer, this->maxvs, maxBlockSize);
        this->dummyBuffer = resizeSignal(this->dummyBuffer, this->maxvs, maxBlockSize);
        this->didAllocateSignals = true;
    }

    const bool sampleRateChanged = sampleRate != this->sr;
    const bool maxvsChanged = maxBlockSize != this->maxvs;
    const bool forceDSPSetup = sampleRateChanged || maxvsChanged || force;

    if (sampleRateChanged || maxvsChanged) {
        this->vs = maxBlockSize;
        this->maxvs = maxBlockSize;
        this->sr = sampleRate;
        this->invsr = 1 / sampleRate;
    }

    this->gen_01_dspsetup(forceDSPSetup);
    this->data_01_dspsetup(forceDSPSetup);
    this->data_02_dspsetup(forceDSPSetup);
    this->data_03_dspsetup(forceDSPSetup);
    this->globaltransport_dspsetup(forceDSPSetup);
    this->p_01->prepareToProcess(sampleRate, maxBlockSize, force);
    this->p_02->prepareToProcess(sampleRate, maxBlockSize, force);
    this->p_03->prepareToProcess(sampleRate, maxBlockSize, force);
    this->p_04->prepareToProcess(sampleRate, maxBlockSize, force);
    this->p_05->prepareToProcess(sampleRate, maxBlockSize, force);
    this->p_06->prepareToProcess(sampleRate, maxBlockSize, force);
    this->p_07->prepareToProcess(sampleRate, maxBlockSize, force);

    if (sampleRateChanged)
        this->onSampleRateChanged(sampleRate);
}

void setProbingTarget(MessageTag id) {
    switch (id) {
    default:
        {
        this->setProbingIndex(-1);
        break;
        }
    }
}

void setProbingIndex(ProbingIndex ) {}

Index getProbingChannels(MessageTag outletId) const {
    RNBO_UNUSED(outletId);
    return 0;
}

DataRef* getDataRef(DataRefIndex index)  {
    switch (index) {
    case 0:
        {
        return addressOf(this->winsample);
        break;
        }
    case 1:
        {
        return addressOf(this->win2);
        break;
        }
    case 2:
        {
        return addressOf(this->sample);
        break;
        }
    case 3:
        {
        return addressOf(this->RNBODefaultSinus);
        break;
        }
    default:
        {
        return nullptr;
        }
    }
}

DataRefIndex getNumDataRefs() const {
    return 4;
}

void fillwinsample(DataRef& ref) {
    Float32BufferRef buffer;
    buffer = new Float32Buffer(ref);
    number bufsize = buffer->getSize();

    for (number channel = 0; channel < buffer->getChannels(); channel++) {
        for (int index = 0; index < bufsize; index++) {
            number x = index / bufsize;
            number value = 1;
            buffer->setSample(channel, index, value);
        }
    }
}

void fillwin2(DataRef& ref) {
    Float32BufferRef buffer;
    buffer = new Float32Buffer(ref);
    number bufsize = buffer->getSize();

    for (number channel = 0; channel < buffer->getChannels(); channel++) {
        for (int index = 0; index < bufsize; index++) {
            number x = index / bufsize;
            number value = 1;
            buffer->setSample(channel, index, value);
        }
    }
}

void fillRNBODefaultSinus(DataRef& ref) {
    Float64BufferRef buffer;
    buffer = new Float64Buffer(ref);
    number bufsize = buffer->getSize();

    for (Index i = 0; i < bufsize; i++) {
        buffer[i] = rnbo_cos(i * 3.14159265358979323846 * 2. / bufsize);
    }
}

void fillDataRef(DataRefIndex index, DataRef& ref) {
    switch (index) {
    case 0:
        {
        this->fillwinsample(ref);
        break;
        }
    case 1:
        {
        this->fillwin2(ref);
        break;
        }
    case 3:
        {
        this->fillRNBODefaultSinus(ref);
        break;
        }
    }
}

void zeroDataRef(DataRef& ref) {
    ref->setZero();
}

void processDataViewUpdate(DataRefIndex index, MillisecondTime time) {
    this->updateTime(time);

    if (index == 0) {
        this->gen_01_winsample = new Float32Buffer(this->winsample);
        this->bufferop_02_buffer = new Float32Buffer(this->winsample);
        this->data_02_buffer = new Float32Buffer(this->winsample);
        this->data_02_bufferUpdated();
    }

    if (index == 1) {
        this->gen_01_win2 = new Float32Buffer(this->win2);
        this->bufferop_01_buffer = new Float32Buffer(this->win2);
        this->data_01_buffer = new Float32Buffer(this->win2);
        this->data_01_bufferUpdated();
    }

    if (index == 2) {
        this->gen_01_sample = new Float32Buffer(this->sample);
        this->gen_02_sample = new Float32Buffer(this->sample);
        this->data_03_buffer = new Float32Buffer(this->sample);
        this->data_03_bufferUpdated();
    }

    if (index == 3) {
        this->gen_01_cycle_65_buffer = new Float64Buffer(this->RNBODefaultSinus);
        this->gen_01_cycle_70_buffer = new Float64Buffer(this->RNBODefaultSinus);
        this->gen_01_cycle_90_buffer = new Float64Buffer(this->RNBODefaultSinus);
        this->gen_01_cycle_95_buffer = new Float64Buffer(this->RNBODefaultSinus);
    }

    this->p_01->processDataViewUpdate(index, time);
    this->p_02->processDataViewUpdate(index, time);
    this->p_03->processDataViewUpdate(index, time);
    this->p_04->processDataViewUpdate(index, time);
    this->p_05->processDataViewUpdate(index, time);
    this->p_06->processDataViewUpdate(index, time);
    this->p_07->processDataViewUpdate(index, time);
}

void initialize() {
    this->winsample = initDataRef("winsample", false, nullptr, "buffer~");
    this->win2 = initDataRef("win2", false, nullptr, "buffer~");
    this->sample = initDataRef("sample", false, "jongly.aif", "buffer~");
    this->RNBODefaultSinus = initDataRef("RNBODefaultSinus", true, nullptr, "buffer~");
    this->assign_defaults();
    this->setState();
    this->winsample->setIndex(0);
    this->gen_01_winsample = new Float32Buffer(this->winsample);
    this->bufferop_02_buffer = new Float32Buffer(this->winsample);
    this->data_02_buffer = new Float32Buffer(this->winsample);
    this->win2->setIndex(1);
    this->gen_01_win2 = new Float32Buffer(this->win2);
    this->bufferop_01_buffer = new Float32Buffer(this->win2);
    this->data_01_buffer = new Float32Buffer(this->win2);
    this->sample->setIndex(2);
    this->gen_01_sample = new Float32Buffer(this->sample);
    this->gen_02_sample = new Float32Buffer(this->sample);
    this->data_03_buffer = new Float32Buffer(this->sample);
    this->RNBODefaultSinus->setIndex(3);
    this->gen_01_cycle_65_buffer = new Float64Buffer(this->RNBODefaultSinus);
    this->gen_01_cycle_70_buffer = new Float64Buffer(this->RNBODefaultSinus);
    this->gen_01_cycle_90_buffer = new Float64Buffer(this->RNBODefaultSinus);
    this->gen_01_cycle_95_buffer = new Float64Buffer(this->RNBODefaultSinus);
    this->initializeObjects();
    this->allocateDataRefs();
    this->startup();
}

Index getIsMuted()  {
    return this->isMuted;
}

void setIsMuted(Index v)  {
    this->isMuted = v;
}

Index getPatcherSerial() const {
    return 0;
}

void getState(PatcherStateInterface& ) {}

void setState() {
    this->p_01 = new RNBOSubpatcher_113();
    this->p_01->setEngineAndPatcher(this->getEngine(), this);
    this->p_01->initialize();
    this->p_01->setParameterOffset(this->getParameterOffset(this->p_01));
    this->p_02 = new RNBOSubpatcher_114();
    this->p_02->setEngineAndPatcher(this->getEngine(), this);
    this->p_02->initialize();
    this->p_02->setParameterOffset(this->getParameterOffset(this->p_02));
    this->p_03 = new RNBOSubpatcher_115();
    this->p_03->setEngineAndPatcher(this->getEngine(), this);
    this->p_03->initialize();
    this->p_03->setParameterOffset(this->getParameterOffset(this->p_03));
    this->p_04 = new RNBOSubpatcher_116();
    this->p_04->setEngineAndPatcher(this->getEngine(), this);
    this->p_04->initialize();
    this->p_04->setParameterOffset(this->getParameterOffset(this->p_04));
    this->p_05 = new RNBOSubpatcher_117();
    this->p_05->setEngineAndPatcher(this->getEngine(), this);
    this->p_05->initialize();
    this->p_05->setParameterOffset(this->getParameterOffset(this->p_05));
    this->p_06 = new RNBOSubpatcher_118();
    this->p_06->setEngineAndPatcher(this->getEngine(), this);
    this->p_06->initialize();
    this->p_06->setParameterOffset(this->getParameterOffset(this->p_06));
    this->p_07 = new RNBOSubpatcher_119();
    this->p_07->setEngineAndPatcher(this->getEngine(), this);
    this->p_07->initialize();
    this->p_07->setParameterOffset(this->getParameterOffset(this->p_07));
}

void getPreset(PatcherStateInterface& preset) {
    preset["__presetid"] = "rnbo";
    this->param_01_getPresetValue(getSubState(preset, "density"));
    this->param_02_getPresetValue(getSubState(preset, "duration"));
    this->param_03_getPresetValue(getSubState(preset, "durvar"));
    this->param_04_getPresetValue(getSubState(preset, "durcurve"));
    this->param_05_getPresetValue(getSubState(preset, "posms"));
    this->param_06_getPresetValue(getSubState(preset, "pos"));
    this->param_07_getPresetValue(getSubState(preset, "posvar"));
    this->param_09_getPresetValue(getSubState(preset, "poscurve"));
    this->param_10_getPresetValue(getSubState(preset, "amp"));
    this->param_11_getPresetValue(getSubState(preset, "ampvar"));
    this->param_12_getPresetValue(getSubState(preset, "ampcurve"));
    this->param_13_getPresetValue(getSubState(preset, "oscfreq"));
    this->param_14_getPresetValue(getSubState(preset, "oscvar"));
    this->param_15_getPresetValue(getSubState(preset, "osccurve"));
    this->param_16_getPresetValue(getSubState(preset, "sampspeed"));
    this->param_17_getPresetValue(getSubState(preset, "sampvar"));
    this->param_18_getPresetValue(getSubState(preset, "sampcurve"));
    this->param_19_getPresetValue(getSubState(preset, "pan"));
    this->p_01->getPreset(getSubState(getSubState(preset, "__sps"), "density_dur"));
    this->p_02->getPreset(getSubState(getSubState(preset, "__sps"), "samples"));
    this->p_03->getPreset(getSubState(getSubState(preset, "__sps"), "pos[1]"));
    this->p_04->getPreset(getSubState(getSubState(preset, "__sps"), "amp[1]"));
    this->p_05->getPreset(getSubState(getSubState(preset, "__sps"), "freq"));
    this->p_06->getPreset(getSubState(getSubState(preset, "__sps"), "speed"));
    this->p_07->getPreset(getSubState(getSubState(preset, "__sps"), "pan[1]"));
}

void setPreset(MillisecondTime time, PatcherStateInterface& preset) {
    this->updateTime(time);
    this->param_01_setPresetValue(getSubState(preset, "density"));
    this->param_02_setPresetValue(getSubState(preset, "duration"));
    this->param_03_setPresetValue(getSubState(preset, "durvar"));
    this->param_04_setPresetValue(getSubState(preset, "durcurve"));
    this->param_05_setPresetValue(getSubState(preset, "posms"));
    this->param_06_setPresetValue(getSubState(preset, "pos"));
    this->param_07_setPresetValue(getSubState(preset, "posvar"));
    this->param_09_setPresetValue(getSubState(preset, "poscurve"));
    this->param_10_setPresetValue(getSubState(preset, "amp"));
    this->param_11_setPresetValue(getSubState(preset, "ampvar"));
    this->param_12_setPresetValue(getSubState(preset, "ampcurve"));
    this->param_13_setPresetValue(getSubState(preset, "oscfreq"));
    this->param_14_setPresetValue(getSubState(preset, "oscvar"));
    this->param_15_setPresetValue(getSubState(preset, "osccurve"));
    this->param_16_setPresetValue(getSubState(preset, "sampspeed"));
    this->param_17_setPresetValue(getSubState(preset, "sampvar"));
    this->param_18_setPresetValue(getSubState(preset, "sampcurve"));
    this->param_19_setPresetValue(getSubState(preset, "pan"));
}

void processTempoEvent(MillisecondTime time, Tempo tempo) {
    this->updateTime(time);

    if (this->globaltransport_setTempo(this->_currentTime, tempo, false)) {
        this->p_01->processTempoEvent(time, tempo);
        this->p_02->processTempoEvent(time, tempo);
        this->p_03->processTempoEvent(time, tempo);
        this->p_04->processTempoEvent(time, tempo);
        this->p_05->processTempoEvent(time, tempo);
        this->p_06->processTempoEvent(time, tempo);
        this->p_07->processTempoEvent(time, tempo);
    }
}

void processTransportEvent(MillisecondTime time, TransportState state) {
    this->updateTime(time);

    if (this->globaltransport_setState(this->_currentTime, state, false)) {
        this->p_01->processTransportEvent(time, state);
        this->p_02->processTransportEvent(time, state);
        this->p_03->processTransportEvent(time, state);
        this->p_04->processTransportEvent(time, state);
        this->p_05->processTransportEvent(time, state);
        this->p_06->processTransportEvent(time, state);
        this->p_07->processTransportEvent(time, state);
    }
}

void processBeatTimeEvent(MillisecondTime time, BeatTime beattime) {
    this->updateTime(time);

    if (this->globaltransport_setBeatTime(this->_currentTime, beattime, false)) {
        this->p_01->processBeatTimeEvent(time, beattime);
        this->p_02->processBeatTimeEvent(time, beattime);
        this->p_03->processBeatTimeEvent(time, beattime);
        this->p_04->processBeatTimeEvent(time, beattime);
        this->p_05->processBeatTimeEvent(time, beattime);
        this->p_06->processBeatTimeEvent(time, beattime);
        this->p_07->processBeatTimeEvent(time, beattime);
    }
}

void onSampleRateChanged(double ) {}

void processTimeSignatureEvent(MillisecondTime time, int numerator, int denominator) {
    this->updateTime(time);

    if (this->globaltransport_setTimeSignature(this->_currentTime, numerator, denominator, false)) {
        this->p_01->processTimeSignatureEvent(time, numerator, denominator);
        this->p_02->processTimeSignatureEvent(time, numerator, denominator);
        this->p_03->processTimeSignatureEvent(time, numerator, denominator);
        this->p_04->processTimeSignatureEvent(time, numerator, denominator);
        this->p_05->processTimeSignatureEvent(time, numerator, denominator);
        this->p_06->processTimeSignatureEvent(time, numerator, denominator);
        this->p_07->processTimeSignatureEvent(time, numerator, denominator);
    }
}

void setParameterValue(ParameterIndex index, ParameterValue v, MillisecondTime time) {
    this->updateTime(time);

    switch (index) {
    case 0:
        {
        this->param_01_value_set(v);
        break;
        }
    case 1:
        {
        this->param_02_value_set(v);
        break;
        }
    case 2:
        {
        this->param_03_value_set(v);
        break;
        }
    case 3:
        {
        this->param_04_value_set(v);
        break;
        }
    case 4:
        {
        this->param_05_value_set(v);
        break;
        }
    case 5:
        {
        this->param_06_value_set(v);
        break;
        }
    case 6:
        {
        this->param_07_value_set(v);
        break;
        }
    case 7:
        {
        this->param_08_value_set(v);
        break;
        }
    case 8:
        {
        this->param_09_value_set(v);
        break;
        }
    case 9:
        {
        this->param_10_value_set(v);
        break;
        }
    case 10:
        {
        this->param_11_value_set(v);
        break;
        }
    case 11:
        {
        this->param_12_value_set(v);
        break;
        }
    case 12:
        {
        this->param_13_value_set(v);
        break;
        }
    case 13:
        {
        this->param_14_value_set(v);
        break;
        }
    case 14:
        {
        this->param_15_value_set(v);
        break;
        }
    case 15:
        {
        this->param_16_value_set(v);
        break;
        }
    case 16:
        {
        this->param_17_value_set(v);
        break;
        }
    case 17:
        {
        this->param_18_value_set(v);
        break;
        }
    case 18:
        {
        this->param_19_value_set(v);
        break;
        }
    default:
        {
        index -= 19;

        if (index < this->p_01->getNumParameters())
            this->p_01->setParameterValue(index, v, time);

        index -= this->p_01->getNumParameters();

        if (index < this->p_02->getNumParameters())
            this->p_02->setParameterValue(index, v, time);

        index -= this->p_02->getNumParameters();

        if (index < this->p_03->getNumParameters())
            this->p_03->setParameterValue(index, v, time);

        index -= this->p_03->getNumParameters();

        if (index < this->p_04->getNumParameters())
            this->p_04->setParameterValue(index, v, time);

        index -= this->p_04->getNumParameters();

        if (index < this->p_05->getNumParameters())
            this->p_05->setParameterValue(index, v, time);

        index -= this->p_05->getNumParameters();

        if (index < this->p_06->getNumParameters())
            this->p_06->setParameterValue(index, v, time);

        index -= this->p_06->getNumParameters();

        if (index < this->p_07->getNumParameters())
            this->p_07->setParameterValue(index, v, time);

        break;
        }
    }
}

void processParameterEvent(ParameterIndex index, ParameterValue value, MillisecondTime time) {
    this->setParameterValue(index, value, time);
}

void processParameterBangEvent(ParameterIndex index, MillisecondTime time) {
    this->setParameterValue(index, this->getParameterValue(index), time);
}

void processNormalizedParameterEvent(ParameterIndex index, ParameterValue value, MillisecondTime time) {
    this->setParameterValueNormalized(index, value, time);
}

ParameterValue getParameterValue(ParameterIndex index)  {
    switch (index) {
    case 0:
        {
        return this->param_01_value;
        }
    case 1:
        {
        return this->param_02_value;
        }
    case 2:
        {
        return this->param_03_value;
        }
    case 3:
        {
        return this->param_04_value;
        }
    case 4:
        {
        return this->param_05_value;
        }
    case 5:
        {
        return this->param_06_value;
        }
    case 6:
        {
        return this->param_07_value;
        }
    case 7:
        {
        return this->param_08_value;
        }
    case 8:
        {
        return this->param_09_value;
        }
    case 9:
        {
        return this->param_10_value;
        }
    case 10:
        {
        return this->param_11_value;
        }
    case 11:
        {
        return this->param_12_value;
        }
    case 12:
        {
        return this->param_13_value;
        }
    case 13:
        {
        return this->param_14_value;
        }
    case 14:
        {
        return this->param_15_value;
        }
    case 15:
        {
        return this->param_16_value;
        }
    case 16:
        {
        return this->param_17_value;
        }
    case 17:
        {
        return this->param_18_value;
        }
    case 18:
        {
        return this->param_19_value;
        }
    default:
        {
        index -= 19;

        if (index < this->p_01->getNumParameters())
            return this->p_01->getParameterValue(index);

        index -= this->p_01->getNumParameters();

        if (index < this->p_02->getNumParameters())
            return this->p_02->getParameterValue(index);

        index -= this->p_02->getNumParameters();

        if (index < this->p_03->getNumParameters())
            return this->p_03->getParameterValue(index);

        index -= this->p_03->getNumParameters();

        if (index < this->p_04->getNumParameters())
            return this->p_04->getParameterValue(index);

        index -= this->p_04->getNumParameters();

        if (index < this->p_05->getNumParameters())
            return this->p_05->getParameterValue(index);

        index -= this->p_05->getNumParameters();

        if (index < this->p_06->getNumParameters())
            return this->p_06->getParameterValue(index);

        index -= this->p_06->getNumParameters();

        if (index < this->p_07->getNumParameters())
            return this->p_07->getParameterValue(index);

        return 0;
        }
    }
}

ParameterIndex getNumSignalInParameters() const {
    return 0;
}

ParameterIndex getNumSignalOutParameters() const {
    return 0;
}

ParameterIndex getNumParameters() const {
    return 19 + this->p_01->getNumParameters() + this->p_02->getNumParameters() + this->p_03->getNumParameters() + this->p_04->getNumParameters() + this->p_05->getNumParameters() + this->p_06->getNumParameters() + this->p_07->getNumParameters();
}

ConstCharPointer getParameterName(ParameterIndex index) const {
    switch (index) {
    case 0:
        {
        return "density";
        }
    case 1:
        {
        return "duration";
        }
    case 2:
        {
        return "durvar";
        }
    case 3:
        {
        return "durcurve";
        }
    case 4:
        {
        return "posms";
        }
    case 5:
        {
        return "pos";
        }
    case 6:
        {
        return "posvar";
        }
    case 7:
        {
        return "posvarms";
        }
    case 8:
        {
        return "poscurve";
        }
    case 9:
        {
        return "amp";
        }
    case 10:
        {
        return "ampvar";
        }
    case 11:
        {
        return "ampcurve";
        }
    case 12:
        {
        return "oscfreq";
        }
    case 13:
        {
        return "oscvar";
        }
    case 14:
        {
        return "osccurve";
        }
    case 15:
        {
        return "sampspeed";
        }
    case 16:
        {
        return "sampvar";
        }
    case 17:
        {
        return "sampcurve";
        }
    case 18:
        {
        return "pan";
        }
    default:
        {
        index -= 19;

        if (index < this->p_01->getNumParameters())
            return this->p_01->getParameterName(index);

        index -= this->p_01->getNumParameters();

        if (index < this->p_02->getNumParameters())
            return this->p_02->getParameterName(index);

        index -= this->p_02->getNumParameters();

        if (index < this->p_03->getNumParameters())
            return this->p_03->getParameterName(index);

        index -= this->p_03->getNumParameters();

        if (index < this->p_04->getNumParameters())
            return this->p_04->getParameterName(index);

        index -= this->p_04->getNumParameters();

        if (index < this->p_05->getNumParameters())
            return this->p_05->getParameterName(index);

        index -= this->p_05->getNumParameters();

        if (index < this->p_06->getNumParameters())
            return this->p_06->getParameterName(index);

        index -= this->p_06->getNumParameters();

        if (index < this->p_07->getNumParameters())
            return this->p_07->getParameterName(index);

        return "bogus";
        }
    }
}

ConstCharPointer getParameterId(ParameterIndex index) const {
    switch (index) {
    case 0:
        {
        return "density";
        }
    case 1:
        {
        return "duration";
        }
    case 2:
        {
        return "durvar";
        }
    case 3:
        {
        return "durcurve";
        }
    case 4:
        {
        return "posms";
        }
    case 5:
        {
        return "pos";
        }
    case 6:
        {
        return "posvar";
        }
    case 7:
        {
        return "posvarms";
        }
    case 8:
        {
        return "poscurve";
        }
    case 9:
        {
        return "amp";
        }
    case 10:
        {
        return "ampvar";
        }
    case 11:
        {
        return "ampcurve";
        }
    case 12:
        {
        return "oscfreq";
        }
    case 13:
        {
        return "oscvar";
        }
    case 14:
        {
        return "osccurve";
        }
    case 15:
        {
        return "sampspeed";
        }
    case 16:
        {
        return "sampvar";
        }
    case 17:
        {
        return "sampcurve";
        }
    case 18:
        {
        return "pan";
        }
    default:
        {
        index -= 19;

        if (index < this->p_01->getNumParameters())
            return this->p_01->getParameterId(index);

        index -= this->p_01->getNumParameters();

        if (index < this->p_02->getNumParameters())
            return this->p_02->getParameterId(index);

        index -= this->p_02->getNumParameters();

        if (index < this->p_03->getNumParameters())
            return this->p_03->getParameterId(index);

        index -= this->p_03->getNumParameters();

        if (index < this->p_04->getNumParameters())
            return this->p_04->getParameterId(index);

        index -= this->p_04->getNumParameters();

        if (index < this->p_05->getNumParameters())
            return this->p_05->getParameterId(index);

        index -= this->p_05->getNumParameters();

        if (index < this->p_06->getNumParameters())
            return this->p_06->getParameterId(index);

        index -= this->p_06->getNumParameters();

        if (index < this->p_07->getNumParameters())
            return this->p_07->getParameterId(index);

        return "bogus";
        }
    }
}

void getParameterInfo(ParameterIndex index, ParameterInfo * info) const {
    {
        switch (index) {
        case 0:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = 10;
            info->min = 2;
            info->max = 80;
            info->exponent = 1;
            info->steps = 0;
            info->debug = false;
            info->saveable = true;
            info->transmittable = true;
            info->initialized = true;
            info->visible = true;
            info->displayName = "";
            info->unit = "";
            info->ioType = IOTypeUndefined;
            info->signalIndex = INVALID_INDEX;
            break;
            }
        case 1:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = 100;
            info->min = 0.001;
            info->max = 500;
            info->exponent = 1;
            info->steps = 0;
            info->debug = false;
            info->saveable = true;
            info->transmittable = true;
            info->initialized = true;
            info->visible = true;
            info->displayName = "";
            info->unit = "";
            info->ioType = IOTypeUndefined;
            info->signalIndex = INVALID_INDEX;
            break;
            }
        case 2:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = 0;
            info->min = 0;
            info->max = 100;
            info->exponent = 1;
            info->steps = 0;
            info->debug = false;
            info->saveable = true;
            info->transmittable = true;
            info->initialized = true;
            info->visible = true;
            info->displayName = "";
            info->unit = "";
            info->ioType = IOTypeUndefined;
            info->signalIndex = INVALID_INDEX;
            break;
            }
        case 3:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = 0;
            info->min = 0;
            info->max = 50;
            info->exponent = 1;
            info->steps = 0;
            info->debug = false;
            info->saveable = true;
            info->transmittable = true;
            info->initialized = true;
            info->visible = true;
            info->displayName = "";
            info->unit = "";
            info->ioType = IOTypeUndefined;
            info->signalIndex = INVALID_INDEX;
            break;
            }
        case 4:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = 0;
            info->min = 0;
            info->max = 20000;
            info->exponent = 1;
            info->steps = 0;
            info->debug = false;
            info->saveable = true;
            info->transmittable = true;
            info->initialized = true;
            info->visible = true;
            info->displayName = "";
            info->unit = "";
            info->ioType = IOTypeUndefined;
            info->signalIndex = INVALID_INDEX;
            break;
            }
        case 5:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = 0.1;
            info->min = 0;
            info->max = 1;
            info->exponent = 1;
            info->steps = 0;
            info->debug = false;
            info->saveable = true;
            info->transmittable = true;
            info->initialized = true;
            info->visible = true;
            info->displayName = "";
            info->unit = "";
            info->ioType = IOTypeUndefined;
            info->signalIndex = INVALID_INDEX;
            break;
            }
        case 6:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = 0;
            info->min = 0;
            info->max = 1;
            info->exponent = 1;
            info->steps = 0;
            info->debug = false;
            info->saveable = true;
            info->transmittable = true;
            info->initialized = true;
            info->visible = true;
            info->displayName = "";
            info->unit = "";
            info->ioType = IOTypeUndefined;
            info->signalIndex = INVALID_INDEX;
            break;
            }
        case 7:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = 0;
            info->min = 0;
            info->max = 10000;
            info->exponent = 1;
            info->steps = 0;
            info->debug = false;
            info->saveable = true;
            info->transmittable = true;
            info->initialized = true;
            info->visible = true;
            info->displayName = "";
            info->unit = "";
            info->ioType = IOTypeUndefined;
            info->signalIndex = INVALID_INDEX;
            break;
            }
        case 8:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = 0;
            info->min = 0;
            info->max = 50;
            info->exponent = 1;
            info->steps = 0;
            info->debug = false;
            info->saveable = true;
            info->transmittable = true;
            info->initialized = true;
            info->visible = true;
            info->displayName = "";
            info->unit = "";
            info->ioType = IOTypeUndefined;
            info->signalIndex = INVALID_INDEX;
            break;
            }
        case 9:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = 0;
            info->min = 0;
            info->max = 1;
            info->exponent = 1;
            info->steps = 0;
            info->debug = false;
            info->saveable = true;
            info->transmittable = true;
            info->initialized = true;
            info->visible = true;
            info->displayName = "";
            info->unit = "";
            info->ioType = IOTypeUndefined;
            info->signalIndex = INVALID_INDEX;
            break;
            }
        case 10:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = 0;
            info->min = 0;
            info->max = 100;
            info->exponent = 1;
            info->steps = 0;
            info->debug = false;
            info->saveable = true;
            info->transmittable = true;
            info->initialized = true;
            info->visible = true;
            info->displayName = "";
            info->unit = "";
            info->ioType = IOTypeUndefined;
            info->signalIndex = INVALID_INDEX;
            break;
            }
        case 11:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = 0;
            info->min = 0;
            info->max = 50;
            info->exponent = 1;
            info->steps = 0;
            info->debug = false;
            info->saveable = true;
            info->transmittable = true;
            info->initialized = true;
            info->visible = true;
            info->displayName = "";
            info->unit = "";
            info->ioType = IOTypeUndefined;
            info->signalIndex = INVALID_INDEX;
            break;
            }
        case 12:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = 1;
            info->min = 0.5;
            info->max = 1000;
            info->exponent = 1;
            info->steps = 0;
            info->debug = false;
            info->saveable = true;
            info->transmittable = true;
            info->initialized = true;
            info->visible = true;
            info->displayName = "";
            info->unit = "";
            info->ioType = IOTypeUndefined;
            info->signalIndex = INVALID_INDEX;
            break;
            }
        case 13:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = 0;
            info->min = 0;
            info->max = 500;
            info->exponent = 1;
            info->steps = 0;
            info->debug = false;
            info->saveable = true;
            info->transmittable = true;
            info->initialized = true;
            info->visible = true;
            info->displayName = "";
            info->unit = "";
            info->ioType = IOTypeUndefined;
            info->signalIndex = INVALID_INDEX;
            break;
            }
        case 14:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = 0;
            info->min = 0;
            info->max = 50;
            info->exponent = 1;
            info->steps = 0;
            info->debug = false;
            info->saveable = true;
            info->transmittable = true;
            info->initialized = true;
            info->visible = true;
            info->displayName = "";
            info->unit = "";
            info->ioType = IOTypeUndefined;
            info->signalIndex = INVALID_INDEX;
            break;
            }
        case 15:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = 1;
            info->min = 0;
            info->max = 10;
            info->exponent = 1;
            info->steps = 0;
            info->debug = false;
            info->saveable = true;
            info->transmittable = true;
            info->initialized = true;
            info->visible = true;
            info->displayName = "";
            info->unit = "";
            info->ioType = IOTypeUndefined;
            info->signalIndex = INVALID_INDEX;
            break;
            }
        case 16:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = 0;
            info->min = 0;
            info->max = 100;
            info->exponent = 1;
            info->steps = 0;
            info->debug = false;
            info->saveable = true;
            info->transmittable = true;
            info->initialized = true;
            info->visible = true;
            info->displayName = "";
            info->unit = "";
            info->ioType = IOTypeUndefined;
            info->signalIndex = INVALID_INDEX;
            break;
            }
        case 17:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = 0;
            info->min = 0;
            info->max = 50;
            info->exponent = 1;
            info->steps = 0;
            info->debug = false;
            info->saveable = true;
            info->transmittable = true;
            info->initialized = true;
            info->visible = true;
            info->displayName = "";
            info->unit = "";
            info->ioType = IOTypeUndefined;
            info->signalIndex = INVALID_INDEX;
            break;
            }
        case 18:
            {
            info->type = ParameterTypeNumber;
            info->initialValue = 50;
            info->min = 0;
            info->max = 100;
            info->exponent = 1;
            info->steps = 0;
            info->debug = false;
            info->saveable = true;
            info->transmittable = true;
            info->initialized = true;
            info->visible = true;
            info->displayName = "";
            info->unit = "";
            info->ioType = IOTypeUndefined;
            info->signalIndex = INVALID_INDEX;
            break;
            }
        default:
            {
            index -= 19;

            if (index < this->p_01->getNumParameters())
                this->p_01->getParameterInfo(index, info);

            index -= this->p_01->getNumParameters();

            if (index < this->p_02->getNumParameters())
                this->p_02->getParameterInfo(index, info);

            index -= this->p_02->getNumParameters();

            if (index < this->p_03->getNumParameters())
                this->p_03->getParameterInfo(index, info);

            index -= this->p_03->getNumParameters();

            if (index < this->p_04->getNumParameters())
                this->p_04->getParameterInfo(index, info);

            index -= this->p_04->getNumParameters();

            if (index < this->p_05->getNumParameters())
                this->p_05->getParameterInfo(index, info);

            index -= this->p_05->getNumParameters();

            if (index < this->p_06->getNumParameters())
                this->p_06->getParameterInfo(index, info);

            index -= this->p_06->getNumParameters();

            if (index < this->p_07->getNumParameters())
                this->p_07->getParameterInfo(index, info);

            break;
            }
        }
    }
}

void sendParameter(ParameterIndex index, bool ignoreValue) {
    this->getEngine()->notifyParameterValueChanged(index, (ignoreValue ? 0 : this->getParameterValue(index)), ignoreValue);
}

ParameterIndex getParameterOffset(BaseInterface* subpatcher) const {
    if (subpatcher == this->p_01)
        return 19;

    if (subpatcher == this->p_02)
        return 19 + this->p_01->getNumParameters();

    if (subpatcher == this->p_03)
        return 19 + this->p_01->getNumParameters() + this->p_02->getNumParameters();

    if (subpatcher == this->p_04)
        return 19 + this->p_01->getNumParameters() + this->p_02->getNumParameters() + this->p_03->getNumParameters();

    if (subpatcher == this->p_05)
        return 19 + this->p_01->getNumParameters() + this->p_02->getNumParameters() + this->p_03->getNumParameters() + this->p_04->getNumParameters();

    if (subpatcher == this->p_06)
        return 19 + this->p_01->getNumParameters() + this->p_02->getNumParameters() + this->p_03->getNumParameters() + this->p_04->getNumParameters() + this->p_05->getNumParameters();

    if (subpatcher == this->p_07)
        return 19 + this->p_01->getNumParameters() + this->p_02->getNumParameters() + this->p_03->getNumParameters() + this->p_04->getNumParameters() + this->p_05->getNumParameters() + this->p_06->getNumParameters();

    return 0;
}

ParameterValue applyStepsToNormalizedParameterValue(ParameterValue normalizedValue, int steps) const {
    if (steps == 1) {
        if (normalizedValue > 0) {
            normalizedValue = 1.;
        }
    } else {
        ParameterValue oneStep = (number)1. / (steps - 1);
        ParameterValue numberOfSteps = rnbo_fround(normalizedValue / oneStep * 1 / (number)1) * (number)1;
        normalizedValue = numberOfSteps * oneStep;
    }

    return normalizedValue;
}

ParameterValue convertToNormalizedParameterValue(ParameterIndex index, ParameterValue value) const {
    switch (index) {
    case 5:
    case 6:
    case 9:
        {
        {
            value = (value < 0 ? 0 : (value > 1 ? 1 : value));
            ParameterValue normalizedValue = (value - 0) / (1 - 0);
            return normalizedValue;
        }
        }
    case 15:
        {
        {
            value = (value < 0 ? 0 : (value > 10 ? 10 : value));
            ParameterValue normalizedValue = (value - 0) / (10 - 0);
            return normalizedValue;
        }
        }
    case 3:
    case 8:
    case 11:
    case 14:
    case 17:
        {
        {
            value = (value < 0 ? 0 : (value > 50 ? 50 : value));
            ParameterValue normalizedValue = (value - 0) / (50 - 0);
            return normalizedValue;
        }
        }
    case 2:
    case 10:
    case 16:
    case 18:
        {
        {
            value = (value < 0 ? 0 : (value > 100 ? 100 : value));
            ParameterValue normalizedValue = (value - 0) / (100 - 0);
            return normalizedValue;
        }
        }
    case 13:
        {
        {
            value = (value < 0 ? 0 : (value > 500 ? 500 : value));
            ParameterValue normalizedValue = (value - 0) / (500 - 0);
            return normalizedValue;
        }
        }
    case 7:
        {
        {
            value = (value < 0 ? 0 : (value > 10000 ? 10000 : value));
            ParameterValue normalizedValue = (value - 0) / (10000 - 0);
            return normalizedValue;
        }
        }
    case 4:
        {
        {
            value = (value < 0 ? 0 : (value > 20000 ? 20000 : value));
            ParameterValue normalizedValue = (value - 0) / (20000 - 0);
            return normalizedValue;
        }
        }
    case 0:
        {
        {
            value = (value < 2 ? 2 : (value > 80 ? 80 : value));
            ParameterValue normalizedValue = (value - 2) / (80 - 2);
            return normalizedValue;
        }
        }
    case 1:
        {
        {
            value = (value < 0.001 ? 0.001 : (value > 500 ? 500 : value));
            ParameterValue normalizedValue = (value - 0.001) / (500 - 0.001);
            return normalizedValue;
        }
        }
    case 12:
        {
        {
            value = (value < 0.5 ? 0.5 : (value > 1000 ? 1000 : value));
            ParameterValue normalizedValue = (value - 0.5) / (1000 - 0.5);
            return normalizedValue;
        }
        }
    default:
        {
        index -= 19;

        if (index < this->p_01->getNumParameters())
            return this->p_01->convertToNormalizedParameterValue(index, value);

        index -= this->p_01->getNumParameters();

        if (index < this->p_02->getNumParameters())
            return this->p_02->convertToNormalizedParameterValue(index, value);

        index -= this->p_02->getNumParameters();

        if (index < this->p_03->getNumParameters())
            return this->p_03->convertToNormalizedParameterValue(index, value);

        index -= this->p_03->getNumParameters();

        if (index < this->p_04->getNumParameters())
            return this->p_04->convertToNormalizedParameterValue(index, value);

        index -= this->p_04->getNumParameters();

        if (index < this->p_05->getNumParameters())
            return this->p_05->convertToNormalizedParameterValue(index, value);

        index -= this->p_05->getNumParameters();

        if (index < this->p_06->getNumParameters())
            return this->p_06->convertToNormalizedParameterValue(index, value);

        index -= this->p_06->getNumParameters();

        if (index < this->p_07->getNumParameters())
            return this->p_07->convertToNormalizedParameterValue(index, value);

        return value;
        }
    }
}

ParameterValue convertFromNormalizedParameterValue(ParameterIndex index, ParameterValue value) const {
    value = (value < 0 ? 0 : (value > 1 ? 1 : value));

    switch (index) {
    case 5:
    case 6:
    case 9:
        {
        {
            value = (value < 0 ? 0 : (value > 1 ? 1 : value));

            {
                return 0 + value * (1 - 0);
            }
        }
        }
    case 15:
        {
        {
            value = (value < 0 ? 0 : (value > 1 ? 1 : value));

            {
                return 0 + value * (10 - 0);
            }
        }
        }
    case 3:
    case 8:
    case 11:
    case 14:
    case 17:
        {
        {
            value = (value < 0 ? 0 : (value > 1 ? 1 : value));

            {
                return 0 + value * (50 - 0);
            }
        }
        }
    case 2:
    case 10:
    case 16:
    case 18:
        {
        {
            value = (value < 0 ? 0 : (value > 1 ? 1 : value));

            {
                return 0 + value * (100 - 0);
            }
        }
        }
    case 13:
        {
        {
            value = (value < 0 ? 0 : (value > 1 ? 1 : value));

            {
                return 0 + value * (500 - 0);
            }
        }
        }
    case 7:
        {
        {
            value = (value < 0 ? 0 : (value > 1 ? 1 : value));

            {
                return 0 + value * (10000 - 0);
            }
        }
        }
    case 4:
        {
        {
            value = (value < 0 ? 0 : (value > 1 ? 1 : value));

            {
                return 0 + value * (20000 - 0);
            }
        }
        }
    case 0:
        {
        {
            value = (value < 0 ? 0 : (value > 1 ? 1 : value));

            {
                return 2 + value * (80 - 2);
            }
        }
        }
    case 1:
        {
        {
            value = (value < 0 ? 0 : (value > 1 ? 1 : value));

            {
                return 0.001 + value * (500 - 0.001);
            }
        }
        }
    case 12:
        {
        {
            value = (value < 0 ? 0 : (value > 1 ? 1 : value));

            {
                return 0.5 + value * (1000 - 0.5);
            }
        }
        }
    default:
        {
        index -= 19;

        if (index < this->p_01->getNumParameters())
            return this->p_01->convertFromNormalizedParameterValue(index, value);

        index -= this->p_01->getNumParameters();

        if (index < this->p_02->getNumParameters())
            return this->p_02->convertFromNormalizedParameterValue(index, value);

        index -= this->p_02->getNumParameters();

        if (index < this->p_03->getNumParameters())
            return this->p_03->convertFromNormalizedParameterValue(index, value);

        index -= this->p_03->getNumParameters();

        if (index < this->p_04->getNumParameters())
            return this->p_04->convertFromNormalizedParameterValue(index, value);

        index -= this->p_04->getNumParameters();

        if (index < this->p_05->getNumParameters())
            return this->p_05->convertFromNormalizedParameterValue(index, value);

        index -= this->p_05->getNumParameters();

        if (index < this->p_06->getNumParameters())
            return this->p_06->convertFromNormalizedParameterValue(index, value);

        index -= this->p_06->getNumParameters();

        if (index < this->p_07->getNumParameters())
            return this->p_07->convertFromNormalizedParameterValue(index, value);

        return value;
        }
    }
}

ParameterValue constrainParameterValue(ParameterIndex index, ParameterValue value) const {
    switch (index) {
    case 0:
        {
        return this->param_01_value_constrain(value);
        }
    case 1:
        {
        return this->param_02_value_constrain(value);
        }
    case 2:
        {
        return this->param_03_value_constrain(value);
        }
    case 3:
        {
        return this->param_04_value_constrain(value);
        }
    case 4:
        {
        return this->param_05_value_constrain(value);
        }
    case 5:
        {
        return this->param_06_value_constrain(value);
        }
    case 6:
        {
        return this->param_07_value_constrain(value);
        }
    case 7:
        {
        return this->param_08_value_constrain(value);
        }
    case 8:
        {
        return this->param_09_value_constrain(value);
        }
    case 9:
        {
        return this->param_10_value_constrain(value);
        }
    case 10:
        {
        return this->param_11_value_constrain(value);
        }
    case 11:
        {
        return this->param_12_value_constrain(value);
        }
    case 12:
        {
        return this->param_13_value_constrain(value);
        }
    case 13:
        {
        return this->param_14_value_constrain(value);
        }
    case 14:
        {
        return this->param_15_value_constrain(value);
        }
    case 15:
        {
        return this->param_16_value_constrain(value);
        }
    case 16:
        {
        return this->param_17_value_constrain(value);
        }
    case 17:
        {
        return this->param_18_value_constrain(value);
        }
    case 18:
        {
        return this->param_19_value_constrain(value);
        }
    default:
        {
        index -= 19;

        if (index < this->p_01->getNumParameters())
            return this->p_01->constrainParameterValue(index, value);

        index -= this->p_01->getNumParameters();

        if (index < this->p_02->getNumParameters())
            return this->p_02->constrainParameterValue(index, value);

        index -= this->p_02->getNumParameters();

        if (index < this->p_03->getNumParameters())
            return this->p_03->constrainParameterValue(index, value);

        index -= this->p_03->getNumParameters();

        if (index < this->p_04->getNumParameters())
            return this->p_04->constrainParameterValue(index, value);

        index -= this->p_04->getNumParameters();

        if (index < this->p_05->getNumParameters())
            return this->p_05->constrainParameterValue(index, value);

        index -= this->p_05->getNumParameters();

        if (index < this->p_06->getNumParameters())
            return this->p_06->constrainParameterValue(index, value);

        index -= this->p_06->getNumParameters();

        if (index < this->p_07->getNumParameters())
            return this->p_07->constrainParameterValue(index, value);

        return value;
        }
    }
}

void scheduleParamInit(ParameterIndex index, Index order) {
    this->paramInitIndices->push(index);
    this->paramInitOrder->push(order);
}

void processParamInitEvents() {
    this->listquicksort(
        this->paramInitOrder,
        this->paramInitIndices,
        0,
        (int)(this->paramInitOrder->length - 1),
        true
    );

    for (Index i = 0; i < this->paramInitOrder->length; i++) {
        this->getEngine()->scheduleParameterBang(this->paramInitIndices[i], 0);
    }
}

void processClockEvent(MillisecondTime time, ClockId index, bool hasValue, ParameterValue value) {
    RNBO_UNUSED(value);
    RNBO_UNUSED(hasValue);
    this->updateTime(time);

    switch (index) {
    case -871642103:
        {
        this->loadbang_01_startupbang_bang();
        break;
        }
    }
}

void processOutletAtCurrentTime(EngineLink* , OutletIndex , ParameterValue ) {}

void processOutletEvent(
    EngineLink* sender,
    OutletIndex index,
    ParameterValue value,
    MillisecondTime time
) {
    this->updateTime(time);
    this->processOutletAtCurrentTime(sender, index, value);
}

void processNumMessage(MessageTag tag, MessageTag objectId, MillisecondTime time, number payload) {
    this->updateTime(time);

    switch (tag) {
    case TAG("valin"):
        {
        if (TAG("rate") == objectId)
            this->numberobj_02_valin_set(payload);

        if (TAG("duty") == objectId)
            this->numberobj_03_valin_set(payload);

        if (TAG("dutyVar") == objectId)
            this->numberobj_04_valin_set(payload);

        if (TAG("dutyCurve") == objectId)
            this->numberobj_05_valin_set(payload);

        if (TAG("number_obj-91") == objectId)
            this->numberobj_06_valin_set(payload);

        if (TAG("pos[2]") == objectId)
            this->numberobj_07_valin_set(payload);

        if (TAG("posVar") == objectId)
            this->numberobj_08_valin_set(payload);

        if (TAG("posCurve") == objectId)
            this->numberobj_09_valin_set(payload);

        if (TAG("amp[2]") == objectId)
            this->numberobj_10_valin_set(payload);

        if (TAG("ampVar") == objectId)
            this->numberobj_11_valin_set(payload);

        if (TAG("ampCurve") == objectId)
            this->numberobj_12_valin_set(payload);

        if (TAG("freq[1]") == objectId)
            this->numberobj_13_valin_set(payload);

        if (TAG("freqVar") == objectId)
            this->numberobj_14_valin_set(payload);

        if (TAG("freqCurve") == objectId)
            this->numberobj_15_valin_set(payload);

        if (TAG("freq[2]") == objectId)
            this->numberobj_16_valin_set(payload);

        if (TAG("freqVar[2]") == objectId)
            this->numberobj_17_valin_set(payload);

        if (TAG("freqCurve[2]") == objectId)
            this->numberobj_18_valin_set(payload);

        if (TAG("panWifth") == objectId)
            this->numberobj_19_valin_set(payload);

        break;
        }
    case TAG("format"):
        {
        if (TAG("rate") == objectId)
            this->numberobj_02_format_set(payload);

        if (TAG("duty") == objectId)
            this->numberobj_03_format_set(payload);

        if (TAG("dutyVar") == objectId)
            this->numberobj_04_format_set(payload);

        if (TAG("dutyCurve") == objectId)
            this->numberobj_05_format_set(payload);

        if (TAG("number_obj-91") == objectId)
            this->numberobj_06_format_set(payload);

        if (TAG("pos[2]") == objectId)
            this->numberobj_07_format_set(payload);

        if (TAG("posVar") == objectId)
            this->numberobj_08_format_set(payload);

        if (TAG("posCurve") == objectId)
            this->numberobj_09_format_set(payload);

        if (TAG("amp[2]") == objectId)
            this->numberobj_10_format_set(payload);

        if (TAG("ampVar") == objectId)
            this->numberobj_11_format_set(payload);

        if (TAG("ampCurve") == objectId)
            this->numberobj_12_format_set(payload);

        if (TAG("freq[1]") == objectId)
            this->numberobj_13_format_set(payload);

        if (TAG("freqVar") == objectId)
            this->numberobj_14_format_set(payload);

        if (TAG("freqCurve") == objectId)
            this->numberobj_15_format_set(payload);

        if (TAG("freq[2]") == objectId)
            this->numberobj_16_format_set(payload);

        if (TAG("freqVar[2]") == objectId)
            this->numberobj_17_format_set(payload);

        if (TAG("freqCurve[2]") == objectId)
            this->numberobj_18_format_set(payload);

        if (TAG("panWifth") == objectId)
            this->numberobj_19_format_set(payload);

        break;
        }
    }

    this->p_01->processNumMessage(tag, objectId, time, payload);
    this->p_02->processNumMessage(tag, objectId, time, payload);
    this->p_03->processNumMessage(tag, objectId, time, payload);
    this->p_04->processNumMessage(tag, objectId, time, payload);
    this->p_05->processNumMessage(tag, objectId, time, payload);
    this->p_06->processNumMessage(tag, objectId, time, payload);
    this->p_07->processNumMessage(tag, objectId, time, payload);
}

void processListMessage(
    MessageTag tag,
    MessageTag objectId,
    MillisecondTime time,
    const list& payload
) {
    RNBO_UNUSED(objectId);
    this->updateTime(time);
    this->p_01->processListMessage(tag, objectId, time, payload);
    this->p_02->processListMessage(tag, objectId, time, payload);
    this->p_03->processListMessage(tag, objectId, time, payload);
    this->p_04->processListMessage(tag, objectId, time, payload);
    this->p_05->processListMessage(tag, objectId, time, payload);
    this->p_06->processListMessage(tag, objectId, time, payload);
    this->p_07->processListMessage(tag, objectId, time, payload);
}

void processBangMessage(MessageTag tag, MessageTag objectId, MillisecondTime time) {
    this->updateTime(time);

    switch (tag) {
    case TAG("startupbang"):
        {
        if (TAG("loadbang_obj-44") == objectId)
            this->loadbang_01_startupbang_bang();

        break;
        }
    }

    this->p_01->processBangMessage(tag, objectId, time);
    this->p_02->processBangMessage(tag, objectId, time);
    this->p_03->processBangMessage(tag, objectId, time);
    this->p_04->processBangMessage(tag, objectId, time);
    this->p_05->processBangMessage(tag, objectId, time);
    this->p_06->processBangMessage(tag, objectId, time);
    this->p_07->processBangMessage(tag, objectId, time);
}

MessageTagInfo resolveTag(MessageTag tag) const {
    switch (tag) {
    case TAG("valout"):
        {
        return "valout";
        }
    case TAG("rate"):
        {
        return "rate";
        }
    case TAG("setup"):
        {
        return "setup";
        }
    case TAG("duty"):
        {
        return "duty";
        }
    case TAG("dutyVar"):
        {
        return "dutyVar";
        }
    case TAG("dutyCurve"):
        {
        return "dutyCurve";
        }
    case TAG("number_obj-91"):
        {
        return "number_obj-91";
        }
    case TAG("pos[2]"):
        {
        return "pos[2]";
        }
    case TAG("posVar"):
        {
        return "posVar";
        }
    case TAG("posCurve"):
        {
        return "posCurve";
        }
    case TAG("amp[2]"):
        {
        return "amp[2]";
        }
    case TAG("ampVar"):
        {
        return "ampVar";
        }
    case TAG("ampCurve"):
        {
        return "ampCurve";
        }
    case TAG("freq[1]"):
        {
        return "freq[1]";
        }
    case TAG("freqVar"):
        {
        return "freqVar";
        }
    case TAG("freqCurve"):
        {
        return "freqCurve";
        }
    case TAG("freq[2]"):
        {
        return "freq[2]";
        }
    case TAG("freqVar[2]"):
        {
        return "freqVar[2]";
        }
    case TAG("freqCurve[2]"):
        {
        return "freqCurve[2]";
        }
    case TAG("panWifth"):
        {
        return "panWifth";
        }
    case TAG("valin"):
        {
        return "valin";
        }
    case TAG("format"):
        {
        return "format";
        }
    case TAG("startupbang"):
        {
        return "startupbang";
        }
    case TAG("loadbang_obj-44"):
        {
        return "loadbang_obj-44";
        }
    }

    auto subpatchResult_0 = this->p_01->resolveTag(tag);

    if (subpatchResult_0)
        return subpatchResult_0;

    auto subpatchResult_1 = this->p_02->resolveTag(tag);

    if (subpatchResult_1)
        return subpatchResult_1;

    auto subpatchResult_2 = this->p_03->resolveTag(tag);

    if (subpatchResult_2)
        return subpatchResult_2;

    auto subpatchResult_3 = this->p_04->resolveTag(tag);

    if (subpatchResult_3)
        return subpatchResult_3;

    auto subpatchResult_4 = this->p_05->resolveTag(tag);

    if (subpatchResult_4)
        return subpatchResult_4;

    auto subpatchResult_5 = this->p_06->resolveTag(tag);

    if (subpatchResult_5)
        return subpatchResult_5;

    auto subpatchResult_6 = this->p_07->resolveTag(tag);

    if (subpatchResult_6)
        return subpatchResult_6;

    return "";
}

MessageIndex getNumMessages() const {
    return 0;
}

const MessageInfo& getMessageInfo(MessageIndex index) const {
    switch (index) {

    }

    return NullMessageInfo;
}

protected:

void param_01_value_set(number v) {
    v = this->param_01_value_constrain(v);
    this->param_01_value = v;
    this->sendParameter(0, false);

    if (this->param_01_value != this->param_01_lastValue) {
        this->getEngine()->presetTouched();
        this->param_01_lastValue = this->param_01_value;
    }

    this->numberobj_02_value_set(v);
}

void param_02_value_set(number v) {
    v = this->param_02_value_constrain(v);
    this->param_02_value = v;
    this->sendParameter(1, false);

    if (this->param_02_value != this->param_02_lastValue) {
        this->getEngine()->presetTouched();
        this->param_02_lastValue = this->param_02_value;
    }

    this->numberobj_03_value_set(v);
}

void param_03_value_set(number v) {
    v = this->param_03_value_constrain(v);
    this->param_03_value = v;
    this->sendParameter(2, false);

    if (this->param_03_value != this->param_03_lastValue) {
        this->getEngine()->presetTouched();
        this->param_03_lastValue = this->param_03_value;
    }

    this->numberobj_04_value_set(v);
}

void param_04_value_set(number v) {
    v = this->param_04_value_constrain(v);
    this->param_04_value = v;
    this->sendParameter(3, false);

    if (this->param_04_value != this->param_04_lastValue) {
        this->getEngine()->presetTouched();
        this->param_04_lastValue = this->param_04_value;
    }

    this->numberobj_05_value_set(v);
}

void param_05_value_set(number v) {
    v = this->param_05_value_constrain(v);
    this->param_05_value = v;
    this->sendParameter(4, false);

    if (this->param_05_value != this->param_05_lastValue) {
        this->getEngine()->presetTouched();
        this->param_05_lastValue = this->param_05_value;
    }

    this->numberobj_07_value_set(v);
}

void param_06_value_set(number v) {
    v = this->param_06_value_constrain(v);
    this->param_06_value = v;
    this->sendParameter(5, false);

    if (this->param_06_value != this->param_06_lastValue) {
        this->getEngine()->presetTouched();
        this->param_06_lastValue = this->param_06_value;
    }

    this->numberobj_06_value_set(v);
}

void param_07_value_set(number v) {
    v = this->param_07_value_constrain(v);
    this->param_07_value = v;
    this->sendParameter(6, false);

    if (this->param_07_value != this->param_07_lastValue) {
        this->getEngine()->presetTouched();
        this->param_07_lastValue = this->param_07_value;
    }

    this->p_02_in2_number_set(v);
}

void param_08_value_set(number v) {
    v = this->param_08_value_constrain(v);
    this->param_08_value = v;
    this->sendParameter(7, false);

    if (this->param_08_value != this->param_08_lastValue) {
        this->getEngine()->presetTouched();
        this->param_08_lastValue = this->param_08_value;
    }

    this->numberobj_08_value_set(v);
}

void param_09_value_set(number v) {
    v = this->param_09_value_constrain(v);
    this->param_09_value = v;
    this->sendParameter(8, false);

    if (this->param_09_value != this->param_09_lastValue) {
        this->getEngine()->presetTouched();
        this->param_09_lastValue = this->param_09_value;
    }

    this->numberobj_09_value_set(v);
}

void param_10_value_set(number v) {
    v = this->param_10_value_constrain(v);
    this->param_10_value = v;
    this->sendParameter(9, false);

    if (this->param_10_value != this->param_10_lastValue) {
        this->getEngine()->presetTouched();
        this->param_10_lastValue = this->param_10_value;
    }

    this->numberobj_10_value_set(v);
}

void param_11_value_set(number v) {
    v = this->param_11_value_constrain(v);
    this->param_11_value = v;
    this->sendParameter(10, false);

    if (this->param_11_value != this->param_11_lastValue) {
        this->getEngine()->presetTouched();
        this->param_11_lastValue = this->param_11_value;
    }

    this->numberobj_11_value_set(v);
}

void param_12_value_set(number v) {
    v = this->param_12_value_constrain(v);
    this->param_12_value = v;
    this->sendParameter(11, false);

    if (this->param_12_value != this->param_12_lastValue) {
        this->getEngine()->presetTouched();
        this->param_12_lastValue = this->param_12_value;
    }

    this->numberobj_12_value_set(v);
}

void param_13_value_set(number v) {
    v = this->param_13_value_constrain(v);
    this->param_13_value = v;
    this->sendParameter(12, false);

    if (this->param_13_value != this->param_13_lastValue) {
        this->getEngine()->presetTouched();
        this->param_13_lastValue = this->param_13_value;
    }

    this->numberobj_13_value_set(v);
}

void param_14_value_set(number v) {
    v = this->param_14_value_constrain(v);
    this->param_14_value = v;
    this->sendParameter(13, false);

    if (this->param_14_value != this->param_14_lastValue) {
        this->getEngine()->presetTouched();
        this->param_14_lastValue = this->param_14_value;
    }

    this->numberobj_14_value_set(v);
}

void param_15_value_set(number v) {
    v = this->param_15_value_constrain(v);
    this->param_15_value = v;
    this->sendParameter(14, false);

    if (this->param_15_value != this->param_15_lastValue) {
        this->getEngine()->presetTouched();
        this->param_15_lastValue = this->param_15_value;
    }

    this->numberobj_15_value_set(v);
}

void param_16_value_set(number v) {
    v = this->param_16_value_constrain(v);
    this->param_16_value = v;
    this->sendParameter(15, false);

    if (this->param_16_value != this->param_16_lastValue) {
        this->getEngine()->presetTouched();
        this->param_16_lastValue = this->param_16_value;
    }

    this->numberobj_16_value_set(v);
}

void param_17_value_set(number v) {
    v = this->param_17_value_constrain(v);
    this->param_17_value = v;
    this->sendParameter(16, false);

    if (this->param_17_value != this->param_17_lastValue) {
        this->getEngine()->presetTouched();
        this->param_17_lastValue = this->param_17_value;
    }

    this->numberobj_17_value_set(v);
}

void param_18_value_set(number v) {
    v = this->param_18_value_constrain(v);
    this->param_18_value = v;
    this->sendParameter(17, false);

    if (this->param_18_value != this->param_18_lastValue) {
        this->getEngine()->presetTouched();
        this->param_18_lastValue = this->param_18_value;
    }

    this->numberobj_18_value_set(v);
}

void param_19_value_set(number v) {
    v = this->param_19_value_constrain(v);
    this->param_19_value = v;
    this->sendParameter(18, false);

    if (this->param_19_value != this->param_19_lastValue) {
        this->getEngine()->presetTouched();
        this->param_19_lastValue = this->param_19_value;
    }

    this->numberobj_19_value_set(v);
}

void numberobj_02_valin_set(number v) {
    this->numberobj_02_value_set(v);
}

void numberobj_02_format_set(number v) {
    this->numberobj_02_currentFormat = trunc((v > 6 ? 6 : (v < 0 ? 0 : v)));
}

void numberobj_03_valin_set(number v) {
    this->numberobj_03_value_set(v);
}

void numberobj_03_format_set(number v) {
    this->numberobj_03_currentFormat = trunc((v > 6 ? 6 : (v < 0 ? 0 : v)));
}

void numberobj_04_valin_set(number v) {
    this->numberobj_04_value_set(v);
}

void numberobj_04_format_set(number v) {
    this->numberobj_04_currentFormat = trunc((v > 6 ? 6 : (v < 0 ? 0 : v)));
}

void numberobj_05_valin_set(number v) {
    this->numberobj_05_value_set(v);
}

void numberobj_05_format_set(number v) {
    this->numberobj_05_currentFormat = trunc((v > 6 ? 6 : (v < 0 ? 0 : v)));
}

void numberobj_06_valin_set(number v) {
    this->numberobj_06_value_set(v);
}

void numberobj_06_format_set(number v) {
    this->numberobj_06_currentFormat = trunc((v > 6 ? 6 : (v < 0 ? 0 : v)));
}

void numberobj_07_valin_set(number v) {
    this->numberobj_07_value_set(v);
}

void numberobj_07_format_set(number v) {
    this->numberobj_07_currentFormat = trunc((v > 6 ? 6 : (v < 0 ? 0 : v)));
}

void numberobj_08_valin_set(number v) {
    this->numberobj_08_value_set(v);
}

void numberobj_08_format_set(number v) {
    this->numberobj_08_currentFormat = trunc((v > 6 ? 6 : (v < 0 ? 0 : v)));
}

void loadbang_01_startupbang_bang() {
    this->loadbang_01_output_bang();
}

void numberobj_09_valin_set(number v) {
    this->numberobj_09_value_set(v);
}

void numberobj_09_format_set(number v) {
    this->numberobj_09_currentFormat = trunc((v > 6 ? 6 : (v < 0 ? 0 : v)));
}

void numberobj_10_valin_set(number v) {
    this->numberobj_10_value_set(v);
}

void numberobj_10_format_set(number v) {
    this->numberobj_10_currentFormat = trunc((v > 6 ? 6 : (v < 0 ? 0 : v)));
}

void numberobj_11_valin_set(number v) {
    this->numberobj_11_value_set(v);
}

void numberobj_11_format_set(number v) {
    this->numberobj_11_currentFormat = trunc((v > 6 ? 6 : (v < 0 ? 0 : v)));
}

void numberobj_12_valin_set(number v) {
    this->numberobj_12_value_set(v);
}

void numberobj_12_format_set(number v) {
    this->numberobj_12_currentFormat = trunc((v > 6 ? 6 : (v < 0 ? 0 : v)));
}

void numberobj_13_valin_set(number v) {
    this->numberobj_13_value_set(v);
}

void numberobj_13_format_set(number v) {
    this->numberobj_13_currentFormat = trunc((v > 6 ? 6 : (v < 0 ? 0 : v)));
}

void numberobj_14_valin_set(number v) {
    this->numberobj_14_value_set(v);
}

void numberobj_14_format_set(number v) {
    this->numberobj_14_currentFormat = trunc((v > 6 ? 6 : (v < 0 ? 0 : v)));
}

void numberobj_15_valin_set(number v) {
    this->numberobj_15_value_set(v);
}

void numberobj_15_format_set(number v) {
    this->numberobj_15_currentFormat = trunc((v > 6 ? 6 : (v < 0 ? 0 : v)));
}

void numberobj_16_valin_set(number v) {
    this->numberobj_16_value_set(v);
}

void numberobj_16_format_set(number v) {
    this->numberobj_16_currentFormat = trunc((v > 6 ? 6 : (v < 0 ? 0 : v)));
}

void numberobj_17_valin_set(number v) {
    this->numberobj_17_value_set(v);
}

void numberobj_17_format_set(number v) {
    this->numberobj_17_currentFormat = trunc((v > 6 ? 6 : (v < 0 ? 0 : v)));
}

void numberobj_18_valin_set(number v) {
    this->numberobj_18_value_set(v);
}

void numberobj_18_format_set(number v) {
    this->numberobj_18_currentFormat = trunc((v > 6 ? 6 : (v < 0 ? 0 : v)));
}

void numberobj_19_valin_set(number v) {
    this->numberobj_19_value_set(v);
}

void numberobj_19_format_set(number v) {
    this->numberobj_19_currentFormat = trunc((v > 6 ? 6 : (v < 0 ? 0 : v)));
}

number msToSamps(MillisecondTime ms, number sampleRate) {
    return ms * sampleRate * 0.001;
}

MillisecondTime sampsToMs(SampleIndex samps) {
    return samps * (this->invsr * 1000);
}

Index getMaxBlockSize() const {
    return this->maxvs;
}

number getSampleRate() const {
    return this->sr;
}

bool hasFixedVectorSize() const {
    return false;
}

Index getNumInputChannels() const {
    return 0;
}

Index getNumOutputChannels() const {
    return 4;
}

void allocateDataRefs() {
    this->p_01->allocateDataRefs();
    this->p_02->allocateDataRefs();
    this->p_03->allocateDataRefs();
    this->p_04->allocateDataRefs();
    this->p_05->allocateDataRefs();
    this->p_06->allocateDataRefs();
    this->p_07->allocateDataRefs();
    this->data_02_buffer->requestSize(4096, 1);
    this->data_02_buffer->setSampleRate(this->sr);
    this->data_01_buffer->requestSize(4096, 1);
    this->data_01_buffer->setSampleRate(this->sr);
    this->gen_01_cycle_65_buffer->requestSize(16384, 1);
    this->gen_01_cycle_65_buffer->setSampleRate(this->sr);
    this->gen_01_cycle_70_buffer->requestSize(16384, 1);
    this->gen_01_cycle_70_buffer->setSampleRate(this->sr);
    this->gen_01_cycle_90_buffer->requestSize(16384, 1);
    this->gen_01_cycle_90_buffer->setSampleRate(this->sr);
    this->gen_01_cycle_95_buffer->requestSize(16384, 1);
    this->gen_01_cycle_95_buffer->setSampleRate(this->sr);
    this->gen_01_winsample = this->gen_01_winsample->allocateIfNeeded();
    this->bufferop_02_buffer = this->bufferop_02_buffer->allocateIfNeeded();
    this->data_02_buffer = this->data_02_buffer->allocateIfNeeded();

    if (this->winsample->hasRequestedSize()) {
        if (this->winsample->wantsFill())
            this->fillwinsample(this->winsample);

        this->getEngine()->sendDataRefUpdated(0);
    }

    this->gen_01_win2 = this->gen_01_win2->allocateIfNeeded();
    this->bufferop_01_buffer = this->bufferop_01_buffer->allocateIfNeeded();
    this->data_01_buffer = this->data_01_buffer->allocateIfNeeded();

    if (this->win2->hasRequestedSize()) {
        if (this->win2->wantsFill())
            this->fillwin2(this->win2);

        this->getEngine()->sendDataRefUpdated(1);
    }

    this->gen_01_sample = this->gen_01_sample->allocateIfNeeded();
    this->gen_02_sample = this->gen_02_sample->allocateIfNeeded();
    this->data_03_buffer = this->data_03_buffer->allocateIfNeeded();

    if (this->sample->hasRequestedSize()) {
        if (this->sample->wantsFill())
            this->zeroDataRef(this->sample);

        this->getEngine()->sendDataRefUpdated(2);
    }

    this->gen_01_cycle_65_buffer = this->gen_01_cycle_65_buffer->allocateIfNeeded();
    this->gen_01_cycle_70_buffer = this->gen_01_cycle_70_buffer->allocateIfNeeded();
    this->gen_01_cycle_90_buffer = this->gen_01_cycle_90_buffer->allocateIfNeeded();
    this->gen_01_cycle_95_buffer = this->gen_01_cycle_95_buffer->allocateIfNeeded();

    if (this->RNBODefaultSinus->hasRequestedSize()) {
        if (this->RNBODefaultSinus->wantsFill())
            this->fillRNBODefaultSinus(this->RNBODefaultSinus);

        this->getEngine()->sendDataRefUpdated(3);
    }
}

void initializeObjects() {
    this->gen_01_history_2_init();
    this->gen_01_history_1_init();
    this->gen_02_noise_2_init();
    this->gen_02_noise_7_init();
    this->gen_02_noise_12_init();
    this->gen_02_noise_20_init();
    this->gen_02_noise_26_init();
    this->gen_02_noise_31_init();
    this->gen_02_noise_35_init();
    this->gen_02_noise_50_init();
    this->numberobj_02_init();
    this->numberobj_03_init();
    this->numberobj_04_init();
    this->numberobj_05_init();
    this->numberobj_06_init();
    this->numberobj_07_init();
    this->numberobj_08_init();
    this->data_01_init();
    this->numberobj_09_init();
    this->numberobj_10_init();
    this->numberobj_11_init();
    this->data_02_init();
    this->numberobj_12_init();
    this->numberobj_13_init();
    this->numberobj_14_init();
    this->data_03_init();
    this->numberobj_15_init();
    this->numberobj_16_init();
    this->numberobj_17_init();
    this->numberobj_18_init();
    this->numberobj_19_init();
    this->p_01->initializeObjects();
    this->p_02->initializeObjects();
    this->p_03->initializeObjects();
    this->p_04->initializeObjects();
    this->p_05->initializeObjects();
    this->p_06->initializeObjects();
    this->p_07->initializeObjects();
}

void sendOutlet(OutletIndex index, ParameterValue value) {
    this->getEngine()->sendOutlet(this, index, value);
}

void startup() {
    this->updateTime(this->getEngine()->getCurrentTime());
    this->p_01->startup();
    this->p_02->startup();
    this->p_03->startup();
    this->p_04->startup();
    this->p_05->startup();
    this->p_06->startup();
    this->p_07->startup();
    this->getEngine()->scheduleClockEvent(this, -871642103, 0 + this->_currentTime);;

    {
        this->scheduleParamInit(0, 0);
    }

    {
        this->scheduleParamInit(1, 0);
    }

    {
        this->scheduleParamInit(2, 0);
    }

    {
        this->scheduleParamInit(3, 0);
    }

    {
        this->scheduleParamInit(5, 0);
    }

    {
        this->scheduleParamInit(6, 0);
    }

    {
        this->scheduleParamInit(8, 0);
    }

    {
        this->scheduleParamInit(9, 0);
    }

    {
        this->scheduleParamInit(10, 0);
    }

    {
        this->scheduleParamInit(11, 0);
    }

    {
        this->scheduleParamInit(12, 0);
    }

    {
        this->scheduleParamInit(13, 0);
    }

    {
        this->scheduleParamInit(14, 0);
    }

    {
        this->scheduleParamInit(15, 0);
    }

    {
        this->scheduleParamInit(16, 0);
    }

    {
        this->scheduleParamInit(17, 0);
    }

    {
        this->scheduleParamInit(18, 0);
    }

    this->processParamInitEvents();
}

static number param_01_value_constrain(number v) {
    v = (v > 80 ? 80 : (v < 2 ? 2 : v));
    return v;
}

static number gen_02_density_constrain(number v) {
    if (v < 0)
        v = 0;

    if (v > 500)
        v = 500;

    return v;
}

void gen_02_density_set(number v) {
    v = this->gen_02_density_constrain(v);
    this->gen_02_density = v;
}

void p_01_out1_number_set(number v) {
    this->gen_02_density_set(v);
}

void p_01_in1_number_set(number v) {
    this->p_01->updateTime(this->_currentTime);
    this->p_01->eventinlet_01_out1_number_set(v);
}

void numberobj_02_output_set(number v) {
    this->p_01_in1_number_set(v);
}

void numberobj_02_value_set(number v) {
    this->numberobj_02_value_setter(v);
    v = this->numberobj_02_value;
    number localvalue = v;

    if ((bool)(true) && localvalue < 0) {
        localvalue = 0;
    }

    if (this->numberobj_02_currentFormat != 6) {
        localvalue = trunc(localvalue);
    }

    this->getEngine()->sendNumMessage(TAG("valout"), TAG("rate"), localvalue, this->_currentTime);
    this->numberobj_02_output_set(localvalue);
}

static number param_02_value_constrain(number v) {
    v = (v > 500 ? 500 : (v < 0.001 ? 0.001 : v));
    return v;
}

static number gen_02_durmax_constrain(number v) {
    if (v < 0.1)
        v = 0.1;

    if (v > 1000)
        v = 1000;

    return v;
}

void gen_02_durmax_set(number v) {
    v = this->gen_02_durmax_constrain(v);
    this->gen_02_durmax = v;
}

void p_01_out3_number_set(number v) {
    this->gen_02_durmax_set(v);
}

static number gen_02_durmin_constrain(number v) {
    if (v < 0)
        v = 0;

    if (v > 500)
        v = 500;

    return v;
}

void gen_02_durmin_set(number v) {
    v = this->gen_02_durmin_constrain(v);
    this->gen_02_durmin = v;
}

void p_01_out2_number_set(number v) {
    this->gen_02_durmin_set(v);
}

void p_01_in2_number_set(number v) {
    this->p_01->updateTime(this->_currentTime);
    this->p_01->eventinlet_02_out1_number_set(v);
}

void numberobj_03_output_set(number v) {
    this->p_01_in2_number_set(v);
}

void numberobj_03_value_set(number v) {
    this->numberobj_03_value_setter(v);
    v = this->numberobj_03_value;
    number localvalue = v;

    if ((bool)(true) && localvalue < 0.001) {
        localvalue = 0.001;
    }

    if ((bool)(true) && localvalue > 8000) {
        localvalue = 8000;
    }

    if (this->numberobj_03_currentFormat != 6) {
        localvalue = trunc(localvalue);
    }

    this->getEngine()->sendNumMessage(TAG("valout"), TAG("duty"), localvalue, this->_currentTime);
    this->numberobj_03_output_set(localvalue);
}

static number param_03_value_constrain(number v) {
    v = (v > 100 ? 100 : (v < 0 ? 0 : v));
    return v;
}

void p_01_in3_number_set(number v) {
    this->p_01->updateTime(this->_currentTime);
    this->p_01->eventinlet_03_out1_number_set(v);
}

void numberobj_04_output_set(number v) {
    this->p_01_in3_number_set(v);
}

void numberobj_04_value_set(number v) {
    this->numberobj_04_value_setter(v);
    v = this->numberobj_04_value;
    number localvalue = v;

    if ((bool)(true) && localvalue < 0) {
        localvalue = 0;
    }

    if ((bool)(true) && localvalue > 100) {
        localvalue = 100;
    }

    if (this->numberobj_04_currentFormat != 6) {
        localvalue = trunc(localvalue);
    }

    this->getEngine()->sendNumMessage(TAG("valout"), TAG("dutyVar"), localvalue, this->_currentTime);
    this->numberobj_04_output_set(localvalue);
}

static number param_04_value_constrain(number v) {
    v = (v > 50 ? 50 : (v < 0 ? 0 : v));
    return v;
}

static number gen_02_durcurve_constrain(number v) {
    if (v < 0)
        v = 0;

    if (v > 500)
        v = 500;

    return v;
}

void gen_02_durcurve_set(number v) {
    v = this->gen_02_durcurve_constrain(v);
    this->gen_02_durcurve = v;
}

void p_01_out4_number_set(number v) {
    this->gen_02_durcurve_set(v);
}

void p_01_in4_number_set(number v) {
    this->p_01->updateTime(this->_currentTime);
    this->p_01->eventinlet_04_out1_number_set(v);
}

void numberobj_05_output_set(number v) {
    this->p_01_in4_number_set(v);
}

void numberobj_05_value_set(number v) {
    this->numberobj_05_value_setter(v);
    v = this->numberobj_05_value;
    number localvalue = v;

    if ((bool)(true) && localvalue < 0) {
        localvalue = 0;
    }

    if (this->numberobj_05_currentFormat != 6) {
        localvalue = trunc(localvalue);
    }

    this->getEngine()->sendNumMessage(TAG("valout"), TAG("dutyCurve"), localvalue, this->_currentTime);
    this->numberobj_05_output_set(localvalue);
}

static number param_05_value_constrain(number v) {
    v = (v > 20000 ? 20000 : (v < 0 ? 0 : v));
    return v;
}

static number gen_02_posmax_constrain(number v) {
    if (v < 0)
        v = 0;

    if (v > 100000)
        v = 100000;

    return v;
}

void gen_02_posmax_set(number v) {
    v = this->gen_02_posmax_constrain(v);
    this->gen_02_posmax = v;
}

void p_03_out2_number_set(number v) {
    this->gen_02_posmax_set(v);
}

static number gen_02_posmin_constrain(number v) {
    if (v < 0)
        v = 0;

    if (v > 100000)
        v = 100000;

    return v;
}

void gen_02_posmin_set(number v) {
    v = this->gen_02_posmin_constrain(v);
    this->gen_02_posmin = v;
}

void p_03_out1_number_set(number v) {
    this->gen_02_posmin_set(v);
}

void p_03_in1_number_set(number v) {
    this->p_03->updateTime(this->_currentTime);
    this->p_03->eventinlet_07_out1_number_set(v);
}

void numberobj_07_output_set(number v) {
    this->p_03_in1_number_set(v);
}

void numberobj_07_value_set(number v) {
    this->numberobj_07_value_setter(v);
    v = this->numberobj_07_value;
    number localvalue = v;

    if ((bool)(true) && localvalue < 0) {
        localvalue = 0;
    }

    if (this->numberobj_07_currentFormat != 6) {
        localvalue = trunc(localvalue);
    }

    this->getEngine()->sendNumMessage(TAG("valout"), TAG("pos[2]"), localvalue, this->_currentTime);
    this->numberobj_07_output_set(localvalue);
}

static number param_06_value_constrain(number v) {
    v = (v > 1 ? 1 : (v < 0 ? 0 : v));
    return v;
}

void p_02_out1_number_set(number v) {
    this->numberobj_07_value_set(v);
}

void p_02_in1_number_set(number v) {
    this->p_02->updateTime(this->_currentTime);
    this->p_02->eventinlet_05_out1_number_set(v);
}

void numberobj_06_output_set(number v) {
    this->p_02_in1_number_set(v);
}

void numberobj_06_value_set(number v) {
    this->numberobj_06_value_setter(v);
    v = this->numberobj_06_value;
    number localvalue = v;

    if (this->numberobj_06_currentFormat != 6) {
        localvalue = trunc(localvalue);
    }

    this->getEngine()->sendNumMessage(TAG("valout"), TAG("number_obj-91"), localvalue, this->_currentTime);
    this->numberobj_06_output_set(localvalue);
}

static number param_07_value_constrain(number v) {
    v = (v > 1 ? 1 : (v < 0 ? 0 : v));
    return v;
}

void p_03_in2_number_set(number v) {
    this->p_03->updateTime(this->_currentTime);
    this->p_03->eventinlet_08_out1_number_set(v);
}

void numberobj_08_output_set(number v) {
    this->p_03_in2_number_set(v);
}

void numberobj_08_value_set(number v) {
    this->numberobj_08_value_setter(v);
    v = this->numberobj_08_value;
    number localvalue = v;

    if ((bool)(true) && localvalue < 0) {
        localvalue = 0;
    }

    if (this->numberobj_08_currentFormat != 6) {
        localvalue = trunc(localvalue);
    }

    this->getEngine()->sendNumMessage(TAG("valout"), TAG("posVar"), localvalue, this->_currentTime);
    this->numberobj_08_output_set(localvalue);
}

void p_02_out2_number_set(number v) {
    this->numberobj_08_value_set(v);
}

void p_02_in2_number_set(number v) {
    this->p_02->updateTime(this->_currentTime);
    this->p_02->eventinlet_06_out1_number_set(v);
}

static number param_08_value_constrain(number v) {
    v = (v > 10000 ? 10000 : (v < 0 ? 0 : v));
    return v;
}

static number param_09_value_constrain(number v) {
    v = (v > 50 ? 50 : (v < 0 ? 0 : v));
    return v;
}

static number gen_02_poscurve_constrain(number v) {
    if (v < 0)
        v = 0;

    if (v > 500)
        v = 500;

    return v;
}

void gen_02_poscurve_set(number v) {
    v = this->gen_02_poscurve_constrain(v);
    this->gen_02_poscurve = v;
}

void p_03_out3_number_set(number v) {
    this->gen_02_poscurve_set(v);
}

void p_03_in3_number_set(number v) {
    this->p_03->updateTime(this->_currentTime);
    this->p_03->eventinlet_09_out1_number_set(v);
}

void numberobj_09_output_set(number v) {
    this->p_03_in3_number_set(v);
}

void numberobj_09_value_set(number v) {
    this->numberobj_09_value_setter(v);
    v = this->numberobj_09_value;
    number localvalue = v;

    if ((bool)(true) && localvalue < 0) {
        localvalue = 0;
    }

    if (this->numberobj_09_currentFormat != 6) {
        localvalue = trunc(localvalue);
    }

    this->getEngine()->sendNumMessage(TAG("valout"), TAG("posCurve"), localvalue, this->_currentTime);
    this->numberobj_09_output_set(localvalue);
}

static number param_10_value_constrain(number v) {
    v = (v > 1 ? 1 : (v < 0 ? 0 : v));
    return v;
}

static number gen_02_ampmax_constrain(number v) {
    if (v < 0)
        v = 0;

    if (v > 2)
        v = 2;

    return v;
}

void gen_02_ampmax_set(number v) {
    v = this->gen_02_ampmax_constrain(v);
    this->gen_02_ampmax = v;
}

void p_04_out2_number_set(number v) {
    this->gen_02_ampmax_set(v);
}

static number gen_02_ampmin_constrain(number v) {
    if (v < 0)
        v = 0;

    if (v > 2)
        v = 2;

    return v;
}

void gen_02_ampmin_set(number v) {
    v = this->gen_02_ampmin_constrain(v);
    this->gen_02_ampmin = v;
}

void p_04_out1_number_set(number v) {
    this->gen_02_ampmin_set(v);
}

void p_04_in1_number_set(number v) {
    this->p_04->updateTime(this->_currentTime);
    this->p_04->eventinlet_10_out1_number_set(v);
}

void numberobj_10_output_set(number v) {
    this->p_04_in1_number_set(v);
}

void numberobj_10_value_set(number v) {
    this->numberobj_10_value_setter(v);
    v = this->numberobj_10_value;
    number localvalue = v;

    if ((bool)(true) && localvalue < 0) {
        localvalue = 0;
    }

    if ((bool)(true) && localvalue > 1) {
        localvalue = 1;
    }

    if (this->numberobj_10_currentFormat != 6) {
        localvalue = trunc(localvalue);
    }

    this->getEngine()->sendNumMessage(TAG("valout"), TAG("amp[2]"), localvalue, this->_currentTime);
    this->numberobj_10_output_set(localvalue);
}

static number param_11_value_constrain(number v) {
    v = (v > 100 ? 100 : (v < 0 ? 0 : v));
    return v;
}

void p_04_in2_number_set(number v) {
    this->p_04->updateTime(this->_currentTime);
    this->p_04->eventinlet_11_out1_number_set(v);
}

void numberobj_11_output_set(number v) {
    this->p_04_in2_number_set(v);
}

void numberobj_11_value_set(number v) {
    this->numberobj_11_value_setter(v);
    v = this->numberobj_11_value;
    number localvalue = v;

    if ((bool)(true) && localvalue < 0) {
        localvalue = 0;
    }

    if ((bool)(true) && localvalue > 100) {
        localvalue = 100;
    }

    if (this->numberobj_11_currentFormat != 6) {
        localvalue = trunc(localvalue);
    }

    this->getEngine()->sendNumMessage(TAG("valout"), TAG("ampVar"), localvalue, this->_currentTime);
    this->numberobj_11_output_set(localvalue);
}

static number param_12_value_constrain(number v) {
    v = (v > 50 ? 50 : (v < 0 ? 0 : v));
    return v;
}

static number gen_02_ampcurve_constrain(number v) {
    if (v < 0)
        v = 0;

    if (v > 500)
        v = 500;

    return v;
}

void gen_02_ampcurve_set(number v) {
    v = this->gen_02_ampcurve_constrain(v);
    this->gen_02_ampcurve = v;
}

void p_04_out3_number_set(number v) {
    this->gen_02_ampcurve_set(v);
}

void p_04_in3_number_set(number v) {
    this->p_04->updateTime(this->_currentTime);
    this->p_04->eventinlet_12_out1_number_set(v);
}

void numberobj_12_output_set(number v) {
    this->p_04_in3_number_set(v);
}

void numberobj_12_value_set(number v) {
    this->numberobj_12_value_setter(v);
    v = this->numberobj_12_value;
    number localvalue = v;

    if ((bool)(true) && localvalue < 0) {
        localvalue = 0;
    }

    if (this->numberobj_12_currentFormat != 6) {
        localvalue = trunc(localvalue);
    }

    this->getEngine()->sendNumMessage(TAG("valout"), TAG("ampCurve"), localvalue, this->_currentTime);
    this->numberobj_12_output_set(localvalue);
}

static number param_13_value_constrain(number v) {
    v = (v > 1000 ? 1000 : (v < 0.5 ? 0.5 : v));
    return v;
}

static number gen_02_freqmax_constrain(number v) {
    if (v < 0)
        v = 0;

    if (v > 1000)
        v = 1000;

    return v;
}

void gen_02_freqmax_set(number v) {
    v = this->gen_02_freqmax_constrain(v);
    this->gen_02_freqmax = v;
}

void p_05_out2_number_set(number v) {
    this->gen_02_freqmax_set(v);
}

static number gen_02_freqmin_constrain(number v) {
    if (v < 0)
        v = 0;

    if (v > 1000)
        v = 1000;

    return v;
}

void gen_02_freqmin_set(number v) {
    v = this->gen_02_freqmin_constrain(v);
    this->gen_02_freqmin = v;
}

void p_05_out1_number_set(number v) {
    this->gen_02_freqmin_set(v);
}

void p_05_in1_number_set(number v) {
    this->p_05->updateTime(this->_currentTime);
    this->p_05->eventinlet_13_out1_number_set(v);
}

void numberobj_13_output_set(number v) {
    this->p_05_in1_number_set(v);
}

void numberobj_13_value_set(number v) {
    this->numberobj_13_value_setter(v);
    v = this->numberobj_13_value;
    number localvalue = v;

    if ((bool)(true) && localvalue < 0) {
        localvalue = 0;
    }

    if (this->numberobj_13_currentFormat != 6) {
        localvalue = trunc(localvalue);
    }

    this->getEngine()->sendNumMessage(TAG("valout"), TAG("freq[1]"), localvalue, this->_currentTime);
    this->numberobj_13_output_set(localvalue);
}

static number param_14_value_constrain(number v) {
    v = (v > 500 ? 500 : (v < 0 ? 0 : v));
    return v;
}

void p_05_in2_number_set(number v) {
    this->p_05->updateTime(this->_currentTime);
    this->p_05->eventinlet_14_out1_number_set(v);
}

void numberobj_14_output_set(number v) {
    this->p_05_in2_number_set(v);
}

void numberobj_14_value_set(number v) {
    this->numberobj_14_value_setter(v);
    v = this->numberobj_14_value;
    number localvalue = v;

    if ((bool)(true) && localvalue < 0) {
        localvalue = 0;
    }

    if (this->numberobj_14_currentFormat != 6) {
        localvalue = trunc(localvalue);
    }

    this->getEngine()->sendNumMessage(TAG("valout"), TAG("freqVar"), localvalue, this->_currentTime);
    this->numberobj_14_output_set(localvalue);
}

static number param_15_value_constrain(number v) {
    v = (v > 50 ? 50 : (v < 0 ? 0 : v));
    return v;
}

static number gen_02_freqcurve_constrain(number v) {
    if (v < 0)
        v = 0;

    if (v > 500)
        v = 500;

    return v;
}

void gen_02_freqcurve_set(number v) {
    v = this->gen_02_freqcurve_constrain(v);
    this->gen_02_freqcurve = v;
}

void p_05_out3_number_set(number v) {
    this->gen_02_freqcurve_set(v);
}

void p_05_in3_number_set(number v) {
    this->p_05->updateTime(this->_currentTime);
    this->p_05->eventinlet_15_out1_number_set(v);
}

void numberobj_15_output_set(number v) {
    this->p_05_in3_number_set(v);
}

void numberobj_15_value_set(number v) {
    this->numberobj_15_value_setter(v);
    v = this->numberobj_15_value;
    number localvalue = v;

    if ((bool)(true) && localvalue < 0) {
        localvalue = 0;
    }

    if (this->numberobj_15_currentFormat != 6) {
        localvalue = trunc(localvalue);
    }

    this->getEngine()->sendNumMessage(TAG("valout"), TAG("freqCurve"), localvalue, this->_currentTime);
    this->numberobj_15_output_set(localvalue);
}

static number param_16_value_constrain(number v) {
    v = (v > 10 ? 10 : (v < 0 ? 0 : v));
    return v;
}

static number gen_02_speedmax_constrain(number v) {
    if (v < 0)
        v = 0;

    if (v > 1000)
        v = 1000;

    return v;
}

void gen_02_speedmax_set(number v) {
    v = this->gen_02_speedmax_constrain(v);
    this->gen_02_speedmax = v;
}

void p_06_out2_number_set(number v) {
    this->gen_02_speedmax_set(v);
}

static number gen_02_speedmin_constrain(number v) {
    if (v < 0)
        v = 0;

    if (v > 1000)
        v = 1000;

    return v;
}

void gen_02_speedmin_set(number v) {
    v = this->gen_02_speedmin_constrain(v);
    this->gen_02_speedmin = v;
}

void p_06_out1_number_set(number v) {
    this->gen_02_speedmin_set(v);
}

void p_06_in1_number_set(number v) {
    this->p_06->updateTime(this->_currentTime);
    this->p_06->eventinlet_16_out1_number_set(v);
}

void numberobj_16_output_set(number v) {
    this->p_06_in1_number_set(v);
}

void numberobj_16_value_set(number v) {
    this->numberobj_16_value_setter(v);
    v = this->numberobj_16_value;
    number localvalue = v;

    if ((bool)(true) && localvalue < 0) {
        localvalue = 0;
    }

    if (this->numberobj_16_currentFormat != 6) {
        localvalue = trunc(localvalue);
    }

    this->getEngine()->sendNumMessage(TAG("valout"), TAG("freq[2]"), localvalue, this->_currentTime);
    this->numberobj_16_output_set(localvalue);
}

static number param_17_value_constrain(number v) {
    v = (v > 100 ? 100 : (v < 0 ? 0 : v));
    return v;
}

void p_06_in2_number_set(number v) {
    this->p_06->updateTime(this->_currentTime);
    this->p_06->eventinlet_17_out1_number_set(v);
}

void numberobj_17_output_set(number v) {
    this->p_06_in2_number_set(v);
}

void numberobj_17_value_set(number v) {
    this->numberobj_17_value_setter(v);
    v = this->numberobj_17_value;
    number localvalue = v;

    if ((bool)(true) && localvalue < 0) {
        localvalue = 0;
    }

    if ((bool)(true) && localvalue > 100) {
        localvalue = 100;
    }

    if (this->numberobj_17_currentFormat != 6) {
        localvalue = trunc(localvalue);
    }

    this->getEngine()->sendNumMessage(TAG("valout"), TAG("freqVar[2]"), localvalue, this->_currentTime);
    this->numberobj_17_output_set(localvalue);
}

static number param_18_value_constrain(number v) {
    v = (v > 50 ? 50 : (v < 0 ? 0 : v));
    return v;
}

static number gen_02_speedcurve_constrain(number v) {
    if (v < 0)
        v = 0;

    if (v > 500)
        v = 500;

    return v;
}

void gen_02_speedcurve_set(number v) {
    v = this->gen_02_speedcurve_constrain(v);
    this->gen_02_speedcurve = v;
}

void p_06_out3_number_set(number v) {
    this->gen_02_speedcurve_set(v);
}

void p_06_in3_number_set(number v) {
    this->p_06->updateTime(this->_currentTime);
    this->p_06->eventinlet_18_out1_number_set(v);
}

void numberobj_18_output_set(number v) {
    this->p_06_in3_number_set(v);
}

void numberobj_18_value_set(number v) {
    this->numberobj_18_value_setter(v);
    v = this->numberobj_18_value;
    number localvalue = v;

    if ((bool)(true) && localvalue < 0) {
        localvalue = 0;
    }

    if (this->numberobj_18_currentFormat != 6) {
        localvalue = trunc(localvalue);
    }

    this->getEngine()->sendNumMessage(TAG("valout"), TAG("freqCurve[2]"), localvalue, this->_currentTime);
    this->numberobj_18_output_set(localvalue);
}

static number param_19_value_constrain(number v) {
    v = (v > 100 ? 100 : (v < 0 ? 0 : v));
    return v;
}

void gen_02_panmax_set(number v) {
    this->gen_02_panmax = v;
}

void p_07_out2_number_set(number v) {
    this->gen_02_panmax_set(v);
}

void gen_02_panmin_set(number v) {
    this->gen_02_panmin = v;
}

void p_07_out1_number_set(number v) {
    this->gen_02_panmin_set(v);
}

void p_07_in1_number_set(number v) {
    this->p_07->updateTime(this->_currentTime);
    this->p_07->eventinlet_19_out1_number_set(v);
}

void numberobj_19_output_set(number v) {
    this->p_07_in1_number_set(v);
}

void numberobj_19_value_set(number v) {
    this->numberobj_19_value_setter(v);
    v = this->numberobj_19_value;
    number localvalue = v;

    if ((bool)(true) && localvalue < 0) {
        localvalue = 0;
    }

    if ((bool)(true) && localvalue > 100) {
        localvalue = 100;
    }

    if (this->numberobj_19_currentFormat != 6) {
        localvalue = trunc(localvalue);
    }

    this->getEngine()->sendNumMessage(TAG("valout"), TAG("panWifth"), localvalue, this->_currentTime);
    this->numberobj_19_output_set(localvalue);
}

void bufferop_02_trigger_bang() {
    auto& buffer = this->bufferop_02_buffer;
    SampleIndex bufsize = (SampleIndex)(this->bufferop_02_buffer->getSize());
    number bufsizeDiv = bufsize - 1;

    for (number channel = 0; channel < buffer->getChannels(); channel++) {
        number doIt = this->bufferop_02_channels->length == 0 || (bool)(this->bufferop_02_channels->includes(channel + 1));

        if ((bool)(doIt)) {
            for (SampleIndex index = 0; index < bufsize; index++) {
                number x = index / bufsizeDiv;
                number value = buffer->getSample(channel, index);
                value = value * this->blackman(x);
                buffer->setSample(channel, index, value);
            }
        }
    }

    buffer->setTouched(true);
}

void bufferop_01_trigger_bang() {
    auto& buffer = this->bufferop_01_buffer;
    SampleIndex bufsize = (SampleIndex)(this->bufferop_01_buffer->getSize());
    number bufsizeDiv = bufsize - 1;

    for (number channel = 0; channel < buffer->getChannels(); channel++) {
        number doIt = this->bufferop_01_channels->length == 0 || (bool)(this->bufferop_01_channels->includes(channel + 1));

        if ((bool)(doIt)) {
            for (SampleIndex index = 0; index < bufsize; index++) {
                number x = index / bufsizeDiv;
                number value = buffer->getSample(channel, index);
                value = value * this->blackman(x);
                buffer->setSample(channel, index, value);
            }
        }
    }

    buffer->setTouched(true);
}

void loadbang_01_output_bang() {
    this->bufferop_02_trigger_bang();
    this->bufferop_01_trigger_bang();
}

void p_01_out1_bang_bang() {}

void p_01_out1_list_set(const list& v) {
    {
        number converted = (v->length > 0 ? v[0] : 0);
        this->gen_02_density_set(converted);
    }
}

void p_01_out4_bang_bang() {}

void p_01_out4_list_set(const list& v) {
    {
        number converted = (v->length > 0 ? v[0] : 0);
        this->gen_02_durcurve_set(converted);
    }
}

void gen_02_perform(
    number in1,
    number durcurve,
    number panmax,
    number freqmax,
    number revcurve,
    number speedmax,
    number ampmin,
    number speedcurve,
    number durmax,
    number freqmin,
    number revmax,
    number panmin,
    number poscurve,
    number ampmax,
    number revmin,
    number posmax,
    number durmin,
    number speedmin,
    number posmin,
    number ampcurve,
    number freqcurve,
    number density,
    SampleValue * out1,
    SampleValue * out2,
    SampleValue * out3,
    SampleValue * out4,
    SampleValue * out5,
    SampleValue * out6,
    SampleValue * out7,
    SampleValue * out8,
    Index n
) {
    RNBO_UNUSED(revmin);
    RNBO_UNUSED(revmax);
    RNBO_UNUSED(revcurve);
    RNBO_UNUSED(in1);
    auto sample_dim_1_0 = this->dim(this->gen_02_sample);
    auto sample_chans_2_1 = this->channels(this->gen_02_sample);
    number mul_11_14 = this->samplerate() * 0.5;
    number rdiv_12_15 = (mul_11_14 == 0. ? 0. : (number)1 / mul_11_14);
    number mul_13_16 = density * rdiv_12_15;
    number rsub_14_17 = 1 - mul_13_16;
    auto int_31_39 = this->intnum(1);
    number sub_32_40 = sample_dim_1_0 - 1;
    Index i;

    for (i = 0; i < n; i++) {
        number noise_3_3 = this->gen_02_noise_2_next();
        auto scale_4_4 = this->scale(noise_3_3, -1, 1, freqmin, freqmax, freqcurve);
        number gen_5_5 = scale_4_4;
        out3[(Index)i] = gen_5_5;
        number noise_6_8 = this->gen_02_noise_7_next();
        auto scale_7_9 = this->scale(noise_6_8, -1, 1, 0, 0, 0);
        number clamp_8_10 = (scale_7_9 > 1 ? 1 : (scale_7_9 < 0 ? 0 : scale_7_9));
        number gen_9_11 = clamp_8_10;
        out7[(Index)i] = gen_9_11;
        number noise_10_13 = this->gen_02_noise_12_next();
        number gt_15_18 = noise_10_13 > rsub_14_17;
        number gen_16_19 = gt_15_18;
        out2[(Index)i] = gen_16_19;
        number noise_17_21 = this->gen_02_noise_20_next();
        auto scale_18_22 = this->scale(noise_17_21, -1, 1, panmin, panmax, 1);
        number clamp_19_23 = (scale_18_22 > 1 ? 1 : (scale_18_22 < 0 ? 0 : scale_18_22));
        number gen_20_24 = clamp_19_23;
        out8[(Index)i] = gen_20_24;
        number noise_21_27 = this->gen_02_noise_26_next();
        auto scale_22_28 = this->scale(noise_21_27, -1, 1, ampmin, ampmax, ampcurve);
        number clamp_23_29 = (scale_22_28 > 1 ? 1 : (scale_22_28 < 0 ? 0 : scale_22_28));
        number gen_24_30 = clamp_23_29;
        out6[(Index)i] = gen_24_30;
        number noise_25_32 = this->gen_02_noise_31_next();
        auto scale_26_33 = this->scale(noise_25_32, -1, 1, posmin, posmax, poscurve);
        number gen_27_34 = scale_26_33;
        number noise_28_36 = this->gen_02_noise_35_next();
        auto scale_29_37 = this->scale(noise_28_36, -1, 1, speedmin, speedmax, speedcurve);
        number gen_30_38 = scale_29_37;
        number rdiv_33_41 = (gen_5_5 == 0. ? 0. : this->samplerate() / gen_5_5);
        number mul_34_42 = rdiv_33_41 * gen_30_38;
        auto max_35_43 = this->maximum(mul_34_42, 1);
        number add_36_44 = max_35_43 + gen_27_34;
        number clamp_37_45 = (add_36_44 > sample_dim_1_0 ? sample_dim_1_0 : (add_36_44 < int_31_39 ? int_31_39 : add_36_44));
        number gen_38_46 = clamp_37_45;
        number rsub_39_47 = gen_27_34 - max_35_43;
        number clamp_40_48 = (rsub_39_47 > sub_32_40 ? sub_32_40 : (rsub_39_47 < 0 ? 0 : rsub_39_47));
        number gen_41_49 = clamp_40_48;
        out5[(Index)i] = gen_38_46;
        out4[(Index)i] = gen_41_49;
        number noise_42_51 = this->gen_02_noise_50_next();
        auto scale_43_52 = this->scale(noise_42_51, -1, 1, durmin, durmax, durcurve);
        number gen_44_53 = scale_43_52;
        number div_45_54 = (this->samplerate() == 0. ? 0. : gen_44_53 / this->samplerate());
        out1[(Index)i] = div_45_54;
    }
}

void gen_01_perform(
    const Sample * in1,
    const Sample * in2,
    const Sample * in3,
    const Sample * in4,
    const Sample * in5,
    const Sample * in6,
    const Sample * in7,
    const Sample * in8,
    SampleValue * out1,
    SampleValue * out2,
    SampleValue * out3,
    SampleValue * out4,
    Index n
) {
    auto __gen_01_history_1_value = this->gen_01_history_1_value;
    auto __gen_01_history_2_value = this->gen_01_history_2_value;
    auto sample_dim_3_0 = this->dim(this->gen_01_sample);
    auto sample_chans_4_1 = this->channels(this->gen_01_sample);
    auto win2_dim_6_3 = this->dim(this->gen_01_win2);
    auto win2_chans_7_4 = this->channels(this->gen_01_win2);
    auto winsample_dim_8_5 = this->dim(this->gen_01_winsample);
    auto winsample_chans_9_6 = this->channels(this->gen_01_winsample);
    Index i;

    for (i = 0; i < n; i++) {
        number expr_5_2 = __gen_01_history_2_value > 0 && __gen_01_history_2_value <= 1;
        number expr_10_7 = __gen_01_history_1_value > 0 && __gen_01_history_1_value <= 1;
        number add_11_8 = expr_10_7 + 1;
        number add_12_9 = expr_5_2 + 1;
        number gate_13 = 0;
        number gate_14 = 0;
        gate_13 = (add_12_9 >= 1 && add_12_9 < 2 ? in2[(Index)i] : 0), gate_14 = (add_12_9 >= 2 ? in2[(Index)i] : 0);
        number gate_15 = 0;
        number gate_16 = 0;
        gate_15 = (add_11_8 >= 1 && add_11_8 < 2 ? gate_14 : 0), gate_16 = (add_11_8 >= 2 ? gate_14 : 0);
        number gen_17_10 = gate_16;
        number latch_18_12 = this->gen_01_latch_11_next(in7[(Index)i], gate_15);
        number latch_19_14 = this->gen_01_latch_13_next(in8[(Index)i], gate_15);
        number latch_20_16 = this->gen_01_latch_15_next(in1[(Index)i], gate_15);
        number plusequals_21_18 = this->gen_01_plusequals_17_next(latch_20_16, gate_15);
        number latch_22_22 = this->gen_01_latch_21_next(in7[(Index)i], gate_13);
        number latch_23_26 = this->gen_01_latch_25_next(in8[(Index)i], gate_13);
        number latch_24_28 = this->gen_01_latch_27_next(in1[(Index)i], gate_13);
        number plusequals_25_30 = this->gen_01_plusequals_29_next(latch_24_28, gate_13);
        number sample_win_26 = 0;
        number index_win_27 = 0;
        auto result_31 = this->sample_interp_spline(this->gen_01_win2, plusequals_21_18, 0);
        index_win_27 = result_31[1];
        sample_win_26 = result_31[0];
        number latch_28_38 = this->gen_01_latch_37_next(in6[(Index)i], gate_15);
        number latch_29_40 = this->gen_01_latch_39_next(in6[(Index)i], gate_13);
        number sample_win_30 = 0;
        number index_win_31 = 0;
        auto result_41 = this->sample_interp_spline(this->gen_01_win2, plusequals_25_30, 0);
        index_win_31 = result_41[1];
        sample_win_30 = result_41[0];
        number latch_32_43 = this->gen_01_latch_42_next(in4[(Index)i], gate_15);
        number latch_33_45 = this->gen_01_latch_44_next(in4[(Index)i], gate_13);
        number latch_34_47 = this->gen_01_latch_46_next(in5[(Index)i], gate_15);
        number latch_35_49 = this->gen_01_latch_48_next(in5[(Index)i], gate_13);
        number latch_36_51 = this->gen_01_latch_50_next(in3[(Index)i], gate_15);
        number phasor_37_53 = this->gen_01_phasor_52_next(latch_36_51, 0);
        number sample_sample_38 = 0;
        number index_sample_39 = 0;
        auto result_54 = this->wave_boundmode_clamp_interp_spline(this->gen_01_sample, phasor_37_53, latch_32_43, latch_34_47, 0);
        index_sample_39 = result_54[1];
        sample_sample_38 = result_54[0];
        number sample_winsample_40 = 0;
        number index_winsample_41 = 0;
        auto result_55 = this->sample_boundmode_clamp_interp_spline(this->gen_01_winsample, phasor_37_53, 0);
        index_winsample_41 = result_55[1];
        sample_winsample_40 = result_55[0];
        number mul_42_56 = sample_sample_38 * sample_winsample_40;
        number mul_43_57 = sample_win_26 * mul_42_56;
        number mul_44_58 = mul_43_57 * latch_28_38;
        number mul_45_59 = mul_44_58 * latch_18_12;
        number gen_46_60 = mul_45_59;
        number rsub_47_61 = 1 - latch_18_12;
        number mul_48_62 = mul_44_58 * rsub_47_61;
        number gen_49_63 = mul_48_62;
        number mul_50_64 = latch_19_14 * 0.25;
        number cycle_51 = 0;
        number cycleindex_52 = 0;
        array<number, 2> result_66 = this->gen_01_cycle_65_next(mul_50_64, 0);
        cycleindex_52 = result_66[1];
        cycle_51 = result_66[0];
        number mul_53_67 = gen_49_63 * cycle_51;
        number gen_54_68 = mul_53_67;
        number add_55_69 = mul_50_64 + 0.75;
        number cycle_56 = 0;
        number cycleindex_57 = 0;
        array<number, 2> result_71 = this->gen_01_cycle_70_next(add_55_69, 0);
        cycleindex_57 = result_71[1];
        cycle_56 = result_71[0];
        number mul_58_72 = gen_49_63 * cycle_56;
        number gen_59_73 = mul_58_72;
        number latch_60_75 = this->gen_01_latch_74_next(in3[(Index)i], gate_13);
        number phasor_61_77 = this->gen_01_phasor_76_next(latch_60_75, 0);
        number sample_sample_62 = 0;
        number index_sample_63 = 0;
        auto result_78 = this->wave_boundmode_clamp_interp_spline(this->gen_01_sample, phasor_61_77, latch_33_45, latch_35_49, 0);
        index_sample_63 = result_78[1];
        sample_sample_62 = result_78[0];
        number sample_winsample_64 = 0;
        number index_winsample_65 = 0;
        auto result_79 = this->sample_boundmode_clamp_interp_spline(this->gen_01_winsample, phasor_61_77, 0);
        index_winsample_65 = result_79[1];
        sample_winsample_64 = result_79[0];
        number mul_66_80 = sample_sample_62 * sample_winsample_64;
        number mul_67_81 = sample_win_30 * mul_66_80;
        number mul_68_82 = mul_67_81 * latch_29_40;
        number mul_69_83 = mul_68_82 * latch_22_22;
        number gen_70_84 = mul_69_83;
        number rsub_71_85 = 1 - latch_22_22;
        number mul_72_86 = mul_68_82 * rsub_71_85;
        number gen_73_87 = mul_72_86;
        number gen_74_88 = gen_70_84 + gen_46_60;
        number mul_75_89 = latch_23_26 * 0.25;
        number cycle_76 = 0;
        number cycleindex_77 = 0;
        array<number, 2> result_91 = this->gen_01_cycle_90_next(mul_75_89, 0);
        cycleindex_77 = result_91[1];
        cycle_76 = result_91[0];
        number mul_78_92 = gen_73_87 * cycle_76;
        number gen_79_93 = mul_78_92;
        number add_80_94 = mul_75_89 + 0.75;
        number cycle_81 = 0;
        number cycleindex_82 = 0;
        array<number, 2> result_96 = this->gen_01_cycle_95_next(add_80_94, 0);
        cycleindex_82 = result_96[1];
        cycle_81 = result_96[0];
        number mul_83_97 = gen_73_87 * cycle_81;
        number gen_84_98 = mul_83_97;
        number gen_85_99 = gen_59_73 + gen_84_98;
        number gen_86_100 = gen_54_68 + gen_79_93;
        number history_1_next_87_101 = fixdenorm(plusequals_21_18);
        number history_2_next_88_102 = fixdenorm(plusequals_25_30);
        out2[(Index)i] = gen_85_99;
        out4[(Index)i] = gen_17_10;
        out1[(Index)i] = gen_86_100;
        out3[(Index)i] = gen_74_88;
        __gen_01_history_1_value = history_1_next_87_101;
        __gen_01_history_2_value = history_2_next_88_102;
    }

    this->gen_01_history_2_value = __gen_01_history_2_value;
    this->gen_01_history_1_value = __gen_01_history_1_value;
}

void p_01_perform(Index n) {
    // subpatcher: density_dur
    this->p_01->process(nullptr, 0, nullptr, 0, n);
}

void p_02_perform(Index n) {
    // subpatcher: samples,ms
    this->p_02->process(nullptr, 0, nullptr, 0, n);
}

void p_03_perform(Index n) {
    // subpatcher: pos
    this->p_03->process(nullptr, 0, nullptr, 0, n);
}

void p_04_perform(Index n) {
    // subpatcher: amp
    this->p_04->process(nullptr, 0, nullptr, 0, n);
}

void p_05_perform(Index n) {
    // subpatcher: freq
    this->p_05->process(nullptr, 0, nullptr, 0, n);
}

void p_06_perform(Index n) {
    // subpatcher: speed
    this->p_06->process(nullptr, 0, nullptr, 0, n);
}

void p_07_perform(Index n) {
    // subpatcher: pan
    this->p_07->process(nullptr, 0, nullptr, 0, n);
}

void stackprotect_perform(Index n) {
    RNBO_UNUSED(n);
    auto __stackprotect_count = this->stackprotect_count;
    __stackprotect_count = 0;
    this->stackprotect_count = __stackprotect_count;
}

void data_01_srout_set(number ) {}

void data_01_chanout_set(number ) {}

void data_01_sizeout_set(number v) {
    this->data_01_sizeout = v;
}

void data_02_srout_set(number ) {}

void data_02_chanout_set(number ) {}

void data_02_sizeout_set(number v) {
    this->data_02_sizeout = v;
}

void data_03_srout_set(number ) {}

void data_03_chanout_set(number ) {}

void p_02_target_s1_number_set(number v) {
    this->p_02->updateTime(this->_currentTime);
    this->p_02->receive_01_output_number_set(v);
}

void send_01_input_number_set(number v) {
    this->send_01_input_number = v;
    this->p_02_target_s1_number_set(v);
}

void data_03_sizeout_set(number v) {
    this->data_03_sizeout = v;
    this->send_01_input_number_set(v);
}

void numberobj_02_value_setter(number v) {
    number localvalue = v;

    if ((bool)(true) && localvalue < 0) {
        localvalue = 0;
    }

    if (this->numberobj_02_currentFormat != 6) {
        localvalue = trunc(localvalue);
    }

    this->numberobj_02_value = localvalue;
}

void numberobj_03_value_setter(number v) {
    number localvalue = v;

    if ((bool)(true) && localvalue < 0.001) {
        localvalue = 0.001;
    }

    if ((bool)(true) && localvalue > 8000) {
        localvalue = 8000;
    }

    if (this->numberobj_03_currentFormat != 6) {
        localvalue = trunc(localvalue);
    }

    this->numberobj_03_value = localvalue;
}

void numberobj_04_value_setter(number v) {
    number localvalue = v;

    if ((bool)(true) && localvalue < 0) {
        localvalue = 0;
    }

    if ((bool)(true) && localvalue > 100) {
        localvalue = 100;
    }

    if (this->numberobj_04_currentFormat != 6) {
        localvalue = trunc(localvalue);
    }

    this->numberobj_04_value = localvalue;
}

void numberobj_05_value_setter(number v) {
    number localvalue = v;

    if ((bool)(true) && localvalue < 0) {
        localvalue = 0;
    }

    if (this->numberobj_05_currentFormat != 6) {
        localvalue = trunc(localvalue);
    }

    this->numberobj_05_value = localvalue;
}

void numberobj_06_value_setter(number v) {
    number localvalue = v;

    if (this->numberobj_06_currentFormat != 6) {
        localvalue = trunc(localvalue);
    }

    this->numberobj_06_value = localvalue;
}

void numberobj_07_value_setter(number v) {
    number localvalue = v;

    if ((bool)(true) && localvalue < 0) {
        localvalue = 0;
    }

    if (this->numberobj_07_currentFormat != 6) {
        localvalue = trunc(localvalue);
    }

    this->numberobj_07_value = localvalue;
}

void numberobj_08_value_setter(number v) {
    number localvalue = v;

    if ((bool)(true) && localvalue < 0) {
        localvalue = 0;
    }

    if (this->numberobj_08_currentFormat != 6) {
        localvalue = trunc(localvalue);
    }

    this->numberobj_08_value = localvalue;
}

void numberobj_09_value_setter(number v) {
    number localvalue = v;

    if ((bool)(true) && localvalue < 0) {
        localvalue = 0;
    }

    if (this->numberobj_09_currentFormat != 6) {
        localvalue = trunc(localvalue);
    }

    this->numberobj_09_value = localvalue;
}

void numberobj_10_value_setter(number v) {
    number localvalue = v;

    if ((bool)(true) && localvalue < 0) {
        localvalue = 0;
    }

    if ((bool)(true) && localvalue > 1) {
        localvalue = 1;
    }

    if (this->numberobj_10_currentFormat != 6) {
        localvalue = trunc(localvalue);
    }

    this->numberobj_10_value = localvalue;
}

void numberobj_11_value_setter(number v) {
    number localvalue = v;

    if ((bool)(true) && localvalue < 0) {
        localvalue = 0;
    }

    if ((bool)(true) && localvalue > 100) {
        localvalue = 100;
    }

    if (this->numberobj_11_currentFormat != 6) {
        localvalue = trunc(localvalue);
    }

    this->numberobj_11_value = localvalue;
}

void numberobj_12_value_setter(number v) {
    number localvalue = v;

    if ((bool)(true) && localvalue < 0) {
        localvalue = 0;
    }

    if (this->numberobj_12_currentFormat != 6) {
        localvalue = trunc(localvalue);
    }

    this->numberobj_12_value = localvalue;
}

void numberobj_13_value_setter(number v) {
    number localvalue = v;

    if ((bool)(true) && localvalue < 0) {
        localvalue = 0;
    }

    if (this->numberobj_13_currentFormat != 6) {
        localvalue = trunc(localvalue);
    }

    this->numberobj_13_value = localvalue;
}

void numberobj_14_value_setter(number v) {
    number localvalue = v;

    if ((bool)(true) && localvalue < 0) {
        localvalue = 0;
    }

    if (this->numberobj_14_currentFormat != 6) {
        localvalue = trunc(localvalue);
    }

    this->numberobj_14_value = localvalue;
}

void numberobj_15_value_setter(number v) {
    number localvalue = v;

    if ((bool)(true) && localvalue < 0) {
        localvalue = 0;
    }

    if (this->numberobj_15_currentFormat != 6) {
        localvalue = trunc(localvalue);
    }

    this->numberobj_15_value = localvalue;
}

void numberobj_16_value_setter(number v) {
    number localvalue = v;

    if ((bool)(true) && localvalue < 0) {
        localvalue = 0;
    }

    if (this->numberobj_16_currentFormat != 6) {
        localvalue = trunc(localvalue);
    }

    this->numberobj_16_value = localvalue;
}

void numberobj_17_value_setter(number v) {
    number localvalue = v;

    if ((bool)(true) && localvalue < 0) {
        localvalue = 0;
    }

    if ((bool)(true) && localvalue > 100) {
        localvalue = 100;
    }

    if (this->numberobj_17_currentFormat != 6) {
        localvalue = trunc(localvalue);
    }

    this->numberobj_17_value = localvalue;
}

void numberobj_18_value_setter(number v) {
    number localvalue = v;

    if ((bool)(true) && localvalue < 0) {
        localvalue = 0;
    }

    if (this->numberobj_18_currentFormat != 6) {
        localvalue = trunc(localvalue);
    }

    this->numberobj_18_value = localvalue;
}

void numberobj_19_value_setter(number v) {
    number localvalue = v;

    if ((bool)(true) && localvalue < 0) {
        localvalue = 0;
    }

    if ((bool)(true) && localvalue > 100) {
        localvalue = 100;
    }

    if (this->numberobj_19_currentFormat != 6) {
        localvalue = trunc(localvalue);
    }

    this->numberobj_19_value = localvalue;
}

void param_01_getPresetValue(PatcherStateInterface& preset) {
    preset["value"] = this->param_01_value;
}

void param_01_setPresetValue(PatcherStateInterface& preset) {
    if ((bool)(stateIsEmpty(preset)))
        return;

    this->param_01_value_set(preset["value"]);
}

number gen_01_history_2_getvalue() {
    return this->gen_01_history_2_value;
}

void gen_01_history_2_setvalue(number val) {
    this->gen_01_history_2_value = val;
}

void gen_01_history_2_reset() {
    this->gen_01_history_2_value = 0;
}

void gen_01_history_2_init() {
    this->gen_01_history_2_value = 0;
}

number gen_01_history_1_getvalue() {
    return this->gen_01_history_1_value;
}

void gen_01_history_1_setvalue(number val) {
    this->gen_01_history_1_value = val;
}

void gen_01_history_1_reset() {
    this->gen_01_history_1_value = 0;
}

void gen_01_history_1_init() {
    this->gen_01_history_1_value = 0;
}

number gen_01_latch_11_next(number x, number control) {
    if (control != 0.)
        this->gen_01_latch_11_value = x;

    return this->gen_01_latch_11_value;
}

void gen_01_latch_11_dspsetup() {
    this->gen_01_latch_11_reset();
}

void gen_01_latch_11_reset() {
    this->gen_01_latch_11_value = 0;
}

number gen_01_latch_13_next(number x, number control) {
    if (control != 0.)
        this->gen_01_latch_13_value = x;

    return this->gen_01_latch_13_value;
}

void gen_01_latch_13_dspsetup() {
    this->gen_01_latch_13_reset();
}

void gen_01_latch_13_reset() {
    this->gen_01_latch_13_value = 0;
}

number gen_01_latch_15_next(number x, number control) {
    if (control != 0.)
        this->gen_01_latch_15_value = x;

    return this->gen_01_latch_15_value;
}

void gen_01_latch_15_dspsetup() {
    this->gen_01_latch_15_reset();
}

void gen_01_latch_15_reset() {
    this->gen_01_latch_15_value = 0;
}

number gen_01_plusequals_17_next(number x, number reset) {
    {
        {
            this->gen_01_plusequals_17_value = ((bool)(reset) ? 0 : this->gen_01_plusequals_17_value + x);
            return this->gen_01_plusequals_17_value;
        }
    }
}

void gen_01_plusequals_17_reset() {
    this->gen_01_plusequals_17_value = 0;
}

number gen_01_latch_21_next(number x, number control) {
    if (control != 0.)
        this->gen_01_latch_21_value = x;

    return this->gen_01_latch_21_value;
}

void gen_01_latch_21_dspsetup() {
    this->gen_01_latch_21_reset();
}

void gen_01_latch_21_reset() {
    this->gen_01_latch_21_value = 0;
}

number gen_01_latch_25_next(number x, number control) {
    if (control != 0.)
        this->gen_01_latch_25_value = x;

    return this->gen_01_latch_25_value;
}

void gen_01_latch_25_dspsetup() {
    this->gen_01_latch_25_reset();
}

void gen_01_latch_25_reset() {
    this->gen_01_latch_25_value = 0;
}

number gen_01_latch_27_next(number x, number control) {
    if (control != 0.)
        this->gen_01_latch_27_value = x;

    return this->gen_01_latch_27_value;
}

void gen_01_latch_27_dspsetup() {
    this->gen_01_latch_27_reset();
}

void gen_01_latch_27_reset() {
    this->gen_01_latch_27_value = 0;
}

number gen_01_plusequals_29_next(number x, number reset) {
    {
        {
            this->gen_01_plusequals_29_value = ((bool)(reset) ? 0 : this->gen_01_plusequals_29_value + x);
            return this->gen_01_plusequals_29_value;
        }
    }
}

void gen_01_plusequals_29_reset() {
    this->gen_01_plusequals_29_value = 0;
}

number gen_01_latch_37_next(number x, number control) {
    if (control != 0.)
        this->gen_01_latch_37_value = x;

    return this->gen_01_latch_37_value;
}

void gen_01_latch_37_dspsetup() {
    this->gen_01_latch_37_reset();
}

void gen_01_latch_37_reset() {
    this->gen_01_latch_37_value = 0;
}

number gen_01_latch_39_next(number x, number control) {
    if (control != 0.)
        this->gen_01_latch_39_value = x;

    return this->gen_01_latch_39_value;
}

void gen_01_latch_39_dspsetup() {
    this->gen_01_latch_39_reset();
}

void gen_01_latch_39_reset() {
    this->gen_01_latch_39_value = 0;
}

number gen_01_latch_42_next(number x, number control) {
    if (control != 0.)
        this->gen_01_latch_42_value = x;

    return this->gen_01_latch_42_value;
}

void gen_01_latch_42_dspsetup() {
    this->gen_01_latch_42_reset();
}

void gen_01_latch_42_reset() {
    this->gen_01_latch_42_value = 0;
}

number gen_01_latch_44_next(number x, number control) {
    if (control != 0.)
        this->gen_01_latch_44_value = x;

    return this->gen_01_latch_44_value;
}

void gen_01_latch_44_dspsetup() {
    this->gen_01_latch_44_reset();
}

void gen_01_latch_44_reset() {
    this->gen_01_latch_44_value = 0;
}

number gen_01_latch_46_next(number x, number control) {
    if (control != 0.)
        this->gen_01_latch_46_value = x;

    return this->gen_01_latch_46_value;
}

void gen_01_latch_46_dspsetup() {
    this->gen_01_latch_46_reset();
}

void gen_01_latch_46_reset() {
    this->gen_01_latch_46_value = 0;
}

number gen_01_latch_48_next(number x, number control) {
    if (control != 0.)
        this->gen_01_latch_48_value = x;

    return this->gen_01_latch_48_value;
}

void gen_01_latch_48_dspsetup() {
    this->gen_01_latch_48_reset();
}

void gen_01_latch_48_reset() {
    this->gen_01_latch_48_value = 0;
}

number gen_01_latch_50_next(number x, number control) {
    if (control != 0.)
        this->gen_01_latch_50_value = x;

    return this->gen_01_latch_50_value;
}

void gen_01_latch_50_dspsetup() {
    this->gen_01_latch_50_reset();
}

void gen_01_latch_50_reset() {
    this->gen_01_latch_50_value = 0;
}

number gen_01_phasor_52_next(number freq, number reset) {
    RNBO_UNUSED(reset);
    number pincr = freq * this->gen_01_phasor_52_conv;

    if (this->gen_01_phasor_52_currentPhase < 0.)
        this->gen_01_phasor_52_currentPhase = 1. + this->gen_01_phasor_52_currentPhase;

    if (this->gen_01_phasor_52_currentPhase > 1.)
        this->gen_01_phasor_52_currentPhase = this->gen_01_phasor_52_currentPhase - 1.;

    number tmp = this->gen_01_phasor_52_currentPhase;
    this->gen_01_phasor_52_currentPhase += pincr;
    return tmp;
}

void gen_01_phasor_52_reset() {
    this->gen_01_phasor_52_currentPhase = 0;
}

void gen_01_phasor_52_dspsetup() {
    this->gen_01_phasor_52_conv = (this->sr == 0. ? 0. : (number)1 / this->sr);
}

number gen_01_cycle_65_ph_next(number freq, number reset) {
    RNBO_UNUSED(reset);

    {
        {}
    }

    number pincr = freq * this->gen_01_cycle_65_ph_conv;

    if (this->gen_01_cycle_65_ph_currentPhase < 0.)
        this->gen_01_cycle_65_ph_currentPhase = 1. + this->gen_01_cycle_65_ph_currentPhase;

    if (this->gen_01_cycle_65_ph_currentPhase > 1.)
        this->gen_01_cycle_65_ph_currentPhase = this->gen_01_cycle_65_ph_currentPhase - 1.;

    number tmp = this->gen_01_cycle_65_ph_currentPhase;
    this->gen_01_cycle_65_ph_currentPhase += pincr;
    return tmp;
}

void gen_01_cycle_65_ph_reset() {
    this->gen_01_cycle_65_ph_currentPhase = 0;
}

void gen_01_cycle_65_ph_dspsetup() {
    this->gen_01_cycle_65_ph_conv = (this->sr == 0. ? 0. : (number)1 / this->sr);
}

array<number, 2> gen_01_cycle_65_next(number frequency, number phase_offset) {
    RNBO_UNUSED(phase_offset);

    {
        uint32_t uint_phase;

        {
            uint_phase = uint32_trunc(frequency * 4294967296.0);
        }

        uint32_t idx = (uint32_t)(uint32_rshift(uint_phase, 18));
        number frac = ((BinOpInt)((BinOpInt)uint_phase & (BinOpInt)262143)) * 3.81471181759574e-6;
        number y0 = this->gen_01_cycle_65_buffer[(Index)idx];
        number y1 = this->gen_01_cycle_65_buffer[(Index)((BinOpInt)(idx + 1) & (BinOpInt)16383)];
        number y = y0 + frac * (y1 - y0);
        return {y, uint_phase * 0.232830643653869629e-9};
    }
}

void gen_01_cycle_65_dspsetup() {
    this->gen_01_cycle_65_phasei = 0;
    this->gen_01_cycle_65_f2i = (this->samplerate() == 0. ? 0. : (number)4294967296 / this->samplerate());
    this->gen_01_cycle_65_wrap = (long)(this->gen_01_cycle_65_buffer->getSize()) - 1;
}

void gen_01_cycle_65_reset() {
    this->gen_01_cycle_65_phasei = 0;
}

void gen_01_cycle_65_bufferUpdated() {
    this->gen_01_cycle_65_wrap = (long)(this->gen_01_cycle_65_buffer->getSize()) - 1;
}

number gen_01_cycle_70_ph_next(number freq, number reset) {
    RNBO_UNUSED(reset);

    {
        {}
    }

    number pincr = freq * this->gen_01_cycle_70_ph_conv;

    if (this->gen_01_cycle_70_ph_currentPhase < 0.)
        this->gen_01_cycle_70_ph_currentPhase = 1. + this->gen_01_cycle_70_ph_currentPhase;

    if (this->gen_01_cycle_70_ph_currentPhase > 1.)
        this->gen_01_cycle_70_ph_currentPhase = this->gen_01_cycle_70_ph_currentPhase - 1.;

    number tmp = this->gen_01_cycle_70_ph_currentPhase;
    this->gen_01_cycle_70_ph_currentPhase += pincr;
    return tmp;
}

void gen_01_cycle_70_ph_reset() {
    this->gen_01_cycle_70_ph_currentPhase = 0;
}

void gen_01_cycle_70_ph_dspsetup() {
    this->gen_01_cycle_70_ph_conv = (this->sr == 0. ? 0. : (number)1 / this->sr);
}

array<number, 2> gen_01_cycle_70_next(number frequency, number phase_offset) {
    RNBO_UNUSED(phase_offset);

    {
        uint32_t uint_phase;

        {
            uint_phase = uint32_trunc(frequency * 4294967296.0);
        }

        uint32_t idx = (uint32_t)(uint32_rshift(uint_phase, 18));
        number frac = ((BinOpInt)((BinOpInt)uint_phase & (BinOpInt)262143)) * 3.81471181759574e-6;
        number y0 = this->gen_01_cycle_70_buffer[(Index)idx];
        number y1 = this->gen_01_cycle_70_buffer[(Index)((BinOpInt)(idx + 1) & (BinOpInt)16383)];
        number y = y0 + frac * (y1 - y0);
        return {y, uint_phase * 0.232830643653869629e-9};
    }
}

void gen_01_cycle_70_dspsetup() {
    this->gen_01_cycle_70_phasei = 0;
    this->gen_01_cycle_70_f2i = (this->samplerate() == 0. ? 0. : (number)4294967296 / this->samplerate());
    this->gen_01_cycle_70_wrap = (long)(this->gen_01_cycle_70_buffer->getSize()) - 1;
}

void gen_01_cycle_70_reset() {
    this->gen_01_cycle_70_phasei = 0;
}

void gen_01_cycle_70_bufferUpdated() {
    this->gen_01_cycle_70_wrap = (long)(this->gen_01_cycle_70_buffer->getSize()) - 1;
}

number gen_01_latch_74_next(number x, number control) {
    if (control != 0.)
        this->gen_01_latch_74_value = x;

    return this->gen_01_latch_74_value;
}

void gen_01_latch_74_dspsetup() {
    this->gen_01_latch_74_reset();
}

void gen_01_latch_74_reset() {
    this->gen_01_latch_74_value = 0;
}

number gen_01_phasor_76_next(number freq, number reset) {
    RNBO_UNUSED(reset);
    number pincr = freq * this->gen_01_phasor_76_conv;

    if (this->gen_01_phasor_76_currentPhase < 0.)
        this->gen_01_phasor_76_currentPhase = 1. + this->gen_01_phasor_76_currentPhase;

    if (this->gen_01_phasor_76_currentPhase > 1.)
        this->gen_01_phasor_76_currentPhase = this->gen_01_phasor_76_currentPhase - 1.;

    number tmp = this->gen_01_phasor_76_currentPhase;
    this->gen_01_phasor_76_currentPhase += pincr;
    return tmp;
}

void gen_01_phasor_76_reset() {
    this->gen_01_phasor_76_currentPhase = 0;
}

void gen_01_phasor_76_dspsetup() {
    this->gen_01_phasor_76_conv = (this->sr == 0. ? 0. : (number)1 / this->sr);
}

number gen_01_cycle_90_ph_next(number freq, number reset) {
    RNBO_UNUSED(reset);

    {
        {}
    }

    number pincr = freq * this->gen_01_cycle_90_ph_conv;

    if (this->gen_01_cycle_90_ph_currentPhase < 0.)
        this->gen_01_cycle_90_ph_currentPhase = 1. + this->gen_01_cycle_90_ph_currentPhase;

    if (this->gen_01_cycle_90_ph_currentPhase > 1.)
        this->gen_01_cycle_90_ph_currentPhase = this->gen_01_cycle_90_ph_currentPhase - 1.;

    number tmp = this->gen_01_cycle_90_ph_currentPhase;
    this->gen_01_cycle_90_ph_currentPhase += pincr;
    return tmp;
}

void gen_01_cycle_90_ph_reset() {
    this->gen_01_cycle_90_ph_currentPhase = 0;
}

void gen_01_cycle_90_ph_dspsetup() {
    this->gen_01_cycle_90_ph_conv = (this->sr == 0. ? 0. : (number)1 / this->sr);
}

array<number, 2> gen_01_cycle_90_next(number frequency, number phase_offset) {
    RNBO_UNUSED(phase_offset);

    {
        uint32_t uint_phase;

        {
            uint_phase = uint32_trunc(frequency * 4294967296.0);
        }

        uint32_t idx = (uint32_t)(uint32_rshift(uint_phase, 18));
        number frac = ((BinOpInt)((BinOpInt)uint_phase & (BinOpInt)262143)) * 3.81471181759574e-6;
        number y0 = this->gen_01_cycle_90_buffer[(Index)idx];
        number y1 = this->gen_01_cycle_90_buffer[(Index)((BinOpInt)(idx + 1) & (BinOpInt)16383)];
        number y = y0 + frac * (y1 - y0);
        return {y, uint_phase * 0.232830643653869629e-9};
    }
}

void gen_01_cycle_90_dspsetup() {
    this->gen_01_cycle_90_phasei = 0;
    this->gen_01_cycle_90_f2i = (this->samplerate() == 0. ? 0. : (number)4294967296 / this->samplerate());
    this->gen_01_cycle_90_wrap = (long)(this->gen_01_cycle_90_buffer->getSize()) - 1;
}

void gen_01_cycle_90_reset() {
    this->gen_01_cycle_90_phasei = 0;
}

void gen_01_cycle_90_bufferUpdated() {
    this->gen_01_cycle_90_wrap = (long)(this->gen_01_cycle_90_buffer->getSize()) - 1;
}

number gen_01_cycle_95_ph_next(number freq, number reset) {
    RNBO_UNUSED(reset);

    {
        {}
    }

    number pincr = freq * this->gen_01_cycle_95_ph_conv;

    if (this->gen_01_cycle_95_ph_currentPhase < 0.)
        this->gen_01_cycle_95_ph_currentPhase = 1. + this->gen_01_cycle_95_ph_currentPhase;

    if (this->gen_01_cycle_95_ph_currentPhase > 1.)
        this->gen_01_cycle_95_ph_currentPhase = this->gen_01_cycle_95_ph_currentPhase - 1.;

    number tmp = this->gen_01_cycle_95_ph_currentPhase;
    this->gen_01_cycle_95_ph_currentPhase += pincr;
    return tmp;
}

void gen_01_cycle_95_ph_reset() {
    this->gen_01_cycle_95_ph_currentPhase = 0;
}

void gen_01_cycle_95_ph_dspsetup() {
    this->gen_01_cycle_95_ph_conv = (this->sr == 0. ? 0. : (number)1 / this->sr);
}

array<number, 2> gen_01_cycle_95_next(number frequency, number phase_offset) {
    RNBO_UNUSED(phase_offset);

    {
        uint32_t uint_phase;

        {
            uint_phase = uint32_trunc(frequency * 4294967296.0);
        }

        uint32_t idx = (uint32_t)(uint32_rshift(uint_phase, 18));
        number frac = ((BinOpInt)((BinOpInt)uint_phase & (BinOpInt)262143)) * 3.81471181759574e-6;
        number y0 = this->gen_01_cycle_95_buffer[(Index)idx];
        number y1 = this->gen_01_cycle_95_buffer[(Index)((BinOpInt)(idx + 1) & (BinOpInt)16383)];
        number y = y0 + frac * (y1 - y0);
        return {y, uint_phase * 0.232830643653869629e-9};
    }
}

void gen_01_cycle_95_dspsetup() {
    this->gen_01_cycle_95_phasei = 0;
    this->gen_01_cycle_95_f2i = (this->samplerate() == 0. ? 0. : (number)4294967296 / this->samplerate());
    this->gen_01_cycle_95_wrap = (long)(this->gen_01_cycle_95_buffer->getSize()) - 1;
}

void gen_01_cycle_95_reset() {
    this->gen_01_cycle_95_phasei = 0;
}

void gen_01_cycle_95_bufferUpdated() {
    this->gen_01_cycle_95_wrap = (long)(this->gen_01_cycle_95_buffer->getSize()) - 1;
}

void gen_01_dspsetup(bool force) {
    if ((bool)(this->gen_01_setupDone) && (bool)(!(bool)(force)))
        return;

    this->gen_01_setupDone = true;
    this->gen_01_latch_11_dspsetup();
    this->gen_01_latch_13_dspsetup();
    this->gen_01_latch_15_dspsetup();
    this->gen_01_latch_21_dspsetup();
    this->gen_01_latch_25_dspsetup();
    this->gen_01_latch_27_dspsetup();
    this->gen_01_latch_37_dspsetup();
    this->gen_01_latch_39_dspsetup();
    this->gen_01_latch_42_dspsetup();
    this->gen_01_latch_44_dspsetup();
    this->gen_01_latch_46_dspsetup();
    this->gen_01_latch_48_dspsetup();
    this->gen_01_latch_50_dspsetup();
    this->gen_01_phasor_52_dspsetup();
    this->gen_01_cycle_65_ph_dspsetup();
    this->gen_01_cycle_65_dspsetup();
    this->gen_01_cycle_70_ph_dspsetup();
    this->gen_01_cycle_70_dspsetup();
    this->gen_01_latch_74_dspsetup();
    this->gen_01_phasor_76_dspsetup();
    this->gen_01_cycle_90_ph_dspsetup();
    this->gen_01_cycle_90_dspsetup();
    this->gen_01_cycle_95_ph_dspsetup();
    this->gen_01_cycle_95_dspsetup();
}

void gen_02_noise_2_reset() {
    xoshiro_reset(
        systemticks() + this->voice() + this->random(0, 10000),
        this->gen_02_noise_2_state
    );
}

void gen_02_noise_2_init() {
    this->gen_02_noise_2_reset();
}

void gen_02_noise_2_seed(number v) {
    xoshiro_reset(v, this->gen_02_noise_2_state);
}

number gen_02_noise_2_next() {
    return xoshiro_next(this->gen_02_noise_2_state);
}

void gen_02_noise_7_reset() {
    xoshiro_reset(
        systemticks() + this->voice() + this->random(0, 10000),
        this->gen_02_noise_7_state
    );
}

void gen_02_noise_7_init() {
    this->gen_02_noise_7_reset();
}

void gen_02_noise_7_seed(number v) {
    xoshiro_reset(v, this->gen_02_noise_7_state);
}

number gen_02_noise_7_next() {
    return xoshiro_next(this->gen_02_noise_7_state);
}

void gen_02_noise_12_reset() {
    xoshiro_reset(
        systemticks() + this->voice() + this->random(0, 10000),
        this->gen_02_noise_12_state
    );
}

void gen_02_noise_12_init() {
    this->gen_02_noise_12_reset();
}

void gen_02_noise_12_seed(number v) {
    xoshiro_reset(v, this->gen_02_noise_12_state);
}

number gen_02_noise_12_next() {
    return xoshiro_next(this->gen_02_noise_12_state);
}

void gen_02_noise_20_reset() {
    xoshiro_reset(
        systemticks() + this->voice() + this->random(0, 10000),
        this->gen_02_noise_20_state
    );
}

void gen_02_noise_20_init() {
    this->gen_02_noise_20_reset();
}

void gen_02_noise_20_seed(number v) {
    xoshiro_reset(v, this->gen_02_noise_20_state);
}

number gen_02_noise_20_next() {
    return xoshiro_next(this->gen_02_noise_20_state);
}

void gen_02_noise_26_reset() {
    xoshiro_reset(
        systemticks() + this->voice() + this->random(0, 10000),
        this->gen_02_noise_26_state
    );
}

void gen_02_noise_26_init() {
    this->gen_02_noise_26_reset();
}

void gen_02_noise_26_seed(number v) {
    xoshiro_reset(v, this->gen_02_noise_26_state);
}

number gen_02_noise_26_next() {
    return xoshiro_next(this->gen_02_noise_26_state);
}

void gen_02_noise_31_reset() {
    xoshiro_reset(
        systemticks() + this->voice() + this->random(0, 10000),
        this->gen_02_noise_31_state
    );
}

void gen_02_noise_31_init() {
    this->gen_02_noise_31_reset();
}

void gen_02_noise_31_seed(number v) {
    xoshiro_reset(v, this->gen_02_noise_31_state);
}

number gen_02_noise_31_next() {
    return xoshiro_next(this->gen_02_noise_31_state);
}

void gen_02_noise_35_reset() {
    xoshiro_reset(
        systemticks() + this->voice() + this->random(0, 10000),
        this->gen_02_noise_35_state
    );
}

void gen_02_noise_35_init() {
    this->gen_02_noise_35_reset();
}

void gen_02_noise_35_seed(number v) {
    xoshiro_reset(v, this->gen_02_noise_35_state);
}

number gen_02_noise_35_next() {
    return xoshiro_next(this->gen_02_noise_35_state);
}

void gen_02_noise_50_reset() {
    xoshiro_reset(
        systemticks() + this->voice() + this->random(0, 10000),
        this->gen_02_noise_50_state
    );
}

void gen_02_noise_50_init() {
    this->gen_02_noise_50_reset();
}

void gen_02_noise_50_seed(number v) {
    xoshiro_reset(v, this->gen_02_noise_50_state);
}

number gen_02_noise_50_next() {
    return xoshiro_next(this->gen_02_noise_50_state);
}

void numberobj_02_init() {
    this->numberobj_02_currentFormat = 6;
    this->getEngine()->sendNumMessage(TAG("setup"), TAG("rate"), 1, this->_currentTime);
}

void numberobj_02_getPresetValue(PatcherStateInterface& preset) {
    preset["value"] = this->numberobj_02_value;
}

void numberobj_02_setPresetValue(PatcherStateInterface& preset) {
    if ((bool)(stateIsEmpty(preset)))
        return;

    this->numberobj_02_value_set(preset["value"]);
}

void param_02_getPresetValue(PatcherStateInterface& preset) {
    preset["value"] = this->param_02_value;
}

void param_02_setPresetValue(PatcherStateInterface& preset) {
    if ((bool)(stateIsEmpty(preset)))
        return;

    this->param_02_value_set(preset["value"]);
}

void numberobj_03_init() {
    this->numberobj_03_currentFormat = 6;
    this->getEngine()->sendNumMessage(TAG("setup"), TAG("duty"), 1, this->_currentTime);
}

void numberobj_03_getPresetValue(PatcherStateInterface& preset) {
    preset["value"] = this->numberobj_03_value;
}

void numberobj_03_setPresetValue(PatcherStateInterface& preset) {
    if ((bool)(stateIsEmpty(preset)))
        return;

    this->numberobj_03_value_set(preset["value"]);
}

void param_03_getPresetValue(PatcherStateInterface& preset) {
    preset["value"] = this->param_03_value;
}

void param_03_setPresetValue(PatcherStateInterface& preset) {
    if ((bool)(stateIsEmpty(preset)))
        return;

    this->param_03_value_set(preset["value"]);
}

void numberobj_04_init() {
    this->numberobj_04_currentFormat = 6;
    this->getEngine()->sendNumMessage(TAG("setup"), TAG("dutyVar"), 1, this->_currentTime);
}

void numberobj_04_getPresetValue(PatcherStateInterface& preset) {
    preset["value"] = this->numberobj_04_value;
}

void numberobj_04_setPresetValue(PatcherStateInterface& preset) {
    if ((bool)(stateIsEmpty(preset)))
        return;

    this->numberobj_04_value_set(preset["value"]);
}

void param_04_getPresetValue(PatcherStateInterface& preset) {
    preset["value"] = this->param_04_value;
}

void param_04_setPresetValue(PatcherStateInterface& preset) {
    if ((bool)(stateIsEmpty(preset)))
        return;

    this->param_04_value_set(preset["value"]);
}

void numberobj_05_init() {
    this->numberobj_05_currentFormat = 6;
    this->getEngine()->sendNumMessage(TAG("setup"), TAG("dutyCurve"), 1, this->_currentTime);
}

void numberobj_05_getPresetValue(PatcherStateInterface& preset) {
    preset["value"] = this->numberobj_05_value;
}

void numberobj_05_setPresetValue(PatcherStateInterface& preset) {
    if ((bool)(stateIsEmpty(preset)))
        return;

    this->numberobj_05_value_set(preset["value"]);
}

void param_05_getPresetValue(PatcherStateInterface& preset) {
    preset["value"] = this->param_05_value;
}

void param_05_setPresetValue(PatcherStateInterface& preset) {
    if ((bool)(stateIsEmpty(preset)))
        return;

    this->param_05_value_set(preset["value"]);
}

void numberobj_06_init() {
    this->numberobj_06_currentFormat = 6;
    this->getEngine()->sendNumMessage(TAG("setup"), TAG("number_obj-91"), 1, this->_currentTime);
}

void numberobj_06_getPresetValue(PatcherStateInterface& preset) {
    preset["value"] = this->numberobj_06_value;
}

void numberobj_06_setPresetValue(PatcherStateInterface& preset) {
    if ((bool)(stateIsEmpty(preset)))
        return;

    this->numberobj_06_value_set(preset["value"]);
}

void param_06_getPresetValue(PatcherStateInterface& preset) {
    preset["value"] = this->param_06_value;
}

void param_06_setPresetValue(PatcherStateInterface& preset) {
    if ((bool)(stateIsEmpty(preset)))
        return;

    this->param_06_value_set(preset["value"]);
}

void numberobj_07_init() {
    this->numberobj_07_currentFormat = 6;
    this->getEngine()->sendNumMessage(TAG("setup"), TAG("pos[2]"), 1, this->_currentTime);
}

void numberobj_07_getPresetValue(PatcherStateInterface& preset) {
    preset["value"] = this->numberobj_07_value;
}

void numberobj_07_setPresetValue(PatcherStateInterface& preset) {
    if ((bool)(stateIsEmpty(preset)))
        return;

    this->numberobj_07_value_set(preset["value"]);
}

void param_07_getPresetValue(PatcherStateInterface& preset) {
    preset["value"] = this->param_07_value;
}

void param_07_setPresetValue(PatcherStateInterface& preset) {
    if ((bool)(stateIsEmpty(preset)))
        return;

    this->param_07_value_set(preset["value"]);
}

void numberobj_08_init() {
    this->numberobj_08_currentFormat = 6;
    this->getEngine()->sendNumMessage(TAG("setup"), TAG("posVar"), 1, this->_currentTime);
}

void numberobj_08_getPresetValue(PatcherStateInterface& preset) {
    preset["value"] = this->numberobj_08_value;
}

void numberobj_08_setPresetValue(PatcherStateInterface& preset) {
    if ((bool)(stateIsEmpty(preset)))
        return;

    this->numberobj_08_value_set(preset["value"]);
}

void data_01_init() {
    this->data_01_buffer->setWantsFill(true);
}

Index data_01_evaluateSizeExpr(number samplerate, number vectorsize) {
    RNBO_UNUSED(vectorsize);
    RNBO_UNUSED(samplerate);
    number size = 0;
    return (Index)(size);
}

void data_01_dspsetup(bool force) {
    if ((bool)(this->data_01_setupDone) && (bool)(!(bool)(force)))
        return;

    if (this->data_01_sizemode == 2) {
        this->data_01_buffer = this->data_01_buffer->setSize((Index)(this->mstosamps(this->data_01_sizems)));
        updateDataRef(this, this->data_01_buffer);
    } else if (this->data_01_sizemode == 3) {
        this->data_01_buffer = this->data_01_buffer->setSize(this->data_01_evaluateSizeExpr(this->samplerate(), this->vectorsize()));
        updateDataRef(this, this->data_01_buffer);
    }

    this->data_01_setupDone = true;
}

void data_01_bufferUpdated() {
    this->data_01_report();
}

void data_01_report() {
    this->data_01_srout_set(this->data_01_buffer->getSampleRate());
    this->data_01_chanout_set(this->data_01_buffer->getChannels());
    this->data_01_sizeout_set(this->data_01_buffer->getSize());
}

void param_08_getPresetValue(PatcherStateInterface& preset) {
    preset["value"] = this->param_08_value;
}

void param_08_setPresetValue(PatcherStateInterface& preset) {
    if ((bool)(stateIsEmpty(preset)))
        return;

    this->param_08_value_set(preset["value"]);
}

void param_09_getPresetValue(PatcherStateInterface& preset) {
    preset["value"] = this->param_09_value;
}

void param_09_setPresetValue(PatcherStateInterface& preset) {
    if ((bool)(stateIsEmpty(preset)))
        return;

    this->param_09_value_set(preset["value"]);
}

void numberobj_09_init() {
    this->numberobj_09_currentFormat = 6;
    this->getEngine()->sendNumMessage(TAG("setup"), TAG("posCurve"), 1, this->_currentTime);
}

void numberobj_09_getPresetValue(PatcherStateInterface& preset) {
    preset["value"] = this->numberobj_09_value;
}

void numberobj_09_setPresetValue(PatcherStateInterface& preset) {
    if ((bool)(stateIsEmpty(preset)))
        return;

    this->numberobj_09_value_set(preset["value"]);
}

void param_10_getPresetValue(PatcherStateInterface& preset) {
    preset["value"] = this->param_10_value;
}

void param_10_setPresetValue(PatcherStateInterface& preset) {
    if ((bool)(stateIsEmpty(preset)))
        return;

    this->param_10_value_set(preset["value"]);
}

void numberobj_10_init() {
    this->numberobj_10_currentFormat = 6;
    this->getEngine()->sendNumMessage(TAG("setup"), TAG("amp[2]"), 1, this->_currentTime);
}

void numberobj_10_getPresetValue(PatcherStateInterface& preset) {
    preset["value"] = this->numberobj_10_value;
}

void numberobj_10_setPresetValue(PatcherStateInterface& preset) {
    if ((bool)(stateIsEmpty(preset)))
        return;

    this->numberobj_10_value_set(preset["value"]);
}

void param_11_getPresetValue(PatcherStateInterface& preset) {
    preset["value"] = this->param_11_value;
}

void param_11_setPresetValue(PatcherStateInterface& preset) {
    if ((bool)(stateIsEmpty(preset)))
        return;

    this->param_11_value_set(preset["value"]);
}

void numberobj_11_init() {
    this->numberobj_11_currentFormat = 6;
    this->getEngine()->sendNumMessage(TAG("setup"), TAG("ampVar"), 1, this->_currentTime);
}

void numberobj_11_getPresetValue(PatcherStateInterface& preset) {
    preset["value"] = this->numberobj_11_value;
}

void numberobj_11_setPresetValue(PatcherStateInterface& preset) {
    if ((bool)(stateIsEmpty(preset)))
        return;

    this->numberobj_11_value_set(preset["value"]);
}

void data_02_init() {
    this->data_02_buffer->setWantsFill(true);
}

Index data_02_evaluateSizeExpr(number samplerate, number vectorsize) {
    RNBO_UNUSED(vectorsize);
    RNBO_UNUSED(samplerate);
    number size = 0;
    return (Index)(size);
}

void data_02_dspsetup(bool force) {
    if ((bool)(this->data_02_setupDone) && (bool)(!(bool)(force)))
        return;

    if (this->data_02_sizemode == 2) {
        this->data_02_buffer = this->data_02_buffer->setSize((Index)(this->mstosamps(this->data_02_sizems)));
        updateDataRef(this, this->data_02_buffer);
    } else if (this->data_02_sizemode == 3) {
        this->data_02_buffer = this->data_02_buffer->setSize(this->data_02_evaluateSizeExpr(this->samplerate(), this->vectorsize()));
        updateDataRef(this, this->data_02_buffer);
    }

    this->data_02_setupDone = true;
}

void data_02_bufferUpdated() {
    this->data_02_report();
}

void data_02_report() {
    this->data_02_srout_set(this->data_02_buffer->getSampleRate());
    this->data_02_chanout_set(this->data_02_buffer->getChannels());
    this->data_02_sizeout_set(this->data_02_buffer->getSize());
}

void param_12_getPresetValue(PatcherStateInterface& preset) {
    preset["value"] = this->param_12_value;
}

void param_12_setPresetValue(PatcherStateInterface& preset) {
    if ((bool)(stateIsEmpty(preset)))
        return;

    this->param_12_value_set(preset["value"]);
}

void numberobj_12_init() {
    this->numberobj_12_currentFormat = 6;
    this->getEngine()->sendNumMessage(TAG("setup"), TAG("ampCurve"), 1, this->_currentTime);
}

void numberobj_12_getPresetValue(PatcherStateInterface& preset) {
    preset["value"] = this->numberobj_12_value;
}

void numberobj_12_setPresetValue(PatcherStateInterface& preset) {
    if ((bool)(stateIsEmpty(preset)))
        return;

    this->numberobj_12_value_set(preset["value"]);
}

void param_13_getPresetValue(PatcherStateInterface& preset) {
    preset["value"] = this->param_13_value;
}

void param_13_setPresetValue(PatcherStateInterface& preset) {
    if ((bool)(stateIsEmpty(preset)))
        return;

    this->param_13_value_set(preset["value"]);
}

void numberobj_13_init() {
    this->numberobj_13_currentFormat = 6;
    this->getEngine()->sendNumMessage(TAG("setup"), TAG("freq[1]"), 1, this->_currentTime);
}

void numberobj_13_getPresetValue(PatcherStateInterface& preset) {
    preset["value"] = this->numberobj_13_value;
}

void numberobj_13_setPresetValue(PatcherStateInterface& preset) {
    if ((bool)(stateIsEmpty(preset)))
        return;

    this->numberobj_13_value_set(preset["value"]);
}

void param_14_getPresetValue(PatcherStateInterface& preset) {
    preset["value"] = this->param_14_value;
}

void param_14_setPresetValue(PatcherStateInterface& preset) {
    if ((bool)(stateIsEmpty(preset)))
        return;

    this->param_14_value_set(preset["value"]);
}

void numberobj_14_init() {
    this->numberobj_14_currentFormat = 6;
    this->getEngine()->sendNumMessage(TAG("setup"), TAG("freqVar"), 1, this->_currentTime);
}

void numberobj_14_getPresetValue(PatcherStateInterface& preset) {
    preset["value"] = this->numberobj_14_value;
}

void numberobj_14_setPresetValue(PatcherStateInterface& preset) {
    if ((bool)(stateIsEmpty(preset)))
        return;

    this->numberobj_14_value_set(preset["value"]);
}

void data_03_init() {
    this->data_03_buffer->setWantsFill(true);
}

Index data_03_evaluateSizeExpr(number samplerate, number vectorsize) {
    RNBO_UNUSED(vectorsize);
    RNBO_UNUSED(samplerate);
    number size = 0;
    return (Index)(size);
}

void data_03_dspsetup(bool force) {
    if ((bool)(this->data_03_setupDone) && (bool)(!(bool)(force)))
        return;

    if (this->data_03_sizemode == 2) {
        this->data_03_buffer = this->data_03_buffer->setSize((Index)(this->mstosamps(this->data_03_sizems)));
        updateDataRef(this, this->data_03_buffer);
    } else if (this->data_03_sizemode == 3) {
        this->data_03_buffer = this->data_03_buffer->setSize(this->data_03_evaluateSizeExpr(this->samplerate(), this->vectorsize()));
        updateDataRef(this, this->data_03_buffer);
    }

    this->data_03_setupDone = true;
}

void data_03_bufferUpdated() {
    this->data_03_report();
}

void data_03_report() {
    this->data_03_srout_set(this->data_03_buffer->getSampleRate());
    this->data_03_chanout_set(this->data_03_buffer->getChannels());
    this->data_03_sizeout_set(this->data_03_buffer->getSize());
}

void param_15_getPresetValue(PatcherStateInterface& preset) {
    preset["value"] = this->param_15_value;
}

void param_15_setPresetValue(PatcherStateInterface& preset) {
    if ((bool)(stateIsEmpty(preset)))
        return;

    this->param_15_value_set(preset["value"]);
}

void numberobj_15_init() {
    this->numberobj_15_currentFormat = 6;
    this->getEngine()->sendNumMessage(TAG("setup"), TAG("freqCurve"), 1, this->_currentTime);
}

void numberobj_15_getPresetValue(PatcherStateInterface& preset) {
    preset["value"] = this->numberobj_15_value;
}

void numberobj_15_setPresetValue(PatcherStateInterface& preset) {
    if ((bool)(stateIsEmpty(preset)))
        return;

    this->numberobj_15_value_set(preset["value"]);
}

void param_16_getPresetValue(PatcherStateInterface& preset) {
    preset["value"] = this->param_16_value;
}

void param_16_setPresetValue(PatcherStateInterface& preset) {
    if ((bool)(stateIsEmpty(preset)))
        return;

    this->param_16_value_set(preset["value"]);
}

void numberobj_16_init() {
    this->numberobj_16_currentFormat = 6;
    this->getEngine()->sendNumMessage(TAG("setup"), TAG("freq[2]"), 1, this->_currentTime);
}

void numberobj_16_getPresetValue(PatcherStateInterface& preset) {
    preset["value"] = this->numberobj_16_value;
}

void numberobj_16_setPresetValue(PatcherStateInterface& preset) {
    if ((bool)(stateIsEmpty(preset)))
        return;

    this->numberobj_16_value_set(preset["value"]);
}

void param_17_getPresetValue(PatcherStateInterface& preset) {
    preset["value"] = this->param_17_value;
}

void param_17_setPresetValue(PatcherStateInterface& preset) {
    if ((bool)(stateIsEmpty(preset)))
        return;

    this->param_17_value_set(preset["value"]);
}

void numberobj_17_init() {
    this->numberobj_17_currentFormat = 6;
    this->getEngine()->sendNumMessage(TAG("setup"), TAG("freqVar[2]"), 1, this->_currentTime);
}

void numberobj_17_getPresetValue(PatcherStateInterface& preset) {
    preset["value"] = this->numberobj_17_value;
}

void numberobj_17_setPresetValue(PatcherStateInterface& preset) {
    if ((bool)(stateIsEmpty(preset)))
        return;

    this->numberobj_17_value_set(preset["value"]);
}

void param_18_getPresetValue(PatcherStateInterface& preset) {
    preset["value"] = this->param_18_value;
}

void param_18_setPresetValue(PatcherStateInterface& preset) {
    if ((bool)(stateIsEmpty(preset)))
        return;

    this->param_18_value_set(preset["value"]);
}

void numberobj_18_init() {
    this->numberobj_18_currentFormat = 6;
    this->getEngine()->sendNumMessage(TAG("setup"), TAG("freqCurve[2]"), 1, this->_currentTime);
}

void numberobj_18_getPresetValue(PatcherStateInterface& preset) {
    preset["value"] = this->numberobj_18_value;
}

void numberobj_18_setPresetValue(PatcherStateInterface& preset) {
    if ((bool)(stateIsEmpty(preset)))
        return;

    this->numberobj_18_value_set(preset["value"]);
}

void param_19_getPresetValue(PatcherStateInterface& preset) {
    preset["value"] = this->param_19_value;
}

void param_19_setPresetValue(PatcherStateInterface& preset) {
    if ((bool)(stateIsEmpty(preset)))
        return;

    this->param_19_value_set(preset["value"]);
}

void numberobj_19_init() {
    this->numberobj_19_currentFormat = 6;
    this->getEngine()->sendNumMessage(TAG("setup"), TAG("panWifth"), 1, this->_currentTime);
}

void numberobj_19_getPresetValue(PatcherStateInterface& preset) {
    preset["value"] = this->numberobj_19_value;
}

void numberobj_19_setPresetValue(PatcherStateInterface& preset) {
    if ((bool)(stateIsEmpty(preset)))
        return;

    this->numberobj_19_value_set(preset["value"]);
}

Index globaltransport_getSampleOffset(MillisecondTime time) {
    return this->mstosamps(this->maximum(0, time - this->getEngine()->getCurrentTime()));
}

number globaltransport_getTempoAtSample(SampleIndex sampleOffset) {
    return (sampleOffset >= 0 && sampleOffset < this->vs ? this->globaltransport_tempo[(Index)sampleOffset] : this->globaltransport_lastTempo);
}

number globaltransport_getStateAtSample(SampleIndex sampleOffset) {
    return (sampleOffset >= 0 && sampleOffset < this->vs ? this->globaltransport_state[(Index)sampleOffset] : this->globaltransport_lastState);
}

number globaltransport_getState(MillisecondTime time) {
    return this->globaltransport_getStateAtSample(this->globaltransport_getSampleOffset(time));
}

number globaltransport_getBeatTime(MillisecondTime time) {
    number i = 2;

    while (i < this->globaltransport_beatTimeChanges->length && this->globaltransport_beatTimeChanges[(Index)(i + 1)] <= time) {
        i += 2;
    }

    i -= 2;
    number beatTimeBase = this->globaltransport_beatTimeChanges[(Index)i];

    if (this->globaltransport_getState(time) == 0)
        return beatTimeBase;

    number beatTimeBaseMsTime = this->globaltransport_beatTimeChanges[(Index)(i + 1)];
    number diff = time - beatTimeBaseMsTime;
    return beatTimeBase + this->mstobeats(diff);
}

bool globaltransport_setTempo(MillisecondTime time, number tempo, bool notify) {
    if ((bool)(notify)) {
        this->processTempoEvent(time, tempo);
        this->globaltransport_notify = true;
    } else {
        Index offset = (Index)(this->globaltransport_getSampleOffset(time));

        if (this->globaltransport_getTempoAtSample(offset) != tempo) {
            this->globaltransport_beatTimeChanges->push(this->globaltransport_getBeatTime(time));
            this->globaltransport_beatTimeChanges->push(time);
            fillSignal(this->globaltransport_tempo, this->vs, tempo, offset);
            this->globaltransport_lastTempo = tempo;
            this->globaltransport_tempoNeedsReset = true;
            return true;
        }
    }

    return false;
}

number globaltransport_getTempo(MillisecondTime time) {
    return this->globaltransport_getTempoAtSample(this->globaltransport_getSampleOffset(time));
}

bool globaltransport_setState(MillisecondTime time, number state, bool notify) {
    if ((bool)(notify)) {
        this->processTransportEvent(time, TransportState(state));
        this->globaltransport_notify = true;
    } else {
        Index offset = (Index)(this->globaltransport_getSampleOffset(time));

        if (this->globaltransport_getStateAtSample(offset) != state) {
            fillSignal(this->globaltransport_state, this->vs, state, offset);
            this->globaltransport_lastState = TransportState(state);
            this->globaltransport_stateNeedsReset = true;

            if (state == 0) {
                this->globaltransport_beatTimeChanges->push(this->globaltransport_getBeatTime(time));
                this->globaltransport_beatTimeChanges->push(time);
            }

            return true;
        }
    }

    return false;
}

bool globaltransport_setBeatTime(MillisecondTime time, number beattime, bool notify) {
    if ((bool)(notify)) {
        this->processBeatTimeEvent(time, beattime);
        this->globaltransport_notify = true;
        return false;
    } else {
        bool beatTimeHasChanged = false;
        float oldBeatTime = (float)(this->globaltransport_getBeatTime(time));
        float newBeatTime = (float)(beattime);

        if (oldBeatTime != newBeatTime) {
            beatTimeHasChanged = true;
        }

        this->globaltransport_beatTimeChanges->push(beattime);
        this->globaltransport_beatTimeChanges->push(time);
        return beatTimeHasChanged;
    }
}

number globaltransport_getBeatTimeAtSample(SampleIndex sampleOffset) {
    auto msOffset = this->sampstoms(sampleOffset);
    return this->globaltransport_getBeatTime(this->getEngine()->getCurrentTime() + msOffset);
}

array<number, 2> globaltransport_getTimeSignature(MillisecondTime time) {
    number i = 3;

    while (i < this->globaltransport_timeSignatureChanges->length && this->globaltransport_timeSignatureChanges[(Index)(i + 2)] <= time) {
        i += 3;
    }

    i -= 3;

    return {
        this->globaltransport_timeSignatureChanges[(Index)i],
        this->globaltransport_timeSignatureChanges[(Index)(i + 1)]
    };
}

array<number, 2> globaltransport_getTimeSignatureAtSample(SampleIndex sampleOffset) {
    auto msOffset = this->sampstoms(sampleOffset);
    return this->globaltransport_getTimeSignature(this->getEngine()->getCurrentTime() + msOffset);
}

bool globaltransport_setTimeSignature(MillisecondTime time, number numerator, number denominator, bool notify) {
    if ((bool)(notify)) {
        this->processTimeSignatureEvent(time, (int)(numerator), (int)(denominator));
        this->globaltransport_notify = true;
    } else {
        array<number, 2> currentSig = this->globaltransport_getTimeSignature(time);

        if (currentSig[0] != numerator || currentSig[1] != denominator) {
            this->globaltransport_timeSignatureChanges->push(numerator);
            this->globaltransport_timeSignatureChanges->push(denominator);
            this->globaltransport_timeSignatureChanges->push(time);
            return true;
        }
    }

    return false;
}

void globaltransport_advance() {
    if ((bool)(this->globaltransport_tempoNeedsReset)) {
        fillSignal(this->globaltransport_tempo, this->vs, this->globaltransport_lastTempo);
        this->globaltransport_tempoNeedsReset = false;

        if ((bool)(this->globaltransport_notify)) {
            this->getEngine()->sendTempoEvent(this->globaltransport_lastTempo);
        }
    }

    if ((bool)(this->globaltransport_stateNeedsReset)) {
        fillSignal(this->globaltransport_state, this->vs, this->globaltransport_lastState);
        this->globaltransport_stateNeedsReset = false;

        if ((bool)(this->globaltransport_notify)) {
            this->getEngine()->sendTransportEvent(TransportState(this->globaltransport_lastState));
        }
    }

    if (this->globaltransport_beatTimeChanges->length > 2) {
        this->globaltransport_beatTimeChanges[0] = this->globaltransport_beatTimeChanges[(Index)(this->globaltransport_beatTimeChanges->length - 2)];
        this->globaltransport_beatTimeChanges[1] = this->globaltransport_beatTimeChanges[(Index)(this->globaltransport_beatTimeChanges->length - 1)];
        this->globaltransport_beatTimeChanges->length = 2;

        if ((bool)(this->globaltransport_notify)) {
            this->getEngine()->sendBeatTimeEvent(this->globaltransport_beatTimeChanges[0]);
        }
    }

    if (this->globaltransport_timeSignatureChanges->length > 3) {
        this->globaltransport_timeSignatureChanges[0] = this->globaltransport_timeSignatureChanges[(Index)(this->globaltransport_timeSignatureChanges->length - 3)];
        this->globaltransport_timeSignatureChanges[1] = this->globaltransport_timeSignatureChanges[(Index)(this->globaltransport_timeSignatureChanges->length - 2)];
        this->globaltransport_timeSignatureChanges[2] = this->globaltransport_timeSignatureChanges[(Index)(this->globaltransport_timeSignatureChanges->length - 1)];
        this->globaltransport_timeSignatureChanges->length = 3;

        if ((bool)(this->globaltransport_notify)) {
            this->getEngine()->sendTimeSignatureEvent(
                (int)(this->globaltransport_timeSignatureChanges[0]),
                (int)(this->globaltransport_timeSignatureChanges[1])
            );
        }
    }

    this->globaltransport_notify = false;
}

void globaltransport_dspsetup(bool force) {
    if ((bool)(this->globaltransport_setupDone) && (bool)(!(bool)(force)))
        return;

    fillSignal(this->globaltransport_tempo, this->vs, this->globaltransport_lastTempo);
    this->globaltransport_tempoNeedsReset = false;
    fillSignal(this->globaltransport_state, this->vs, this->globaltransport_lastState);
    this->globaltransport_stateNeedsReset = false;
    this->globaltransport_setupDone = true;
}

bool stackprotect_check() {
    this->stackprotect_count++;

    if (this->stackprotect_count > 128) {
        console->log("STACK OVERFLOW DETECTED - stopped processing branch !");
        return true;
    }

    return false;
}

void updateTime(MillisecondTime time) {
    this->_currentTime = time;
    this->sampleOffsetIntoNextAudioBuffer = (SampleIndex)(rnbo_fround(this->msToSamps(time - this->getEngine()->getCurrentTime(), this->sr)));

    if (this->sampleOffsetIntoNextAudioBuffer >= (SampleIndex)(this->vs))
        this->sampleOffsetIntoNextAudioBuffer = (SampleIndex)(this->vs) - 1;

    if (this->sampleOffsetIntoNextAudioBuffer < 0)
        this->sampleOffsetIntoNextAudioBuffer = 0;
}

void assign_defaults()
{
    param_01_value = 10;
    gen_01_in1 = 0;
    gen_01_in2 = 0;
    gen_01_in3 = 0;
    gen_01_in4 = 0;
    gen_01_in5 = 0;
    gen_01_in6 = 0;
    gen_01_in7 = 0;
    gen_01_in8 = 0;
    gen_02_in1 = 0;
    gen_02_durcurve = 0;
    gen_02_panmax = 0;
    gen_02_freqmax = 0;
    gen_02_revcurve = 0;
    gen_02_speedmax = 0;
    gen_02_ampmin = 0;
    gen_02_speedcurve = 0;
    gen_02_durmax = 0;
    gen_02_freqmin = 0;
    gen_02_revmax = 0;
    gen_02_panmin = 0;
    gen_02_poscurve = 0;
    gen_02_ampmax = 0;
    gen_02_revmin = 0;
    gen_02_posmax = 0;
    gen_02_durmin = 0;
    gen_02_speedmin = 0;
    gen_02_posmin = 0;
    gen_02_ampcurve = 0;
    gen_02_freqcurve = 0;
    gen_02_density = 0;
    p_01_target = 0;
    numberobj_02_value = 0;
    numberobj_02_value_setter(numberobj_02_value);
    param_02_value = 100;
    numberobj_03_value = 0;
    numberobj_03_value_setter(numberobj_03_value);
    param_03_value = 0;
    numberobj_04_value = 0;
    numberobj_04_value_setter(numberobj_04_value);
    param_04_value = 0;
    numberobj_05_value = 0;
    numberobj_05_value_setter(numberobj_05_value);
    param_05_value = 0;
    numberobj_06_value = 0;
    numberobj_06_value_setter(numberobj_06_value);
    p_02_target = 0;
    param_06_value = 0.1;
    p_03_target = 0;
    numberobj_07_value = 0;
    numberobj_07_value_setter(numberobj_07_value);
    param_07_value = 0;
    numberobj_08_value = 0;
    numberobj_08_value_setter(numberobj_08_value);
    data_01_sizeout = 0;
    data_01_size = 4096;
    data_01_sizems = 0;
    data_01_normalize = 0.995;
    data_01_channels = 1;
    param_08_value = 0;
    param_09_value = 0;
    numberobj_09_value = 0;
    numberobj_09_value_setter(numberobj_09_value);
    param_10_value = 0;
    p_04_target = 0;
    numberobj_10_value = 0;
    numberobj_10_value_setter(numberobj_10_value);
    param_11_value = 0;
    numberobj_11_value = 0;
    numberobj_11_value_setter(numberobj_11_value);
    data_02_sizeout = 0;
    data_02_size = 4096;
    data_02_sizems = 0;
    data_02_normalize = 0.995;
    data_02_channels = 1;
    param_12_value = 0;
    numberobj_12_value = 0;
    numberobj_12_value_setter(numberobj_12_value);
    param_13_value = 1;
    p_05_target = 0;
    numberobj_13_value = 0;
    numberobj_13_value_setter(numberobj_13_value);
    param_14_value = 0;
    numberobj_14_value = 0;
    numberobj_14_value_setter(numberobj_14_value);
    send_01_input_number = 0;
    data_03_sizeout = 0;
    data_03_size = 0;
    data_03_sizems = 0;
    data_03_normalize = 0.995;
    data_03_channels = 1;
    param_15_value = 0;
    numberobj_15_value = 0;
    numberobj_15_value_setter(numberobj_15_value);
    param_16_value = 1;
    p_06_target = 0;
    numberobj_16_value = 0;
    numberobj_16_value_setter(numberobj_16_value);
    param_17_value = 0;
    numberobj_17_value = 0;
    numberobj_17_value_setter(numberobj_17_value);
    param_18_value = 0;
    numberobj_18_value = 0;
    numberobj_18_value_setter(numberobj_18_value);
    param_19_value = 50;
    p_07_target = 0;
    numberobj_19_value = 0;
    numberobj_19_value_setter(numberobj_19_value);
    _currentTime = 0;
    audioProcessSampleCount = 0;
    sampleOffsetIntoNextAudioBuffer = 0;
    zeroBuffer = nullptr;
    dummyBuffer = nullptr;
    signals[0] = nullptr;
    signals[1] = nullptr;
    signals[2] = nullptr;
    signals[3] = nullptr;
    signals[4] = nullptr;
    signals[5] = nullptr;
    signals[6] = nullptr;
    signals[7] = nullptr;
    didAllocateSignals = 0;
    vs = 0;
    maxvs = 0;
    sr = 44100;
    invsr = 0.00002267573696;
    param_01_lastValue = 0;
    gen_01_history_2_value = 0;
    gen_01_history_1_value = 0;
    gen_01_latch_11_value = 0;
    gen_01_latch_13_value = 0;
    gen_01_latch_15_value = 0;
    gen_01_plusequals_17_value = 0;
    gen_01_latch_21_value = 0;
    gen_01_latch_25_value = 0;
    gen_01_latch_27_value = 0;
    gen_01_plusequals_29_value = 0;
    gen_01_latch_37_value = 0;
    gen_01_latch_39_value = 0;
    gen_01_latch_42_value = 0;
    gen_01_latch_44_value = 0;
    gen_01_latch_46_value = 0;
    gen_01_latch_48_value = 0;
    gen_01_latch_50_value = 0;
    gen_01_phasor_52_currentPhase = 0;
    gen_01_phasor_52_conv = 0;
    gen_01_cycle_65_ph_currentPhase = 0;
    gen_01_cycle_65_ph_conv = 0;
    gen_01_cycle_65_wrap = 0;
    gen_01_cycle_70_ph_currentPhase = 0;
    gen_01_cycle_70_ph_conv = 0;
    gen_01_cycle_70_wrap = 0;
    gen_01_latch_74_value = 0;
    gen_01_phasor_76_currentPhase = 0;
    gen_01_phasor_76_conv = 0;
    gen_01_cycle_90_ph_currentPhase = 0;
    gen_01_cycle_90_ph_conv = 0;
    gen_01_cycle_90_wrap = 0;
    gen_01_cycle_95_ph_currentPhase = 0;
    gen_01_cycle_95_ph_conv = 0;
    gen_01_cycle_95_wrap = 0;
    gen_01_setupDone = false;
    numberobj_02_currentFormat = 6;
    numberobj_02_lastValue = 0;
    param_02_lastValue = 0;
    numberobj_03_currentFormat = 6;
    numberobj_03_lastValue = 0;
    param_03_lastValue = 0;
    numberobj_04_currentFormat = 6;
    numberobj_04_lastValue = 0;
    param_04_lastValue = 0;
    numberobj_05_currentFormat = 6;
    numberobj_05_lastValue = 0;
    param_05_lastValue = 0;
    numberobj_06_currentFormat = 6;
    numberobj_06_lastValue = 0;
    param_06_lastValue = 0;
    numberobj_07_currentFormat = 6;
    numberobj_07_lastValue = 0;
    param_07_lastValue = 0;
    numberobj_08_currentFormat = 6;
    numberobj_08_lastValue = 0;
    data_01_sizemode = 1;
    data_01_setupDone = false;
    param_08_lastValue = 0;
    param_09_lastValue = 0;
    numberobj_09_currentFormat = 6;
    numberobj_09_lastValue = 0;
    param_10_lastValue = 0;
    numberobj_10_currentFormat = 6;
    numberobj_10_lastValue = 0;
    param_11_lastValue = 0;
    numberobj_11_currentFormat = 6;
    numberobj_11_lastValue = 0;
    data_02_sizemode = 1;
    data_02_setupDone = false;
    param_12_lastValue = 0;
    numberobj_12_currentFormat = 6;
    numberobj_12_lastValue = 0;
    param_13_lastValue = 0;
    numberobj_13_currentFormat = 6;
    numberobj_13_lastValue = 0;
    param_14_lastValue = 0;
    numberobj_14_currentFormat = 6;
    numberobj_14_lastValue = 0;
    data_03_sizemode = 0;
    data_03_setupDone = false;
    param_15_lastValue = 0;
    numberobj_15_currentFormat = 6;
    numberobj_15_lastValue = 0;
    param_16_lastValue = 0;
    numberobj_16_currentFormat = 6;
    numberobj_16_lastValue = 0;
    param_17_lastValue = 0;
    numberobj_17_currentFormat = 6;
    numberobj_17_lastValue = 0;
    param_18_lastValue = 0;
    numberobj_18_currentFormat = 6;
    numberobj_18_lastValue = 0;
    param_19_lastValue = 0;
    numberobj_19_currentFormat = 6;
    numberobj_19_lastValue = 0;
    globaltransport_tempo = nullptr;
    globaltransport_tempoNeedsReset = false;
    globaltransport_lastTempo = 120;
    globaltransport_state = nullptr;
    globaltransport_stateNeedsReset = false;
    globaltransport_lastState = 0;
    globaltransport_beatTimeChanges = { 0, 0 };
    globaltransport_timeSignatureChanges = { 4, 4, 0 };
    globaltransport_notify = false;
    globaltransport_setupDone = false;
    stackprotect_count = 0;
    _voiceIndex = 0;
    _noteNumber = 0;
    isMuted = 1;
}

// member variables

    number param_01_value;
    number gen_01_in1;
    number gen_01_in2;
    number gen_01_in3;
    number gen_01_in4;
    number gen_01_in5;
    number gen_01_in6;
    number gen_01_in7;
    number gen_01_in8;
    number gen_02_in1;
    number gen_02_durcurve;
    number gen_02_panmax;
    number gen_02_freqmax;
    number gen_02_revcurve;
    number gen_02_speedmax;
    number gen_02_ampmin;
    number gen_02_speedcurve;
    number gen_02_durmax;
    number gen_02_freqmin;
    number gen_02_revmax;
    number gen_02_panmin;
    number gen_02_poscurve;
    number gen_02_ampmax;
    number gen_02_revmin;
    number gen_02_posmax;
    number gen_02_durmin;
    number gen_02_speedmin;
    number gen_02_posmin;
    number gen_02_ampcurve;
    number gen_02_freqcurve;
    number gen_02_density;
    number p_01_target;
    number numberobj_02_value;
    number param_02_value;
    number numberobj_03_value;
    number param_03_value;
    number numberobj_04_value;
    number param_04_value;
    number numberobj_05_value;
    number param_05_value;
    number numberobj_06_value;
    number p_02_target;
    number param_06_value;
    number p_03_target;
    number numberobj_07_value;
    number param_07_value;
    number numberobj_08_value;
    list bufferop_01_channels;
    number data_01_sizeout;
    number data_01_size;
    number data_01_sizems;
    number data_01_normalize;
    number data_01_channels;
    number param_08_value;
    number param_09_value;
    number numberobj_09_value;
    number param_10_value;
    number p_04_target;
    number numberobj_10_value;
    number param_11_value;
    number numberobj_11_value;
    list bufferop_02_channels;
    number data_02_sizeout;
    number data_02_size;
    number data_02_sizems;
    number data_02_normalize;
    number data_02_channels;
    number param_12_value;
    number numberobj_12_value;
    number param_13_value;
    number p_05_target;
    number numberobj_13_value;
    number param_14_value;
    number numberobj_14_value;
    number send_01_input_number;
    list send_01_input_list;
    number data_03_sizeout;
    number data_03_size;
    number data_03_sizems;
    number data_03_normalize;
    number data_03_channels;
    number param_15_value;
    number numberobj_15_value;
    number param_16_value;
    number p_06_target;
    number numberobj_16_value;
    number param_17_value;
    number numberobj_17_value;
    number param_18_value;
    number numberobj_18_value;
    number param_19_value;
    number p_07_target;
    number numberobj_19_value;
    MillisecondTime _currentTime;
    SampleIndex audioProcessSampleCount;
    SampleIndex sampleOffsetIntoNextAudioBuffer;
    signal zeroBuffer;
    signal dummyBuffer;
    SampleValue * signals[8];
    bool didAllocateSignals;
    Index vs;
    Index maxvs;
    number sr;
    number invsr;
    number param_01_lastValue;
    number gen_01_history_2_value;
    number gen_01_history_1_value;
    Float32BufferRef gen_01_winsample;
    Float32BufferRef gen_01_win2;
    Float32BufferRef gen_01_sample;
    number gen_01_latch_11_value;
    number gen_01_latch_13_value;
    number gen_01_latch_15_value;
    number gen_01_plusequals_17_value;
    number gen_01_latch_21_value;
    number gen_01_latch_25_value;
    number gen_01_latch_27_value;
    number gen_01_plusequals_29_value;
    number gen_01_latch_37_value;
    number gen_01_latch_39_value;
    number gen_01_latch_42_value;
    number gen_01_latch_44_value;
    number gen_01_latch_46_value;
    number gen_01_latch_48_value;
    number gen_01_latch_50_value;
    number gen_01_phasor_52_currentPhase;
    number gen_01_phasor_52_conv;
    number gen_01_cycle_65_ph_currentPhase;
    number gen_01_cycle_65_ph_conv;
    Float64BufferRef gen_01_cycle_65_buffer;
    long gen_01_cycle_65_wrap;
    uint32_t gen_01_cycle_65_phasei;
    SampleValue gen_01_cycle_65_f2i;
    number gen_01_cycle_70_ph_currentPhase;
    number gen_01_cycle_70_ph_conv;
    Float64BufferRef gen_01_cycle_70_buffer;
    long gen_01_cycle_70_wrap;
    uint32_t gen_01_cycle_70_phasei;
    SampleValue gen_01_cycle_70_f2i;
    number gen_01_latch_74_value;
    number gen_01_phasor_76_currentPhase;
    number gen_01_phasor_76_conv;
    number gen_01_cycle_90_ph_currentPhase;
    number gen_01_cycle_90_ph_conv;
    Float64BufferRef gen_01_cycle_90_buffer;
    long gen_01_cycle_90_wrap;
    uint32_t gen_01_cycle_90_phasei;
    SampleValue gen_01_cycle_90_f2i;
    number gen_01_cycle_95_ph_currentPhase;
    number gen_01_cycle_95_ph_conv;
    Float64BufferRef gen_01_cycle_95_buffer;
    long gen_01_cycle_95_wrap;
    uint32_t gen_01_cycle_95_phasei;
    SampleValue gen_01_cycle_95_f2i;
    bool gen_01_setupDone;
    Float32BufferRef gen_02_sample;
    UInt gen_02_noise_2_state[4] = { };
    UInt gen_02_noise_7_state[4] = { };
    UInt gen_02_noise_12_state[4] = { };
    UInt gen_02_noise_20_state[4] = { };
    UInt gen_02_noise_26_state[4] = { };
    UInt gen_02_noise_31_state[4] = { };
    UInt gen_02_noise_35_state[4] = { };
    UInt gen_02_noise_50_state[4] = { };
    Int numberobj_02_currentFormat;
    number numberobj_02_lastValue;
    number param_02_lastValue;
    Int numberobj_03_currentFormat;
    number numberobj_03_lastValue;
    number param_03_lastValue;
    Int numberobj_04_currentFormat;
    number numberobj_04_lastValue;
    number param_04_lastValue;
    Int numberobj_05_currentFormat;
    number numberobj_05_lastValue;
    number param_05_lastValue;
    Int numberobj_06_currentFormat;
    number numberobj_06_lastValue;
    number param_06_lastValue;
    Int numberobj_07_currentFormat;
    number numberobj_07_lastValue;
    number param_07_lastValue;
    Int numberobj_08_currentFormat;
    number numberobj_08_lastValue;
    Float32BufferRef bufferop_01_buffer;
    Float32BufferRef data_01_buffer;
    Int data_01_sizemode;
    bool data_01_setupDone;
    number param_08_lastValue;
    number param_09_lastValue;
    Int numberobj_09_currentFormat;
    number numberobj_09_lastValue;
    number param_10_lastValue;
    Int numberobj_10_currentFormat;
    number numberobj_10_lastValue;
    number param_11_lastValue;
    Int numberobj_11_currentFormat;
    number numberobj_11_lastValue;
    Float32BufferRef bufferop_02_buffer;
    Float32BufferRef data_02_buffer;
    Int data_02_sizemode;
    bool data_02_setupDone;
    number param_12_lastValue;
    Int numberobj_12_currentFormat;
    number numberobj_12_lastValue;
    number param_13_lastValue;
    Int numberobj_13_currentFormat;
    number numberobj_13_lastValue;
    number param_14_lastValue;
    Int numberobj_14_currentFormat;
    number numberobj_14_lastValue;
    Float32BufferRef data_03_buffer;
    Int data_03_sizemode;
    bool data_03_setupDone;
    number param_15_lastValue;
    Int numberobj_15_currentFormat;
    number numberobj_15_lastValue;
    number param_16_lastValue;
    Int numberobj_16_currentFormat;
    number numberobj_16_lastValue;
    number param_17_lastValue;
    Int numberobj_17_currentFormat;
    number numberobj_17_lastValue;
    number param_18_lastValue;
    Int numberobj_18_currentFormat;
    number numberobj_18_lastValue;
    number param_19_lastValue;
    Int numberobj_19_currentFormat;
    number numberobj_19_lastValue;
    signal globaltransport_tempo;
    bool globaltransport_tempoNeedsReset;
    number globaltransport_lastTempo;
    signal globaltransport_state;
    bool globaltransport_stateNeedsReset;
    number globaltransport_lastState;
    list globaltransport_beatTimeChanges;
    list globaltransport_timeSignatureChanges;
    bool globaltransport_notify;
    bool globaltransport_setupDone;
    number stackprotect_count;
    DataRef winsample;
    DataRef win2;
    DataRef sample;
    DataRef RNBODefaultSinus;
    Index _voiceIndex;
    Int _noteNumber;
    Index isMuted;
    indexlist paramInitIndices;
    indexlist paramInitOrder;
    RNBOSubpatcher_113* p_01;
    RNBOSubpatcher_114* p_02;
    RNBOSubpatcher_115* p_03;
    RNBOSubpatcher_116* p_04;
    RNBOSubpatcher_117* p_05;
    RNBOSubpatcher_118* p_06;
    RNBOSubpatcher_119* p_07;

};

PatcherInterface* creaternbomatic()
{
    return new rnbomatic();
}

#ifndef RNBO_NO_PATCHERFACTORY

extern "C" PatcherFactoryFunctionPtr GetPatcherFactoryFunction(PlatformInterface* platformInterface)
#else

extern "C" PatcherFactoryFunctionPtr rnbomaticFactoryFunction(PlatformInterface* platformInterface)
#endif

{
    Platform::set(platformInterface);
    return creaternbomatic;
}

} // end RNBO namespace

