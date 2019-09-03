/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLPushToTransportTask : CPLEngineMultiscopeSyncTask {
    bool  _deferredCancel;
    bool  _highPriority;
    CPLScopeFilter * _scopeFilter;
}

@property (nonatomic) bool highPriority;
@property (nonatomic, retain) CPLScopeFilter *scopeFilter;

- (void).cxx_destruct;
- (void)cancel:(bool)arg1;
- (id)enumerateScopesForTaskInTransaction:(id)arg1;
- (bool)highPriority;
- (id)newScopedTaskWithScope:(id)arg1 transportScope:(id)arg2 clientCacheIdentifier:(id)arg3;
- (id)scopeFilter;
- (void)setHighPriority:(bool)arg1;
- (void)setScopeFilter:(id)arg1;
- (bool)shouldProcessScope:(id)arg1 inTransaction:(id)arg2;
- (bool)shouldSkipScopesWithMissingTransportScope;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)taskDidFinishWithError:(id)arg1;
- (id)taskIdentifier;

@end
