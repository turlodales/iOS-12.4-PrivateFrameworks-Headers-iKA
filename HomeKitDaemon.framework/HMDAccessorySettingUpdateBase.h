/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAccessorySettingUpdateBase : HMFObject <HMFLogging> {
    NSObject<OS_dispatch_queue> * _clientQueue;
    <HMDAccessorySettingUpdateDelegate> * _delegate;
    HMFMessage * _originalMessage;
    HMFMessageDispatcher * _remoteMessageDispatcher;
    NSString * _sessionID;
    HMDAccessorySetting * _setting;
    HMDAccessorySettingTarget * _target;
    id  _value;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <HMDAccessorySettingUpdateDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMFMessage *originalMessage;
@property (nonatomic, readonly) HMFMessageDispatcher *remoteMessageDispatcher;
@property (nonatomic, readonly) NSString *sessionID;
@property (nonatomic, readonly) HMDAccessorySetting *setting;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HMDAccessorySettingTarget *target;
@property (nonatomic, readonly) id value;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)_processMessage:(id)arg1 setting:(id)arg2;
- (void)callDelegate:(id)arg1;
- (id)clientQueue;
- (id)delegate;
- (id)description;
- (id)initWithSessionID:(id)arg1 setting:(id)arg2 clientQueue:(id)arg3 delegate:(id)arg4 message:(id)arg5 outError:(id*)arg6;
- (id)logIdentifier;
- (id)originalMessage;
- (id)remoteMessageDispatcher;
- (void)saveLocally:(unsigned long long)arg1;
- (id)sessionID;
- (id)setting;
- (id)target;
- (void)update;
- (id)updateValueWithPayload:(id)arg1 setting:(id)arg2;
- (id)value;

@end
