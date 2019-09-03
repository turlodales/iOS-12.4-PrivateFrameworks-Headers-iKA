/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKSyncEndpoint : NSObject {
    NSMutableDictionary * _datesForIDSIdentifiersScheduledToBeResent;
    NSObject<OS_dispatch_queue> * _endpointQueue;
    NSMutableDictionary * _lastResendIntervalByIDSIdentifier;
    NSObject<OS_dispatch_queue> * _resendingQueue;
}

@property (nonatomic, retain) NSMutableDictionary *datesForIDSIdentifiersScheduledToBeResent;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *endpointQueue;
@property (nonatomic, retain) NSMutableDictionary *lastResendIntervalByIDSIdentifier;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *resendingQueue;

- (void).cxx_destruct;
- (id)datesForIDSIdentifiersScheduledToBeResent;
- (void)dealloc;
- (void)dequeueIDSIdentifierForResend:(id)arg1;
- (id)endpointQueue;
- (void)enqueueIDSIdentifierForResend:(id)arg1 atDate:(id)arg2 silent:(bool)arg3;
- (void)enqueueIDSIdentifiersForResend:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (id)lastResendIntervalByIDSIdentifier;
- (unsigned long long)newResendIntervalForPreviousResendInterval:(unsigned long long)arg1 errorCode:(long long)arg2;
- (void)resendAllIDSIdentifiers;
- (void)resendObjectsForIDSIdentifier:(id)arg1;
- (void)resendReadyIDSIdentifiers;
- (id)resendingQueue;
- (void)setDatesForIDSIdentifiersScheduledToBeResent:(id)arg1;
- (void)setEndpointQueue:(id)arg1;
- (void)setLastResendIntervalByIDSIdentifier:(id)arg1;
- (void)setResendingQueue:(id)arg1;

@end
