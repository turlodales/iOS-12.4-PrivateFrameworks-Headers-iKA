/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKTranscriptPluginChatItem : CKMessagePartChatItem {
    <CKTranscriptBalloonPluginController> * _balloonController;
    IMTranscriptPluginChatItem * _imTranscriptPluginChatItem;
    bool  _isAppearing;
    bool  _isHandwriting;
}

@property (nonatomic, readonly) IMTranscriptPluginChatItem *IMChatItem;
@property (nonatomic) <CKTranscriptBalloonPluginController> *balloonController;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) UIViewController *contentViewController;
@property (nonatomic, readonly) UIView<CKTranscriptPluginView> *extensableView;
@property (nonatomic, readonly) UIViewController *extensibleViewController;
@property (nonatomic, retain) IMTranscriptPluginChatItem *imTranscriptPluginChatItem;
@property (nonatomic) bool isAppearing;
@property (nonatomic, readonly) bool isHandwriting;
@property (nonatomic, readonly) bool isInteractive;
@property (nonatomic, readonly) bool isPlayed;
@property (nonatomic, readonly) bool isSaved;
@property (nonatomic, readonly) bool wantsBalloonGradient;
@property (nonatomic, readonly) bool wantsOutline;
@property (nonatomic, readonly) bool wantsTranscriptGroupMonograms;

- (void).cxx_destruct;
- (id)balloonController;
- (Class)balloonViewClass;
- (id)bundleIdentifier;
- (bool)canCopy;
- (bool)canForward;
- (Class)cellClass;
- (id)cellIdentifier;
- (id)composition;
- (void)configureWithConversationID:(id)arg1 recipients:(id)arg2 isBusiness:(bool)arg3;
- (id)contact;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)contentViewController;
- (id)dragItemProvider;
- (id)extensableView;
- (id)extensibleViewController;
- (bool)handlePresentationAction;
- (id)imTranscriptPluginChatItem;
- (id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2;
- (bool)isAppearing;
- (bool)isHandwriting;
- (bool)isInteractive;
- (bool)isPlayed;
- (bool)isSaved;
- (struct CGSize { double x1; double x2; })loadSizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(out struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (id)loadTranscriptDrawerText;
- (id)menuTitle;
- (id)message;
- (id)pasteboardItems;
- (void)performHostAppResume;
- (void)pluginContentViewDidDisappear;
- (void)pluginContentViewWillAppear;
- (void)pluginContentViewWillDisappear;
- (id)pluginDisplayContainer;
- (void)releaseBalloonControllerIfNeeded;
- (void)relinquishBalloonController;
- (id)sender;
- (void)setBalloonController:(id)arg1;
- (void)setImTranscriptPluginChatItem:(id)arg1;
- (void)setIsAppearing:(bool)arg1;
- (bool)shouldSnapshot;
- (id)snapshotGUIDForPluginPayload:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })textAlignmentInsets;
- (BOOL)transcriptOrientation;
- (bool)wantsBalloonGradient;
- (bool)wantsDrawerLayout;
- (bool)wantsOutline;
- (bool)wantsTranscriptGroupMonograms;

@end
