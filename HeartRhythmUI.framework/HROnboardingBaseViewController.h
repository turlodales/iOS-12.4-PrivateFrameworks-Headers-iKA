/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
 */

@interface HROnboardingBaseViewController : HKViewController {
    UIView * _contentView;
    <HROnboardingPageViewControllerDelegate> * _delegate;
    UIView * _footerView;
    long long  _leftButtonType;
    bool  _onboarding;
    long long  _rightButtonType;
    UIScrollView * _scrollView;
    NSLayoutConstraint * _scrollViewBottomConstraint;
}

@property (nonatomic, retain) UIView *contentView;
@property (nonatomic, retain) <HROnboardingPageViewControllerDelegate> *delegate;
@property (nonatomic, retain) UIView *footerView;
@property (nonatomic) long long leftButtonType;
@property (getter=isOnboarding, nonatomic, readonly) bool onboarding;
@property (nonatomic) long long rightButtonType;
@property (nonatomic, retain) UIScrollView *scrollView;
@property (nonatomic, retain) NSLayoutConstraint *scrollViewBottomConstraint;

// Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI

- (void).cxx_destruct;
- (void)_adjustScrollViewForFooterView;
- (id)_buttonForButtonType:(long long)arg1;
- (id)_closeButton;
- (id)_onboardingAtrialFibrillationDetectionCancelButton;
- (id)_onboardingElectrocardiogramCancelButton;
- (void)_setUpNavigationBar;
- (id)_skipButton;
- (id)_titleFontTextStyle;
- (double)_titleTopToFirstBaselineLeading;
- (void)closeButtonTapped:(id)arg1;
- (id)contentView;
- (id)delegate;
- (id)footerView;
- (id)initForOnboarding:(bool)arg1;
- (bool)isOnboarding;
- (long long)leftButtonType;
- (void)onboardingAtrialFibrillationDetectionCancelButtonTapped:(id)arg1;
- (void)onboardingElectrocardiogramCancelButtonTapped:(id)arg1;
- (void)presentAlertWithMessage:(id)arg1;
- (void)presentLearnMoreAlertWithMessage:(id)arg1 learnMoreTapped:(id /* block */)arg2;
- (void)removeFooterView;
- (long long)rightButtonType;
- (id)scrollView;
- (id)scrollViewBottomConstraint;
- (void)setContentView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFooterView:(id)arg1;
- (void)setFooterView:(id)arg1 insets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (void)setLeftButtonType:(long long)arg1;
- (void)setRightButtonType:(long long)arg1;
- (void)setScrollView:(id)arg1;
- (void)setScrollViewBottomConstraint:(id)arg1;
- (void)setUpUI;
- (void)skipButtonTapped:(id)arg1;
- (id)titleFont;
- (double)titleTopToFirstBaseline;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

// Image: /System/Library/AccessibilityBundles/HeartRhythmUI.axbundle/HeartRhythmUI

+ (Class)safeCategoryBaseClass;

- (void)setUpConstraints;

@end
