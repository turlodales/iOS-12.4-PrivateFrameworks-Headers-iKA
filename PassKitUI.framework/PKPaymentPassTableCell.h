/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentPassTableCell : PSTableCell {
    UIControl * _actionButton;
    CALayer * _cardSnapshotMask;
    UIView * _cardSnapshotView;
    <PKPaymentPassTableCellDelegate> * _delegate;
    UILabel * _mainLabel;
    PKPaymentPass * _pass;
    PKPassView * _passView;
    PKPaymentApplication * _paymentApplication;
    long long  _settingsContext;
    bool  _showAddButton;
    bool  _showState;
    bool  _showSubTitle;
    bool  _snapshotLoaded;
    UIActivityIndicatorView * _spinner;
    UILabel * _subTextLabel;
}

@property (nonatomic, readonly) UIControl *actionButton;
@property (nonatomic) <PKPaymentPassTableCellDelegate> *delegate;
@property (nonatomic, readonly) UILabel *mainLabel;
@property (nonatomic, retain) PKPaymentPass *pass;
@property (nonatomic, readonly) PKPassFaceViewRendererState *rendererState;
@property (nonatomic) bool showAddButton;
@property (nonatomic) bool showSubTitle;
@property (nonatomic, readonly) UILabel *subTextLabel;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

+ (double)heightForCellWithMinimum:(double)arg1 hasSubTitle:(bool)arg2;
+ (id)subTitleFont;
+ (id)titleFont;

- (void).cxx_destruct;
- (void)_addButtonPressed:(id)arg1;
- (id)_stringForPassState:(unsigned long long)arg1;
- (void)_updateSubtitleColorWithSpecifier:(id)arg1;
- (void)_verifyButtonPressed:(id)arg1;
- (id)actionButton;
- (void)dealloc;
- (id)delegate;
- (void)disableAddButton;
- (void)layoutSubviews;
- (id)mainLabel;
- (id)pass;
- (void)pk_applyAppearance:(id)arg1;
- (id)pk_childrenForAppearance;
- (id)rendererState;
- (void)setDelegate:(id)arg1;
- (void)setPass:(id)arg1;
- (void)setShowAddButton:(bool)arg1;
- (void)setShowSubTitle:(bool)arg1;
- (void)setSpecifier:(id)arg1;
- (void)showActivitySpinner:(bool)arg1;
- (bool)showAddButton;
- (bool)showSubTitle;
- (id)subTextLabel;
- (void)tintColorDidChange;
- (void)updateSubtitle;
- (void)updateSubtitleForTransitProperties;

// Image: /System/Library/AccessibilityBundles/PassKitUI.axbundle/PassKitUI

+ (Class)safeCategoryBaseClass;

- (void)_accessibilityLoadAccessibilityInformation;
- (unsigned long long)accessibilityTraits;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;

@end
