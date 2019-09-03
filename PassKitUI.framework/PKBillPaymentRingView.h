/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKBillPaymentRingView : UIView <PKRenderLoopDelegate, UIGestureRecognizerDelegate> {
    double  _amountRoundingUnit;
    struct { 
        double target; 
        double position; 
        double velocity; 
        double positionThreshold; 
        double velocityThreshold; 
        bool running; 
    }  _angleState;
    PKCurvedTextLabel * _bottomCurvedTextLabel;
    NSDictionary * _colorStops;
    <PKBillPaymentRingViewDataSource> * _dataSource;
    <PKBillPaymentRingViewDelegate> * _delegate;
    NSDecimalNumber * _displayAmount;
    bool  _dotsVisible;
    long long  _dragCapture;
    UIPanGestureRecognizer * _dragRecognizer;
    bool  _dragging;
    PKEnterCurrencyAmountView * _enterCurrencyAmountView;
    UISelectionFeedbackGenerator * _feedbackGenerator;
    PKBillPaymentCircularView * _handleView;
    PKBillPaymentSuggestedAmount * _highlightedSuggestedAmount;
    bool  _ignoreTouches;
    NSDecimalNumber * _initialDisplayAmount;
    UILabel * _interestLabel;
    double  _interestLabelAlpha;
    bool  _isSmall;
    double  _lastDrawTime;
    double  _maximumPaymentAmount;
    double  _minimumPaymentAmount;
    bool  _needsInitialDisplay;
    double  _overrideGradientStartAngle;
    PKBillPaymentRingGradientState * _overrideGradientState;
    NSDecimalNumber * _pinnedAmount;
    double  _pinnedAmountAngle;
    unsigned long long  _pinnedAmountAngleIndex;
    UILongPressGestureRecognizer * _pressRecognizer;
    bool  _pressed;
    PKRenderLoop * _renderLoop;
    struct { 
        double mass; 
        double stiffness; 
        double damping; 
        double beta; 
        double omega0; 
        double scratch; 
        bool dirty; 
    }  _responseSpring;
    double  _responseSpringElapsedDuration;
    struct { 
        double target; 
        double position; 
        double velocity; 
        double positionThreshold; 
        double velocityThreshold; 
        bool running; 
    }  _responseState;
    PKRingGradientView * _ringView;
    struct { 
        double mass; 
        double stiffness; 
        double damping; 
        double beta; 
        double omega0; 
        double scratch; 
        bool dirty; 
    }  _scaleSpring;
    struct { 
        double target; 
        double position; 
        double velocity; 
        double positionThreshold; 
        double velocityThreshold; 
        bool running; 
    }  _scaleState;
    unsigned long long  _screenType;
    PKBillPaymentSuggestedAmount * _selectedSuggestedAmount;
    bool  _selectedSuggestedAmountIsTarget;
    struct { 
        double mass; 
        double stiffness; 
        double damping; 
        double beta; 
        double omega0; 
        double scratch; 
        bool dirty; 
    }  _spring;
    NSDictionary * _standardRingStates;
    NSArray * _suggestedAmountAngles;
    PKBillPaymentSuggestedAmountList * _suggestedAmountList;
    NSArray * _suggestedAmountViews;
    NSDictionary * _suggestedAmountsForAngle;
    NSDictionary * _suggestedAmoutImages;
    UITapGestureRecognizer * _tapRecognizer;
    PKCurvedTextLabel * _topCurvedTextLabel;
}

@property (nonatomic, readonly, copy) NSDecimalNumber *amount;
@property (nonatomic, readonly, copy) UIColor *currentEndColor;
@property (nonatomic, readonly, copy) UIColor *currentStartColor;
@property (nonatomic) <PKBillPaymentRingViewDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKBillPaymentRingViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isSmall;
@property (nonatomic, readonly) double ringWidth;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double targetAngle;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

