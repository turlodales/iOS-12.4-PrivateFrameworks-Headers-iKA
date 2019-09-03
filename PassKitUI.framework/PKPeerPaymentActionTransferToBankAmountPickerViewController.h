/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPeerPaymentActionTransferToBankAmountPickerViewController : PKPeerPaymentActionViewController <PKEnterCurrencyAmountViewDelegate, PKEnterValueNewBalanceViewDelegate> {
    PKEnterCurrencyAmountView * _enterCurrencyAmountView;
    PKEnterValueNewBalanceView * _newBalanceView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_currentAmountDidChangeTo:(id)arg1 shouldGenerateNewSuggestions:(bool)arg2;
- (bool)_isCurrentAmountValid;
- (id)_nextBarButton;
- (void)_nextBarButtonPressed:(id)arg1;
- (bool)_shouldShakeWithNewAmount:(id)arg1;
- (void)_updateBarButtonEnabledState;
- (void)_updateCurrentAmount:(id)arg1 shouldGenerateNewSuggestions:(bool)arg2;
- (bool)enterCurrencyAmountView:(id)arg1 shouldChangeAmountFrom:(id)arg2 to:(id)arg3;
- (void)enterCurrencyAmountViewDidChangeAmount:(id)arg1;
- (id)initWithPaymentPass:(id)arg1 webService:(id)arg2 context:(long long)arg3;
- (void)loadView;
- (void)setCardBalance:(id)arg1;
- (void)setMaxBalance:(id)arg1;
- (void)setMaxLoadAmount:(id)arg1;
- (void)setMinBalance:(id)arg1;
- (void)setMinLoadAmount:(id)arg1;
- (void)updateAccountValues;
- (void)updateFirstResponder;
- (void)viewWillLayoutSubviews;
- (void)willDismissViewController;

@end