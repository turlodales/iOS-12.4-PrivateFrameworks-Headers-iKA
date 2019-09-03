/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUColorWheelView : UIView {
    <HUColorWheelSpace> * _colorWheelSpace;
    double  _wheelHoleRadius;
}

@property (nonatomic, retain) <HUColorWheelSpace> *colorWheelSpace;
@property (nonatomic) double wheelHoleRadius;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

+ (double)_colorWheelRenderingScale;

- (void).cxx_destruct;
- (double)_outerRadius;
- (struct { double x1; double x2; })colorWheelCoordinateForPoint:(struct CGPoint { double x1; double x2; })arg1 boundedToWheel:(bool)arg2;
- (id)colorWheelSpace;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithColorWheelSpace:(id)arg1;
- (struct CGPoint { double x1; double x2; })pointForColorWheelCoordinate:(struct { double x1; double x2; })arg1;
- (void)setColorWheelSpace:(id)arg1;
- (void)setWheelHoleRadius:(double)arg1;
- (id)wheelBezierPath;
- (double)wheelHoleRadius;

// Image: /System/Library/AccessibilityBundles/HomeUI.axbundle/HomeUI

+ (Class)safeCategoryBaseClass;

- (struct CGPoint { double x1; double x2; })accessibilityActivationPoint;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (id)accessibilityPath;
- (bool)isAccessibilityElement;

@end
