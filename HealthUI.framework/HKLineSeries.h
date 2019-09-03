/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKLineSeries : HKGraphSeries {
    bool  _extendLastValue;
    bool  _flatLastValue;
    NSArray * _highlightedPresentationStyles;
    UIImage * _selectedPointMarkerImage;
    NSArray * _selectedPresentationStyles;
    NSArray * _unhighlightedPresentationStyles;
}

@property (nonatomic) bool extendLastValue;
@property (nonatomic) bool flatLastValue;
@property (nonatomic, retain) NSArray *highlightedPresentationStyles;
@property (nonatomic, retain) UIImage *selectedPointMarkerImage;
@property (nonatomic, retain) NSArray *selectedPresentationStyles;
@property (nonatomic, retain) NSArray *unhighlightedPresentationStyles;

- (void).cxx_destruct;
- (void)_addAxisAnnotationForValue:(double)arg1;
- (id)_currentPresentationStyles;
- (void)_enumerateCoordinateList:(id)arg1 withTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 presentationStyle:(id)arg3 zoomLevelConfiguration:(id)arg4 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 block:(id /* block */)arg6;
- (void)_enumerateCoordinateList:(id)arg1 withTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 weightedAverageWidth:(double)arg3 block:(id /* block */)arg4;
- (void)_enumerateCoordinateListByRemovingOffscreenPoints:(id)arg1 withTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 presentationStyle:(id)arg3 zoomLevelConfiguration:(id)arg4 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 block:(id /* block */)arg6;
- (void)_enumeratePathsFromBlockCoordinates:(id)arg1 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 zoomLevelConfiguration:(id)arg3 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4 presentationStyle:(id)arg5 handler:(id /* block */)arg6;
- (void)_enumerateSawToothPathsFromBlockCoordinates:(id)arg1 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 zoomLevelConfiguration:(id)arg3 presentationStyle:(id)arg4 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 handler:(id /* block */)arg6;
- (void)_enumerateSinePathsFromBlockCoordinates:(id)arg1 transfrom:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 zoomLevelConfiguration:(id)arg3 presentationStyle:(id)arg4 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 handler:(id /* block */)arg6;
- (void)_renderLineEndCapsInContext:(struct CGContext { }*)arg1 endCaps:(id)arg2 endCapImage:(id)arg3;
- (void)_renderPointLabelInContext:(struct CGContext { }*)arg1 renderingData:(struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; long long x3; })arg2 numberFormatter:(id)arg3 labelAttributes:(id)arg4;
- (void)_renderPointLabelsInContext:(struct CGContext { }*)arg1 blockCoordinates:(id)arg2 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 pointTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4 presentationStyle:(id)arg5 zoomLevelConfiguration:(id)arg6;
- (void)_renderPointMarkersInContext:(struct CGContext { }*)arg1 blockCoordinates:(id)arg2 pointTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 pointMarkerImage:(id)arg4;
- (void)_updateSecondaryRenderContextWithBlockCoordinates:(id)arg1 secondaryRenderContext:(id)arg2 pointTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 zoomLevelConfiguration:(id)arg4 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5;
- (bool)blockCoordinate:(id)arg1 greaterThan:(id)arg2;
- (bool)blockCoordinate:(id)arg1 lessThan:(id)arg2;
- (bool)blockCoordinateIsVisibleInsideOfChartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 blockCoordinate:(id)arg2;
- (id)coordinatesForBlock:(id)arg1 blockPath:(struct { long long x1; long long x2; })arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (double)distanceFromPoint:(struct CGPoint { double x1; double x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4 renderContext:(struct CGContext { }*)arg5 secondaryRenderContext:(id)arg6;
- (bool)extendLastValue;
- (bool)flatLastValue;
- (id)highlightedPresentationStyles;
- (id)init;
- (id)selectedPointMarkerImage;
- (id)selectedPresentationStyles;
- (void)setExtendLastValue:(bool)arg1;
- (void)setFlatLastValue:(bool)arg1;
- (void)setHighlightedPresentationStyles:(id)arg1;
- (void)setSelectedPointMarkerImage:(id)arg1;
- (void)setSelectedPresentationStyles:(id)arg1;
- (void)setUnhighlightedPresentationStyles:(id)arg1;
- (bool)supportsMultiTouchSelection;
- (id)unhighlightedPresentationStyles;
- (double)xAxisDistanceFromPoint:(struct CGPoint { double x1; double x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (double)yAxisDifferenceToPoint:(struct CGPoint { double x1; double x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;

@end
