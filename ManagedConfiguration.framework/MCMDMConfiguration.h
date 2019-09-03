/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCMDMConfiguration : NSObject {
    NSObject<OS_dispatch_queue> * _memberQueue;
    int  _memberQueueAccessRights;
    NSURL * _memberQueueCheckInURL;
    struct __SecIdentity { } * _memberQueueIdentity;
    NSDictionary * _memberQueueMDMOptions;
    NSString * _memberQueueManagingProfileIdentifier;
    NSDictionary * _memberQueueOrganizationInfo;
    NSString * _memberQueuePushMagic;
    NSURL * _memberQueueServerURL;
    bool  _memberQueueSignMessage;
    NSString * _memberQueueTopic;
    bool  _memberQueueUseDevelopmentAPNS;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *memberQueue;
@property (nonatomic) int memberQueueAccessRights;
@property (nonatomic, retain) NSURL *memberQueueCheckInURL;
@property (nonatomic) struct __SecIdentity { }*memberQueueIdentity;
@property (nonatomic, retain) NSDictionary *memberQueueMDMOptions;
@property (nonatomic, retain) NSString *memberQueueManagingProfileIdentifier;
@property (nonatomic, retain) NSDictionary *memberQueueOrganizationInfo;
@property (nonatomic, retain) NSString *memberQueuePushMagic;
@property (nonatomic, retain) NSURL *memberQueueServerURL;
@property (nonatomic) bool memberQueueSignMessage;
@property (nonatomic, retain) NSString *memberQueueTopic;
@property (nonatomic) bool memberQueueUseDevelopmentAPNS;

+ (id)sharedConfiguration;

- (void).cxx_destruct;
- (id)init;
- (id)memberQueue;
- (int)memberQueueAccessRights;
- (id)memberQueueCheckInURL;
- (void)memberQueueForgetCurrentConfiguration;
- (struct __SecIdentity { }*)memberQueueIdentity;
- (id)memberQueueMDMOptions;
- (id)memberQueueManagingProfileIdentifier;
- (id)memberQueueOrganizationInfo;
- (id)memberQueuePushMagic;
- (id)memberQueueServerURL;
- (bool)memberQueueSignMessage;
- (id)memberQueueTopic;
- (bool)memberQueueUseDevelopmentAPNS;
- (bool)readConfigurationOutError:(id*)arg1;
- (void)refreshDetailsFromDisk;
- (void)setMemberQueue:(id)arg1;
- (void)setMemberQueueAccessRights:(int)arg1;
- (void)setMemberQueueCheckInURL:(id)arg1;
- (void)setMemberQueueIdentity:(struct __SecIdentity { }*)arg1;
- (void)setMemberQueueMDMOptions:(id)arg1;
- (void)setMemberQueueManagingProfileIdentifier:(id)arg1;
- (void)setMemberQueueOrganizationInfo:(id)arg1;
- (void)setMemberQueuePushMagic:(id)arg1;
- (void)setMemberQueueServerURL:(id)arg1;
- (void)setMemberQueueSignMessage:(bool)arg1;
- (void)setMemberQueueTopic:(id)arg1;
- (void)setMemberQueueUseDevelopmentAPNS:(bool)arg1;

@end
