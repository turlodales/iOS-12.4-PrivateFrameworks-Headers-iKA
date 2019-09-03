/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface FlexMarker : NSObject <NSDictionaryCoding> {
    long long  _markerID;
    NSString * _name;
    long long  _number;
    long long  _position;
    unsigned long long  _type;
}

@property (nonatomic, readonly) long long markerID;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) long long number;
@property (nonatomic, readonly) long long position;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (unsigned long long)_decodeTypeAndBarsFromName;
- (id)description;
- (id)encodeAsDictionary;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithName:(id)arg1 markerID:(long long)arg2 position:(long long)arg3;
- (long long)markerID;
- (id)name;
- (long long)number;
- (long long)position;
- (unsigned long long)type;

@end
