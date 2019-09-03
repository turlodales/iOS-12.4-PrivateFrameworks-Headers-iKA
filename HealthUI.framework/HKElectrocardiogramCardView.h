/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKElectrocardiogramCardView : UIView <HKDateCacheObserver> {
    UILabel * _averageHeartRateLabel;
    NSLayoutConstraint * _averageHeartRateLabelFirstBaselineConstraint;
    NSLayoutConstraint * _averageHeartRateLabelWidthConstraint;
    UIView * _cellBackgroundView;
    HKDateCache * _dateCache;
    NSLayoutConstraint * _graphTopConstraint;
    HKElectrocardiogramChartView * _graphView;
    HKRoundedHeaderView * _headerView;
    UIImageView * _heartImageView;
    NSArray * _largeTextConstraints;
    bool  _onboarding;
    NSArray * _regularConstraints;
    HKElectrocardiogram * _sample;
    UILabel * _symptomsLabel;
    NSLayoutConstraint * _symptomsLabelFirstBaselineConstraint;
}

@property (nonatomic, retain) UILabel *averageHeartRateLabel;
@property (nonatomic, retain) NSLayoutConstraint *averageHeartRateLabelFirstBaselineConstraint;
@property (nonatomic, retain) NSLayoutConstraint *averageHeartRateLabelWidthConstraint;
@property (nonatomic, retain) UIView *cellBackgroundView;
@property (nonatomic) HKDateCache *dateCache;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSLayoutConstraint *graphTopConstraint;
@property (nonatomic, retain) HKElectrocardiogramChartView *graphView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HKRoundedHeaderView *headerView;
@property (nonatomic, retain) UIImageView *heartImageView;
@property (nonatomic, retain) NSArray *largeTextConstraints;
@property (getter=isOnboarding, nonatomic) bool onboarding;
@property (nonatomic, retain) NSArray *regularConstraints;
@property (nonatomic, retain) HKElectrocardiogram *sample;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *symptomsLabel;
@property (nonatomic, retain) NSLayoutConstraint *symptomsLabelFirstBaselineConstraint;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

+ (id)_accessibilityContentSizeCategory;
+ (double)_averageHeartRateBaselineToGraphTop;
+ (double)_averageHeartRateBaselineToSymptomBaseline;
+ (id)_averageHeartRateSymptomsBoldFont;
+ (id)_averageHeartRateSymptomsFont;
+ (id)_averageHeartRateSymptomsFontForElectrocardiogram:(id)arg1;
+ (id)_averageHeartRateSymptomsTextStyle;
+ (double)_graphBottomToCardBottom;
+ (double)_graphHeight;
+ (double)_headerBottomToAverageHeartRateBaseline;
+ (double)estimatedHeight;

- (void).cxx_destruct;
- (id)_cardBackgroundColor;
- (id)_cardHeaderColor;
- (bool)_isLayingOutForAccessibility;
- (void)_setUpGraph;
- (void)_setupConstraints;
- (void)_setupUI;
- (void)_updateForCurrentSizeCategory;
- (void)_updateGraphTopConstraint;
- (void)_updateTextConstraints;
- (void)_updateUI;
- (id)averageHeartRateLabel;
- (id)averageHeartRateLabelFirstBaselineConstraint;
- (id)averageHeartRateLabelWidthConstraint;
- (id)cellBackgroundView;
- (id)dateCache;
- (void)dateCacheDidUpdate:(id)arg1 onNotification:(id)arg2;
- (void)dealloc;
- (id)graphTopConstraint;
- (id)graphView;
- (id)headerView;
- (id)heartImageView;
- (id)initWithSample:(id)arg1 dateCache:(id)arg2 onboarding:(bool)arg3;
- (bool)isOnboarding;
- (id)largeTextConstraints;
- (id)regularConstraints;
- (id)sample;
- (void)setAverageHeartRateLabel:(id)arg1;
- (void)setAverageHeartRateLabelFirstBaselineConstraint:(id)arg1;
- (void)setAverageHeartRateLabelWidthConstraint:(id)arg1;
- (void)setCellBackgroundView:(id)arg1;
- (void)setDateCache:(id)arg1;
- (void)setGraphTopConstraint:(id)arg1;
- (void)setGraphView:(id)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setHeartImageView:(id)arg1;
- (void)setLargeTextConstraints:(id)arg1;
- (void)setOnboarding:(bool)arg1;
- (void)setRegularConstraints:(id)arg1;
- (void)setSample:(id)arg1;
- (void)setSymptomsLabel:(id)arg1;
- (void)setSymptomsLabelFirstBaselineConstraint:(id)arg1;
- (id)symptomsLabel;
- (id)symptomsLabelFirstBaselineConstraint;
- (void)tintColorDidChange;
- (void)traitCollectionDidChange:(id)arg1;

// Image: /System/Library/AccessibilityBundles/HealthUI.axbundle/HealthUI

+ (Class)safeCategoryBaseClass;

- (id)accessibilityHint;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (bool)isAccessibilityElement;

@end
