/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMCoreOrganizationSettings : RMUniquedManagedObject <RMUniquelySerializableManagedObject>

@property (nonatomic) bool allLimitsEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) RMCoreUser *user;

+ (id)fetchOrCreateWithDictionaryRepresentation:(id)arg1 inContext:(id)arg2 error:(id*)arg3;
+ (id)fetchResultsRequestsForChangesToOrganizationSettingsForUserWithDSID:(id)arg1;

- (void)_changeAppLimitsFromAskToWarn:(id)arg1;
- (void)delete;
- (id)dictionaryRepresentation;
- (bool)updateWithDictionaryRepresentation:(id)arg1;

@end
