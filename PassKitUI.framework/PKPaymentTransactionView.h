/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentTransactionView : UIView {
    CNAvatarView * _avatarView;
    UIImageView * _disclosureView;
    bool  _hideRewardsBackground;
    bool  _isTemplateLayout;
    UIColor * _primaryColor;
    UIImage * _primaryImage;
    UIImageView * _primaryImageView;
    UILabel * _primaryLabel;
    NSString * _primaryString;
    UILabel * _rewardsAmountLabel;
    UIColor * _secondaryColor;
    UILabel * _secondaryLabel;
    NSString * _secondaryString;
    bool  _showsAvatarView;
    bool  _showsDisclosureView;
    UILabel * _tertiaryLabel;
    NSString * _tertiaryString;
    UILabel * _transactionValueLabel;
}

@property (nonatomic, readonly) CNAvatarView *avatarView;
@property (nonatomic) bool hideRewardsBackground;
@property (nonatomic, retain) UIColor *primaryColor;
@property (nonatomic, retain) UIImage *primaryImage;
@property (nonatomic, retain) NSString *primaryString;
@property (nonatomic, retain) NSString *rewardsValueString;
@property (nonatomic, retain) UIColor *secondaryColor;
@property (nonatomic, retain) NSString *secondaryString;
@property (nonatomic) bool showsAvatarView;
@property (nonatomic) bool showsDisclosureView;
@property (nonatomic, retain) NSString *tertiaryString;
@property (nonatomic, retain) NSAttributedString *transactionValueAttributedText;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

+ (id)defaultTertiaryLabelFont;

- (void).cxx_destruct;
- (double)_defaultLayoutHeight;
- (id)_disclosureView;
- (struct CGSize { double x1; double x2; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)_shouldUseStackedLayout;
- (void)_updateAvatarView;
- (id)avatarView;
- (void)createSubviews;
- (id)defaultPrimaryColor;
- (id)defaultSecondaryColor;
- (bool)hideRewardsBackground;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)primaryColor;
- (id)primaryImage;
- (id)primaryString;
- (void)resetFonts;
- (id)rewardsValueString;
- (id)secondaryColor;
- (id)secondaryString;
- (void)setHideRewardsBackground:(bool)arg1;
- (void)setPrimaryColor:(id)arg1;
- (void)setPrimaryImage:(id)arg1;
- (void)setPrimaryImage:(id)arg1 strokeImage:(bool)arg2 animated:(bool)arg3;
- (void)setPrimaryString:(id)arg1;
- (void)setRewardsValueString:(id)arg1;
- (void)setSecondaryColor:(id)arg1;
- (void)setSecondaryString:(id)arg1;
- (void)setShowsAvatarView:(bool)arg1;
- (void)setShowsDisclosureView:(bool)arg1;
- (void)setTertiaryString:(id)arg1;
- (void)setTransactionValueAttributedText:(id)arg1;
- (bool)shouldShowTransactionPreviewForTouchAtPoint:(struct CGPoint { double x1; double x2; })arg1 inView:(id)arg2;
- (bool)showsAvatarView;
- (bool)showsDisclosureView;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)tertiaryString;
- (void)traitCollectionDidChange:(id)arg1;
- (id)transactionValueAttributedText;

// Image: /System/Library/AccessibilityBundles/PassKitUI.axbundle/PassKitUI

+ (Class)safeCategoryBaseClass;

- (id)accessibilityLabel;

@end
