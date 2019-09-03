/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface REAppIconCache : RESingleton {
    NSCache * _imageCache;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)_loadIconForIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)_loadRemoteIconForIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)iconForApplicationWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)init;

@end
