/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AdID.framework/AdID
 */

@interface ADAdTrackingSchedulingManager : NSObject <APSConnectionDelegate> {
    <NSObject> * _accountChangedNotifyToken;
    bool  _isConfigRequestInFlight;
    APSConnection * _pushConnection;
    <NSObject> * _storeFrontNotifyToken;
}

@property (nonatomic, retain) <NSObject> *accountChangedNotifyToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isConfigRequestInFlight;
@property (nonatomic, retain) APSConnection *pushConnection;
@property (nonatomic, retain) <NSObject> *storeFrontNotifyToken;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)accountChangedNotifyToken;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (id)currentBundleID;
- (void)dealloc;
- (void)forceExpiration;
- (void)handleAccountChange;
- (void)handleConfiguration;
- (id)init;
- (bool)isAdEnabledLocality;
- (bool)isConfigRequestInFlight;
- (id)pushConnection;
- (void)pushDisable;
- (void)pushEnable;
- (void)refreshConfiguration:(id /* block */)arg1;
- (void)registerForLockStateNotification;
- (void)runOnFirstUnlock:(id /* block */)arg1;
- (void)setAccountChangedNotifyToken:(id)arg1;
- (void)setIsConfigRequestInFlight:(bool)arg1;
- (void)setPushConnection:(id)arg1;
- (void)setStoreFrontNotifyToken:(id)arg1;
- (id)storeFrontNotifyToken;

@end
