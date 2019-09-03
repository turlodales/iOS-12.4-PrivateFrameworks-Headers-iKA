/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKTransactionHistoryHeaderItem : NSObject <PKDashboardItem> {
    CNContact * _contact;
    PKMerchant * _merchant;
    NSString * _peerPaymentCounterpartHandle;
    PKPaymentTransactionGroup * _transactionGroup;
    long long  _transactionType;
    unsigned long long  _type;
}

@property (nonatomic, retain) CNContact *contact;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PKMerchant *merchant;
@property (nonatomic, copy) NSString *peerPaymentCounterpartHandle;
@property (readonly) Class superclass;
@property (nonatomic, retain) PKPaymentTransactionGroup *transactionGroup;
@property (nonatomic) long long transactionType;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (id)contact;
- (id)initWithType:(unsigned long long)arg1;
- (id)merchant;
- (id)peerPaymentCounterpartHandle;
- (void)setContact:(id)arg1;
- (void)setMerchant:(id)arg1;
- (void)setPeerPaymentCounterpartHandle:(id)arg1;
- (void)setTransactionGroup:(id)arg1;
- (void)setTransactionType:(long long)arg1;
- (id)transactionGroup;
- (long long)transactionType;
- (unsigned long long)type;

@end