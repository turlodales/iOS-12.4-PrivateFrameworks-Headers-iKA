/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSCardMetadataRegistrationResult : NSObject {
    NSData * _artwork;
    NSString * _cardArtwork;
    long long  _cardType;
    NSString * _descriptionLong;
    NSString * _descriptionShort;
    NSDictionary * _dictionary;
    long long  _paymentNetwork;
    NSString * _serialNumber;
    NSString * _suffix;
}

@property (nonatomic, retain) NSData *artwork;
@property (nonatomic, retain) NSString *cardArtwork;
@property (nonatomic) long long cardType;
@property (nonatomic, retain) NSString *descriptionLong;
@property (nonatomic, retain) NSString *descriptionShort;
@property (nonatomic, retain) NSDictionary *dictionary;
@property (nonatomic) long long paymentNetwork;
@property (nonatomic, retain) NSString *serialNumber;
@property (nonatomic, retain) NSString *suffix;

- (void).cxx_destruct;
- (id)artwork;
- (id)cardArtwork;
- (long long)cardType;
- (id)descriptionLong;
- (id)descriptionShort;
- (id)dictionary;
- (id)init;
- (id)initWithCardArtwork:(id)arg1 cardType:(long long)arg2 descriptionLong:(id)arg3 descriptionShort:(id)arg4 paymentNetwork:(long long)arg5 serialNumber:(id)arg6 suffix:(id)arg7;
- (long long)paymentNetwork;
- (id)serialNumber;
- (void)setArtwork:(id)arg1;
- (void)setCardArtwork:(id)arg1;
- (void)setCardType:(long long)arg1;
- (void)setDescriptionLong:(id)arg1;
- (void)setDescriptionShort:(id)arg1;
- (void)setDictionary:(id)arg1;
- (void)setPaymentNetwork:(long long)arg1;
- (void)setSerialNumber:(id)arg1;
- (void)setSuffix:(id)arg1;
- (id)suffix;

@end
