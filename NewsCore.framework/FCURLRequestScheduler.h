/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCURLRequestScheduler : NSObject {
    NSMapTable * _inFlightURLTasks;
    NFUnfairLock * _lock;
    NSMutableOrderedSet * _requests;
}

@property (nonatomic, retain) NSMapTable *inFlightURLTasks;
@property (nonatomic, retain) NFUnfairLock *lock;
@property (nonatomic, retain) NSMutableOrderedSet *requests;

- (void).cxx_destruct;
- (void)_applyPriority:(long long)arg1 toRequest:(id)arg2;
- (void)_cancelRequest:(id)arg1;
- (bool)_isLowPriority:(long long)arg1;
- (void)_resumeURLTaskForRequest:(id)arg1;
- (void)_serviceRequests;
- (void)_suspendURLTaskForRequest:(id)arg1;
- (id)inFlightURLTasks;
- (id)init;
- (id)lock;
- (id)requests;
- (id)scheduleURLRequest:(id)arg1 URLSession:(id)arg2 destination:(long long)arg3 priority:(long long)arg4 loggingKey:(id)arg5 completion:(id /* block */)arg6;
- (void)setInFlightURLTasks:(id)arg1;
- (void)setLock:(id)arg1;
- (void)setRequests:(id)arg1;

@end
