/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOWalletCategoryMapping : PBCodable <NSCopying> {
    GEOStyleAttributes * _stylesAttributes;
    NSString * _walletCategory;
}

@property (nonatomic, readonly) bool hasStylesAttributes;
@property (nonatomic, readonly) bool hasWalletCategory;
@property (nonatomic, retain) GEOStyleAttributes *stylesAttributes;
@property (nonatomic, retain) NSString *walletCategory;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasStylesAttributes;
- (bool)hasWalletCategory;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setStylesAttributes:(id)arg1;
- (void)setWalletCategory:(id)arg1;
- (id)stylesAttributes;
- (id)walletCategory;
- (void)writeTo:(id)arg1;

@end
