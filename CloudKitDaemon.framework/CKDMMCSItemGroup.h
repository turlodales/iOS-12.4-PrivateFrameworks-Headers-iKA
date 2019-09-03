/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDMMCSItemGroup : NSObject {
    NSData * _authPutRequest;
    bool  _complete;
    NSError * _error;
    NSMutableArray * _items;
    <MMCSOperationMetric> * _metrics;
    NSArray * _tuple;
}

@property (nonatomic, retain) NSData *authPutRequest;
@property (nonatomic) bool complete;
@property (nonatomic, readonly) NSURL *contentBaseURL;
@property (nonatomic, readonly) CKAssetDownloadPreauthorization *downloadPreauthorization;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, retain) <MMCSOperationMetric> *metrics;
@property (nonatomic, readonly) NSString *owner;
@property (nonatomic, readonly) NSString *requestor;
@property (nonatomic, retain) NSArray *tuple;

+ (id)tupleForItem:(id)arg1;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (void)addItem:(id)arg1;
- (id)authPutRequest;
- (bool)complete;
- (id)contentBaseURL;
- (id)description;
- (id)downloadPreauthorization;
- (id)error;
- (id)initWithTuple:(id)arg1;
- (id)items;
- (id)metrics;
- (id)owner;
- (id)requestor;
- (void)setAuthPutRequest:(id)arg1;
- (void)setComplete:(bool)arg1;
- (void)setError:(id)arg1;
- (void)setMetrics:(id)arg1;
- (void)setTuple:(id)arg1;
- (id)tuple;

@end
