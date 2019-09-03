/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface CHManager : CHSynchronizedLoggable {
    bool  _cacheIsDirty;
    NSString * _coalescingStrategy;
    bool  _generateSyncTransactions;
    NSArray * _limitingCallKinds;
    unsigned int  _limitingCallTypes;
    NSDate * _limitingEndDate;
    NSDate * _limitingStartDate;
    long long  _numberOfUnseenMissedCalls;
    NSPredicate * _postFetchingPredicate;
    bool  _reCoalesce;
    NSArray * _recentCalls;
    bool  _showsFaceTimeAudioCalls;
    bool  _showsFaceTimeVideoCalls;
    bool  _showsTelephonyCalls;
    <SyncManagerProtocol> * _syncManager;
    NSArray * _uncoalescedRecentCalls;
    NSArray * _uncoalescedUnFilteredRecentCalls;
    NSNumber * _unreadCallCount;
}

@property bool cacheIsDirty;
@property (nonatomic, copy) NSString *coalescingStrategy;
@property bool generateSyncTransactions;
@property (nonatomic, copy) NSArray *limitingCallKinds;
@property (nonatomic) unsigned int limitingCallTypes;
@property (nonatomic, copy) NSDate *limitingEndDate;
@property (nonatomic, copy) NSDate *limitingStartDate;
@property long long numberOfUnseenMissedCalls;
@property (nonatomic, copy) NSPredicate *postFetchingPredicate;
@property bool reCoalesce;
@property (nonatomic, retain) NSArray *recentCalls;
@property (nonatomic) bool showsFaceTimeAudioCalls;
@property (nonatomic) bool showsFaceTimeVideoCalls;
@property (nonatomic) bool showsTelephonyCalls;
@property (retain) <SyncManagerProtocol> *syncManager;
@property (getter=uncoalescedRecentCallsSync, nonatomic, retain) NSArray *uncoalescedRecentCalls;
@property (retain) NSArray *uncoalescedUnFilteredRecentCalls;
@property (retain) NSNumber *unreadCallCount;

+ (unsigned int)CHCallStatusForCallWithDuration:(double)arg1 isOriginated:(bool)arg2 isAnswered:(bool)arg3;
+ (id)limitingCallKindsForCallType:(unsigned int)arg1;

- (void).cxx_destruct;
- (void)addMultipleCallsToCallHistory:(id)arg1;
- (void)addToCallHistory:(id)arg1;
- (void)addressBookChanged:(id)arg1;
- (id)applyPredicate:(id)arg1 toCalls:(id)arg2;
- (bool)cacheIsDirty;
- (double)callTimersGetIncoming;
- (double)callTimersGetLifetime;
- (double)callTimersGetOutgoing;
- (void)callTimersReset;
- (void)clearDatabase;
- (id)coalesceCalls:(id)arg1;
- (id)coalescingStrategy;
- (unsigned long long)countCallsWithPredicate:(id)arg1;
- (unsigned long long)countCallsWithPredicateSync:(id)arg1;
- (void)currentLocaleChanged:(id)arg1;
- (void)databaseChanged:(id)arg1;
- (void)dealloc;
- (void)deleteAllCalls;
- (void)deleteAllCallsSync;
- (void)deleteCall:(id)arg1;
- (void)deleteCallAtIndex:(unsigned long long)arg1;
- (void)deleteCallsWithPredicate:(id)arg1;
- (void)deleteTheseCalls:(id)arg1;
- (void)deleteTheseCallsSync:(id)arg1;
- (id)fetchRecentCallsSyncWithCoalescing:(bool)arg1;
- (unsigned long long)fetchUnreadCallsCount;
- (void)flush;
- (bool)generateSyncTransactions;
- (id)getLimitsDictionary;
- (id)init;
- (id)initWithFetchingLimitsDictionary:(id)arg1 andCoalescingStrategy:(id)arg2 andPostFetchingPredicate:(id)arg3 withQueue:(id)arg4;
- (id)latestRecentCallMatchingPredicate:(id)arg1;
- (id)latestTelephonyCallMatchingNormalizedRemoteParticipantHandleValues:(id)arg1;
- (id)limitingCallKinds;
- (unsigned int)limitingCallTypes;
- (id)limitingEndDate;
- (id)limitingStartDate;
- (void)markAllCallsAsReadWithPredicate:(id)arg1;
- (long long)numberOfUnseenMissedCalls;
- (id)postFetchingPredicate;
- (bool)reCoalesce;
- (id)recentCalls;
- (id)recentCallsWithPredicate:(id)arg1;
- (void)registerForNotifications;
- (void)setCacheIsDirty:(bool)arg1;
- (void)setCoalescingStrategy:(id)arg1;
- (void)setDefaultInitValues;
- (void)setGenerateSyncTransactions:(bool)arg1;
- (void)setInitialLimitingCallKinds:(id)arg1;
- (void)setLimitingCallKinds:(id)arg1;
- (void)setLimitingCallKindsSync:(id)arg1;
- (void)setLimitingCallTypes:(unsigned int)arg1;
- (void)setLimitingCallTypesSync:(unsigned int)arg1;
- (void)setLimitingEndDate:(id)arg1;
- (void)setLimitingStartDate:(id)arg1;
- (void)setNumberOfUnseenMissedCalls:(long long)arg1;
- (void)setOutgoingLocalParticipantUUID:(id)arg1 forRecentCallsMatchingPredicate:(id)arg2;
- (void)setPostFetchingPredicate:(id)arg1;
- (void)setReCoalesce:(bool)arg1;
- (void)setRecentCalls:(id)arg1;
- (void)setShowsFaceTimeAudioCalls:(bool)arg1;
- (void)setShowsFaceTimeVideoCalls:(bool)arg1;
- (void)setShowsTelephonyCalls:(bool)arg1;
- (void)setSyncManager:(id)arg1;
- (void)setUncoalescedRecentCalls:(id)arg1;
- (void)setUncoalescedUnFilteredRecentCalls:(id)arg1;
- (void)setUnreadCallCount:(id)arg1;
- (bool)showsFaceTimeAudioCalls;
- (bool)showsFaceTimeVideoCalls;
- (bool)showsTelephonyCalls;
- (id)syncManager;
- (id)unCoalesceCall:(id)arg1;
- (id)uncoalescedRecentCallsSync;
- (id)uncoalescedUnFilteredRecentCalls;
- (id)unreadCallCount;
- (void)updateBytesOfDataUsedFor:(id)arg1 with:(id)arg2;

@end