- (void).cxx_destruct;
- (double)_amountLabelMaximumFontSize;
- (double)_angleForAmount:(id)arg1;
- (double)_angleForAngleIndex:(unsigned long long)arg1;
- (double)_angleForPosition:(struct CGPoint { double x1; double x2; })arg1;
- (double)_angleForRecognizer:(id)arg1;
- (id)_blendFromGradientState:(id)arg1 toState:(id)arg2 withProgress:(double)arg3;
- (id)_blendFromLinearColor:(id)arg1 toLinearColor:(id)arg2 withProgress:(double)arg3;
- (struct CGPoint { double x1; double x2; })_center;
- (struct CGPoint { double x1; double x2; })_centerPointAtAngle:(double)arg1;
- (void)_createStandardColors;
- (void)_createSuggestedAmountAngles;
- (void)_createSuggestedAmountRingColorStops;
- (void)_createSuggestedAmountsImageDictionary;
- (void)_dragEnded:(id)arg1;
- (void)_dragMoved:(id)arg1;
- (void)_dragMovedToAngle:(double)arg1 normalizedRadius:(double)arg2;
- (void)_dragRecognizerChanged:(id)arg1;
- (void)_dragStarted:(id)arg1;
- (id)_gradientStateForSuggestedAmount:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_insetBounds;
- (bool)_isAmount:(id)arg1 withinRoundingUnitOfAmount:(id)arg2;
- (double)_offsetAngle:(double)arg1;
- (double)_offsetCurrentAngle;
- (void)_pauseRenderLoop;
- (bool)_preferredPausedState;
- (void)_pressRecognized:(id)arg1;
- (double)_ringWidth;
- (id)_roundedAmountForAngle:(double)arg1;
- (unsigned long long)_segmentEndAngleIndexForAngle:(double)arg1;
- (bool)_setDisplayAmount:(id)arg1;
- (void)_setDotsVisible:(bool)arg1 animated:(bool)arg2;
- (void)_setHighlightedSuggestedAmount:(id)arg1;
- (void)_setResponse:(double)arg1;
- (void)_setSelectedSuggestedAmount:(id)arg1;
- (id)_suggestedAmountForAngleIndex:(unsigned long long)arg1;
- (id)_suggestedAmountImageForSuggestedAmount:(id)arg1;
- (void)_tapRecognized:(id)arg1;
- (id)_targetGradientStateForAngle:(double)arg1;
- (unsigned long long)_unnormalizedAngleIndexForAngle:(double)arg1;
- (void)_updateHandleImage;
- (void)_updateInterestText;
- (void)_updatePausedState;
- (void)_updateScaleTarget;
- (id)amount;
- (void)completeInitialDisplayAnimated:(bool)arg1;
- (id)currentEndColor;
- (id)currentStartColor;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (void)didMoveToWindow;
- (void)didUpdateAngleSpringPosition;
- (void)didUpdateAngleSpringTarget;
- (void)didUpdateScaleSpringPosition;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithSuggestedAmountList:(id)arg1 delegate:(id)arg2 dataSource:(id)arg3;
- (bool)isSmall;
- (void)layoutSubviews;
- (void)prepareForInitialDisplayWithAmount:(id)arg1;
- (void)renderLoop:(id)arg1 drawAtTime:(double)arg2;
- (struct CGSize { double x1; double x2; })ringSizeWhenIsSmall:(bool)arg1;
- (double)ringWidth;
- (void)setAmount:(id)arg1 animated:(bool)arg2;
- (void)setAngle:(double)arg1 animated:(bool)arg2 forExplicitAmount:(id)arg3 userInitiated:(bool)arg4;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHandleScale:(double)arg1 animated:(bool)arg2;
- (void)setIsSmall:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })smallRingSize;
- (double)targetAngle;

// Image: /System/Library/AccessibilityBundles/PassKitUI.axbundle/PassKitUI

+ (Class)safeCategoryBaseClass;

- (void)_accessibilityAdjust:(bool)arg1;
- (void)accessibilityDecrement;
- (id)accessibilityHint;
- (void)accessibilityIncrement;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (bool)isAccessibilityElement;

@end
