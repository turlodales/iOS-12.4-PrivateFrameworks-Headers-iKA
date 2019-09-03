/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSVoiceTriggerSpeakerTrainer : NSObject

+ (id)sharedTrainer;

- (void)notifyImplicitTrainingUtteranceAvailable:(id)arg1 forVoiceProfileId:(id)arg2 withRecordDeviceInfo:(id)arg3 withRecordCtxt:(id)arg4 withVoiceTriggerCtxt:(id)arg5 withOtherCtxt:(id)arg6 withCompletion:(id /* block */)arg7;
- (bool)trainUtterance:(id)arg1 languageCode:(id)arg2;
- (bool)trainUtterance:(id)arg1 languageCode:(id)arg2 payload:(bool)arg3;

@end