/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPassSetupAutomaticPresentationController : PKPaymentSetupTableViewController <PKPaymentVerificationControllerDelegate> {
    PKTableHeaderView * _headerView;
    PKPass * _pass;
    UIImage * _passSnapshot;
    PKPassView * _passView;
    PKPaymentProvisioningController * _provisioningController;
    unsigned long long  _selectedIndex;
    <PKPaymentSetupViewControllerDelegate> * _setupDelegate;
    PKPaymentVerificationController * _verificationController;
    PKPaymentWebService * _webService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PKPass *pass;
@property (nonatomic) <PKPaymentSetupViewControllerDelegate> *setupDelegate;
@property (readonly) Class superclass;

+ (bool)passNeedsAutomaticPresentationSetup:(id)arg1;

- (void).cxx_destruct;
- (id)_buttonTitleForPaymentPassState:(long long)arg1;
- (id)_contextSpecificStringForAggDKey:(id)arg1;
- (void)_dismissView;
- (long long)_paymentPassState;
- (void)_presentNextCredentialWithCompletion:(id /* block */)arg1;
- (void)_saveSettings;
- (void)_showAddToWatchOfferForPass:(id)arg1;
- (void)_showVerificationForPass:(id)arg1;
- (void)_terminateSetupFlow;
- (void)cancel:(id)arg1;
- (void)done:(id)arg1;
- (id)initWithPass:(id)arg1;
- (id)initWithPaymentWebService:(id)arg1 pass:(id)arg2 context:(long long)arg3 provisioningController:(id)arg4;
- (void)loadView;
- (void)logAggDContextSpecificCheckpointForKey:(id)arg1;
- (id)pass;
- (void)presentVerificationViewController:(id)arg1 animated:(bool)arg2;
- (void)setSetupDelegate:(id)arg1;
- (id)setupDelegate;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewWillLayoutSubviews;

@end
