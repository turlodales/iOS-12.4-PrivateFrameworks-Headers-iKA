/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKSpeakerButton : UIButton {
    BOOL  _orientation;
    bool  _shouldShowText;
    bool  _speakerEnabled;
}

@property (nonatomic) BOOL orientation;
@property (nonatomic) bool shouldShowText;
@property (getter=isSpeakerEnabled, nonatomic) bool speakerEnabled;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

+ (id)speakerImageWithOrientation:(BOOL)arg1 speakerEnabled:(bool)arg2 shouldShowText:(bool)arg3;

- (void)hideSpeakerText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isSpeakerEnabled;
- (BOOL)orientation;
- (void)setOrientation:(BOOL)arg1;
- (void)setShouldShowText:(bool)arg1;
- (void)setSpeakerEnabled:(bool)arg1;
- (bool)shouldShowText;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)touchUpInside:(id)arg1;
- (void)updateSpeakerImage;

// Image: /System/Library/AccessibilityBundles/ChatKitFramework.axbundle/ChatKitFramework

+ (Class)safeCategoryBaseClass;

- (id)accessibilityLabel;
- (id)accessibilityValue;

@end
