/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
 */

@interface GSStagingPrefix : NSObject {
    int  _deviceID;
    NSData * _extension;
    NSString * _path;
    NSArray * _pathComponents;
    long long  _sandboxHandle;
    unsigned char  _volumeUUID;
}

- (void).cxx_destruct;
- (void)_connectionWithDaemonWasLost;
- (void)_invalidate:(bool)arg1;
- (bool)_refreshWithError:(id*)arg1;
- (void)cleanupStagingPath:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)finalize;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDocumentID:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isStagedPath:(id)arg1;
- (id)stagingPathforCreatingAdditionWithError:(id*)arg1;

@end
