/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUPillButton : UIButton {
    UIView * _backgroundView;
    UILabel * _buttonLabel;
    NAUILayoutConstraintSet * _constraintSet;
    struct { 
        double topToLabelBaselineDistance; 
        double labelBaselineToBottomDistance; 
        double minHorizontalPadding; 
        double minWidth; 
    }  _metrics;
    unsigned long long  _style;
}

@property (nonatomic) bool adjustsFontSizeToFitWidth;
@property (nonatomic, readonly) UIView *backgroundView;
@property (nonatomic, retain) UIFont *buttonFont;
@property (nonatomic, readonly) UILabel *buttonLabel;
@property (nonatomic, copy) NSString *buttonText;
@property (nonatomic, readonly) NAUILayoutConstraintSet *constraintSet;
@property (nonatomic) struct { double x1; double x2; double x3; double x4; } metrics;
@property (nonatomic, readonly) unsigned long long style;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

+ (struct { double x1; double x2; double x3; double x4; })defaultMetrics;
+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (void)_setupConstraintSet;
- (bool)adjustsFontSizeToFitWidth;
- (id)backgroundView;
- (id)buttonFont;
- (id)buttonLabel;
- (id)buttonText;
- (id)constraintSet;
- (void)didMoveToSuperview;
- (id)initWithBackgroundStyle:(unsigned long long)arg1;
- (void)layoutSubviews;
- (struct { double x1; double x2; double x3; double x4; })metrics;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setAdjustsFontSizeToFitWidth:(bool)arg1;
- (void)setButtonFont:(id)arg1;
- (void)setButtonText:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setMetrics:(struct { double x1; double x2; double x3; double x4; })arg1;
- (unsigned long long)style;
- (void)tintColorDidChange;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

// Image: /System/Library/AccessibilityBundles/HomeUI.axbundle/HomeUI

+ (Class)safeCategoryBaseClass;

- (id)accessibilityLabel;

@end
