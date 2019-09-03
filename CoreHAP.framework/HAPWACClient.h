/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPWACClient : HMFObject {
    NSString * _bssid;
    NSNumber * _channel;
    NSObject<OS_dispatch_queue> * _clientQueue;
    id /* block */  _completion;
    bool  _didRestoreNetwork;
    EasyConfigDevice * _ezConfigDevice;
    NSString * _identifier;
    HAPAccessoryServerIP * _ipServer;
    NSString * _name;
    unsigned int  _pairSetupFlags;
    int (* _promptForSetupCode_f;
    <HAPWACScanControlDelegate> * _scanDelegate;
    bool  _skipPairSetup;
    NSString * _ssid;
    bool  _supports2pt4GHz;
    bool  _supports5GHz;
    bool  _supportsPairSetupWAC;
    bool  _supportsTokenAuth;
    id /* block */  _wacCompatibilityCheckCompletionHandler;
    struct __CFDictionary { } * _wifiInfo;
}

@property (nonatomic, readonly, copy) NSString *bssid;
@property (nonatomic, readonly, copy) NSNumber *channel;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic) bool didRestoreNetwork;
@property (nonatomic, retain) EasyConfigDevice *ezConfigDevice;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) HAPAccessoryServerIP *ipServer;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic) unsigned int pairSetupFlags;
@property (nonatomic) int (*promptForSetupCode_f;
@property (nonatomic, readonly) <HAPWACScanControlDelegate> *scanDelegate;
@property (nonatomic) bool skipPairSetup;
@property (nonatomic, readonly, copy) NSString *ssid;
@property (nonatomic, readonly) bool supports2pt4GHz;
@property (nonatomic, readonly) bool supports5GHz;
@property (nonatomic, readonly) bool supportsPairSetupWAC;
@property (nonatomic, readonly) bool supportsTokenAuth;
@property (nonatomic, copy) id /* block */ wacCompatibilityCheckCompletionHandler;
@property (nonatomic) struct __CFDictionary { }*wifiInfo;

- (void).cxx_destruct;
- (bool)_checkCompatibleNetwork:(id)arg1;
- (void)_configProgress:(id)arg1;
- (int)_configPrompt:(unsigned int)arg1 inDelaySeconds:(int)arg2;
- (void)_configStopped:(id)arg1;
- (void)_joinComplete;
- (void)_waitForLinkUp:(int)arg1 inContext:(void*)arg2;
- (id)bssid;
- (id)channel;
- (void)checkCompatibleNetwork:(id)arg1 completion:(id /* block */)arg2;
- (id)clientQueue;
- (id /* block */)completion;
- (void)dealloc;
- (bool)didRestoreNetwork;
- (id)ezConfigDevice;
- (id)identifier;
- (id)initWithWACDevice:(id)arg1 server:(id)arg2 andScanDelegate:(id)arg3;
- (id)ipServer;
- (void)joinDeviceSoftAP:(id /* block */)arg1;
- (id)name;
- (void)pairInvalidate;
- (void)pairSetupContinueWithSetupCode:(id)arg1;
- (unsigned int)pairSetupFlags;
- (void)pairSetupStart:(int (*)arg1 completionHandler:(id /* block */)arg2;
- (void)pairSetupStop;
- (int (*)promptForSetupCode_f;
- (void)restoreInfrastructureNetwork:(id /* block */)arg1;
- (id)scanDelegate;
- (void)setCompletion:(id /* block */)arg1;
- (void)setDidRestoreNetwork:(bool)arg1;
- (void)setEzConfigDevice:(id)arg1;
- (void)setPairSetupFlags:(unsigned int)arg1;
- (void)setPromptForSetupCode_f:(int (*)arg1;
- (void)setSkipPairSetup:(bool)arg1;
- (void)setWacCompatibilityCheckCompletionHandler:(id /* block */)arg1;
- (void)setWifiInfo:(struct __CFDictionary { }*)arg1;
- (bool)skipPairSetup;
- (id)ssid;
- (bool)supports2pt4GHz;
- (bool)supports5GHz;
- (bool)supportsPairSetupWAC;
- (bool)supportsTokenAuth;
- (id /* block */)wacCompatibilityCheckCompletionHandler;
- (struct __CFDictionary { }*)wifiInfo;

@end
