/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDAWDPeriodicAction : NSObject <_HDAWDAction> {
    id /* block */  _block;
    long long  _graceInterval;
    long long  _intervalCounter;
    NSString * _intervalCounterKey;
    long long  _intervalMultiple;
    NSDate * _lastProcessedDate;
    NSString * _lastProcessedDateKey;
    NSDate * _lastSubmissionAttemptDate;
    NSString * _lastSubmissionAttemptKey;
    long long  _maximumAttemptCount;
    double  _minimumDelayBetweenAttempts;
    HDAssertion * _preparedDatabaseAccessibilityAssertion;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    long long  _repeatInterval;
    bool  _requiresClassB;
    const char * _taskName;
    long long  _waitingToRun;
    NSString * _waitingToRunKey;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long intervalCounter;
@property (nonatomic, readonly) NSDate *lastProcessedDate;
@property (nonatomic, readonly) NSDate *lastSubmissionAttemptDate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long waitingToRun;

- (void).cxx_destruct;
- (void)_beginWaitingToRun;
- (void)_loadState;
- (void)_performActivity:(id)arg1;
- (void)_queue_prepareAccessibilityAssertionIfNeeded;
- (void)_queue_registerActivity;
- (void)_queue_setIntervalCounter:(long long)arg1;
- (void)_queue_setLastProcessedDate:(id)arg1;
- (void)_queue_setLastSubmissionAttemptDate:(id)arg1;
- (void)_queue_setWaitingToRun:(long long)arg1;
- (bool)_queue_shouldAttemptToSubmit;
- (bool)_runBlockWithAccessibilityAssertion:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (bool)doForced;
- (void)doIfWaiting;
- (void)doIfWaitingOnMaintenanceQueueWithCompletion:(id /* block */)arg1;
- (id)initWithTaskName:(char *)arg1 keyPrefix:(id)arg2 xpcInterval:(long long)arg3 xpcGraceInterval:(long long)arg4 requiresClassB:(bool)arg5 intervalMultiple:(long long)arg6 maximumAttemptCount:(long long)arg7 minimumDelayBetweenAttempts:(double)arg8 profile:(id)arg9 block:(id /* block */)arg10;
- (long long)intervalCounter;
- (id)lastProcessedDate;
- (id)lastSubmissionAttemptDate;
- (void)reset;
- (void)setLastProcessedDate:(id)arg1;
- (void)start;
- (void)stop;
- (id)taskName;
- (long long)waitingToRun;

@end
