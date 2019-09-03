/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPassUpgradeRequest : NSObject <NSSecureCoding> {
    NSDictionary * _fields;
    PKOSVersionRequirement * _minimumOSVersion;
    NSArray * _paymentApplicationIdentifiers;
    NSString * _secureElementIdentifier;
    unsigned long long  _type;
}

@property (nonatomic, readonly) NSDictionary *fields;
@property (nonatomic, readonly) PKOSVersionRequirement *minimumOSVersion;
@property (nonatomic, readonly) NSArray *paymentApplicationIdentifiers;
@property (nonatomic, readonly) NSString *secureElementIdentifier;
@property (nonatomic, readonly) unsigned long long type;

+ (id)passUpgradeRequestFromDictionary:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)fields;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)minimumOSVersion;
- (id)paymentApplicationIdentifiers;
- (id)secureElementIdentifier;
- (unsigned long long)type;

@end