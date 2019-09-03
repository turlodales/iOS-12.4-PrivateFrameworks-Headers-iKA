/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

@interface AVTAvatarAttributeEditorModelManager : NSObject {
    AVTMemoji * _avatar;
    AVTAvatarConfiguration * _avatarConfiguration;
    AVTAvatarRecord * _avatarRecord;
    NSMutableDictionary * _cancelationTokens;
    AVTCoreModel * _coreModel;
    AVTPresetImageProvider * _imageProvider;
    <AVTUILogger> * _logger;
    AVTPresetResourceLoader * _resourceLoader;
}

@property (nonatomic, readonly) AVTMemoji *avatar;
@property (nonatomic, readonly) AVTAvatarConfiguration *avatarConfiguration;
@property (nonatomic, readonly, copy) AVTAvatarRecord *avatarRecord;
@property (nonatomic, retain) NSMutableDictionary *cancelationTokens;
@property (nonatomic, readonly) AVTCoreModel *coreModel;
@property (nonatomic, readonly) AVTPresetImageProvider *imageProvider;
@property (nonatomic, retain) <AVTUILogger> *logger;
@property (nonatomic, readonly) AVTPresetResourceLoader *resourceLoader;

- (void).cxx_destruct;
- (id)avatar;
- (id)avatarConfiguration;
- (id)avatarRecord;
- (id)buildUIModelWithCurrentlySelectedCategory:(id)arg1;
- (void)cancelAllPreloading;
- (void)cancelPreloadForSectionItemIndexPath:(id)arg1;
- (id)cancelationTokens;
- (id)coreModel;
- (void)dealloc;
- (id)imageProvider;
- (id)initWithAvatarRecord:(id)arg1 coreModel:(id)arg2 imageProvider:(id)arg3 resourceLoader:(id)arg4 environment:(id)arg5;
- (id)logger;
- (void)preLoadCategory:(id)arg1;
- (void)preloadSectionItem:(id)arg1 atIndexPath:(id)arg2;
- (id)resourceLoader;
- (void)setCancelationTokens:(id)arg1;
- (void)setLogger:(id)arg1;
- (void)updateAvatarBySelectingSectionItem:(id)arg1 animated:(bool)arg2;

@end
