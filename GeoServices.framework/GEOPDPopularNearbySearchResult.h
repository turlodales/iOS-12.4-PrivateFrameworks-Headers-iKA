/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDPopularNearbySearchResult : PBCodable <NSCopying> {
    GEOMapRegion * _displayMapRegion;
    struct { 
        unsigned int isChainResultSet : 1; 
    }  _has;
    bool  _isChainResultSet;
    NSString * _sectionHeader;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOMapRegion *displayMapRegion;
@property (nonatomic, readonly) bool hasDisplayMapRegion;
@property (nonatomic) bool hasIsChainResultSet;
@property (nonatomic, readonly) bool hasSectionHeader;
@property (nonatomic) bool isChainResultSet;
@property (nonatomic, retain) NSString *sectionHeader;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayMapRegion;
- (bool)hasDisplayMapRegion;
- (bool)hasIsChainResultSet;
- (bool)hasSectionHeader;
- (unsigned long long)hash;
- (bool)isChainResultSet;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sectionHeader;
- (void)setDisplayMapRegion:(id)arg1;
- (void)setHasIsChainResultSet:(bool)arg1;
- (void)setIsChainResultSet:(bool)arg1;
- (void)setSectionHeader:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
