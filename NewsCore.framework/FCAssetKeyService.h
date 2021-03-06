/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCAssetKeyService : NSObject <FCAssetKeyServiceType> {
    NFPromise * _endpointURLPromise;
    AMSURLRequestEncoder * _requestEncoder;
    AMSURLSession * _session;
}

@property (nonatomic, readonly) NFPromise *endpointURLPromise;
@property (nonatomic, readonly) AMSURLRequestEncoder *requestEncoder;
@property (nonatomic, readonly) AMSURLSession *session;

- (void).cxx_destruct;
- (void)_performHTTPRequestWithData:(id)arg1 completion:(id /* block */)arg2;
- (id)endpointURLPromise;
- (void)fetchWrappingKeysWithIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithConfigurationManager:(id)arg1;
- (id)requestEncoder;
- (id)session;

@end
