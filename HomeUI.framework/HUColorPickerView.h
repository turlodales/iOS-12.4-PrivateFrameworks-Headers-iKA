/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUColorPickerView : UIView <HUQuickControlInteractiveView, UIGestureRecognizerDelegate> {
    unsigned long long  _colorPickerMode;
    HUColorWheelView * _colorWheelView;
    UILongPressGestureRecognizer * _gestureRecognizer;
    <HUQuickControlColorPickerViewInteractionDelegate> * _interactionDelegate;
    HUQuickControlMagnifierView * _magnifierView;
    unsigned long long  _mirroringAxisBias;
    HUQuickControlColorViewProfile * _profile;
    struct { 
        double r; 
        double g; 
        double b; 
        double temperature; 
    }  _selectedColor;
    struct { 
        double angle; 
        double radius; 
    }  _selectedColorCoordinate;
    double  _touchDownTimestamp;
    bool  _userInteractionActive;
}

@property (nonatomic) unsigned long long colorPickerMode;
@property (nonatomic, readonly) <HUColorWheelSpace> *colorWheelSpace;
@property (nonatomic, retain) HUColorWheelView *colorWheelView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UILongPressGestureRecognizer *gestureRecognizer;
@property (readonly) unsigned long long hash;
@property (nonatomic) <HUQuickControlColorPickerViewInteractionDelegate> *interactionDelegate;
@property (nonatomic) struct CGPoint { double x1; double x2; } magnifierLocation;
@property (nonatomic, retain) HUQuickControlMagnifierView *magnifierView;
@property (nonatomic) unsigned long long mirroringAxisBias;
@property (nonatomic, copy) HUQuickControlColorViewProfile *profile;
@property (nonatomic, retain) id secondaryValue;
@property (nonatomic) struct { double x1; double x2; double x3; double x4; } selectedColor;
@property (nonatomic) struct { double x1; double x2; } selectedColorCoordinate;
@property (readonly) Class superclass;
@property (nonatomic) double touchDownTimestamp;
@property (getter=isUserInteractionActive, nonatomic) bool userInteractionActive;
@property (nonatomic, retain) id value;
@property (nonatomic) double wheelHoleRadius;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

- (void).cxx_destruct;
- (void)_applyMirroringAxisBiasToColorWheelSpaceIfNecessary;
- (id)_colorWheelSpaceForMode:(unsigned long long)arg1;
- (void)_configureInitialConstraints;
- (void)_handleGesture:(id)arg1;
- (void)_setColorPickerMode:(unsigned long long)arg1 notifyDelegate:(bool)arg2;
- (void)_updateDerivedSelectedColorCoordinate;
- (void)_updateMagnifierPosition;
- (void)_updateMagnifierTransformForTouchLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)_updateMirroringAxisBiasIfNecessary;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;
- (unsigned long long)colorPickerMode;
- (id)colorWheelSpace;
- (id)colorWheelView;
- (id)gestureRecognizer;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)initWithProfile:(id)arg1;
- (id)interactionDelegate;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1;
- (bool)isUserInteractionActive;
- (void)layoutSubviews;
- (struct CGPoint { double x1; double x2; })magnifierLocation;
- (id)magnifierView;
- (unsigned long long)mirroringAxisBias;
- (id)profile;
- (struct { double x1; double x2; double x3; double x4; })selectedColor;
- (struct { double x1; double x2; })selectedColorCoordinate;
- (void)setColorPickerMode:(unsigned long long)arg1;
- (void)setColorWheelView:(id)arg1;
- (void)setGestureRecognizer:(id)arg1;
- (void)setInteractionDelegate:(id)arg1;
- (void)setMagnifierLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setMagnifierView:(id)arg1;
- (void)setMirroringAxisBias:(unsigned long long)arg1;
- (void)setProfile:(id)arg1;
- (void)setSelectedColorCoordinate:(struct { double x1; double x2; })arg1;
- (void)setTouchDownTimestamp:(double)arg1;
- (void)setUserInteractionActive:(bool)arg1;
- (void)setValue:(id)arg1;
- (void)setWheelHoleRadius:(double)arg1;
- (double)touchDownTimestamp;
- (id)value;
- (double)wheelHoleRadius;

// Image: /System/Library/AccessibilityBundles/HomeUI.axbundle/HomeUI

+ (Class)safeCategoryBaseClass;

- (void)setSelectedColor:(struct { double x1; double x2; double x3; double x4; })arg1;

@end