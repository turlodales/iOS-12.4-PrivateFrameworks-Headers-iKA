/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RTTUI.framework/RTTUI
 */

@interface RTTUIUtilities : NSObject {
    NSObject<OS_dispatch_queue> * _callCenterQueue;
    bool  _headphoneJackSupportsTTY;
    bool  _inUnitTestMode;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callCenterQueue;
@property (nonatomic) bool headphoneJackSupportsTTY;
@property (nonatomic) bool inUnitTestMode;

+ (id)ASCIINumericStringFromString:(struct __CFString { }*)arg1;
+ (void)cancelCallPromptDisplay;
+ (bool)contactIsTTYContact:(id)arg1;
+ (void)contactIsTTYContact:(id)arg1 resultBlock:(id /* block */)arg2;
+ (void)displayCallPromptForContact:(id)arg1 withCompletion:(id /* block */)arg2;
+ (bool)hardwareTTYIsSupported;
+ (bool)isOnlyRTTSupported;
+ (bool)isRTTSupported;
+ (id)phoneNumberStringFromString:(id)arg1;
+ (bool)relayIsSupported;
+ (id)relayPhoneNumber;
+ (id)sharedUtilityProvider;
+ (bool)shouldUseRTT;
+ (bool)softwareTTYIsSupported;
+ (bool)ttyShouldBeRealtimeForCall:(id)arg1;

- (void).cxx_destruct;
- (id)bubbleColorForMe:(bool)arg1;
- (id)bubbleFillForMe:(bool)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })bubbleInsetForMe:(bool)arg1;
- (id)callCenterQueue;
- (bool)contactIsTTYContact:(id)arg1;
- (id)conversationForCallUID:(id)arg1;
- (unsigned long long)currentPreferredTransportMethod;
- (bool)deleteConversationWithCallUID:(id)arg1;
- (bool)headphoneJackSupportsTTY;
- (bool)inUnitTestMode;
- (id)init;
- (id)largeTTYIconWithTint:(id)arg1;
- (id)myPhoneNumber;
- (void)setCallCenterQueue:(id)arg1;
- (void)setHeadphoneJackSupportsTTY:(bool)arg1;
- (void)setInUnitTestMode:(bool)arg1;
- (long long)textAlignmentForMe:(bool)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })textInsetForMe:(bool)arg1;
- (id)tintedTTYIcon;
- (id)transcriptStringForConversation:(id)arg1;
- (id)ttyIconWithTint:(id)arg1;
- (id)ttyMeContact;

@end
