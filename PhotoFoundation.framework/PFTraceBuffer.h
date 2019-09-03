/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFTraceBuffer : NSObject {
    NSString * _bufferName;
    bool  _collectBacktrace;
    bool  _collectQoS;
    bool  _collectThreadId;
    bool  _collectTimestamp;
    void ** _data;
    unsigned long long  _length;
    unsigned int  _next;
    bool  _pause;
    unsigned long long  _width;
}

@property (retain) NSString *bufferName;
@property (nonatomic) bool collectBacktrace;
@property (nonatomic) bool collectQoS;
@property (nonatomic) bool collectThreadId;
@property (nonatomic) bool collectTimestamp;

+ (unsigned long long)_indexOfNextSegment:(id)arg1 start:(unsigned long long)arg2 type:(char *)arg3;
+ (unsigned long long)analyzeFormat:(id)arg1 count:(unsigned long long*)arg2;
+ (void)initialize;

- (void).cxx_destruct;
- (void)_appendMessageAtIndex:(unsigned long long)arg1 to:(id)arg2;
- (void)_recordTypes:(unsigned long long)arg1 count:(unsigned long long)arg2 file:(const char *)arg3 line:(unsigned long long)arg4 self:(id)arg5 context:(id)arg6 format:(id)arg7;
- (void)_recordTypes:(unsigned long long)arg1 count:(unsigned long long)arg2 file:(const char *)arg3 line:(unsigned long long)arg4 self:(id)arg5 context:(id)arg6 format:(id)arg7 args:(char *)arg8;
- (id)bufferName;
- (bool)collectBacktrace;
- (bool)collectQoS;
- (bool)collectThreadId;
- (bool)collectTimestamp;
- (id)contextNames;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithLength:(unsigned long long)arg1 maximumArguments:(unsigned long long)arg2;
- (void)recordFormat:(id)arg1 arg:(id)arg2;
- (void)recordMessage:(id)arg1;
- (void)recordSelf:(id)arg1;
- (id)records;
- (void)reset;
- (void)setBufferName:(id)arg1;
- (void)setCollectBacktrace:(bool)arg1;
- (void)setCollectQoS:(bool)arg1;
- (void)setCollectThreadId:(bool)arg1;
- (void)setCollectTimestamp:(bool)arg1;

@end
