/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXSharedAlbumInvitationView : UIView <PXSettingsKeyObserver> {
    PXCapsuleButton * _acceptButton;
    UILabel * _albumTitleLabel;
    unsigned long long  _avatarImageTag;
    UIImageView * _avatarView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    double  _cornerRadius;
    PXCapsuleButton * _declineButton;
    <PXSharedAlbumInvitationViewDelegate> * _delegate;
    UILabel * _infoLabel;
    PXFeedInvitationSectionInfo * _invitationSectionInfo;
    UILabel * _reportJunkLabel;
    PXRoundedCornerOverlayView * _roundedCornerOverlayView;
    <PLCloudSharedAlbumProtocol> * _sharedAlbum;
    bool  _useInPopover;
}

@property (nonatomic, retain) PXCapsuleButton *acceptButton;
@property (nonatomic, retain) UILabel *albumTitleLabel;
@property (nonatomic) unsigned long long avatarImageTag;
@property (nonatomic, retain) UIImageView *avatarView;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (nonatomic) double cornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) PXCapsuleButton *declineButton;
@property (nonatomic) <PXSharedAlbumInvitationViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UILabel *infoLabel;
@property (nonatomic, retain) PXFeedInvitationSectionInfo *invitationSectionInfo;
@property (nonatomic, retain) UILabel *reportJunkLabel;
@property (nonatomic, retain) PXRoundedCornerOverlayView *roundedCornerOverlayView;
@property (nonatomic, retain) <PLCloudSharedAlbumProtocol> *sharedAlbum;
@property (readonly) Class superclass;
@property (nonatomic) bool useInPopover;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (void)preloadResources;

- (void).cxx_destruct;
- (void)_acceptButtonTapped:(id)arg1;
- (id)_actionButtonWithTitle:(id)arg1 action:(SEL)arg2 buttonColor:(id)arg3 titleColor:(id)arg4;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (id)_declineButtonColor;
- (void)_declineButtonTapped:(id)arg1;
- (void)_enableUserInteractions:(bool)arg1;
- (void)_handlePersonImage:(id)arg1 imageTag:(unsigned long long)arg2;
- (void)_openiCloudSettings;
- (id)_parentViewBackgroundColor;
- (struct CGSize { double x1; double x2; })_performLayoutInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 updateSubviewFrames:(bool)arg2;
- (void)_presentToastWithTitle:(id)arg1;
- (void)_reportJunk;
- (void)_reportJunkLabelTapped:(id)arg1;
- (id)_roundedCornerViewBackgroundColor;
- (void)_showOutOfNetworkInvitationMessageForSharedAlbum:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_updateAlbumTitleLabel;
- (void)_updateAvatarImage:(unsigned long long)arg1;
- (void)_updateColors;
- (void)_updateInfoLabel;
- (void)_updateReportJunkLabel;
- (void)_updateRoundedCornerOverlayView;
- (void)_updateUI;
- (id)acceptButton;
- (id)albumTitleLabel;
- (unsigned long long)avatarImageTag;
- (id)avatarView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (double)cornerRadius;
- (void)dealloc;
- (id)declineButton;
- (id)delegate;
- (id)infoLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)invitationSectionInfo;
- (void)layoutSubviews;
- (id)reportJunkLabel;
- (id)roundedCornerOverlayView;
- (void)setAcceptButton:(id)arg1;
- (void)setAlbumTitleLabel:(id)arg1;
- (void)setAvatarImageTag:(unsigned long long)arg1;
- (void)setAvatarView:(id)arg1;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setDeclineButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInfoLabel:(id)arg1;
- (void)setInvitationSectionInfo:(id)arg1;
- (void)setReportJunkLabel:(id)arg1;
- (void)setRoundedCornerOverlayView:(id)arg1;
- (void)setSharedAlbum:(id)arg1;
- (void)setUseInPopover:(bool)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)sharedAlbum;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)useInPopover;

// Image: /System/Library/AccessibilityBundles/PhotosUICore.axbundle/PhotosUICore

+ (Class)safeCategoryBaseClass;

- (id)_accessibilitySupplementaryFooterViews;
- (id)accessibilityLabel;
- (bool)isAccessibilityElement;

@end
