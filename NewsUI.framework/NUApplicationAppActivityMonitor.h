/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUApplicationAppActivityMonitor : NSObject <FCAppActivityMonitor, SXAppStateMonitor> {
    NSMutableSet * _backgroundObserverBlocks;
    NSMutableSet * _foregroundObserverBlocks;
    NSNotificationCenter * _notificationCenter;
    NSHashTable * _observers;
}

@property (nonatomic, readonly) NSMutableSet *backgroundObserverBlocks;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSMutableSet *foregroundObserverBlocks;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNotificationCenter *notificationCenter;
@property (nonatomic, readonly) NSHashTable *observers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)activityObservingApplicationDidFinishLaunchingNotification:(id)arg1;
- (void)activityObservingApplicationWillEnterForegroundNotification:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)applicationDidBecomeActiveNotification:(id)arg1;
- (void)applicationDidEnterBackgroundNotification:(id)arg1;
- (id)backgroundObserverBlocks;
- (void)dealloc;
- (id)foregroundObserverBlocks;
- (id)initWithNotificationCenter:(id)arg1;
- (id)notificationCenter;
- (id)observers;
- (void)performOnApplicationDidBecomeActive:(id /* block */)arg1;
- (void)performOnApplicationDidEnterBackground:(id /* block */)arg1;
- (void)performOnApplicationWillEnterForeground:(id /* block */)arg1;
- (void)removeObserver:(id)arg1;

@end