/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKDisplayTypeContextCollectionViewCell : UICollectionViewCell {
    HKDisplayTypeContextItem * _contextItem;
    HKUIMetricColors * _currentMetricColors;
    UILabel * _dateLabel;
    <HKDisplayTypeContextCollectionViewCellDelegate> * _delegate;
    UIButton * _infoButton;
    UILabel * _titleLabel;
    UILabel * _unitLabel;
    UILabel * _valueLabel;
}

@property (nonatomic, retain) HKDisplayTypeContextItem *contextItem;
@property (nonatomic) <HKDisplayTypeContextCollectionViewCellDelegate> *delegate;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (double)_bottomOffsetFromDateBaseline;
- (double)_dateBaselineOffsetFromValue;
- (id)_dateLabelFont;
- (double)_titleLabelBaselineOffsetFromTop;
- (id)_titleLabelFont;
- (id)_unitLabelFont;
- (double)_valueLabelBaselineOffsetFromDateLabel;
- (id)_valueLabelFont;
- (id)contextItem;
- (id)delegate;
- (void)infoButtonTapped:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareForReuse;
- (void)setContextItem:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)updateMetricColors:(bool)arg1;
- (void)updateUI:(bool)arg1;
- (void)updateUIColors;

// Image: /System/Library/AccessibilityBundles/HealthUI.axbundle/HealthUI

+ (Class)safeCategoryBaseClass;

- (id)_accessibilityUserTestingChildren;
- (bool)_axShowInfo;
- (id)accessibilityCustomActions;
- (id)accessibilityLabel;
- (id)accessibilityValue;
- (bool)isAccessibilityElement;

@end
