/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDProxyOperation : CKDOperation <CKDOperationInfoDelegate> {
    CKOperationResult * _cachedResult;
    bool  _didHandleCancel;
    id /* block */  _operationProgressedBlock;
}

@property (nonatomic, retain) CKOperationResult *cachedResult;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didHandleCancel;
@property (readonly) unsigned long long hash;
@property (getter=isInvalidated, nonatomic, readonly) bool invalidated;
@property (nonatomic, copy) id /* block */ operationProgressedBlock;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelOnCallbackQueueIfNecessary;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)cachedResult;
- (bool)didHandleCancel;
- (bool)isInvalidated;
- (bool)isProxyOperation;
- (void)main;
- (id /* block */)operationProgressedBlock;
- (id)operationResult;
- (void)operationWithID:(id)arg1 didComplete:(id)arg2;
- (void)operationWithID:(id)arg1 didProgress:(id)arg2;
- (void)setCachedResult:(id)arg1;
- (void)setDidHandleCancel:(bool)arg1;
- (void)setOperationProgressedBlock:(id /* block */)arg1;
- (bool)shouldCheckAppVersion;
- (void)wasUnexpectedlyUnregisteredForOperationID:(id)arg1;

@end
