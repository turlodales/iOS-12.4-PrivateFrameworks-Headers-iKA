/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCDataOrDocsScopeGatherer : NSObject {
    id /* block */  _gatherReply;
    BRCItemGlobalID * _gatheredChildrenItemGlobalID;
    NSMutableArray * _gatheringAppLibraries;
    NSString * _gatheringNamePrefix;
    unsigned long long  _gatheringRankCur;
    unsigned long long  _gatheringRankMax;
    BRCNotificationPipe * _pipe;
    BRCAccountSession * _session;
}

@property (nonatomic, retain) BRCItemGlobalID *gatheredChildrenItemGlobalID;

- (void).cxx_destruct;
- (id /* block */)_popGatherReply;
- (void)done;
- (void)gatherWithBatchSize:(long long)arg1 completion:(id /* block */)arg2;
- (id)gatheredChildrenItemGlobalID;
- (id)initWithNotificationPipe:(id)arg1 appLibraries:(id)arg2 startingRank:(unsigned long long)arg3 maxRank:(unsigned long long)arg4 gatherReply:(id /* block */)arg5;
- (void)invalidate;
- (void)setGatheredChildrenItemGlobalID:(id)arg1;

@end
