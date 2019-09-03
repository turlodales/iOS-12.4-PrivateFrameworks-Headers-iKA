/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentProvisioningControllerCredentialQueue : NSObject {
    NSMutableArray * _credentials;
    unsigned long long  _currentIndex;
}

- (void).cxx_destruct;
- (unsigned long long)count;
- (id)init;
- (id)nextCredentialToProvision;
- (unsigned long long)remaining;
- (void)removeCredential:(id)arg1;
- (void)setCredentialsToProvision:(id)arg1;
- (void)setCurrentCredential:(id)arg1;

@end
