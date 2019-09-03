/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
 */

@interface BFFSetupAssistantDeviceToDeviceMigrationSuccess : PBCodable <NSCopying> {
    int  _connectionType;
    struct { 
        unsigned int restoreDuration : 1; 
        unsigned int size : 1; 
        unsigned int timestamp : 1; 
        unsigned int transferDuration : 1; 
        unsigned int connectionType : 1; 
    }  _has;
    unsigned long long  _restoreDuration;
    unsigned long long  _size;
    NSString * _sourceDeviceModel;
    NSString * _sourceDeviceProductVersion;
    NSString * _targetDeviceModel;
    NSString * _targetDeviceProductVersion;
    unsigned long long  _timestamp;
    unsigned long long  _transferDuration;
}

@property (nonatomic) int connectionType;
@property (nonatomic) bool hasConnectionType;
@property (nonatomic) bool hasRestoreDuration;
@property (nonatomic) bool hasSize;
@property (nonatomic, readonly) bool hasSourceDeviceModel;
@property (nonatomic, readonly) bool hasSourceDeviceProductVersion;
@property (nonatomic, readonly) bool hasTargetDeviceModel;
@property (nonatomic, readonly) bool hasTargetDeviceProductVersion;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasTransferDuration;
@property (nonatomic) unsigned long long restoreDuration;
@property (nonatomic) unsigned long long size;
@property (nonatomic, retain) NSString *sourceDeviceModel;
@property (nonatomic, retain) NSString *sourceDeviceProductVersion;
@property (nonatomic, retain) NSString *targetDeviceModel;
@property (nonatomic, retain) NSString *targetDeviceProductVersion;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned long long transferDuration;

- (void).cxx_destruct;
- (int)connectionType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasConnectionType;
- (bool)hasRestoreDuration;
- (bool)hasSize;
- (bool)hasSourceDeviceModel;
- (bool)hasSourceDeviceProductVersion;
- (bool)hasTargetDeviceModel;
- (bool)hasTargetDeviceProductVersion;
- (bool)hasTimestamp;
- (bool)hasTransferDuration;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned long long)restoreDuration;
- (void)setConnectionType:(int)arg1;
- (void)setHasConnectionType:(bool)arg1;
- (void)setHasRestoreDuration:(bool)arg1;
- (void)setHasSize:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTransferDuration:(bool)arg1;
- (void)setRestoreDuration:(unsigned long long)arg1;
- (void)setSize:(unsigned long long)arg1;
- (void)setSourceDeviceModel:(id)arg1;
- (void)setSourceDeviceProductVersion:(id)arg1;
- (void)setTargetDeviceModel:(id)arg1;
- (void)setTargetDeviceProductVersion:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTransferDuration:(unsigned long long)arg1;
- (unsigned long long)size;
- (id)sourceDeviceModel;
- (id)sourceDeviceProductVersion;
- (id)targetDeviceModel;
- (id)targetDeviceProductVersion;
- (unsigned long long)timestamp;
- (unsigned long long)transferDuration;
- (void)writeTo:(id)arg1;

@end
