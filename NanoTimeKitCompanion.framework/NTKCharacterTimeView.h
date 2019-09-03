/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCharacterTimeView : UIView <NTKTimeView> {
    unsigned long long  _character;
    EAGLContext * _context;
    CLKDevice * _device;
    NTKCharacterDisplayLink * _displayLink;
    NTKCharacterFrameBuffer * _framebuffer;
    bool  _frozen;
    unsigned int  _isAnimating;
    unsigned int  _isBackgrounded;
    unsigned int  _isRenderOneFrameRequested;
    unsigned int  _layoutWasIgnored;
    NTKCharacterResourceLoader * _loader;
    unsigned int  _renderWasIgnored;
    NTKCharacterRenderer * _renderer;
    NTKCharacterRenderer * _renderers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFrozen, nonatomic) bool frozen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion

+ (Class)layerClass;

- (void).cxx_destruct;
- (void)_configureForEditMode:(long long)arg1;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_didEnterBackground;
- (void)_endScrubbing;
- (void)_layoutRenderer;
- (void)_render;
- (void)_renderOneFrame;
- (void)_startAnimation;
- (void)_stopAnimation;
- (void)_willEnterForeground;
- (void)applyCharacterTransition:(double)arg1 fromCharacter:(unsigned long long)arg2 toCharacter:(unsigned long long)arg3;
- (void)cleanupAfterZoom;
- (void)dealloc;
- (void)endScrubbingAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)enumarateRenderers:(id /* block */)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forDevice:(id)arg2;
- (bool)isFrozen;
- (void)layoutSubviews;
- (void)prepareToZoom;
- (void)renderOneFrame;
- (void)renderSynchronouslyWithImageQueueDiscard:(bool)arg1;
- (void)scrubToDate:(id)arg1;
- (void)setAnimationFrameInterval:(long long)arg1;
- (void)setCharacter:(unsigned long long)arg1;
- (void)setClothingColor:(id)arg1 andDesaturation:(double)arg2;
- (void)setClothingColor:(id)arg1 andDesaturation:(double)arg2 forCharacter:(unsigned long long)arg3;
- (void)setFrozen:(bool)arg1;
- (void)setOverrideDate:(id)arg1;
- (void)setOverrideDate:(id)arg1 animated:(bool)arg2 enteringOrb:(bool)arg3;
- (void)setOverrideDate:(id)arg1 animated:(bool)arg2 enteringOrb:(bool)arg3 completion:(id /* block */)arg4;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (void)setTimeOffset:(double)arg1;
- (void)setZoomFraction:(double)arg1 diameter:(double)arg2;
- (void)speakTime;
- (void)startScrubbingAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;

// Image: /System/Library/AccessibilityBundles/NanoTimeKitCompanion.axbundle/NanoTimeKitCompanion

+ (Class)safeCategoryBaseClass;

- (bool)_accessibilityServesAsFirstElement;
- (bool)accessibilityActivate;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrame;
- (id)accessibilityLabel;
- (bool)isAccessibilityElement;

@end
