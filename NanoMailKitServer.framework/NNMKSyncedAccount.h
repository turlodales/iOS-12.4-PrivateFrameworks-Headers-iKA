/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKSyncedAccount : NSObject {
    NSString * _accountId;
    NSString * _displayName;
    NSArray * _emailAddresses;
    NSString * _localId;
    unsigned long long  _resendInterval;
    bool  _resendRequested;
    bool  _shouldArchive;
    unsigned long long  _sourceType;
    NSString * _username;
}

@property (nonatomic, retain) NSString *accountId;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, retain) NSArray *emailAddresses;
@property (nonatomic, retain) NSString *localId;
@property (nonatomic) unsigned long long resendInterval;
@property (nonatomic) bool resendRequested;
@property (nonatomic) bool shouldArchive;
@property (nonatomic) unsigned long long sourceType;
@property (nonatomic, retain) NSString *username;

- (void).cxx_destruct;
- (id)account;
- (id)accountId;
- (id)displayName;
- (id)emailAddresses;
- (id)init;
- (id)initWithAccount:(id)arg1;
- (id)localId;
- (unsigned long long)resendInterval;
- (bool)resendRequested;
- (void)setAccountId:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setEmailAddresses:(id)arg1;
- (void)setLocalId:(id)arg1;
- (void)setResendInterval:(unsigned long long)arg1;
- (void)setResendRequested:(bool)arg1;
- (void)setShouldArchive:(bool)arg1;
- (void)setSourceType:(unsigned long long)arg1;
- (void)setUsername:(id)arg1;
- (bool)shouldArchive;
- (unsigned long long)sourceType;
- (id)username;

@end
