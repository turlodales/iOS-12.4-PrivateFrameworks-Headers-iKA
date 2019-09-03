/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKInkFeatheringDescriptor : NSObject {
    double  _touchEndCapFade;
    double  _touchEndCapTime;
    double  _touchStartCapFade;
    double  _touchStartCapTime;
}

@property (nonatomic) double touchEndCapFade;
@property (nonatomic) double touchEndCapTime;
@property (nonatomic) double touchStartCapFade;
@property (nonatomic) double touchStartCapTime;

+ (id)descriptorWithStartCapTime:(double)arg1 startCapFade:(double)arg2 endCapTime:(double)arg3 endCapFade:(double)arg4;

- (void)setTouchEndCapFade:(double)arg1;
- (void)setTouchEndCapTime:(double)arg1;
- (void)setTouchStartCapFade:(double)arg1;
- (void)setTouchStartCapTime:(double)arg1;
- (double)touchEndCapFade;
- (double)touchEndCapTime;
- (double)touchStartCapFade;
- (double)touchStartCapTime;

@end
