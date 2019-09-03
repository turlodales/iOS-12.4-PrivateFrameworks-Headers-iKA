/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/APTransport.framework/APTransport
 */

@interface APBrowserBTLEManager : NSObject <APBluetoothClientDelegate> {
    APBluetoothClient * _btleClient;
    NSMutableDictionary * _btleDevices;
    unsigned short  _btleMode;
    void * _eventHandlerContext;
    int (* _eventHandlerFunc;
    NSObject<OS_dispatch_queue> * _eventQueue;
    bool  _isAdvertising;
    bool  _isEnabled;
    bool  _isInvalidated;
    bool  _isScanning;
    bool  _isSoloBeaconDisabled;
    /* Warning: unhandled struct encoding: '{OpaqueAPBrowserBTLEManager={__CFRuntimeBase=QAQ}@}' */ struct OpaqueAPBrowserBTLEManager { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; id x2; } * _managerRef;
    bool  _p2pSoloSupported;
    bool  _p2pSoloSupportedIsSet;
    bool  _preferencesUpdated;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _staleDevicesTimer;
    bool  _trackingEnabled;
}

@property (nonatomic, retain) APBluetoothClient *btleClient;
@property (nonatomic, retain) NSMutableDictionary *btleDevices;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) void*eventHandlerContext;
@property (nonatomic) int (*eventHandlerFunc;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *eventQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isAdvertising;
@property (nonatomic) bool isEnabled;
@property (nonatomic) bool isInvalidated;
@property (nonatomic) bool isScanning;
@property (nonatomic) bool isSoloBeaconDisabled;
@property (nonatomic) /* Warning: unhandled struct encoding: '{OpaqueAPBrowserBTLEManager={__CFRuntimeBase=QAQ}@}' */ struct OpaqueAPBrowserBTLEManager { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; id x2; }*managerRef;
@property (nonatomic) bool preferencesUpdated;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) NSObject<OS_dispatch_source> *staleDevicesTimer;
@property (readonly) Class superclass;

+ (int)createEventInfoDictionary:(id*)arg1 withDeviceID:(id)arg2 IPAddress:(id)arg3 port:(id)arg4 supportsSolo:(id)arg5 rssi:(id)arg6;

- (void)airPlaySolo:(id)arg1 failedToStartAdvertisingWithError:(id)arg2;
- (void)airPlaySolo:(id)arg1 failedToStartScanningWithError:(id)arg2;
- (void)airPlaySolo:(id)arg1 foundDevice:(id)arg2 withData:(id)arg3;
- (void)airPlaySoloDidUpdateState:(id)arg1;
- (void)airPlaySoloStartedAdvertising:(id)arg1;
- (void)airPlaySoloStartedScanning:(id)arg1;
- (void)airPlaySoloStoppedAdvertising:(id)arg1;
- (void)airPlaySoloStoppedScanning:(id)arg1;
- (id)btleClient;
- (id)btleDevices;
- (int)copyShowInfo:(id*)arg1 verbose:(bool)arg2;
- (void)dealloc;
- (int)dispatchEvent:(unsigned int)arg1 withEventInfo:(id)arg2;
- (int)dispatchLostEventForAllDevices;
- (int)ensureAdvertisingStarted;
- (int)ensureAdvertisingStopped;
- (int)ensureBTLEClientInitialized;
- (int)ensurePreferencesUpdatedWithShouldForce:(bool)arg1;
- (int)ensureScanningStarted;
- (int)ensureScanningStopped;
- (int)ensureStaleDeviceTimerStarted;
- (void*)eventHandlerContext;
- (int (*)eventHandlerFunc;
- (id)eventQueue;
- (int)getBTLEMode:(unsigned short*)arg1;
- (int)getTrackingEnabled:(bool*)arg1;
- (int)handleFoundDevice:(id)arg1 withAdvertisementData:(struct { unsigned char x1; unsigned char x2; unsigned char x3[4]; }*)arg2 rssi:(int)arg3;
- (int)handleLostDevice:(id)arg1;
- (id)init;
- (int)invalidate;
- (bool)isAdvertising;
- (bool)isEnabled;
- (bool)isInvalidated;
- (bool)isScanning;
- (bool)isSoloBeaconDisabled;
- (/* Warning: unhandled struct encoding: '{OpaqueAPBrowserBTLEManager={__CFRuntimeBase=QAQ}@}' */ struct OpaqueAPBrowserBTLEManager { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; id x2; }*)managerRef;
- (unsigned long long)nearbySoloDevicesCount;
- (bool)preferencesUpdated;
- (id)queue;
- (int)setBTLEMode:(unsigned short)arg1;
- (void)setBtleClient:(id)arg1;
- (void)setBtleDevices:(id)arg1;
- (int)setEventHandler:(int (*)arg1 context:(void*)arg2 managerRef:(/* Warning: unhandled struct encoding: '{OpaqueAPBrowserBTLEManager={__CFRuntimeBase=QAQ}@}' */ struct OpaqueAPBrowserBTLEManager { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; id x2; }*)arg3;
- (void)setEventHandlerContext:(void*)arg1;
- (void)setEventHandlerFunc:(int (*)arg1;
- (void)setIsAdvertising:(bool)arg1;
- (void)setIsEnabled:(bool)arg1;
- (void)setIsInvalidated:(bool)arg1;
- (void)setIsScanning:(bool)arg1;
- (void)setIsSoloBeaconDisabled:(bool)arg1;
- (void)setManagerRef:(/* Warning: unhandled struct encoding: '{OpaqueAPBrowserBTLEManager={__CFRuntimeBase=QAQ}@}' */ struct OpaqueAPBrowserBTLEManager { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; id x2; }*)arg1;
- (void)setPreferencesUpdated:(bool)arg1;
- (void)setStaleDevicesTimer:(id)arg1;
- (int)setSupportsSolo:(bool)arg1;
- (int)setTrackingEnabled:(bool)arg1;
- (bool)shouldAdvertiseSourcePresence;
- (id)staleDevicesTimer;
- (int)startMode:(unsigned short)arg1;
- (int)stop;
- (id)stringForBTLEmode:(unsigned short)arg1;
- (int)update;

@end
