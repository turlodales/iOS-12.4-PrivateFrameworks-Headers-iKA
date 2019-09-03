/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDSignedServerPublicKeyURLRequest : CKDURLRequest {
    struct __SecPolicy { } * _certificateTrustPolicy;
    NSURL * _plistURL;
    CKPublicKey * _verifiedPublicKey;
}

@property (nonatomic, readonly) struct __SecPolicy { }*certificateTrustPolicy;
@property (nonatomic, readonly) NSURL *plistURL;
@property (retain) CKPublicKey *verifiedPublicKey;

+ (id)certificateListServerPlist:(id)arg1;
+ (struct __SecTrust { }*)createTrustEvalFromCertificateList:(id)arg1 verifiedWithPolicy:(struct __SecPolicy { }*)arg2;
+ (id)nearestExpirationInCertificateList:(id)arg1;
+ (bool)serverResponseIsComplete:(id)arg1;
+ (bool)verifyData:(id)arg1 withSignature:(id)arg2 usingKey:(struct __SecKey { }*)arg3;
+ (bool)verifyInteger:(long long)arg1 withSignature:(id)arg2 usingKey:(struct __SecKey { }*)arg3;

- (void).cxx_destruct;
- (bool)allowsAnonymousAccount;
- (bool)canVerifySignedPlistValues:(id)arg1 withKey:(struct __SecKey { }*)arg2;
- (struct __SecPolicy { }*)certificateTrustPolicy;
- (void)dealloc;
- (bool)hasRequestBody;
- (id)httpMethod;
- (id)initWithPlistURL:(id)arg1 verifyWithPolicy:(struct __SecPolicy { }*)arg2;
- (long long)partitionType;
- (id)plistURL;
- (void)requestDidParsePlistObject:(id)arg1;
- (bool)requiresConfiguration;
- (bool)requiresDeviceID;
- (bool)requiresSignature;
- (bool)requiresTokenRegistration;
- (long long)serverType;
- (void)setVerifiedPublicKey:(id)arg1;
- (id)url;
- (id)verifiedPublicKey;

@end
