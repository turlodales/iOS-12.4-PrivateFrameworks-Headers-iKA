/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVContainerSyncTaskGroup : CoreDAVTaskGroup <CoreDAVDeleteTaskDelegate, CoreDAVGetTaskDelegate, CoreDAVPutTaskDelegate> {
    NSMutableArray * _actions;
    bool  _actionsOnly;
    NSURL * _addMemberURL;
    Class  _appSpecificDataItemClass;
    NSString * _bulkChangeCheckCTag;
    NSDictionary * _bulkRequests;
    bool  _ensureUpdatedCTag;
    NSURL * _folderURL;
    NSMutableArray * _localItemURLOrder;
    unsigned long long  _maxIndependentTasks;
    unsigned long long  _multiGetBatchSize;
    NSString * _nextCTag;
    NSString * _nextSyncToken;
    int  _phase;
    NSString * _previousCTag;
    NSString * _previousSyncToken;
    NSMutableDictionary * _remainingHREFsToModDeleteActions;
    NSMutableDictionary * _remainingUUIDsToAddActions;
    bool  _syncItemOrder;
    NSMutableSet * _syncReportDeletedURLs;
    NSMutableArray * _unsubmittedTasks;
    NSMutableDictionary * _urlToETag;
    bool  _useMultiGet;
    bool  _useSyncCollection;
}

@property (nonatomic) bool actionsOnly;
@property (nonatomic, retain) NSURL *addMemberURL;
@property (nonatomic, retain) NSString *bulkChangeCheckCTag;
@property (nonatomic, retain) NSDictionary *bulkRequests;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CoreDAVLocalDBInfoProvider> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool ensureUpdatedCTag;
@property (nonatomic, readonly) NSURL *folderURL;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *localItemURLOrder;
@property (nonatomic) unsigned long long maxIndependentTasks;
@property (nonatomic) unsigned long long multiGetBatchSize;
@property (nonatomic, retain) NSString *nextCTag;
@property (nonatomic, retain) NSString *previousCTag;
@property (nonatomic, retain) NSString *previousSyncToken;
@property (readonly) Class superclass;
@property (nonatomic) bool useMultiGet;
@property (nonatomic) bool useSyncCollection;

- (void).cxx_destruct;
- (void)_bulkChange;
- (void)_bulkChangeTask:(id)arg1 didFinishWithError:(id)arg2;
- (void)_configureMultiGet:(id)arg1;
- (void)_getCTag;
- (void)_getDataPayloads;
- (void)_getETags;
- (void)_getOrder;
- (void)_getTask:(id)arg1 finishedWithParsedContents:(id)arg2 deletedItems:(id)arg3 error:(id)arg4;
- (void)_postTask:(id)arg1 didFinishWithError:(id)arg2;
- (void)_pushActions;
- (void)_sendNextBatch;
- (unsigned long long)_submitTasks;
- (void)_syncReportTask:(id)arg1 didFinishWithError:(id)arg2;
- (void)_tearDownAllUnsubmittedTasks;
- (bool)actionsOnly;
- (id)addMemberURL;
- (void)applyAdditionalPropertiesFromPostTask:(id)arg1;
- (void)applyAdditionalPropertiesFromPutTask:(id)arg1;
- (void)bailWithError:(id)arg1;
- (id)bulkChangeCheckCTag;
- (Class)bulkChangeTaskClass;
- (id)bulkRequests;
- (void)cancelTaskGroup;
- (id)copyAdditionalResourcePropertiesToFetch;
- (id)copyGetEtagTaskWithPropertiesToFind:(id)arg1;
- (id)copyGetTaskWithURL:(id)arg1;
- (id)copyMultiGetTaskWithURLs:(id)arg1;
- (id)copyPostTaskWithPayloadItem:(id)arg1 forAction:(id)arg2;
- (id)copyPutTaskWithPayloadItem:(id)arg1 forAction:(id)arg2;
- (id)dataContentType;
- (void)deleteResourceURLs:(id)arg1;
- (void)deleteTask:(id)arg1 completedWithError:(id)arg2;
- (id)description;
- (bool)ensureUpdatedCTag;
- (id)folderURL;
- (void)getTask:(id)arg1 data:(id)arg2 error:(id)arg3;
- (id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousSyncToken:(id)arg3 actions:(id)arg4 syncItemOrder:(bool)arg5 context:(id)arg6 accountInfoProvider:(id)arg7 taskManager:(id)arg8;
- (bool)isWhitelistedError:(id)arg1;
- (id)localItemURLOrder;
- (unsigned long long)maxIndependentTasks;
- (unsigned long long)multiGetBatchSize;
- (id)nextCTag;
- (id)previousCTag;
- (id)previousSyncToken;
- (void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (void)putTask:(id)arg1 completedWithNewETag:(id)arg2 error:(id)arg3;
- (void)receivedPropertiesToValues:(id)arg1 forURL:(id)arg2;
- (void)setActionsOnly:(bool)arg1;
- (void)setAddMemberURL:(id)arg1;
- (void)setBulkChangeCheckCTag:(id)arg1;
- (void)setBulkRequests:(id)arg1;
- (void)setEnsureUpdatedCTag:(bool)arg1;
- (void)setMaxIndependentTasks:(unsigned long long)arg1;
- (void)setMultiGetBatchSize:(unsigned long long)arg1;
- (void)setNextCTag:(id)arg1;
- (void)setPreviousCTag:(id)arg1;
- (void)setPreviousSyncToken:(id)arg1;
- (void)setUseMultiGet:(bool)arg1;
- (void)setUseSyncCollection:(bool)arg1;
- (bool)shouldDownloadResource:(id)arg1 localETag:(id)arg2 serverETag:(id)arg3;
- (bool)shouldFetchMoreETags;
- (bool)shouldFetchResourceWithEtag:(id)arg1 propertiesToValues:(id)arg2;
- (void)startTaskGroup;
- (void)syncAway;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)taskGroupWillCancelWithError:(id)arg1;
- (bool)useMultiGet;
- (bool)useSyncCollection;

@end
