/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
 */

@interface PXPlacesMapRadiusSelectionHandler : NSObject <PXPlacesMapSelectionHandler> {
    <PXPlacesGeotaggedItemDataSource> * _dataSource;
    double  _radius;
    <PXPlacesMapPipelineComponentProvider> * pipelineComponentProvider;
}

@property (readonly) <PXPlacesGeotaggedItemDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PXPlacesMapPipelineComponentProvider> *pipelineComponentProvider;
@property double radius;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dataSource;
- (id)initWithRadius:(double)arg1 dataSource:(id)arg2;
- (id)pipelineComponentProvider;
- (double)radius;
- (void)reset;
- (id)selectedGeotaggablesForRenderable:(id)arg1 mapView:(id)arg2;
- (void)setPipelineComponentProvider:(id)arg1;
- (void)setRadius:(double)arg1;

@end
