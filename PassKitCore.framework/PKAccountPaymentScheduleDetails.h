/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKAccountPaymentScheduleDetails : NSObject <NSSecureCoding> {
    long long  _frequency;
    long long  _frequencyDay;
    NSString * _paymentTermsIdentifier;
    long long  _preset;
    NSTimeZone * _productTimeZone;
    NSDate * _scheduledDate;
}

@property (nonatomic) long long frequency;
@property (nonatomic) long long frequencyDay;
@property (nonatomic, copy) NSString *paymentTermsIdentifier;
@property (nonatomic) long long preset;
@property (nonatomic, copy) NSDate *scheduledDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)frequency;
- (long long)frequencyDay;
- (unsigned long long)hash;
- (id)hashString;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 productTimeZone:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionaryRepresentation;
- (id)jsonString;
- (id)paymentTermsIdentifier;
- (long long)preset;
- (id)scheduledDate;
- (void)setFrequency:(long long)arg1;
- (void)setFrequencyDay:(long long)arg1;
- (void)setPaymentTermsIdentifier:(id)arg1;
- (void)setPreset:(long long)arg1;
- (void)setScheduleTimeZone:(id)arg1;
- (void)setScheduledDate:(id)arg1;

@end
