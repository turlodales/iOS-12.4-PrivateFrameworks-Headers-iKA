/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKImageAnimationTimer : NSObject {
    CADisplayLink * _displayLink;
    unsigned long long  _frame;
    NSMutableSet * _observers;
    bool  _shouldStopWhenBackgrounded;
}

@property (nonatomic, retain) CADisplayLink *displayLink;
@property (nonatomic, retain) NSMutableSet *observers;
@property (nonatomic) bool shouldStopWhenBackgrounded;

+ (id)sharedTimer;

- (void).cxx_destruct;
- (void)addAnimationTimerObserver:(id)arg1;
- (void)animationTimerFired;
- (void)dealloc;
- (id)displayLink;
- (unsigned long long)frame;
- (id)init;
- (id)observers;
- (void)removeAnimationTimerObserver:(id)arg1;
- (void)setDisplayLink:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setShouldStopWhenBackgrounded:(bool)arg1;
- (bool)shouldStopWhenBackgrounded;
- (void)updateDisplayLink;

@end
