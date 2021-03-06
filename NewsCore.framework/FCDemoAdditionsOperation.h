/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCDemoAdditionsOperation : FCOperation {
    <FCCoreConfiguration> * _configuration;
    FCCloudContext * _context;
    NSError * _error;
    NSArray * _headlines;
}

@property (nonatomic, copy) <FCCoreConfiguration> *configuration;
@property (nonatomic, retain) FCCloudContext *context;
@property (retain) NSError *error;
@property (copy) NSArray *headlines;

- (void).cxx_destruct;
- (id)_articleIDs;
- (id)configuration;
- (id)context;
- (id)error;
- (id)headlines;
- (void)performOperation;
- (void)setConfiguration:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setError:(id)arg1;
- (void)setHeadlines:(id)arg1;
- (bool)validateOperation;

@end
