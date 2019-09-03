/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
 */

@interface FMAnnotationView : MKAnnotationView {
    bool  _hasPhotoImage;
    bool  _isDelayed;
    bool  _isShowingLargeSelectedAnnotation;
    CALayer * _largeCircleLayer;
    CALayer * _largePersonImageLayer;
    CAShapeLayer * _largeRingLayer;
    CALayer * _locationInnerLayer;
    CALayer * _locationOuterLayer;
    bool  _shouldPreventLargeAnnotationState;
    CALayer * _smallCircleLayer;
    CALayer * _smallPersonImageLayer;
    CAShapeLayer * _smallRingLayer;
}

@property (nonatomic, retain) <FMAnnotation><MKAnnotation> *annotation;
@property (nonatomic) bool hasPhotoImage;
@property (nonatomic) bool isDelayed;
@property (nonatomic) bool isShowingLargeSelectedAnnotation;
@property (nonatomic, retain) CALayer *largeCircleLayer;
@property (nonatomic, retain) CALayer *largePersonImageLayer;
@property (nonatomic, retain) CAShapeLayer *largeRingLayer;
@property (nonatomic, retain) CALayer *locationInnerLayer;
@property (nonatomic, retain) CALayer *locationOuterLayer;
@property (nonatomic) bool shouldPreventLargeAnnotationState;
@property (nonatomic, retain) CALayer *smallCircleLayer;
@property (nonatomic, retain) CALayer *smallPersonImageLayer;
@property (nonatomic, retain) CAShapeLayer *smallRingLayer;

+ (bool)_followsTerrain;
+ (void)preloadAssets;
+ (void)setImagePadding:(double)arg1;
+ (void)setLargeAnnotationBorderVisible:(bool)arg1;
+ (void)setShouldMaskLayer:(bool)arg1;
+ (void)setThickAnnotationBorder:(bool)arg1;

- (void).cxx_destruct;
- (void)_selectionWasUpdated:(bool)arg1;
- (void)_setupSpringActions;
- (void)_transitionToNewSize:(bool)arg1;
- (void)_updateAnnotationStyle;
- (void)addColorInvertFilterToLayer:(id)arg1;
- (void)animateDelayedAnimation;
- (void)dealloc;
- (bool)hasPhotoImage;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 tintColor:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (void)invertColorStatusDidChange:(id)arg1;
- (bool)isDelayed;
- (bool)isShowingLargeSelectedAnnotation;
- (id)largeCircleLayer;
- (id)largePersonImageLayer;
- (id)largeRingLayer;
- (id)locationInnerLayer;
- (id)locationOuterLayer;
- (void)prepareForReuse;
- (void)removeColorInvertFilterToLayer:(id)arg1;
- (void)setAnnotation:(id)arg1;
- (void)setHasPhotoImage:(bool)arg1;
- (void)setIsDelayed:(bool)arg1;
- (void)setIsShowingLargeSelectedAnnotation:(bool)arg1;
- (void)setLargeCircleLayer:(id)arg1;
- (void)setLargePersonImageLayer:(id)arg1;
- (void)setLargeRingLayer:(id)arg1;
- (void)setLocationInnerLayer:(id)arg1;
- (void)setLocationOuterLayer:(id)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)setSelected:(bool)arg1 animated:(bool)arg2 delay:(double)arg3;
- (void)setShouldPreventLargeAnnotationState:(bool)arg1;
- (void)setSmallCircleLayer:(id)arg1;
- (void)setSmallPersonImageLayer:(id)arg1;
- (void)setSmallRingLayer:(id)arg1;
- (void)setTintColor:(id)arg1;
- (bool)shouldPreventLargeAnnotationState;
- (id)smallCircleLayer;
- (id)smallPersonImageLayer;
- (id)smallRingLayer;
- (void)updateStyleForAnnotation:(id)arg1;

@end
