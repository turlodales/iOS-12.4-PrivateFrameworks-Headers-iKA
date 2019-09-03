/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMElapsedTimeView : UIView {
    UIImageView * __recordingImageView;
    NSDate * __startTime;
    UILabel * __timeLabel;
    NSTimer * __updateTimer;
    long long  _layoutStyle;
}

@property (nonatomic, readonly) UIImageView *_recordingImageView;
@property (nonatomic, readonly) NSDate *_startTime;
@property (nonatomic, readonly) UILabel *_timeLabel;
@property (nonatomic, readonly) NSTimer *_updateTimer;
@property (nonatomic) long long layoutStyle;

// Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI

- (void).cxx_destruct;
- (void)_beginRecordingAnimation;
- (void)_commonCAMElapsedTimeViewInitializationWithLayoutStyle:(long long)arg1;
- (void)_endRecordingAnimation;
- (id)_recordingImageView;
- (void)_setStartTime:(id)arg1;
- (id)_startTime;
- (id)_timeLabel;
- (void)_updateFont;
- (void)_updateForTimer:(id)arg1;
- (void)_updateText;
- (id)_updateTimer;
- (void)dealloc;
- (void)endTimer;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithLayoutStyle:(long long)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (long long)layoutStyle;
- (void)layoutSubviews;
- (void)resetTimer;
- (void)setLayoutStyle:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)startTimer;
- (void)updateToContentSize:(id)arg1;

// Image: /System/Library/AccessibilityBundles/CameraUI.axbundle/CameraUI

+ (Class)safeCategoryBaseClass;

- (id)accessibilityLabel;
- (bool)isAccessibilityElement;

@end
