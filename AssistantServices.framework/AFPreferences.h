/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFPreferences : NSObject {
    int  _navToken;
    bool  _navTokenIsValid;
    NSObject<OS_dispatch_queue> * _navTokenQueue;
    bool  _registeredForInternalPrefs;
    bool  _registeredForLanguageCode;
    bool  _registeredForOutputVoice;
    bool  _registeredForSupportedLanguages;
    long long  _tlsSessionTicketFlushRequestPending;
}

+ (id)sharedPreferences;

- (void).cxx_destruct;
- (id)_bestSupportedLanguageCodeForLanguageCode:(id)arg1 isGoodFit:(bool*)arg2;
- (id)_bestSupportedLanguageCodeForLanguageCodes:(id)arg1 isGoodFit:(bool*)arg2;
- (void)_internalPreferencesDidChangeExternally;
- (bool)_languageCode:(id)arg1 isGoodFitForPreferredLanguages:(id)arg2;
- (void)_languageCodeDidChangeExternally;
- (id)_languagePreferencesForCurrentSystemConfiguration;
- (void)_ouputVoiceDidChangeExternally;
- (void)_preferencesDidChangeExternally;
- (void)_registerForInteralPrefs;
- (void)_registerForLanguageCodeChangeNotifications;
- (void)_registerForNavStatusIfNeeded;
- (void)_registerForOutputVoice;
- (void)_registerForSupportedLanguageChangeNotifications;
- (void)_setAssistantIsEnabledLocal:(bool)arg1;
- (void)_setDictationIsEnabledLocal:(bool)arg1;
- (void)_setLoggingDefaultValue:(id)arg1 forKey:(id)arg2;
- (void)_setSupplementalLanguageDictionary:(id)arg1 forProduct:(id)arg2;
- (void)_setSupplementalLanguages:(id)arg1 forProduct:(id)arg2 forBuildVersion:(id)arg3;
- (void)_setSuppressDictationOptInLocal:(bool)arg1;
- (id)_supplementalLanguagesDictionary;
- (void)_supportedLanguagesDidChangeExternally;
- (id)activitySummaryReportDate;
- (id)allSiriLanguageCodesForSystemLanguageCode:(id)arg1 isGoodFit:(bool*)arg2;
- (bool)applySASToFirstPartyDomains;
- (bool)assistantIsEnabled;
- (bool)assistantLanguageForceRTL;
- (double)autoDismissalExtendedIdleTimeout;
- (double)autoDismissalIdleTimeout;
- (double)autoDismissalMaxAttentionSamplingTime;
- (id)bestSupportedLanguageCodeForLanguageCode:(id)arg1;
- (bool)cardLoggingEnabled;
- (bool)cloudSyncEnabled;
- (id)cloudSyncEnabledModificationDate;
- (id)configOverrides;
- (unsigned long long)currentNavigationState;
- (void)dealloc;
- (bool)debugButtonIsEnabled;
- (bool)dictationIsEnabled;
- (bool)disableAssistantWhilePasscodeLocked;
- (bool)fileLoggingIsEnabled;
- (void)getOfflineDictationStatusWithCompletion:(id /* block */)arg1;
- (long long)handsFreeMode;
- (id)horsemanSupplementalLanguageDictionary;
- (bool)ignoreServerManualEndpointingThreshold;
- (id)inProgressOutputVoice;
- (id)init;
- (unsigned long long)internalUserClassification;
- (bool)isCurrentLocaleNativelySupported;
- (bool)isLocaleIdentifierNativelySupported:(id)arg1;
- (id)languageCode;
- (bool)legacyLoggingEnabled;
- (bool)limitedAudioLoggingEnabled;
- (id)manualEndpointingThreshold;
- (int)myriadConstantGoodness;
- (bool)myriadCoordinationEnabled;
- (float)myriadDeviceAdjust;
- (unsigned char)myriadDeviceClass;
- (double)myriadDeviceDelay;
- (id)myriadDeviceGroup;
- (double)myriadDeviceSlowdown;
- (double)myriadDeviceTrumpDelay;
- (bool)myriadDuckingEnabled;
- (id)myriadLastWin;
- (bool)myriadServerHasProvisioned;
- (bool)myriadServerProvisioning;
- (bool)offlineDictationOverride;
- (id)offlineDictationProfileOverridePath;
- (id)outputVoice;
- (void)removeConfigOverrideForKey:(id)arg1;
- (void)resetSessionLanguage;
- (bool)respectsSystemMute;
- (void)setActivitySummaryReportDateToNow;
- (void)setApplySASToFirstPartyDomains:(bool)arg1;
- (void)setAssistantIsEnabled:(bool)arg1;
- (void)setAssistantLanguageForceRTL:(bool)arg1;
- (void)setAutoDismissalExtendedIdleTimeout:(double)arg1;
- (void)setAutoDismissalIdleTimeout:(double)arg1;
- (void)setAutoDismissalMaxAttentionSamplingTime:(double)arg1;
- (void)setCardLoggingEnabled:(bool)arg1;
- (void)setCloudSyncEnabled:(bool)arg1;
- (void)setConfigOverrideWithValue:(id)arg1 forKey:(id)arg2;
- (void)setConfigOverrides:(id)arg1;
- (void)setCurrentNavigationState:(unsigned long long)arg1;
- (void)setDebugButtonIsEnabled:(bool)arg1;
- (void)setDictationIsEnabled:(bool)arg1;
- (void)setDisableAssistantWhilePasscodeLocked:(bool)arg1;
- (void)setFileLoggingIsEnabled:(bool)arg1;
- (void)setHandsFreeMode:(long long)arg1;
- (void)setIgnoreServerManualEndpointingThreshold:(bool)arg1;
- (void)setInProgressOutputVoice:(id)arg1;
- (void)setInternalUserClassification:(unsigned long long)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setLimitedAudioLoggingEnabled:(bool)arg1;
- (void)setManualEndpointingThreshold:(id)arg1;
- (void)setMyriadConstantGoodness:(int)arg1;
- (void)setMyriadCoordinationEnabled:(bool)arg1;
- (void)setMyriadDeviceAdjust:(float)arg1;
- (void)setMyriadDeviceClass:(unsigned char)arg1;
- (void)setMyriadDeviceDelay:(double)arg1;
- (void)setMyriadDeviceGroup:(id)arg1;
- (void)setMyriadDeviceSlowdown:(double)arg1;
- (void)setMyriadDeviceTrumpDelay:(double)arg1;
- (void)setMyriadDuckingEnabled:(bool)arg1;
- (void)setMyriadLastWin;
- (void)setMyriadServerHasProvisioned:(bool)arg1;
- (void)setMyriadServerProvisioning:(bool)arg1;
- (void)setOfflineDictationOverride:(bool)arg1;
- (void)setOfflineDictationProfileOverridePath:(id)arg1;
- (void)setOutputVoice:(id)arg1;
- (void)setRespectsSystemMute:(bool)arg1;
- (void)setShouldLoadNativeMessagesExtensionAsBundle:(bool)arg1;
- (void)setShowServerOnUI:(bool)arg1;
- (void)setShowsHoldToTalkIndicator:(bool)arg1;
- (void)setSiriDebugUIEnabled:(bool)arg1;
- (void)setSiriSpeakerGradingDebugUIEnabled:(bool)arg1;
- (void)setStreamingDictationEnabled:(bool)arg1;
- (void)setSuppressAssistantOptIn:(bool)arg1;
- (void)setSuppressDictationOptIn:(bool)arg1;
- (void)setTLSSessionTicketsFlushPending:(bool)arg1;
- (void)setUseDeviceSpeakerForTTS:(long long)arg1;
- (void)setUseSASAutoSelectionFeature:(bool)arg1;
- (void)setValue:(id)arg1 forSessionContextKey:(id)arg2;
- (bool)shouldLoadNativeMessagesExtensionAsBundle;
- (bool)shouldLogForQA;
- (bool)showServerOnUI;
- (bool)showsHoldToTalkIndicator;
- (bool)siriDebugUIEnabled;
- (bool)siriSpeakerGradingDebugUIEnabled;
- (bool)streamingDictationEnabled;
- (id)supplementalLanguageDictionaryForProduct:(id)arg1;
- (id)supplementalLanguages;
- (id)supplementalLanguagesForProduct:(id)arg1 forBuildVersion:(id)arg2;
- (id)supplementalLanguagesModificationDate;
- (bool)suppressAssistantOptIn;
- (bool)suppressDictationOptIn;
- (void)synchronize;
- (void)synchronizeVoiceServicesLanguageCode;
- (bool)tlsSessionTicketsFlushPending;
- (long long)useDeviceSpeakerForTTS;
- (bool)useSASAutoSelectionFeature;
- (id)valueForSessionContextPreferenceKey:(id)arg1;

@end