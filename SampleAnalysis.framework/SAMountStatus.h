/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

@interface SAMountStatus : NSObject {
    NSString * _path;
    NSMutableArray * _snapshots;
    NSString * _type;
}

@property (readonly) NSString *path;
@property (readonly) NSArray *snapshots;
@property (readonly) NSString *type;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const struct { unsigned char x1; unsigned char x2; unsigned short x3; unsigned long long x4; unsigned long long x5; }*)arg1 bufferLength:(unsigned long long)arg2;

- (void).cxx_destruct;
- (bool)addSelfToBuffer:(struct { unsigned char x1; unsigned char x2; unsigned short x3; unsigned long long x4; unsigned long long x5; }*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (void)addStatus:(struct netfs_status { unsigned int x1; BOOL x2[512]; unsigned int x3; unsigned int x4; unsigned long long x5[0]; }*)arg1 atTimestamp:(id)arg2;
- (void)applyMachTimebase:(struct mach_timebase_info { unsigned int x1; unsigned int x2; })arg1;
- (id)copyName;
- (id)copySanitizedName;
- (void)enumerateSnapshotsBetweenStartTime:(id)arg1 endTime:(id)arg2 block:(id /* block */)arg3;
- (id)initWithName:(id)arg1 andType:(id)arg2;
- (bool)isBlockingThread:(unsigned long long)arg1 betweenStartTime:(id)arg2 andEndTime:(id)arg3;
- (bool)isUnresponsiveBetweenStartTime:(id)arg1 andEndTime:(id)arg2;
- (id)path;
- (void)populateReferencesUsingBuffer:(const struct { unsigned char x1; unsigned char x2; unsigned short x3; unsigned long long x4; unsigned long long x5; }*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4;
- (void)populateReferencesUsingPAStyleSerializedMountStatus:(const struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; }*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (id)snapshots;
- (id)type;

@end
