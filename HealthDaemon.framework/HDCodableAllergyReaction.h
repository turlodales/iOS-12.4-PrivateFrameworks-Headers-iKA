/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableAllergyReaction : PBCodable <NSCopying> {
    NSMutableArray * _manifestationCodings;
    HDCodableMedicalDate * _onsetDate;
    HDCodableMedicalCoding * _severityCoding;
}

@property (nonatomic, readonly) bool hasOnsetDate;
@property (nonatomic, readonly) bool hasSeverityCoding;
@property (nonatomic, retain) NSMutableArray *manifestationCodings;
@property (nonatomic, retain) HDCodableMedicalDate *onsetDate;
@property (nonatomic, retain) HDCodableMedicalCoding *severityCoding;

+ (Class)manifestationCodingsType;

- (void).cxx_destruct;
- (void)addManifestationCodings:(id)arg1;
- (void)clearManifestationCodings;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasOnsetDate;
- (bool)hasSeverityCoding;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)manifestationCodings;
- (id)manifestationCodingsAtIndex:(unsigned long long)arg1;
- (unsigned long long)manifestationCodingsCount;
- (void)mergeFrom:(id)arg1;
- (id)onsetDate;
- (bool)readFrom:(id)arg1;
- (void)setManifestationCodings:(id)arg1;
- (void)setOnsetDate:(id)arg1;
- (void)setSeverityCoding:(id)arg1;
- (id)severityCoding;
- (void)writeTo:(id)arg1;

@end
