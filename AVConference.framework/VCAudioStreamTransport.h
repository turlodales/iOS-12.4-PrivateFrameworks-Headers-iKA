/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCAudioStreamTransport : VCMediaStreamTransport <WRMClientDelegate> {
    WRMClient * _wrmClient;
    struct tagWRMMetricsInfo { 
        bool bInitialized; 
        struct tagHANDLE {} *hRTPHandle; 
        unsigned int dwReportInterval; 
        unsigned int dwWrmTime; 
        unsigned int dwPlaybackCount; 
        unsigned int dwPlaybackCountSpeech; 
        unsigned int dwErasureCount; 
        unsigned int dwErasureSilence; 
        unsigned int dwTimeOfLastRRPacket; 
        unsigned int dwEstimatedRTTMilliSeconds; 
        unsigned int dwJitter; 
        unsigned int dwTotalPacketRecv; 
        unsigned int dwDTXPacketRecv; 
        unsigned long long callId; 
        unsigned long long nominalJitterBufferDelay; 
        unsigned long long targetJitterQueueSize; 
        int nFraction; 
        int (*reportWRMMetricsCallback)(); 
        struct { 
            void *info; 
            int (*retain)(); 
            int (*release)(); 
        } wrmMetricsReportingContext; 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } wrmMetricsReportingLock; 
        unsigned int dwInternalTSRate; 
        unsigned int dwPacketSent; 
        unsigned int isCallAudioOnly; 
        unsigned int bwEstimation; 
        unsigned int targetBitrate; 
        unsigned int oneWayRelativeDelay; 
        unsigned int adaptationPacketLossPercentage; 
        unsigned int isLocalCellular; 
        unsigned int isVideoPaused; 
    }  _wrmInfo;
}

- (void)dealloc;
- (id)initWithDelegate:(id)arg1 handle:(struct tagHANDLE { int x1; }*)arg2 callId:(unsigned int)arg3 localSSRC:(unsigned int)arg4;
- (id)initWithDelegate:(id)arg1 handle:(struct tagHANDLE { int x1; }*)arg2 callId:(unsigned int)arg3 localSSRC:(unsigned int)arg4 enableNetworkMonitor:(bool)arg5;
- (void)onRTCPPacket:(struct tagRTCPPACKET { struct tagRTCPCOMMON { unsigned int x_1_1_1 : 5; unsigned int x_1_1_2 : 1; unsigned int x_1_1_3 : 2; unsigned int x_1_1_4 : 8; unsigned short x_1_1_5; } x1; union { struct tagSR_RTCP { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; unsigned int x_1_2_6; struct tagRTCP_RRB { unsigned int x_7_3_1; unsigned int x_7_3_2 : 8; unsigned int x_7_3_3 : 24; unsigned int x_7_3_4; unsigned int x_7_3_5; unsigned int x_7_3_6; unsigned int x_7_3_7; } x_1_2_7[1]; } x_2_1_1; struct tagRR_RTCP { unsigned int x_2_2_1; struct tagRTCP_RRB { unsigned int x_2_3_1; unsigned int x_2_3_2 : 8; unsigned int x_2_3_3 : 24; unsigned int x_2_3_4; unsigned int x_2_3_5; unsigned int x_2_3_6; unsigned int x_2_3_7; } x_2_2_2[1]; } x_2_1_2; struct tagSDES_RTCP { unsigned int x_3_2_1; struct tagRTCPSDES { unsigned char x_2_3_1; unsigned char x_2_3_2; BOOL x_2_3_3[258]; } x_3_2_2; } x_2_1_3; struct tagBYE_RTCP { unsigned int x_4_2_1; } x_2_1_4; struct tagRTCP_APP { unsigned int x_5_2_1; unsigned int x_5_2_2; } x_2_1_5; struct tagRTCP_APP_LTRP { struct tagRTCP_APP { unsigned int x_1_3_1; unsigned int x_1_3_2; } x_6_2_1; unsigned int x_6_2_2; } x_2_1_6; } x2; }*)arg1 arrivalNTPTime:(union tagNTP { unsigned long long x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg2;
- (void)onStart;
- (void)onStop;
- (void)reportWRMMetrics:(const struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; unsigned long long x16; unsigned long long x17; unsigned long long x18; unsigned long long x19; unsigned long long x20; unsigned long long x21; unsigned long long x22; unsigned long long x23; unsigned long long x24; unsigned long long x25; unsigned long long x26; unsigned long long x27; unsigned long long x28; }*)arg1;
- (void)setWRMCallId:(unsigned int)arg1;
- (void)setWRMMetricConfig:(struct { unsigned long long x1; }*)arg1;
- (void)setWRMNotification:(struct { int x1; int x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; }*)arg1;
- (void)startWRM;
- (void)stopWRM;
- (void)submitWRMReportWithJitterBufferMetrics:(struct tagVCJitterBufferWRMReportingMetrics { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned long long x5; unsigned long long x6; unsigned int x7; unsigned int x8; }*)arg1;

@end
