/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
 */

@interface BKUIPearlEnrollController : PSViewController <BKUIPearlCoachingControllerDelegate, BKUIPearlEnrollViewControllerDelegate> {
    BKUIPearlCoachingController * _coachingController;
    <BKUIPearlEnrollControllerDelegate> * _delegate;
    BKUIPearlEnrollViewController * _enrollViewController;
    bool  _hasBeenPortrait;
    UINavigationBar * _navbarCopy;
    long long  _orientation;
    <NSObject> * _rotationChangeToken;
    <NSObject> * _rotationLockToken;
    bool  _systemRotationAnimating;
}

@property (nonatomic, retain) BKUIPearlCoachingController *coachingController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BKUIPearlEnrollControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) BKUIPearlEnrollViewController *enrollViewController;
@property (nonatomic) bool hasBeenPortrait;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool inBuddy;
@property (nonatomic) bool inDemo;
@property (nonatomic, readonly) UINavigationBar *navbarCopy;
@property (nonatomic, retain) <NSObject> *rotationChangeToken;
@property (nonatomic, retain) <NSObject> *rotationLockToken;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI

+ (bool)isDisplayZoomEnabled;
+ (bool)isPearlAvailable;
+ (bool)isPearlInterlocked;
+ (void)preloadWithCompletion:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)_copyAndShowInternalNavBar;
- (void)_startObserving;
- (bool)canBeShownFromSuspendedState;
- (id)coachingController;
- (void)coachingSkipped;
- (id)delegate;
- (void)deviceOrientationChanged:(long long)arg1;
- (void)deviceOrientationChanged:(long long)arg1 duration:(double)arg2;
- (void)deviceOrientationDidChange:(id)arg1;
- (void)diffSystemAndForcedRotationOrientations;
- (id)enrollViewController;
- (bool)hasBeenPortrait;
- (bool)inBuddy;
- (bool)inDemo;
- (id)init;
- (id)initWithPreloadedState:(id)arg1;
- (bool)isCompact;
- (id)navbarCopy;
- (id)navigationItem;
- (void)pearlEnrollControllerCompleted:(id)arg1;
- (void)pearlEnrollViewController:(id)arg1 finishedEnrollWithError:(id)arg2;
- (long long)preferredStatusBarStyle;
- (bool)prefersHomeIndicatorAutoHidden;
- (void)primeWithPasscode:(id)arg1;
- (void)resetLayout;
- (id)rotationChangeToken;
- (id)rotationLockToken;
- (void)setCoachingController:(id)arg1;
- (void)setCustomDetailString:(id)arg1 forState:(int)arg2;
- (void)setCustomInstructionString:(id)arg1 forState:(int)arg2;
- (void)setDelegate:(id)arg1;
- (void)setEnrollViewController:(id)arg1;
- (void)setHasBeenPortrait:(bool)arg1;
- (void)setInBuddy:(bool)arg1;
- (void)setInDemo:(bool)arg1;
- (void)setRotationChangeToken:(id)arg1;
- (void)setRotationLockToken:(id)arg1;
- (void)setSplashImageView:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

// Image: /System/Library/AccessibilityBundles/BiometricKitUI.axbundle/BiometricKitUI

+ (Class)safeCategoryBaseClass;

- (void)setCoachingHidden:(bool)arg1 animated:(bool)arg2;

@end
