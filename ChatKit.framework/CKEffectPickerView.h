/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKEffectPickerView : UIView <UICollectionViewDataSource, UICollectionViewDelegate> {
    UIView * _accessibilityBackdropView;
    UIView * _accessibilityCloseBackgroundView;
    UIView * _accessibilitySendBackgroundView;
    NSMutableDictionary * _animatedCells;
    NSMutableDictionary * _animationTimers;
    CABackdropLayer * _backdrop;
    UIView * _backgroundView;
    CKBalloonView * _balloonView;
    struct CGPoint { 
        double x; 
        double y; 
    }  _balloonViewOrigin;
    CALayer * _blueContrastLayer;
    UIButton * _closeButton;
    NSLayoutConstraint * _closeButtonBottomConstraint;
    BOOL  _controlColor;
    <CKEffectPickerViewDelegate> * _delegate;
    CKChatControllerDummyAnimator * _dummyAnimator;
    NSMutableArray * _effectDescriptiveLabels;
    NSMutableArray * _effectDotButtons;
    NSMutableDictionary * _effectDotConstraintsThatChange;
    NSMutableArray * _effectIdentifiers;
    UIFont * _effectLabelFont;
    NSMutableArray * _effectLabels;
    NSMutableArray * _effectSendButtons;
    CKFullScreenEffectManager * _fsem;
    UIView * _hintBlackText;
    UIView * _hintContainer;
    UIView * _hintSendButton;
    bool  _isAnimating;
    NSLayoutConstraint * _lastEffectDotTopConstraint;
    UILabel * _mainLabel;
    NSLayoutConstraint * _mainLabelBottomConstraint;
    NSArray * _momentIdentifiers;
    UILabel * _momentTitleLabel;
    UICollectionView * _momentsCollectionView;
    bool  _needsSwitcherAnimation;
    UIPageControl * _pageControl;
    UIPanGestureRecognizer * _panGestureRecognizer;
    NSMutableDictionary * _pausedAnimatedCells;
    UIView * _peekContainer;
    UIView * _roundedContainerView;
    NSLayoutConstraint * _roundedContainerViewTopConstraint;
    CABackdropLayer * _segmentedBackdrop;
    unsigned long long  _selectedIndex;
    UIButton * _sendMomentButton;
    UISegmentedControl * _typeSegmentedControl;
    NSLayoutConstraint * _typeSegmentedControlBottomConstraint;
    bool  _usesDarkVibrancyForLayers;
}

@property (nonatomic, retain) UIView *accessibilityBackdropView;
@property (nonatomic, retain) UIView *accessibilityCloseBackgroundView;
@property (nonatomic, retain) UIView *accessibilitySendBackgroundView;
@property (nonatomic, retain) NSMutableDictionary *animatedCells;
@property (nonatomic, retain) NSMutableDictionary *animationTimers;
@property (nonatomic, retain) CABackdropLayer *backdrop;
@property (nonatomic, retain) UIView *backgroundView;
@property (nonatomic, retain) CKBalloonView *balloonView;
@property (nonatomic) struct CGPoint { double x1; double x2; } balloonViewOrigin;
@property (nonatomic, retain) CALayer *blueContrastLayer;
@property (nonatomic, retain) UIButton *closeButton;
@property (nonatomic, retain) NSLayoutConstraint *closeButtonBottomConstraint;
@property (nonatomic) BOOL controlColor;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKEffectPickerViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CKChatControllerDummyAnimator *dummyAnimator;
@property (nonatomic, retain) NSMutableArray *effectDescriptiveLabels;
@property (nonatomic, retain) NSMutableArray *effectDotButtons;
@property (nonatomic, retain) NSMutableDictionary *effectDotConstraintsThatChange;
@property (nonatomic, retain) NSMutableArray *effectIdentifiers;
@property (nonatomic, retain) UIFont *effectLabelFont;
@property (nonatomic, retain) NSMutableArray *effectLabels;
@property (nonatomic, retain) NSMutableArray *effectSendButtons;
@property (nonatomic, retain) CKFullScreenEffectManager *fsem;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIView *hintBlackText;
@property (nonatomic, retain) UIView *hintContainer;
@property (nonatomic) UIView *hintSendButton;
@property (nonatomic) bool isAnimating;
@property (nonatomic, retain) NSLayoutConstraint *lastEffectDotTopConstraint;
@property (nonatomic, retain) UILabel *mainLabel;
@property (nonatomic, retain) NSLayoutConstraint *mainLabelBottomConstraint;
@property (nonatomic, copy) NSArray *momentIdentifiers;
@property (nonatomic, retain) UILabel *momentTitleLabel;
@property (nonatomic, retain) UICollectionView *momentsCollectionView;
@property (nonatomic) bool needsSwitcherAnimation;
@property (nonatomic, retain) UIPageControl *pageControl;
@property (nonatomic, retain) UIPanGestureRecognizer *panGestureRecognizer;
@property (nonatomic, retain) NSMutableDictionary *pausedAnimatedCells;
@property (nonatomic, retain) UIView *peekContainer;
@property (nonatomic, retain) UIView *roundedContainerView;
@property (nonatomic, retain) NSLayoutConstraint *roundedContainerViewTopConstraint;
@property (nonatomic, retain) CABackdropLayer *segmentedBackdrop;
@property (nonatomic) unsigned long long selectedIndex;
@property (nonatomic, retain) UIButton *sendMomentButton;
@property (readonly) Class superclass;
@property (nonatomic, retain) UISegmentedControl *typeSegmentedControl;
@property (nonatomic, retain) NSLayoutConstraint *typeSegmentedControlBottomConstraint;
@property (nonatomic) bool usesDarkVibrancyForLayers;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

