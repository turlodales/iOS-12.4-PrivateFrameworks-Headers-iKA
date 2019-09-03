/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMUser : RMUniquedManagedObject

@property (nonatomic, copy) NSString *altID;
@property (nonatomic, retain) NSSet *appliedActivations;
@property (nonatomic, retain) NSSet *askForTimeRequests;
@property (nonatomic, retain) NSSet *askForTimeResponses;
@property (nonatomic, copy) NSNumber *dsid;
@property (nonatomic) bool isMe;
@property (nonatomic) bool isOrganizer;
@property (nonatomic, retain) RMManagementSettings *managementSettings;
@property (nonatomic, copy) NSString *memberType;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) RMOrganization *organization;
@property (nonatomic) short role;
@property (nonatomic, copy) NSString *uri;
@property (nonatomic, retain) RMUsageSettings *usageSettings;
@property (nonatomic, retain) NSSet *userDevicePairs;

+ (id)fetchRequestForManagedUsersBelongingToOrganizationWithIdentifier:(id)arg1;
+ (id)fetchRequestForMeInOrganizationWithIdentifier:(id)arg1;
+ (id)fetchRequestForUsersBelongingToOrganizationWithIdentifier:(id)arg1;
+ (id)fetchRequestForUsersBelongingToOrganizationWithIdentifier:(id)arg1 altID:(id)arg2;
+ (id)fetchRequestForUsersBelongingToOrganizationWithIdentifier:(id)arg1 userDSID:(id)arg2;
+ (id)shouldRequestMoreTimeForLocalUserWithManagedObjectContext:(id)arg1 error:(id*)arg2;

- (id)computeUniqueIdentifier;
- (void)didChangeValueForKey:(id)arg1;

@end
