/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface CallHistoryDBClientHandleManager : CHSynchronizedLoggable {
    CallHistoryDBClientHandle * _clientDBHandle;
}

@property CallHistoryDBClientHandle *clientDBHandle;

+ (id)instance;

- (void).cxx_destruct;
- (id)clientDBHandle;
- (id)getDatabaseHandle;
- (id)getDatabaseHandleSync;
- (id)init;
- (void)setClientDBHandle:(id)arg1;

@end
