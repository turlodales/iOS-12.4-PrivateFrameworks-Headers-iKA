/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

@interface ASDSoftwareUpdate : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _blockedBy;
    bool  _downloaded;
    NSDate * _installDate;
    NSDictionary * _metrics;
    bool  _perDevice;
    bool  _profileValidated;
    NSDictionary * _rawUpdateDictionary;
    long long  _rawUpdateState;
    NSDate * _timestamp;
    long long  _updateState;
}

@property (nonatomic, copy) NSArray *blockedBy;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *buyParams;
@property (getter=isDownloaded, nonatomic) bool downloaded;
@property (nonatomic, readonly) NSNumber *externalVersionIdentifier;
@property (nonatomic, copy) NSDate *installDate;
@property (nonatomic, copy) NSDictionary *metrics;
@property (nonatomic, readonly) long long parentalControlsRank;
@property (getter=isPerDevice, nonatomic) bool perDevice;
@property (getter=isProfileValidated, nonatomic) bool profileValidated;
@property (nonatomic, readonly) NSDictionary *rawUpdateDictionary;
@property (nonatomic) long long rawUpdateState;
@property (nonatomic, readonly) long long storeItemIdentifier;
@property (nonatomic, copy) NSDate *timestamp;
@property (nonatomic, readonly) NSDictionary *updateDictionary;
@property (nonatomic) long long updateState;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)blockedBy;
- (id)bundleIdentifier;
- (id)buyParams;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)externalVersionIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithUpdateDictionary:(id)arg1;
- (id)installDate;
- (bool)isDownloaded;
- (bool)isPerDevice;
- (bool)isProfileValidated;
- (id)metrics;
- (long long)parentalControlsRank;
- (id)rawUpdateDictionary;
- (long long)rawUpdateState;
- (id)releaseDate;
- (void)setBlockedBy:(id)arg1;
- (void)setDownloaded:(bool)arg1;
- (void)setInstallDate:(id)arg1;
- (void)setMetrics:(id)arg1;
- (void)setPerDevice:(bool)arg1;
- (void)setProfileValidated:(bool)arg1;
- (void)setRawUpdateState:(long long)arg1;
- (void)setTimestamp:(id)arg1;
- (void)setUpdateState:(long long)arg1;
- (long long)storeItemIdentifier;
- (id)timestamp;
- (id)updateDictionary;
- (long long)updateState;

@end
