/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicTermsAgreementViewController : UIViewController {
    bool  _accepting;
    UIBarButtonItem * _acceptingBarButtonItem;
    UIBarButtonItem * _agreeBarButtonItem;
    UIBarButtonItem * _cancelBarButtonItem;
    <MusicTermsAgreementViewControllerDelegate> * _delegate;
    bool  _loading;
    UIActivityIndicatorView * _loadingActivityIndicatorView;
    UILabel * _loadingLabel;
    UIBarButtonItem * _sendEmailBarButtonItem;
    NSString * _termsText;
    UITextView * _termsTextView;
}

@property (getter=isAccepting, nonatomic) bool accepting;
@property (nonatomic) <MusicTermsAgreementViewControllerDelegate> *delegate;
@property (getter=isLoading, nonatomic) bool loading;
@property (nonatomic, copy) NSString *termsText;

- (void).cxx_destruct;
- (void)_agreeBarButtonItemAction:(id)arg1;
- (void)_cancelBarButtonItemAction:(id)arg1;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_sendEmailBarButtonItemAction:(id)arg1;
- (void)_updateBarButtonItems;
- (void)_updateViewState;
- (id)contentScrollView;
- (void)dealloc;
- (id)delegate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isAccepting;
- (bool)isLoading;
- (void)setAccepting:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLoading:(bool)arg1;
- (void)setTermsText:(id)arg1;
- (id)termsText;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
