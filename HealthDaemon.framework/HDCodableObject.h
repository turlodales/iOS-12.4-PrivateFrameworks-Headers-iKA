/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableObject : PBCodable <HDDecoding, NSCopying> {
    double  _creationDate;
    long long  _externalSyncObjectCode;
    struct { 
        unsigned int creationDate : 1; 
        unsigned int externalSyncObjectCode : 1; 
    }  _has;
    HDCodableMetadataDictionary * _metadataDictionary;
    NSString * _sourceBundleIdentifier;
    NSData * _uuid;
}

@property (nonatomic) double creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long externalSyncObjectCode;
@property (nonatomic) bool hasCreationDate;
@property (nonatomic) bool hasExternalSyncObjectCode;
@property (nonatomic, readonly) bool hasMetadataDictionary;
@property (nonatomic, readonly) bool hasSourceBundleIdentifier;
@property (nonatomic, readonly) bool hasUuid;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HDCodableMetadataDictionary *metadataDictionary;
@property (nonatomic, retain) NSString *sourceBundleIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSData *uuid;

- (void).cxx_destruct;
- (bool)applyToObject:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)creationDate;
- (id)decodedMetadata;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)externalSyncObjectCode;
- (bool)hasCreationDate;
- (bool)hasExternalSyncObjectCode;
- (bool)hasMetadataDictionary;
- (bool)hasSourceBundleIdentifier;
- (bool)hasUuid;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)metadataDictionary;
- (bool)readFrom:(id)arg1;
- (void)setCreationDate:(double)arg1;
- (void)setExternalSyncObjectCode:(long long)arg1;
- (void)setHasCreationDate:(bool)arg1;
- (void)setHasExternalSyncObjectCode:(bool)arg1;
- (void)setMetadataDictionary:(id)arg1;
- (void)setSourceBundleIdentifier:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)sourceBundleIdentifier;
- (id)uuid;
- (void)writeTo:(id)arg1;

@end
