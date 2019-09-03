/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKInkManager : NSObject {
    NSMutableDictionary * _inks;
}

@property (nonatomic, readonly) NSMutableDictionary *inks;

+ (void)clearCachedManager;
+ (id)defaultInkManager;

- (void).cxx_destruct;
- (id)init;
- (id)inkBehaviorForIdentifier:(id)arg1 variant:(id)arg2;
- (id)inkBehaviorForIdentifier:(id)arg1 version:(unsigned long long)arg2 variant:(id)arg3;
- (id)inks;

@end
