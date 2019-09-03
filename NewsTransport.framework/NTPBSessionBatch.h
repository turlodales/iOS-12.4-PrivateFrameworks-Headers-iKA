/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBSessionBatch : PBCodable <NSCopying> {
    NSMutableArray * _events;
    NSData * _identifier;
    NTPBSession * _session;
}

@property (nonatomic, retain) NSMutableArray *events;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasSession;
@property (nonatomic, retain) NSData *identifier;
@property (nonatomic, retain) NTPBSession *session;

// Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport

+ (Class)eventsType;

- (void).cxx_destruct;
- (void)addEvents:(id)arg1;
- (void)clearEvents;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)events;
- (id)eventsAtIndex:(unsigned long long)arg1;
- (unsigned long long)eventsCount;
- (bool)hasIdentifier;
- (bool)hasSession;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)session;
- (void)setEvents:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setSession:(id)arg1;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsServicesInternal.framework/NewsServicesInternal

+ (id)nss_sessionBatchWithIdentifier;

@end
