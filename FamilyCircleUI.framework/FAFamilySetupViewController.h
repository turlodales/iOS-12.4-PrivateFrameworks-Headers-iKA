/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

@interface FAFamilySetupViewController : AAUIBleachedNavigationController <FAFamilySetupPageDelegate, RemoteUIControllerDelegate> {
    ACAccount * _account;
    ACAccountStore * _accountStore;
    NSMutableURLRequest * _currentRemoteUIRequest;
    AAGrandSlamSigner * _grandSlamSigner;
    bool  _isShowingSpinner;
    UINavigationItem * _navigationItemShowingSpinner;
    NSArray * _originalRightBarButtonItems;
    AAUIRemoteUIController * _remoteUIController;
    UIActivityIndicatorView * _spinnerView;
    NSMutableURLRequest * _startRemoteUIRequest;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FASetupDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_closeButtonWasTapped:(id)arg1;
- (id)_createCloseButton;
- (void)_hideActivitySpinnerInNavigationBar;
- (id)_initWithAccount:(id)arg1 grandSlamSigner:(id)arg2 rootViewController:(id)arg3;
- (bool)_isRunningInSettings;
- (void)_loadRemoteUIPages;
- (void)_remoteUIDidCancel;
- (void)_sendUserToiTunesSettings;
- (void)_showActivitySpinnerInNavigationBar;
- (id)_urlForLaunchingSettings;
- (void)dealloc;
- (void)familySetupPage:(id)arg1 didCompleteWithSuccess:(bool)arg2;
- (id)initTrimmedFlowWithAccount:(id)arg1 grandSlamSigner:(id)arg2;
- (id)initWithAccount:(id)arg1 grandSlamSigner:(id)arg2 familyEligibilityResponse:(id)arg3;
- (void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2;
- (bool)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(bool)arg3;
- (void)remoteUIControllerDidDismiss:(id)arg1;
- (bool)shouldAutorotate;
- (void)viewDidLoad;

@end
