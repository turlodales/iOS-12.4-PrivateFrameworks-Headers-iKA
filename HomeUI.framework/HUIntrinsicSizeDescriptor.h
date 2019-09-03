/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUIntrinsicSizeDescriptor : NSObject <NAIdentifiable> {
    NSNumber * _aspectRatio;
    unsigned long long  _flexType;
    struct CGSize { 
        double width; 
        double height; 
    }  _intrinsicSize;
}

@property (nonatomic, readonly, copy) NSNumber *aspectRatio;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long flexType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } intrinsicSize;
@property (readonly) Class superclass;

+ (id)descriptorWithAspectRatio:(double)arg1;
+ (id)descriptorWithIntrinsicSize:(struct CGSize { double x1; double x2; })arg1 flexType:(unsigned long long)arg2;
+ (id)na_identity;
+ (id)noIntrinsicSizeDescriptor;

- (void).cxx_destruct;
- (id)aspectRatio;
- (unsigned long long)flexType;
- (unsigned long long)hash;
- (id)initWithIntrinsicSize:(struct CGSize { double x1; double x2; })arg1 flexType:(unsigned long long)arg2 aspectRatio:(id)arg3;
- (struct CGSize { double x1; double x2; })intrinsicSize;
- (bool)isEqual:(id)arg1;

@end
