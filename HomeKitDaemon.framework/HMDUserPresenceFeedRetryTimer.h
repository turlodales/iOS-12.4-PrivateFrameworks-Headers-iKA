/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDUserPresenceFeedRetryTimer : NSObject <HMFLogging> {
    unsigned long long  _retryCount;
    HMFTimer * _retryTimer;
    NSUUID * _timerID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long retryCount;
@property (nonatomic, readonly) double retryTimeInterval;
@property (nonatomic, retain) HMFTimer *retryTimer;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *timerID;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)cancel;
- (id)description;
- (id)init;
- (id)logIdentifier;
- (unsigned long long)retryCount;
- (double)retryTimeInterval;
- (id)retryTimer;
- (void)setRetryCount:(unsigned long long)arg1;
- (void)setRetryTimer:(id)arg1;
- (bool)shouldRetryImmediately:(double)arg1;
- (void)startWithDelegate:(id)arg1 responseTime:(double)arg2;
- (id)timerID;

@end
