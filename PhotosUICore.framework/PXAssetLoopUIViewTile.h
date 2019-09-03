/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXAssetLoopUIViewTile : PXAssetUIImageViewTile {
    ISWrappedAVAudioSession * __audioSession;
    AVPlayerItem * __loopingPlayerItem;
    ISWrappedAVPlayer * _loopingVideoPlayer;
    long long  _loopingVideoRequestID;
    PXVideoPlayerView * _loopingVideoView;
    unsigned long long  _requestCount;
}

@property (setter=_setAudioSession:, nonatomic, retain) ISWrappedAVAudioSession *_audioSession;
@property (setter=_setLoopingPlayerItem:, nonatomic, retain) AVPlayerItem *_loopingPlayerItem;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

- (void).cxx_destruct;
- (id)_audioSession;
- (void)_handlePlayerItemResult:(id)arg1 info:(id)arg2 expectedRequestCount:(unsigned long long)arg3;
- (id)_loopingPlayerItem;
- (void)_requestLoopingVideoIfNeeded;
- (void)_setAudioSession:(id)arg1;
- (void)_setLoopingPlayerItem:(id)arg1;
- (void)becomeReusable;
- (void)imageDidChange;
- (void)prepareForReuse;
- (void)setImageRequester:(id)arg1;
- (id)view;

// Image: /System/Library/AccessibilityBundles/PhotosUICore.axbundle/PhotosUICore

+ (Class)safeCategoryBaseClass;

- (void)_accessibilityLoadAccessibilityInformation;
- (void)_updateLoopingVideoView;

@end
