/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDBTLEAdvertiser : HMFObject <HAPBTLECentralManagerDelegate, HMFTimerDelegate> {
    HMFUnfairLock * _lock;
    HMDHAPAccessory * accessory;
    HMFTimer * advertisementTimer;
    HAPBTLECentralManager * centralManager;
    CUBLEAdvertiser * leAdvertiser;
    HMFTimer * waitForReachableTimer;
    NSObject<OS_dispatch_queue> * workQueue;
}

@property (nonatomic, retain) HMDHAPAccessory *accessory;
@property (nonatomic, retain) HMFTimer *advertisementTimer;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (nonatomic, retain) HAPBTLECentralManager *centralManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CUBLEAdvertiser *leAdvertiser;
@property (nonatomic, retain) HMFUnfairLock *lock;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (nonatomic, retain) HMFTimer *waitForReachableTimer;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)sharedAdvertiser;

- (void).cxx_destruct;
- (void)_advertisementTimeout;
- (void)_cancelOn:(id)arg1;
- (void)_completePendingPowerOnRequest;
- (void)_stopAdvertisement:(id)arg1;
- (void)_wirelessReachabilityTimeout;
- (id)accessory;
- (id)advertisementTimer;
- (void)cancelOn:(id)arg1;
- (id)centralManager;
- (void)didUpdateBTLEState:(long long)arg1;
- (id)init;
- (bool)isAdvertisingForAccessory:(id)arg1;
- (id)leAdvertiser;
- (id)lock;
- (void)powerOn:(id)arg1 macAddress:(id)arg2;
- (void)setAccessory:(id)arg1;
- (void)setAdvertisementTimer:(id)arg1;
- (void)setCentralManager:(id)arg1;
- (void)setLeAdvertiser:(id)arg1;
- (void)setLock:(id)arg1;
- (void)setWaitForReachableTimer:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)stopAdvertisement:(id)arg1;
- (void)timerDidFire:(id)arg1;
- (id)waitForReachableTimer;
- (id)workQueue;

@end
