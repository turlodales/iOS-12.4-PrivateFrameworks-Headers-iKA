/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPBTLECentralManager : HMFObject <CBCentralManagerDelegate> {
    long long  _state;
    CBCentralManager * centralManager;
    long long  centralManagerState;
    NSMutableSet * delegates;
    NSObject<OS_dispatch_queue> * workQueue;
}

@property (nonatomic, retain) CBCentralManager *centralManager;
@property long long centralManagerState;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSMutableSet *delegates;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) long long state;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)getInstance;

- (void).cxx_destruct;
- (id)_getCentralManager;
- (id)centralManager;
- (void)centralManagerDidUpdateState:(id)arg1;
- (long long)centralManagerState;
- (id)delegates;
- (id)init;
- (void)registerCentralManagerDelegate:(id)arg1;
- (void)setCentralManager:(id)arg1;
- (void)setCentralManagerState:(long long)arg1;
- (void)setDelegates:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (long long)state;
- (id)workQueue;

@end
