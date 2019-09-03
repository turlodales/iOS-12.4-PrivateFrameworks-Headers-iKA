/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKBillPaymentSuggestedAmount : NSObject {
    NSDecimalNumber * _amount;
    unsigned long long  _category;
    long long  _merchantCategory;
    NSString * _message;
    NSString * _title;
}

@property (nonatomic, copy) NSDecimalNumber *amount;
@property (nonatomic) unsigned long long category;
@property (nonatomic) long long merchantCategory;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)amount;
- (unsigned long long)category;
- (long long)compare:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithAmount:(id)arg1 category:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (long long)merchantCategory;
- (id)message;
- (void)setAmount:(id)arg1;
- (void)setCategory:(unsigned long long)arg1;
- (void)setMerchantCategory:(long long)arg1;
- (void)setMessage:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end