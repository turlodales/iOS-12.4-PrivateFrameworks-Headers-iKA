/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STAlwaysAllowList : NSObject <NSCopying> {
    NSArray * _allowedBundleIDs;
    bool  _shouldAllowEditing;
}

@property (nonatomic, copy) NSArray *allowedBundleIDs;
@property (nonatomic) bool shouldAllowEditing;

- (void).cxx_destruct;
- (id)allowedBundleIDs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultAlwaysAllowBundleIDs;
- (id)init;
- (id)initWithActivation:(id)arg1;
- (id)initWithBlueprint:(id)arg1;
- (void)setAllowedBundleIDs:(id)arg1;
- (void)setShouldAllowEditing:(bool)arg1;
- (bool)shouldAllowEditing;

@end
