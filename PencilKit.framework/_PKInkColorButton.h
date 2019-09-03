/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface _PKInkColorButton : UIButton {
    UIColor * _color;
    bool  _isCompact;
    bool  _isUsedOnDarkBackground;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic) bool isCompact;
@property (nonatomic) bool isUsedOnDarkBackground;

// Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit

+ (id)buttonWithColor:(id)arg1 isCompact:(bool)arg2;
+ (id)embossOverlayImageForColor:(id)arg1 selected:(bool)arg2 isCompact:(bool)arg3;
+ (double)innerColorCircleInset:(bool)arg1;
+ (id)pathForFillShapeLayerWithSwatchRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 selected:(bool)arg2 isCompact:(bool)arg3;
+ (id)pathForSelectedColorShapeLayerWithSwatchRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 selected:(bool)arg2 embossed:(bool)arg3 isCompact:(bool)arg4;
+ (id)pathForStrokeShapeLayerWithSwatchRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 selected:(bool)arg2 color:(id)arg3 isUsedOnDarkBackground:(bool)arg4 isCompact:(bool)arg5;
+ (id)strokeColorForStrokeShapeLayerWithColor:(id)arg1 isUsedOnDarkBackground:(bool)arg2;
+ (double)swatchInsetForIsCompact:(bool)arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })swatchRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isCompact:(bool)arg2;
+ (double)transparentSelectionRingInset:(bool)arg1;

- (void).cxx_destruct;
- (double)_swatchInset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_swatchRect;
- (id)color;
- (id)initWithColor:(id)arg1 isCompact:(bool)arg2;
- (bool)isCompact;
- (bool)isUsedOnDarkBackground;
- (bool)pointMostlyInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setColor:(id)arg1;
- (void)setIsCompact:(bool)arg1;
- (void)setIsUsedOnDarkBackground:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

// Image: /System/Library/AccessibilityBundles/PencilKit.axbundle/PencilKit

+ (Class)safeCategoryBaseClass;

- (id)_axColorPickerParent;
- (id)_axColorValueString;
- (bool)_axIsPickerSelectingColor;
- (id)accessibilityLabel;
- (id)accessibilityPath;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;

@end
