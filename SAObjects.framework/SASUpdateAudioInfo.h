/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASUpdateAudioInfo : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic, copy) NSString *audioSource;
@property (nonatomic) int codec;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *deviceIdentifier;
@property (nonatomic, copy) NSString *deviceModel;
@property (nonatomic, copy) NSString *dspStatus;
@property (nonatomic, copy) NSString *firmwareVersion;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *headsetAddress;
@property (nonatomic, copy) NSString *headsetId;
@property (nonatomic, copy) NSString *headsetName;
@property (nonatomic, copy) NSNumber *noiseReductionLevel;
@property (nonatomic, copy) NSString *origin;
@property (nonatomic, copy) NSString *productId;
@property (nonatomic, retain) SASRecordingInfo *recordingInfo;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;
@property (nonatomic) bool triggeredTwoShotBorealis;
@property (nonatomic, copy) NSString *vendorId;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)updateAudioInfo;
+ (id)updateAudioInfoWithDictionary:(id)arg1 context:(id)arg2;

- (id)audioSource;
- (int)codec;
- (id)deviceIdentifier;
- (id)deviceModel;
- (id)dspStatus;
- (id)encodedClassName;
- (id)firmwareVersion;
- (id)groupIdentifier;
- (id)headsetAddress;
- (id)headsetId;
- (id)headsetName;
- (id)noiseReductionLevel;
- (id)origin;
- (id)productId;
- (id)recordingInfo;
- (bool)requiresResponse;
- (void)setAudioSource:(id)arg1;
- (void)setCodec:(int)arg1;
- (void)setDeviceIdentifier:(id)arg1;
- (void)setDeviceModel:(id)arg1;
- (void)setDspStatus:(id)arg1;
- (void)setFirmwareVersion:(id)arg1;
- (void)setHeadsetAddress:(id)arg1;
- (void)setHeadsetId:(id)arg1;
- (void)setHeadsetName:(id)arg1;
- (void)setNoiseReductionLevel:(id)arg1;
- (void)setOrigin:(id)arg1;
- (void)setProductId:(id)arg1;
- (void)setRecordingInfo:(id)arg1;
- (void)setTriggeredTwoShotBorealis:(bool)arg1;
- (void)setVendorId:(id)arg1;
- (bool)triggeredTwoShotBorealis;
- (id)vendorId;

// Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore

- (bool)siriCore_isRestartable;

@end