+ (bool)shouldUseLargeScreenDimension;

- (void).cxx_destruct;
- (void)_accessibilityContrastStatusDidChange;
- (void)_adjustMainLabelAndTypeSegmentedControlIfNecessary;
- (void)_animateIn;
- (void)_animateInSendButton:(id)arg1;
- (void)_animateOut;
- (void)_animateOutSendButton:(id)arg1;
- (void)_animateSelectedEffectLabelAtIndex:(unsigned long long)arg1 fromPreviousIndex:(unsigned long long)arg2;
- (void)_applicationDidEnterBackground;
- (void)_applicationWillEnterForeground;
- (id)_blackTextReplica;
- (id)_defaultSendAnimationContextForAnimationPreview;
- (id)_glyphLayerForButtonAnimationWithGlyphName:(id)arg1;
- (bool)_keyboardIsOnTopOfEffectPickerWindow;
- (void)_panGesture:(id)arg1;
- (void)_resizeBalloon;
- (void)_setBalloonText:(id)arg1 withColor:(id)arg2;
- (void)_setNeedsSwitcherAnimationIfNecessary;
- (void)_startSwitcherAnimationIfNecessary;
- (void)_stopBalloonAnimation;
- (void)_touchUpInsideCloseButton:(id)arg1;
- (void)_touchUpInsideSendButton:(id)arg1;
- (void)_touchUpInsideSendMomentButton:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_updateBalloonViewOrigin:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forButtonFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_updateBalloonViewPositionAnimated:(bool)arg1;
- (void)_updateMomentsBackgroundColor;
- (void)_updateRoundedContainerView;
- (id)accessibilityBackdropView;
- (id)accessibilityCloseBackgroundView;
- (id)accessibilitySendBackgroundView;
- (void)activateTextSizeDependentConstraintsForSendButtonFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)addAnimationTimerForCell:(id)arg1;
- (id)animatedCells;
- (id)animationTimers;
- (id)backdrop;
- (id)backgroundView;
- (id)balloonView;
- (struct CGPoint { double x1; double x2; })balloonViewOrigin;
- (id)blueContrastLayer;
- (void)checkAndUpdateForSpotlightEffect:(id)arg1;
- (id)closeButton;
- (id)closeButtonBottomConstraint;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)contentSizeCategoryDidChange;
- (BOOL)controlColor;
- (void)dealloc;
- (id)delegate;
- (id)dummyAnimator;
- (id)effectDescriptiveLabels;
- (id)effectDotButtons;
- (id)effectDotConstraintsThatChange;
- (id)effectIdentifiers;
- (id)effectLabelFont;
- (id)effectLabels;
- (id)effectSendButtons;
- (id)fsem;
- (void)handleTouchMoved:(struct CGPoint { double x1; double x2; })arg1;
- (void)handleTouchUp:(struct CGPoint { double x1; double x2; })arg1;
- (id)hintBlackText;
- (id)hintContainer;
- (id)hintSendButton;
- (void)invalidateAllAnimationTimers;
- (bool)isAnimating;
- (id)lastEffectDotTopConstraint;
- (void)layoutSubviews;
- (id)mainLabel;
- (id)mainLabelBottomConstraint;
- (double)marginBetweenPickerDotButtons;
- (id)momentIdentifiers;
- (id)momentTitleLabel;
- (id)momentsCollectionView;
- (bool)needsSwitcherAnimation;
- (double)offsetYForLabelAtIndex:(long long)arg1 withInitialY:(double)arg2;
- (id)pageControl;
- (void)pageControlChanged:(id)arg1;
- (id)panGestureRecognizer;
- (id)pausedAnimatedCells;
- (id)peekContainer;
- (void)removeAnimationTimerForCell:(id)arg1;
- (void)resetDotConstraintsToDefault;
- (id)roundedContainerView;
- (id)roundedContainerViewTopConstraint;
- (void)safeAreaInsetsDidChange;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)segmentedBackdrop;
- (unsigned long long)selectedIndex;
- (long long)selectedMomentIndex;
- (id)sendMomentButton;
- (void)setAccessibilityBackdropView:(id)arg1;
- (void)setAccessibilityCloseBackgroundView:(id)arg1;
- (void)setAccessibilitySendBackgroundView:(id)arg1;
- (void)setAnimatedCells:(id)arg1;
- (void)setAnimationTimers:(id)arg1;
- (void)setBackdrop:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setBalloonText:(id)arg1;
- (void)setBalloonView:(id)arg1;
- (void)setBalloonViewOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)setBlueContrastLayer:(id)arg1;
- (void)setCloseButton:(id)arg1;
- (void)setCloseButtonBottomConstraint:(id)arg1;
- (void)setCloseButtonYPosition:(double)arg1;
- (void)setControlColor:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDummyAnimator:(id)arg1;
- (void)setEffectDescriptiveLabels:(id)arg1;
- (void)setEffectDotButtons:(id)arg1;
- (void)setEffectDotConstraintsThatChange:(id)arg1;
- (void)setEffectIdentifiers:(id)arg1;
- (void)setEffectLabelFont:(id)arg1;
- (void)setEffectLabels:(id)arg1;
- (void)setEffectSendButtons:(id)arg1;
- (void)setFsem:(id)arg1;
- (void)setHintBlackText:(id)arg1;
- (void)setHintContainer:(id)arg1;
- (void)setHintSendButton:(id)arg1;
- (void)setIsAnimating:(bool)arg1;
- (void)setLastEffectDotTopConstraint:(id)arg1;
- (void)setMainLabel:(id)arg1;
- (void)setMainLabelBottomConstraint:(id)arg1;
- (void)setMomentIdentifiers:(id)arg1;
- (void)setMomentTitleLabel:(id)arg1;
- (void)setMomentsCollectionView:(id)arg1;
- (void)setNeedsSwitcherAnimation:(bool)arg1;
- (void)setPageControl:(id)arg1;
- (void)setPanGestureRecognizer:(id)arg1;
- (void)setPausedAnimatedCells:(id)arg1;
- (void)setPeekContainer:(id)arg1;
- (void)setRoundedContainerView:(id)arg1;
- (void)setRoundedContainerViewTopConstraint:(id)arg1;
- (void)setSegmentedBackdrop:(id)arg1;
- (void)setSelectedIndex:(unsigned long long)arg1;
- (void)setSendMomentButton:(id)arg1;
- (void)setTypeSegmentedControl:(id)arg1;
- (void)setTypeSegmentedControlBottomConstraint:(id)arg1;
- (void)setUsesDarkVibrancyForLayers:(bool)arg1;
- (bool)shouldAnimatePreviousLabelForCancel:(id)arg1;
- (void)startAnimationPreviewForIdentifier:(id)arg1;
- (id)typeSegmentedControl;
- (id)typeSegmentedControlBottomConstraint;
- (void)updateColor:(BOOL)arg1;
- (void)updateHintTransition:(double)arg1;
- (void)updateMomentTitle:(bool)arg1;
- (void)updateViewColors;
- (void)updateViewColors:(bool)arg1;
- (bool)usesDarkVibrancyForLayers;

// Image: /System/Library/AccessibilityBundles/ChatKitFramework.axbundle/ChatKitFramework

+ (Class)safeCategoryBaseClass;

- (void)_accessibilityLoadAccessibilityInformation;
- (id)_axFullScreenEffectElement;
- (void)_axUpdateCloseButton;
- (void)_axUpdateScrollView;
- (void)_setAXFullScreenEffectElement:(id)arg1;
- (void)_touchUpInsideDotButton:(id)arg1;
- (id)accessibilityElements;
- (bool)accessibilityScroll:(long long)arg1;
- (bool)accessibilityViewIsModal;
- (void)addEffect:(id)arg1 withDescriptiveText:(id)arg2 withIdentifier:(id)arg3;
- (void)cancelImpactSelection;
- (void)effectTypeDidChange:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 sendButtonFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 balloonViewOrigin:(struct CGPoint { double x1; double x2; })arg3 composition:(id)arg4 color:(BOOL)arg5;

@end
