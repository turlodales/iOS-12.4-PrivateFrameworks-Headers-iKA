/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MediaControlsStandaloneEndpointController : MediaControlsEndpointController <MPAVRoutingControllerDelegate, MediaControlsEndpointControllerConnectionDelegate, MediaControlsEndpointObserverDelegate> {
    NSString * _activeEndpointUID;
    MPCFuture * _deferredPlayerPathFuture;
    id  _deferredPlayerPathInvalidationToken;
    MSVPersistentTimer * _deferredPlayerPathTimer;
    MPMRAVEndpointObserverWrapper * _endpointObserver;
    bool  _isDeferred;
    long long  _routeType;
    NSString * _routeUID;
    MPAVRoutingController * _routingController;
}

@property (nonatomic, retain) NSString *activeEndpointUID;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) MPCFuture *deferredPlayerPathFuture;
@property (nonatomic, retain) id deferredPlayerPathInvalidationToken;
@property (nonatomic, retain) MSVPersistentTimer *deferredPlayerPathTimer;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) MPMRAVEndpointObserverWrapper *endpointObserver;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isDeferred;
@property (nonatomic) long long routeType;
@property (nonatomic, retain) NSString *routeUID;
@property (nonatomic, readonly) MPAVRoutingController *routingController;
@property (readonly) Class superclass;

+ (double)mediaRecentlyPlayedTimeout;

- (void).cxx_destruct;
- (void)_activeSystemRouteDidChangeNotification:(id)arg1;
- (void)_activeSystemRouteDidChangeWithChangeType:(long long)arg1;
- (void)_fetchActiveSystemRoute:(id /* block */)arg1;
- (void)_maybeRestoreDeferredPlayerPath;
- (void)_maybeUpdateActiveSystemRoute;
- (void)_resetDeferredPlayerPath;
- (void)_restoreDeferredPlayerPath;
- (void)_updateActiveSystemRoute;
- (id)activeEndpointUID;
- (void)beginObserving;
- (bool)controller:(id)arg1 shouldRetryFailedRequestWithError:(id)arg2;
- (void)dealloc;
- (id)deferredPlayerPathFuture;
- (id)deferredPlayerPathInvalidationToken;
- (id)deferredPlayerPathTimer;
- (void)endObserving;
- (void)endpointController:(id)arg1 willAttemptToConnectToRoute:(id)arg2;
- (id)endpointObserver;
- (id)initWithActiveRouteType:(long long)arg1;
- (id)initWithEndpoint:(id)arg1;
- (id)initWithRouteUID:(id)arg1;
- (bool)isDeferred;
- (id)proxyDelegate;
- (id)routeForEndpoint:(void*)arg1;
- (long long)routeType;
- (id)routeUID;
- (id)routingController;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)setActiveEndpointUID:(id)arg1;
- (void)setDeferredPlayerPathFuture:(id)arg1;
- (void)setDeferredPlayerPathInvalidationToken:(id)arg1;
- (void)setDeferredPlayerPathTimer:(id)arg1;
- (void)setDeviceUnlocked:(bool)arg1;
- (void)setEndpointObserver:(id)arg1;
- (void)setIsDeferred:(bool)arg1;
- (void)setOnScreen:(bool)arg1;
- (void)setRouteType:(long long)arg1;
- (void)setRouteUID:(id)arg1;

@end
