/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMStillImageCaptureRequest : CAMCaptureRequest <CAMBurstIdentifierProvider, CAMBurstRequest, CAMEffectFilterTypeProvider, CAMIrisRequest, CAMTimelapseRequest, NSCopying, NSMutableCopying> {
    NSString * _EV0IrisIdentifier;
    NSURL * _EV0LocalVideoDestinationURL;
    NSString * _EV0PersistenceUUID;
    NSString * _EV0VideoPersistenceUUID;
    NSArray * _adjustmentFilters;
    NSString * _burstIdentifier;
    <CAMStillImageCaptureRequestDelegate> * _delegate;
    struct CGSize { 
        double width; 
        double height; 
    }  _desiredPreviewSize;
    long long  _effectFilterType;
    long long  _flashMode;
    long long  _hdrMode;
    NSString * _irisIdentifier;
    long long  _irisMode;
    long long  _lightingEffectType;
    NSURL * _localVideoDestinationURL;
    double  _loggingVideoZoomFactor;
    long long  _loggingZoomInteractionType;
    unsigned long long  _maximumBurstLength;
    NSArray * _originalFilters;
    NSString * _timelapseIdentifier;
    unsigned long long  _userInitiationTime;
    bool  _usesStillImageStabilization;
    NSString * _videoPersistenceUUID;
    bool  _wantsAudioForCapture;
    bool  _wantsAutoDualCameraFusion;
    bool  _wantsHighResolutionStills;
    bool  _wantsPortraitEffect;
    bool  _wantsSquareCrop;
}

@property (nonatomic, readonly, copy) NSString *EV0IrisIdentifier;
@property (nonatomic, readonly, copy) NSURL *EV0LocalVideoDestinationURL;
@property (nonatomic, readonly, copy) NSString *EV0PersistenceUUID;
@property (nonatomic, readonly, copy) NSString *EV0VideoPersistenceUUID;
@property (nonatomic, readonly) NSArray *adjustmentFilters;
@property (nonatomic, readonly, copy) NSString *burstIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <CAMStillImageCaptureRequestDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } desiredPreviewSize;
@property (nonatomic, readonly) long long effectFilterType;
@property (nonatomic, readonly) long long flashMode;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long hdrMode;
@property (nonatomic, readonly, copy) NSString *irisIdentifier;
@property (nonatomic, readonly) long long irisMode;
@property (nonatomic, readonly) long long lightingEffectType;
@property (nonatomic, readonly, copy) NSURL *localVideoDestinationURL;
@property (nonatomic, readonly) double loggingVideoZoomFactor;
@property (nonatomic, readonly) long long loggingZoomInteractionType;
@property (nonatomic, readonly) unsigned long long maximumBurstLength;
@property (nonatomic, readonly) NSArray *originalFilters;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *timelapseIdentifier;
@property (nonatomic, readonly) unsigned long long userInitiationTime;
@property (nonatomic, readonly) bool usesStillImageStabilization;
@property (nonatomic, readonly, copy) NSString *videoPersistenceUUID;
@property (nonatomic, readonly) bool wantsAudioForCapture;
@property (nonatomic, readonly) bool wantsAutoDualCameraFusion;
@property (nonatomic, readonly) bool wantsHighResolutionStills;
@property (nonatomic, readonly) bool wantsPortraitEffect;
@property (nonatomic, readonly) bool wantsSquareCrop;

- (void).cxx_destruct;
- (id)EV0IrisIdentifier;
- (id)EV0LocalVideoDestinationURL;
- (id)EV0PersistenceUUID;
- (id)EV0VideoPersistenceUUID;
- (id)adjustmentFilters;
- (id)burstIdentifier;
- (id)captureRequest;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (struct CGSize { double x1; double x2; })desiredPreviewSize;
- (long long)effectFilterType;
- (long long)flashMode;
- (long long)hdrMode;
- (id)init;
- (id)initWithRequest:(id)arg1 distinctPersistence:(bool)arg2;
- (id)irisIdentifier;
- (id)irisIdentifierForEV0:(bool)arg1;
- (id)irisLocalVideoDestinationURLForEV0:(bool)arg1;
- (long long)irisMode;
- (id)irisStillImagePersistenceUUIDForEV0:(bool)arg1;
- (id)irisVideoPersistenceUUIDForEV0:(bool)arg1;
- (bool)isEV0LocalVideoDestinationURL:(id)arg1;
- (long long)lightingEffectType;
- (id)localVideoDestinationURL;
- (double)loggingVideoZoomFactor;
- (long long)loggingZoomInteractionType;
- (unsigned long long)maximumBurstLength;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)originalFilters;
- (bool)shouldPersistToLivePhotoDirectory;
- (id)timelapseIdentifier;
- (unsigned long long)userInitiationTime;
- (bool)usesStillImageStabilization;
- (id)videoPersistenceUUID;
- (bool)wantsAudioForCapture;
- (bool)wantsAutoDualCameraFusion;
- (bool)wantsHighResolutionStills;
- (bool)wantsPortraitEffect;
- (bool)wantsSquareCrop;

@end
