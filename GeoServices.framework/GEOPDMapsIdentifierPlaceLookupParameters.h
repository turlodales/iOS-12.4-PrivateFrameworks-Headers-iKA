/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDMapsIdentifierPlaceLookupParameters : PBCodable <NSCopying> {
    bool  _enablePartialClientization;
    struct { 
        unsigned int resultProviderId : 1; 
        unsigned int enablePartialClientization : 1; 
    }  _has;
    NSMutableArray * _mapsIds;
    int  _resultProviderId;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool enablePartialClientization;
@property (nonatomic) bool hasEnablePartialClientization;
@property (nonatomic) bool hasResultProviderId;
@property (nonatomic, retain) NSMutableArray *mapsIds;
@property (nonatomic) int resultProviderId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)mapsIdType;

- (void).cxx_destruct;
- (void)addMapsId:(id)arg1;
- (void)clearMapsIds;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)enablePartialClientization;
- (bool)hasEnablePartialClientization;
- (bool)hasResultProviderId;
- (unsigned long long)hash;
- (id)initWithIdentifiers:(id)arg1 resultProviderID:(int)arg2;
- (bool)isEqual:(id)arg1;
- (id)mapsIdAtIndex:(unsigned long long)arg1;
- (id)mapsIds;
- (unsigned long long)mapsIdsCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)resultProviderId;
- (void)setEnablePartialClientization:(bool)arg1;
- (void)setHasEnablePartialClientization:(bool)arg1;
- (void)setHasResultProviderId:(bool)arg1;
- (void)setMapsIds:(id)arg1;
- (void)setResultProviderId:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
