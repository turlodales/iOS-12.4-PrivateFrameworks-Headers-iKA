/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
 */

@interface ATXAVRoutingSessionHelper : NSObject {
    AVRoutingSessionManager * _avRoutingSessionManager;
    ATXAVRouteInfo * _internalPredictedRouteInfo;
    float  _threshod;
}

@property (nonatomic, readonly) float acceptThreshod;
@property (nonatomic, readonly) ATXAVRouteInfo *predictedRouteInfo;

- (void).cxx_destruct;
- (id)_atxAVRouteInfoWithRoute:(id)arg1;
- (id)_filterExternalRoute:(id)arg1;
- (id)_filterTopRouteFromRoutes:(id)arg1 withAcceptThreshold:(float)arg2;
- (id)_predictedRouteInfoWithAcceptThreshold:(float)arg1;
- (id)_selectedOrPendingRoute;
- (float)acceptThreshod;
- (id)init;
- (id)initWithAcceptThreshold:(float)arg1 avRoutingSessionManager:(id)arg2;
- (id)predictedRouteInfo;

@end
