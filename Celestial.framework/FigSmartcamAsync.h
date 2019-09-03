/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigSmartcamAsync : FigSmartcam {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _hasValidHints;
    bool  _inputImageReady;
    bool  _inputImageRunning;
    struct opaqueCMSampleBuffer { } * _localSampleBuffer;
}

- (bool)hasValidHints;
- (id)initWithQueue:(id)arg1;
- (bool)inputImage:(struct opaqueCMSampleBuffer { }*)arg1;

@end
