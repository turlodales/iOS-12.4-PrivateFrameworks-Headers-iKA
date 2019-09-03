/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXAppLaunchLocation : NSObject {
    NSDictionary * _appForAllIntentsLaunchCountMap;
    NSDictionary * _appIntentLaunchCountMap;
    NSDictionary * _appLaunchCountMap;
    _ATXDuetHelper * _duetHelper;
    NSDictionary * _intentLaunchCountMap;
    NSObject<OS_os_transaction> * _keepAliveUntilTrainingComplete;
    <_ATXLocationManagerWrapperProtocol> * _locationManager;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    id  _lockStateNotificationRegistrationToken;
    NSObject<OS_dispatch_queue> * _queue;
    NSDictionary * _totalIntentLaunchCountMap;
    NSDictionary * _totalLaunchCountMap;
    bool  _waitingLoad;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

+ (id)defaultPath;
+ (void)joinLaunchEvents:(id)arg1 withVisits:(id)arg2 block:(id /* block */)arg3;
+ (id)sortTimeIntervals:(id)arg1;
+ (id)visitsWithLOI:(id)arg1 startDate:(id)arg2;

- (void).cxx_destruct;
- (id)_getAppForAllIntentsLaunchCountMap;
- (id)_getAppIntentLaunchCountMap;
- (id)_getAppLaunchCountMap;
- (id)_getIntentLaunchCountMap;
- (id)_getTotalIntentLaunchCountMap;
- (id)_getTotalLaunchCountMap;
- (int)_launchCountAtCurrentLOIOfAppForAllIntents:(id)arg1;
- (int)_launchCountAtCurrentLOIOfAppIntent:(id)arg1;
- (int)_launchCountAtCurrentLOIOfBundle:(id)arg1;
- (int)_launchCountAtCurrentLOIOfIntent:(id)arg1;
- (void)_registerClassAUnlockHandler;
- (int)_totalIntentLaunchCountAtCurrentLOI;
- (int)_totalLaunchCountAtCurrentLOI;
- (void)dealloc;
- (void)finishTrainWithCallback:(id /* block */)arg1;
- (id)init;
- (id)initWithDuetHelper:(id)arg1 locationManager:(id)arg2;
- (int)launchCountAtCurrentLOIOfAppForAllIntents:(id)arg1;
- (int)launchCountAtCurrentLOIOfAppIntent:(id)arg1;
- (int)launchCountAtCurrentLOIOfBundle:(id)arg1;
- (int)launchCountAtCurrentLOIOfIntent:(id)arg1;
- (double)launchProbabilityAtCurrentLOIForAppForAllIntents:(id)arg1;
- (double)launchProbabilityAtCurrentLOIForAppIntent:(id)arg1;
- (double)launchProbabilityAtCurrentLOIForBundle:(id)arg1;
- (double)launchProbabilityAtCurrentLOIForIntent:(id)arg1;
- (unsigned long long)loadModel;
- (unsigned long long)loadModelAtPath:(id)arg1;
- (void)loadOrTrain;
- (id)locationManager;
- (id)queue;
- (void)resetAppIntentLocationData;
- (int)totalIntentLaunchCountAtCurrentLOI;
- (int)totalLaunchCountAtCurrentLOI;
- (void)train;
- (void)trainModelWithLOI:(id)arg1 startDate:(id)arg2 callback:(id /* block */)arg3;
- (void)trainWithCallback:(id /* block */)arg1;
- (void)writeModel;

@end
