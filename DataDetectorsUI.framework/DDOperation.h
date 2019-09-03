/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

@interface DDOperation : NSOperation <NSCopying> {
    id  _container;
    int  _containerNotReadyTryCount;
    NSDictionary * _context;
    int  _generationNumber;
    bool  _ignoreSignatures;
    bool  _isCurrentlyUsingTheScanner;
    bool  _isDiscarded;
    bool  _needContinuation;
    struct __DDScanQuery { } * _query;
    NSArray * _results;
    int  _tryCount;
    unsigned long long  _types;
}

@property (nonatomic, retain) id container;
@property (nonatomic, retain) NSDictionary *context;
@property (nonatomic) unsigned long long detectionTypes;
@property int generationNumber;
@property (nonatomic) bool ignoreSignatures;
@property bool isDiscarded;
@property bool needContinuation;
@property (nonatomic, retain) NSArray *results;
@property int tryCount;

+ (bool)_needsFullScannerForDetectionTypes:(unsigned long long)arg1;
+ (struct __DDScanner { }*)_sharedScannerForTypes:(unsigned long long)arg1;
+ (id /* block */)shouldUrlifyBlockForTypes:(unsigned long long)arg1;
+ (id /* block */)urlificationBlockForTypes:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_applyContainerRestrictionsToTypes;
- (bool)_containerReadyForDetection;
- (int)_createScanQuery;
- (struct __DDScanQuery { }*)_createScanQueryForBackend;
- (bool)_rangeValidForContainer;
- (void)_setScanQuery:(struct __DDScanQuery { }*)arg1;
- (void)_updateGenerationNumber;
- (void)cancel;
- (void)cleanup;
- (id)container;
- (bool)containerIsReady;
- (id)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)detectionTypes;
- (void)dispatchContainerModificationBlock:(id /* block */)arg1;
- (void)dispatchScanQueryCreationWithCompletionBlock:(id /* block */)arg1;
- (bool)doURLificationOnDocument;
- (int)generationNumber;
- (bool)ignoreSignatures;
- (id)initWithContainer:(id)arg1;
- (bool)isDiscarded;
- (void)main;
- (bool)needContinuation;
- (bool)needsFullScanner;
- (bool)needsToStartOver;
- (id)newOperationForContinuation;
- (id)newOperationForStartingOver;
- (id)results;
- (struct __DDScanQuery { }*)scanQuery;
- (void)setContainer:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDetectionTypes:(unsigned long long)arg1;
- (void)setGenerationNumber:(int)arg1;
- (void)setIgnoreSignatures:(bool)arg1;
- (void)setIsDiscarded:(bool)arg1;
- (void)setNeedContinuation:(bool)arg1;
- (void)setResults:(id)arg1;
- (void)setTryCount:(int)arg1;
- (int)tryCount;

@end
