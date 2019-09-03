/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface _PKInkThicknessButton : UIControl {
    UIImage * _assetImage;
    NSString * _inkIdentifier;
    UIImageView * _inkImageView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _lastRenderedBounds;
    double  _weight;
}

@property (nonatomic, retain) UIImage *assetImage;
@property (nonatomic, readonly) NSString *inkIdentifier;
@property (nonatomic, retain) UIImageView *inkImageView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } lastRenderedBounds;
@property (nonatomic, readonly) double weight;

// Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit

+ (id)backgroundColorForIsSelected:(bool)arg1 highlighted:(bool)arg2;
+ (struct CGSize { double x1; double x2; })buttonSize;
+ (id)imageTintColorForIsSelected:(bool)arg1 highlighted:(bool)arg2;

- (void).cxx_destruct;
- (void)_animateToHighlightedState:(bool)arg1;
- (id)assetImage;
- (void)didTouchUpInside;
- (id)initWithInkIdentifier:(id)arg1 weight:(double)arg2;
- (id)inkIdentifier;
- (id)inkImageView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })lastRenderedBounds;
- (void)layoutSubviews;
- (void)setAssetImage:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setInkImageView:(id)arg1;
- (void)setLastRenderedBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSelected:(bool)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (double)weight;

// Image: /System/Library/AccessibilityBundles/PencilKit.axbundle/PencilKit

+ (Class)safeCategoryBaseClass;

- (id)accessibilityLabel;
- (bool)isAccessibilityElement;

@end
