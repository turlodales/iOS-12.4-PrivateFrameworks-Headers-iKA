/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDPlaceRefinementParameters : PBCodable <NSCopying> {
    int  _addressGeocodeAccuracyHint;
    GEOStructuredAddress * _addressHint;
    NSData * _addressObjectHint;
    NSMutableArray * _formattedAddressLineHints;
    struct { 
        unsigned int muid : 1; 
        unsigned int addressGeocodeAccuracyHint : 1; 
        unsigned int placeTypeHint : 1; 
        unsigned int resultProviderId : 1; 
        unsigned int supportCoordinatesOnlyRefinement : 1; 
    }  _has;
    GEOLatLng * _locationHint;
    unsigned long long  _muid;
    NSString * _placeNameHint;
    int  _placeTypeHint;
    int  _resultProviderId;
    bool  _supportCoordinatesOnlyRefinement;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) int addressGeocodeAccuracyHint;
@property (nonatomic, retain) GEOStructuredAddress *addressHint;
@property (nonatomic, retain) NSData *addressObjectHint;
@property (nonatomic, retain) NSMutableArray *formattedAddressLineHints;
@property (nonatomic) bool hasAddressGeocodeAccuracyHint;
@property (nonatomic, readonly) bool hasAddressHint;
@property (nonatomic, readonly) bool hasAddressObjectHint;
@property (nonatomic, readonly) bool hasLocationHint;
@property (nonatomic) bool hasMuid;
@property (nonatomic, readonly) bool hasPlaceNameHint;
@property (nonatomic) bool hasPlaceTypeHint;
@property (nonatomic) bool hasResultProviderId;
@property (nonatomic) bool hasSupportCoordinatesOnlyRefinement;
@property (nonatomic, retain) GEOLatLng *locationHint;
@property (nonatomic) unsigned long long muid;
@property (nonatomic, retain) NSString *placeNameHint;
@property (nonatomic) int placeTypeHint;
@property (nonatomic) int resultProviderId;
@property (nonatomic) bool supportCoordinatesOnlyRefinement;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)formattedAddressLineHintType;

- (void).cxx_destruct;
- (int)StringAsAddressGeocodeAccuracyHint:(id)arg1;
- (int)StringAsPlaceTypeHint:(id)arg1;
- (bool)_hasRequiredFields;
- (unsigned long long)_routeHypothesisPlaceRefinementParametersHash;
- (bool)_routeHypothesisPlaceRefinementParametersIsEqual:(id)arg1;
- (void)addFormattedAddressLineHint:(id)arg1;
- (int)addressGeocodeAccuracyHint;
- (id)addressGeocodeAccuracyHintAsString:(int)arg1;
- (id)addressHint;
- (id)addressObjectHint;
- (void)clearFormattedAddressLineHints;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)formattedAddressLineHintAtIndex:(unsigned long long)arg1;
- (id)formattedAddressLineHints;
- (unsigned long long)formattedAddressLineHintsCount;
- (bool)hasAddressGeocodeAccuracyHint;
- (bool)hasAddressHint;
- (bool)hasAddressObjectHint;
- (bool)hasLocationHint;
- (bool)hasMuid;
- (bool)hasPlaceNameHint;
- (bool)hasPlaceTypeHint;
- (bool)hasResultProviderId;
- (bool)hasSupportCoordinatesOnlyRefinement;
- (unsigned long long)hash;
- (id)initWithMapItemToRefine:(id)arg1 coordinate:(struct { double x1; double x2; })arg2;
- (id)initWithMuid:(unsigned long long)arg1 locationHint:(struct { double x1; double x2; })arg2 placeNameHint:(id)arg3 resultProviderId:(int)arg4;
- (id)initWithSearchURLQuery:(id)arg1 coordinate:(struct { double x1; double x2; })arg2 muid:(unsigned long long)arg3 resultProviderId:(int)arg4;
- (bool)isEqual:(id)arg1;
- (id)locationHint;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)muid;
- (id)placeNameHint;
- (int)placeTypeHint;
- (id)placeTypeHintAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (int)resultProviderId;
- (void)setAddressGeocodeAccuracyHint:(int)arg1;
- (void)setAddressHint:(id)arg1;
- (void)setAddressObjectHint:(id)arg1;
- (void)setFormattedAddressLineHints:(id)arg1;
- (void)setHasAddressGeocodeAccuracyHint:(bool)arg1;
- (void)setHasMuid:(bool)arg1;
- (void)setHasPlaceTypeHint:(bool)arg1;
- (void)setHasResultProviderId:(bool)arg1;
- (void)setHasSupportCoordinatesOnlyRefinement:(bool)arg1;
- (void)setLocationHint:(id)arg1;
- (void)setMuid:(unsigned long long)arg1;
- (void)setPlaceNameHint:(id)arg1;
- (void)setPlaceTypeHint:(int)arg1;
- (void)setResultProviderId:(int)arg1;
- (void)setSupportCoordinatesOnlyRefinement:(bool)arg1;
- (bool)supportCoordinatesOnlyRefinement;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
