/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDAutocompleteParametersSiriSearch : PBCodable <NSCopying> {
    bool  _completed;
    struct { 
        unsigned int maxResults : 1; 
        unsigned int completed : 1; 
        unsigned int highlightDiff : 1; 
    }  _has;
    bool  _highlightDiff;
    int  _maxResults;
    NSString * _prefix;
    NSString * _query;
    PBUnknownFields * _unknownFields;
    GEOPDViewportInfo * _viewportInfo;
}

@property (nonatomic) bool completed;
@property (nonatomic) bool hasCompleted;
@property (nonatomic) bool hasHighlightDiff;
@property (nonatomic) bool hasMaxResults;
@property (nonatomic, readonly) bool hasPrefix;
@property (nonatomic, readonly) bool hasQuery;
@property (nonatomic, readonly) bool hasViewportInfo;
@property (nonatomic) bool highlightDiff;
@property (nonatomic) int maxResults;
@property (nonatomic, retain) NSString *prefix;
@property (nonatomic, retain) NSString *query;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) GEOPDViewportInfo *viewportInfo;

- (void).cxx_destruct;
- (bool)completed;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCompleted;
- (bool)hasHighlightDiff;
- (bool)hasMaxResults;
- (bool)hasPrefix;
- (bool)hasQuery;
- (bool)hasViewportInfo;
- (unsigned long long)hash;
- (bool)highlightDiff;
- (bool)isEqual:(id)arg1;
- (int)maxResults;
- (void)mergeFrom:(id)arg1;
- (id)prefix;
- (id)query;
- (bool)readFrom:(id)arg1;
- (void)setCompleted:(bool)arg1;
- (void)setHasCompleted:(bool)arg1;
- (void)setHasHighlightDiff:(bool)arg1;
- (void)setHasMaxResults:(bool)arg1;
- (void)setHighlightDiff:(bool)arg1;
- (void)setMaxResults:(int)arg1;
- (void)setPrefix:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)setViewportInfo:(id)arg1;
- (id)unknownFields;
- (id)viewportInfo;
- (void)writeTo:(id)arg1;

@end