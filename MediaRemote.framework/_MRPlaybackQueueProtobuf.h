/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRPlaybackQueueProtobuf : PBCodable <NSCopying> {
    NSMutableArray * _contentItems;
    _MRPlaybackQueueContextProtobuf * _context;
    struct { 
        unsigned int location : 1; 
        unsigned int sendingPlaybackQueueTransaction : 1; 
    }  _has;
    int  _location;
    NSString * _queueIdentifier;
    NSString * _requestID;
    _MRNowPlayingPlayerPathProtobuf * _resolvedPlayerPath;
    bool  _sendingPlaybackQueueTransaction;
}

@property (nonatomic, retain) NSMutableArray *contentItems;
@property (nonatomic, retain) _MRPlaybackQueueContextProtobuf *context;
@property (nonatomic, readonly) bool hasContext;
@property (nonatomic) bool hasLocation;
@property (nonatomic, readonly) bool hasQueueIdentifier;
@property (nonatomic, readonly) bool hasRequestID;
@property (nonatomic, readonly) bool hasResolvedPlayerPath;
@property (nonatomic) bool hasSendingPlaybackQueueTransaction;
@property (nonatomic) int location;
@property (nonatomic, retain) NSString *queueIdentifier;
@property (nonatomic, retain) NSString *requestID;
@property (nonatomic, retain) _MRNowPlayingPlayerPathProtobuf *resolvedPlayerPath;
@property (nonatomic) bool sendingPlaybackQueueTransaction;

+ (Class)contentItemType;

- (void).cxx_destruct;
- (void)addContentItem:(id)arg1;
- (void)clearContentItems;
- (id)contentItemAtIndex:(unsigned long long)arg1;
- (id)contentItems;
- (unsigned long long)contentItemsCount;
- (id)context;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasContext;
- (bool)hasLocation;
- (bool)hasQueueIdentifier;
- (bool)hasRequestID;
- (bool)hasResolvedPlayerPath;
- (bool)hasSendingPlaybackQueueTransaction;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)location;
- (void)mergeFrom:(id)arg1;
- (id)queueIdentifier;
- (bool)readFrom:(id)arg1;
- (id)requestID;
- (id)resolvedPlayerPath;
- (bool)sendingPlaybackQueueTransaction;
- (void)setContentItems:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setHasLocation:(bool)arg1;
- (void)setHasSendingPlaybackQueueTransaction:(bool)arg1;
- (void)setLocation:(int)arg1;
- (void)setQueueIdentifier:(id)arg1;
- (void)setRequestID:(id)arg1;
- (void)setResolvedPlayerPath:(id)arg1;
- (void)setSendingPlaybackQueueTransaction:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
