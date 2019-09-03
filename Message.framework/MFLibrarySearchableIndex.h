/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFLibrarySearchableIndex : NSObject <CSSearchableIndexDelegate, MFDiagnosticsGenerator, MFLibrarySearchableIndexVerifierDataSource, MFSearchableIndexSchedulable> {
    NSObject<OS_os_activity> * _batchIndexingActivity;
    MFCancelationToken * _cancelationToken;
    bool  _clientStateFetched;
    bool  _coalesceTimerFired;
    NSObject<OS_dispatch_source> * _coalescingTimer;
    CSSearchableIndex * _csIndex;
    unsigned long long  _currentMaximumBatchSize;
    <MFLibrarySearchableIndexDataSource> * _dataSource;
    bool  _dataSourceIndexingPermitted;
    NSObject<OS_dispatch_queue> * _dataSourceQueue;
    NSString * _indexName;
    <MFScheduler> * _indexingBatchScheduler;
    NSObject<OS_dispatch_queue> * _indexingQueue;
    bool  _isActive;
    bool  _isForeground;
    MFWeakSet * _middleware;
    bool  _needsRefresh;
    bool  _needsVerification;
    NSMutableSet * _pendingDomainRemovals;
    _MFLibrarySearchableIndexPendingRemovals * _pendingIdentifierRemovals;
    NSMutableArray * _pendingItems;
    NSObject<OS_dispatch_queue> * _queue;
    long long  _resumeCount;
    <MFSearchableIndexSchedulableDelegate> * _schedulableDelegate;
    bool  _scheduledProcessing;
    bool  _scheduledRefresh;
    bool  _scheduledVerification;
    MFLazyCache * _searchResultsCache;
    bool  _suspendedForContentProtection;
    unsigned long long  _throttledDataSourceBatchSize;
    unsigned long long  _throttledIndexingBatchSize;
    long long  _transaction;
}

@property (nonatomic, retain) CSSearchableIndex *csIndex;
@property (nonatomic) <MFLibrarySearchableIndexDataSource> *dataSource;
@property (getter=isDataSourceIndexingPermitted, nonatomic) bool dataSourceIndexingPermitted;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=_isForeground, setter=_setForeground:, nonatomic) bool foreground;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *indexName;
@property (nonatomic, readonly) unsigned long long pendingIndexItemsCount;
@property (nonatomic) <MFSearchableIndexSchedulableDelegate> *schedulableDelegate;
@property (readonly) Class superclass;
@property (getter=_transaction, readonly) long long transaction;

+ (id)_localClientState;
+ (id)_localClientStateURL;
+ (void)_saveLocalClientState:(id)arg1;

- (void).cxx_destruct;
- (void)_coalescingTimerFired;
- (id)_consumeBatchOfSize:(unsigned long long)arg1;
- (void)_dataSourceAssignTransaction:(long long)arg1 forIdentifiers:(id)arg2 completion:(id /* block */)arg3;
- (void)_dataSourceAssignTransaction:(long long)arg1 updates:(id)arg2 completion:(id /* block */)arg3;
- (void)_dataSourceInvalidateItemsGreaterThanTransaction:(long long)arg1 completion:(id /* block */)arg2;
- (void)_dataSourceRequestNeededUpdatesWithCompletion:(id /* block */)arg1;
- (void)_dataSourceScheduleWork:(id /* block */)arg1;
- (void)_dataSourceVerifyRepresentativeSampleWithCompletion:(id /* block */)arg1;
- (void)_fetchLastClientState;
- (void)_getDomainRemovals:(id*)arg1 identifierRemovals:(id*)arg2;
- (void)_indexItems:(id)arg1 fromRefresh:(bool)arg2;
- (void)_invalidateCache;
- (bool)_isForeground;
- (long long)_nextTransaction;
- (void)_noteNeedsLastClientStateFetch;
- (void)_powerStateChanged;
- (id)_processDomainRemovals:(id)arg1;
- (void)_processIdentifierRemovals:(id)arg1;
- (void)_processIndexingBatch:(id)arg1 clientState:(id)arg2;
- (void)_processRefreshRequestWithCompletion:(id /* block */)arg1;
- (void)_processSpotlightVerificationWithCompletion:(id /* block */)arg1;
- (void)_queueConsumeBudgetElapsedPeriod:(double)arg1;
- (void)_queueConsumeBudgetItemCount:(unsigned long long)arg1;
- (void)_queueRefresh;
- (void)_queueTransitionActive:(bool)arg1;
- (void)_registerDistantFutureSpotlightVerification;
- (void)_reindexAllSearchableItemsWithOptions:(unsigned long long)arg1 acknowledgementHandler:(id /* block */)arg2;
- (void)_resume;
- (void)_scheduleDataSourceRefresh;
- (void)_scheduleProcessPendingItems;
- (void)_scheduleSpotlightVerification;
- (void)_scheduleSpotlightVerificationOnIndexingQueueWithCompletion:(id /* block */)arg1;
- (void)_setForeground:(bool)arg1;
- (void)_startCoalescingTimer;
- (void)_stopCoalescingTimer;
- (void)_suspend;
- (double)_throttleRequestedSize:(unsigned long long*)arg1 action:(id /* block */)arg2;
- (long long)_transaction;
- (void)_transitionWithBudgetTimeUsed:(double)arg1;
- (void)_verifySpotlightIndex;
- (void)addMiddleware:(id)arg1;
- (void)applicationWillResume;
- (void)applicationWillSuspend;
- (id)copyDiagnosticInformation;
- (id)csIndex;
- (id)dataSamplesForSearchableIndexVerifier:(id)arg1 searchableIndex:(id)arg2;
- (id)dataSource;
- (void)dealloc;
- (id)identifiersMatchingCriterion:(id)arg1;
- (void)indexItems:(id)arg1;
- (id)indexName;
- (id)indexedEmptySubjectIdentifers;
- (id)initWithName:(id)arg1 dataSource:(id)arg2;
- (bool)isDataSourceIndexingPermitted;
- (id)librarySearchableIndexForSearchableIndexVerifier:(id)arg1;
- (unsigned long long)pendingIndexItemsCount;
- (void)refresh;
- (void)reindexAllSearchableItemsWithAcknowledgementHandler:(id /* block */)arg1;
- (void)reindexSearchableItemsWithIdentifiers:(id)arg1 acknowledgementHandler:(id /* block */)arg2;
- (void)removeAllItems;
- (void)removeItemsForDomainIdentifier:(id)arg1;
- (void)removeItemsWithIdentifiers:(id)arg1;
- (void)removeItemsWithIdentifiers:(id)arg1 reasons:(id)arg2;
- (id)requestSpotlightDiagnosticsForMessageRowId:(id)arg1;
- (void)resume;
- (void)resumeForContentProtection;
- (id)schedulableDelegate;
- (void)searchableIndex:(id)arg1 reindexAllSearchableItemsWithAcknowledgementHandler:(id /* block */)arg2;
- (void)searchableIndex:(id)arg1 reindexSearchableItemsWithIdentifiers:(id)arg2 acknowledgementHandler:(id /* block */)arg3;
- (void)setCsIndex:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDataSourceIndexingPermitted:(bool)arg1;
- (void)setSchedulableDelegate:(id)arg1;
- (void)suspend;
- (void)suspendForContentProtection;

@end
