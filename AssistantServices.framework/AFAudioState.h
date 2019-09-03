/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFAudioState : NSObject <NSCopying, NSSecureCoding> {
    unsigned int  _audioSessionID;
}

@property (nonatomic) unsigned int audioSessionID;

+ (bool)supportsSecureCoding;

- (unsigned int)audioSessionID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAudioSessionID:(unsigned int)arg1;

@end
