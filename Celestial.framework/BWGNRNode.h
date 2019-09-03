/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWGNRNode : BWNode {
    bool  _allowedToModifyInputBuffers;
    BWNodeOutput * _bravoHDRDisparityOutput;
    bool  _clientExpectsPreBracketFrame;
    struct opaqueCMSampleBuffer { } * _collectedUnprocessedPreBracketHDR;
    int (* _createSampleBufferProcessorFunction;
    FigCaptureStillImageSettings * _currentRequestedStillImageCaptureSettings;
    BWStillImageCaptureSettings * _currentResolvedStillImageCaptureSettings;
    unsigned int  _expectedFrameCount;
    bool  _expectsPreBracketFrame;
    int  _gnrFusionReferenceFrameBracketedCaptureSequenceNumber;
    int  _hdrDisparityBracketedCaptureSequenceNumber;
    int  _hdrEV0BracketCaptureIdentifier;
    bool  _hdrEnabled;
    <BWStillImageProcessingStatusDelegate> * _hdrReferenceFrameSelectionDelegate;
    NSMutableDictionary * _inputAttachedMedia;
    bool  _oisEnabled;
    NSString * _portType;
    NSMutableDictionary * _presentationTimeStampsForInputFrames;
    long long  _previouslyCompletedFusionSettingsID;
    bool  _processingHDREV0BracketFrame;
    bool  _processingLTMHDRFusion;
    int  _processingType;
    bool  _receivedAllFrames;
    unsigned int  _receivedFrameCount;
    bool  _receivedPreBracketFrame;
    int  _receivedReferenceFrameBracketedCaptureSequenceNumber;
    struct OpaqueFigSampleBufferProcessor { } * _sampleBufferProcessor;
    NSString * _sensorID;
    NSDictionary * _sensorIDDictionary;
    bool  _sisEnabled;
    FigCapturePixelConverter * _stereoFusedGNRHDRPixelConverter;
    NSString * _telephotoPortType;
    NSString * _telephotoSensorID;
    NSDictionary * _telephotoSensorIDDictionary;
    bool  _usesHDRPreBracketFrameForErrorRecoveryDownstream;
}

+ (void)initialize;

- (void)_clearCaptureRequestState;
- (struct opaqueCMSampleBuffer { }*)_copyAndZoomSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 usingNormalizedZoomRectangle:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_detectMissingPreBracketedFrameAndEmitBWNodeError;
- (int)_gnrProcessingTypeWithMetadataDictionary:(id)arg1;
- (void)_handleSBPReferenceFrame:(int)arg1;
- (id)_initWithSISEnabled:(bool)arg1 OISEnabled:(bool)arg2 LTMHDREnabled:(bool)arg3 processingLTMHDRFusion:(bool)arg4 portType:(id)arg5 sensorID:(id)arg6 sensorIDDictionary:(id)arg7 telephotoPortType:(id)arg8 telephotoSensorID:(id)arg9 telephotoSensorIDDictionary:(id)arg10 sbpCreationFunction:(int (*)arg11 treatSoftErrorsAsHardErrors:(bool)arg12;
- (bool)_isBravoDepthDataCapture;
- (bool)_isBravoHDRDepthDataCapture;
- (bool)_isBravoTelephotoHDRDepthDataCapture;
- (void)_processSequenceInSampleBufferProcessor;
- (bool)_receivedExpectedAmountOfFrames;
- (void)_sampleBufferProcessorOutputReady:(int)arg1 sampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (void)_setExpectedFrameCountForPortType:(id)arg1;
- (int)_setPropertyOnSampleBufferProcessorWithKey:(struct __CFString { }*)arg1 value:(void*)arg2;
- (void)_setReferenceFrameBracketedCaptureSequenceNumberOnSampleBufferProcessor:(int)arg1;
- (int)_setupSampleBufferProcessor;
- (id)_tuningDictionaryWithOnlyGNRParameters;
- (unsigned int)_worstCaseFrameRetainCount;
- (bool)allowedToModifyInputBuffers;
- (bool)attachesInputBracketToOutputSampleBuffer;
- (void)dealloc;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (void)handleStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)arg1 forInput:(id)arg2;
- (id)hdrReferenceFrameSelectionDelegate;
- (id)initWithSISEnabled:(bool)arg1 OISEnabled:(bool)arg2 LTMHDREnabled:(bool)arg3 processingLTMHDRFusion:(bool)arg4 portType:(id)arg5 sensorID:(id)arg6 sensorIDDictionary:(id)arg7 telephotoPortType:(id)arg8 telephotoSensorID:(id)arg9 telephotoSensorIDDictionary:(id)arg10;
- (id)nodeSubType;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (id)sbpOptionsDictionary;
- (void)setAllowedToModifyInputBuffers:(bool)arg1;
- (void)setAttachesInputBracketToOutputSampleBuffer:(bool)arg1;
- (void)setHdrReferenceFrameSelectionDelegate:(id)arg1;
- (void)setUsesHDRPreBracketFrameForErrorRecoveryDownstream:(bool)arg1;
- (bool)usesHDRPreBracketFrameForErrorRecoveryDownstream;

@end
