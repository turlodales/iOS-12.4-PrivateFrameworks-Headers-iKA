/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTSettingSyncServer : BLTRemoteObject <BLTSettingSyncing, BLTSettingsSendSerializerDelegate> {
    <BLTSettingSyncingClient> * _delegate;
    BLTPreviouslySentMessageStore * _sectionInfoPreviouslySentMessageStore;
    BLTPreviouslySentMessageStore * _sectionSubtypeParametersIconsPreviouslySentMessageStore;
    BLTSettingsSendSerializerPassthrough * _settingSendSerializer;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BLTSettingSyncingClient> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) BLTPreviouslySentMessageStore *sectionInfoPreviouslySentMessageStore;
@property (nonatomic, retain) BLTPreviouslySentMessageStore *sectionSubtypeParametersIconsPreviouslySentMessageStore;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleResponse:(id)arg1;
- (void)clearSectionInfoSentCache;
- (id)delegate;
- (void)handleFileURL:(id)arg1 extraMetadata:(id)arg2;
- (void)handleRemoveSectionRequest:(id)arg1;
- (void)handleSetNotificationsAlertLevelRequest:(id)arg1;
- (void)handleSetNotificationsGroupingRequest:(id)arg1;
- (void)handleSetSectionInfoRequest:(id)arg1;
- (void)handleSetSectionInfoResponse:(id)arg1;
- (void)handleSetSectionSubtypeParametersIconRequest:(id)arg1;
- (void)handleSetSectionSubtypeParametersIconResponse:(id)arg1;
- (id)init;
- (bool)isSectionInfoSentCacheEmpty;
- (void)registerProtobufHandlers;
- (void)removeSectionInfoSentCacheForSectionID:(id)arg1;
- (void)removeSectionWithSectionID:(id)arg1;
- (void)removeSectionWithSectionID:(id)arg1 sent:(id /* block */)arg2;
- (id)sectionInfoPreviouslySentMessageStore;
- (id)sectionSubtypeParametersIconsPreviouslySentMessageStore;
- (void)sendSpooledRequestsNowWithSent:(id /* block */)arg1 withAcknowledgement:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (void)setNotificationsGrouping:(int)arg1 sectionID:(id)arg2;
- (void)setNotificationsGrouping:(int)arg1 sectionID:(id)arg2 spoolToFile:(bool)arg3;
- (void)setNotificationsLevel:(unsigned long long)arg1 sectionID:(id)arg2 mirror:(bool)arg3;
- (void)setNotificationsLevel:(unsigned long long)arg1 sectionID:(id)arg2 mirror:(bool)arg3 spoolToFile:(bool)arg4;
- (void)setSectionInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)setSectionInfo:(id)arg1 withQueue:(id)arg2 withSent:(id /* block */)arg3 withAcknowledgement:(id /* block */)arg4 spoolToFile:(bool)arg5;
- (void)setSectionInfoPreviouslySentMessageStore:(id)arg1;
- (void)setSectionSubtypeParametersIcon:(id)arg1 forSectionID:(id)arg2 forSubtypeID:(long long)arg3;
- (void)setSectionSubtypeParametersIcon:(id)arg1 forSectionID:(id)arg2 forSubtypeID:(long long)arg3 withQueue:(id)arg4 withSent:(id /* block */)arg5 withAcknowledgement:(id /* block */)arg6 spoolToFile:(bool)arg7;
- (void)setSectionSubtypeParametersIconsPreviouslySentMessageStore:(id)arg1;

@end
