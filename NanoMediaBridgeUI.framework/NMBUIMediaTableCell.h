/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMediaBridgeUI.framework/NanoMediaBridgeUI
 */

@interface NMBUIMediaTableCell : PSSwitchTableCell {
    UIStackView * _accessoryStackView;
    UIButton * _errorButton;
}

// Image: /System/Library/PrivateFrameworks/NanoMediaBridgeUI.framework/NanoMediaBridgeUI

+ (struct CGSize { double x1; double x2; })artworkSize;
+ (long long)cellStyle;
+ (double)defaultCellHeight;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)prepareForReuse;
- (void)refreshCellContentsWithSpecifier:(id)arg1;

// Image: /System/Library/AccessibilityBundles/NanoMediaBridgeUI.axbundle/NanoMediaBridgeUI

+ (Class)safeCategoryBaseClass;

- (bool)_axIsShowingControl;
- (struct CGPoint { double x1; double x2; })accessibilityActivationPoint;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (bool)isAccessibilityElement;

@end
