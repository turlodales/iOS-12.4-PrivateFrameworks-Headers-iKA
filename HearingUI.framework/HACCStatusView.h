/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
 */

@interface HACCStatusView : UIControl <HACCContentModule> {
    BCBatteryDevice * _batteryDevice;
    HACCBatteryGroupView * _batteryView;
    UIImageView * _iconView;
    UILabel * _titleLabel;
    <HACCContentModuleDelegate> * delegate;
    unsigned long long  module;
}

@property (nonatomic, retain) BCBatteryDevice *batteryDevice;
@property (nonatomic, retain) HACCBatteryGroupView *batteryView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HACCContentModuleDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImageView *iconView;
@property (nonatomic) unsigned long long module;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (id)accessibilityValue;
- (id)batteryDevice;
- (id)batteryView;
- (void)buttonTapped:(id)arg1;
- (id)contentValue;
- (id)delegate;
- (bool)enabled;
- (id)iconView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAccessibilityElement;
- (unsigned long long)module;
- (void)setBatteryDevice:(id)arg1;
- (void)setBatteryView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setModule:(unsigned long long)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)titleLabel;
- (void)updateConstraints;
- (void)updateValue;

@end
