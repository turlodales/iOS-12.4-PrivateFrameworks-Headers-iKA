/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLFeatureVersionHistory : NSObject <NSSecureCoding> {
    NSMutableDictionary * _anchorToVersion;
    long long  _currentFeatureVersion;
    NSMutableDictionary * _versionToAnchor;
}

@property (nonatomic, readonly) long long currentFeatureVersion;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addSyncAnchor:(struct NSData { Class x1; }*)arg1 forFeatureVersion:(long long)arg2;
- (long long)currentFeatureVersion;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateHistoryWithBlock:(id /* block */)arg1;
- (long long)featureVersionForSyncAnchor:(struct NSData { Class x1; }*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCurrentFeatureVersion:(long long)arg1;
- (struct NSData { Class x1; }*)syncAnchorForFeatureVersion:(long long)arg1;

@end
