/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSASProtocol : NSObject <NSURLConnectionDelegate> {
    NSURL * _baseURL;
    MSASPConnectionGate * _gate;
    NSString * _headerVersion;
    bool  _isShuttingDown;
    NSObject<OS_dispatch_queue> * _memberQueue;
    NSObject<OS_dispatch_group> * _pendingConnectionsGroup;
    NSObject<OS_dispatch_queue> * _pendingConnectionsQueue;
    NSString * _personID;
    NSString * _serverSideConfigVersion;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) NSURL *baseURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) MSASPConnectionGate *gate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *headerVersion;
@property (nonatomic) bool isShuttingDown;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *memberQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *pendingConnectionsGroup;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *pendingConnectionsQueue;
@property (nonatomic, readonly, retain) NSString *personID;
@property (nonatomic, retain) NSString *serverSideConfigVersion;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (id)HTTPErrorWithStatusCode:(long long)arg1;
- (id)_addCommentURLWithBaseURL:(id)arg1;
- (id)_albumStateURL;
- (id)_albumSummaryURLWithBaseURL:(id)arg1;
- (id)_couldNotReauthorizeError;
- (id)_createAlbumURL;
- (id)_deleteAssetsURLWithBaseURL:(id)arg1;
- (id)_deleteCommentURLWithBaseURL:(id)arg1;
- (id)_deleteURLWithBaseURL:(id)arg1;
- (id)_enableMultipleContributorsURLWithBaseURL:(id)arg1;
- (id)_enablePublicAccessURLWithBaseURL:(id)arg1;
- (id)_getAlbumURL;
- (id)_getAssetsURLWithBaseURL:(id)arg1;
- (id)_getChangesURL;
- (id)_getCommentsURLWithBaseURL:(id)arg1;
- (id)_getTokensURLWithBaseURL:(id)arg1;
- (id)_getUploadTokensURLWithBaseURL:(id)arg1;
- (id)_getVideoURLWithBaseURL:(id)arg1;
- (void)_prepareHeadersForRequest:(id)arg1;
- (id)_putAssetsURLWithBaseURL:(id)arg1;
- (id)_reportSpamURL;
- (void)_sendOneURLRequest:(id)arg1 checkServerSideConfigVersion:(bool)arg2 retryCount:(unsigned long long)arg3 completionBlock:(id /* block */)arg4;
- (id)_serverSideConfigURL;
- (id)_setAlbumStateURL;
- (id)_setAssetStateURL;
- (id)_setCommentPositionURL;
- (id)_shareURL;
- (id)_sharingInfoURLWithBaseURL:(id)arg1;
- (id)_subscribeURL;
- (id)_unshareURL;
- (id)_unsubscribeURL;
- (id)_updateAlbumURLWithBaseURL:(id)arg1;
- (id)_uploadCompleteURLWithBaseURL:(id)arg1;
- (void)acceptInvitationWithToken:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)addComment:(id)arg1 toAssetCollection:(id)arg2 inAlbum:(id)arg3 albumURLString:(id)arg4 completionBlock:(id /* block */)arg5;
- (void)addSharingRelationships:(id)arg1 toAlbum:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)albumSummaryAlbum:(id)arg1 albumURLString:(id)arg2 resetSync:(bool)arg3 completionBlock:(id /* block */)arg4;
- (id)baseURL;
- (void)createAlbum:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)dealloc;
- (void)deleteAlbum:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)deleteAssetCollections:(id)arg1 inAlbum:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)deleteComment:(id)arg1 fromAssetCollection:(id)arg2 inAlbum:(id)arg3 albumURLString:(id)arg4 completionBlock:(id /* block */)arg5;
- (id)errorFromStandardProcessingOnResponse:(id)arg1 responseObject:(id)arg2 checkServerSideConfigVersion:(bool)arg3 error:(id)arg4 body:(id)arg5;
- (id)gate;
- (void)getAlbumSyncedStateForAlbum:(id)arg1 assetCollectionStateBlock:(id /* block */)arg2 completionBlock:(id /* block */)arg3;
- (void)getAlbumURLForAlbumWithGUID:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)getAssetCollections:(id)arg1 inAlbum:(id)arg2 albumURLString:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)getChangesRootCtag:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)getCommentChanges:(id)arg1 inAlbumWithGUID:(id)arg2 albumURLString:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)getServerSideConfigCompletionBlock:(id /* block */)arg1;
- (void)getSharingInfoForAlbum:(id)arg1 albumURLString:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)getTokensForAssets:(id)arg1 inAlbum:(id)arg2 albumURLString:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)getUploadTokens:(id)arg1 forAssetCollectionWithGUID:(id)arg2 inAlbumWithGUID:(id)arg3 albumURLString:(id)arg4 completionBlock:(id /* block */)arg5;
- (void)getVideoURL:(id)arg1 forAssetCollectionWithGUID:(id)arg2 inAlbumWithGUID:(id)arg3 albumURLString:(id)arg4 completionBlock:(id /* block */)arg5;
- (id)headerVersion;
- (id)initWithPersonID:(id)arg1;
- (bool)isShuttingDown;
- (void)markAsSpamInvitationForAlbum:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)markAsSpamInvitationForToken:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)memberQueue;
- (id)pendingConnectionsGroup;
- (id)pendingConnectionsQueue;
- (id)personID;
- (void)putAssetCollections:(id)arg1 intoAlbum:(id)arg2 albumURLString:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)removeSharingRelationships:(id)arg1 fromAlbum:(id)arg2 completionBlock:(id /* block */)arg3;
- (bool)responseDict:(id)arg1 containsLimitErrorCode:(id)arg2 outMaxAllowed:(id*)arg3;
- (void)sendURLRequest:(id)arg1 bodyObj:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)sendURLRequest:(id)arg1 method:(id)arg2 bodyObj:(id)arg3 checkServerSideConfigVersion:(bool)arg4 completionBlock:(id /* block */)arg5;
- (void)sendUploadCompleteSuccessfulAssetCollections:(id)arg1 failedAssetCollections:(id)arg2 album:(id)arg3 completionBlock:(id /* block */)arg4;
- (id)serverSideConfigVersion;
- (void)setAlbumSyncedState:(id)arg1 forAlbum:(id)arg2 albumStateCtag:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)setAssetCollectionSyncedState:(id)arg1 forAssetCollection:(id)arg2 inAlbum:(id)arg3 assetCollectionStateCtag:(id)arg4 completionBlock:(id /* block */)arg5;
- (void)setBaseURL:(id)arg1;
- (void)setGate:(id)arg1;
- (void)setIsShuttingDown:(bool)arg1;
- (void)setMemberQueue:(id)arg1;
- (void)setMultipleContributorsEnabled:(bool)arg1 forAlbum:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)setPendingConnectionsGroup:(id)arg1;
- (void)setPendingConnectionsQueue:(id)arg1;
- (void)setPublicAccessEnabled:(bool)arg1 forAlbum:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)setServerSideConfigVersion:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)shutDownCompletionBlock:(id /* block */)arg1;
- (id)shutDownError;
- (void)stopCompletionBlock:(id /* block */)arg1;
- (id /* block */)stopHandlerBlock;
- (id)stoppingError;
- (void)subscribeToAlbum:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)unsubscribeFromAlbum:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)updateAlbum:(id)arg1 albumURLString:(id)arg2 completionBlock:(id /* block */)arg3;
- (id)workQueue;

@end