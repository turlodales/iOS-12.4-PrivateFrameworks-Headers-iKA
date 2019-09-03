/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSASPersonModel : MSASModelBase {
    bool  _shouldDownloadEarliestPhotosFirst;
}

@property (nonatomic) bool shouldDownloadEarliestPhotosFirst;

- (id)_commandWithMinimumIdentifier:(id)arg1 outParams:(id*)arg2 outCommandIdentifier:(long long*)arg3 outPersonID:(id*)arg4 outAlbumGUID:(id*)arg5 outAssetCollectionGUID:(id*)arg6;
- (void)addPendingAssetCollectionGUID:(id)arg1 albumGUID:(id)arg2;
- (int)assetCollectionsInUploadQueue;
- (int)assetCollectionsInUploadQueueAlbumGUID:(id)arg1;
- (int)assetsInDownloadQueue;
- (int)assetsInDownloadQueueAlbumGUID:(id)arg1;
- (id)commandAtHeadOfQueueOutParams:(id*)arg1 outCommandIdentifier:(long long*)arg2 outPersonID:(id*)arg3 outAlbumGUID:(id*)arg4 outAssetCollectionGUID:(id*)arg5;
- (id)commandWithMinimumIdentifier:(long long)arg1 outParams:(id*)arg2 outCommandIdentifier:(long long*)arg3 outPersonID:(id*)arg4 outAlbumGUID:(id*)arg5 outAssetCollectionGUID:(id*)arg6;
- (long long)countOfEnqueuedCommand:(id)arg1;
- (long long)countOfEnqueuedCommands;
- (int)dbQueueAssetCountAlbumGUID:(id)arg1 inQueue:(id)arg2;
- (void)dbQueueEnqueueCommand:(id)arg1 params:(id)arg2 personID:(id)arg3 albumGUID:(id)arg4 assetCollectionGUID:(id)arg5;
- (void)dbQueueEnqueueCommand:(id)arg1 params:(id)arg2 personID:(id)arg3 albumGUID:(id)arg4 assetCollectionGUID:(id)arg5 sequenceNumber:(long long)arg6;
- (bool)dbQueueIsAssetCollectionWithGUIDPending:(id)arg1;
- (bool)dbQueueIsGUIDQueued:(id)arg1 inQueue:(id)arg2;
- (long long)dbQueueNextCommandSequenceNumber;
- (void)dbQueueRemoveAllEntriesFromTable:(id)arg1;
- (void)dbQueueRemoveCommandAtHeadOfQueue;
- (void)dbQueueRemoveCommandIdentifier:(long long)arg1;
- (void)dbQueueRemoveGUID:(id)arg1 fromQueue:(id)arg2;
- (void)dbQueueRequeuePendingCommandsWithAlbumGUID:(id)arg1;
- (void)dbQueueRequeuePendingCommandsWithAssetCollectionGUID:(id)arg1;
- (void)dbQueueRequeuePendingCommandsWithQueryStatement:(struct sqlite3_stmt { }*)arg1 deleteStatement:(struct sqlite3_stmt { }*)arg2;
- (void)dbQueueSetErrorCount:(int)arg1 forGUID:(id)arg2 inQueue:(id)arg3;
- (long long)dbQueueSmallestCommandSequenceNumber;
- (bool)dbQueueUpgradeFromDatabaseVersion:(int)arg1 currentVersion:(int)arg2;
- (void)enqueueAssetCollectionForUpload:(id)arg1 album:(id)arg2;
- (void)enqueueAssetForDownload:(id)arg1 inAlbumWithGUID:(id)arg2;
- (void)enqueueCommand:(id)arg1 params:(id)arg2 personID:(id)arg3 albumGUID:(id)arg4 assetCollectionGUID:(id)arg5;
- (void)enqueueCommand:(id)arg1 params:(id)arg2 personID:(id)arg3 albumGUID:(id)arg4 pendingOnAssetCollectionGUID:(id)arg5;
- (void)enqueueCommandAtHeadOfQueue:(id)arg1 params:(id)arg2 personID:(id)arg3 albumGUID:(id)arg4 assetCollectionGUID:(id)arg5;
- (bool)hasItemsForDownloadCountFocusAlbumGUID:(id)arg1 focusAssetCollectionGUID:(id)arg2;
- (id)initWithPersonID:(id)arg1;
- (bool)isAssetCollectionWithGUIDPending:(id)arg1;
- (int)itemsForDownloadCountFocusAlbumGUID:(id)arg1 focusAssetCollectionGUID:(id)arg2;
- (id)itemsForUpload;
- (id)nextItemsForDownloadFocusAlbumGUID:(id)arg1 focusAssetCollectionGUID:(id)arg2 maxCount:(int)arg3;
- (id)nextItemsForDownloadFocusAlbumGUID:(id)arg1 focusAssetCollectionGUID:(id)arg2 thumbnails:(bool)arg3 maxCount:(int)arg4 isInflight:(bool)arg5;
- (id)nextItemsForUploadAlbumGUID:(id)arg1 maxPriority:(int)arg2 maxCount:(int)arg3;
- (id)nextItemsForUploadMaxCount:(int)arg1;
- (long long)nextMMCSItemID;
- (void)purgeCompletionBlock:(id /* block */)arg1;
- (void)removeAssetCollectionsFromUploadQueue:(id)arg1;
- (void)removeAssetsFromDownloadQueue:(id)arg1;
- (void)removeCommandIdentifier:(long long)arg1;
- (void)requeuePendingAssetCollectionGUID:(id)arg1;
- (void)requeuePendingAssetCollectionsWithAlbumGUID:(id)arg1;
- (void)setErrorCount:(int)arg1 forAssetCollectionInUploadQueue:(id)arg2;
- (void)setErrorCount:(int)arg1 forAssetInDownloadQueue:(id)arg2;
- (void)setInFlightAssets:(id)arg1;
- (void)setParams:(id)arg1 forCommandWithIdentifier:(long long)arg2;
- (void)setShouldDownloadEarliestPhotosFirst:(bool)arg1;
- (bool)shouldDownloadEarliestPhotosFirst;

@end
