/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
 */

@interface MUPDFContentViewController : MUContentViewController <MUContentViewControllerProtocol, PDFAKControllerDelegateProtocol, PDFViewDelegatePrivate, _UIViewBoundingPathChangeObserver> {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _cachedThumnailViewInsets;
    bool  _constraintsAreHorizontal;
    bool  _didSetup;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _edgeInsets;
    bool  _forcesPDFViewTopAlignment;
    unsigned long long  _inkStyle;
    bool  _navigationModeHorizontal;
    MUPDFPageLabelView * _pageLabelView;
    PDFDocument * _pdfDocument;
    PDFView * _pdfView;
    bool  _showsThumbnailView;
    NSArray * _sourceContentReplacedAnnotationMaps;
    PDFThumbnailView * _thumbnailView;
    UIView * _thumbnailViewHolder;
    NSArray * _thumbnailViewHolderConstraints;
    NSLayoutConstraint * _thumbnailViewHolderRevealConstraint;
    bool  _viewIsTransitioningBetweenSizes;
    PDFPage * _viewTransitionPageToCenter;
    struct CGPoint { 
        double x; 
        double y; 
    }  _viewTransitionPointOnPageToCenter;
    bool  _viewTransitionPreviousAutoscalingState;
    double  _viewTransitionPreviousScale;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } cachedThumnailViewInsets;
@property (nonatomic) bool centersIgnoringContentInsets;
@property bool constraintsAreHorizontal;
@property (nonatomic, readonly) UIScrollView *contentViewScrollView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) long long defaultToolTag;
@property (readonly, copy) NSString *description;
@property bool didSetup;
@property (nonatomic, readonly) NSString *documentUnlockedWithPassword;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } edgeInsets;
@property (nonatomic) bool forcesPDFViewTopAlignment;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long inkStyle;
@property (nonatomic) bool navigationModeHorizontal;
@property (readonly) unsigned long long pageCount;
@property (retain) MUPDFPageLabelView *pageLabelView;
@property (readonly) PDFDocument *pdfDocument;
@property (retain) PDFView *pdfView;
@property (nonatomic) bool showsThumbnailView;
@property (retain) NSArray *sourceContentReplacedAnnotationMaps;
@property (readonly) Class superclass;
@property (retain) PDFThumbnailView *thumbnailView;
@property (retain) UIView *thumbnailViewHolder;
@property (retain) NSArray *thumbnailViewHolderConstraints;
@property (retain) NSLayoutConstraint *thumbnailViewHolderRevealConstraint;
@property bool viewIsTransitioningBetweenSizes;
@property PDFPage *viewTransitionPageToCenter;
@property struct CGPoint { double x1; double x2; } viewTransitionPointOnPageToCenter;
@property bool viewTransitionPreviousAutoscalingState;
@property double viewTransitionPreviousScale;

// Image: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI

- (void).cxx_destruct;
- (bool)PDFView:(id)arg1 shouldHandleLink:(id)arg2;
- (void)_boundingPathMayHaveChangedForView:(id)arg1 relativeToBoundsOriginOnly:(bool)arg2;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_compensatingAffineTransformForPage:(id)arg1;
- (void)_createPDFView;
- (struct CGSize { double x1; double x2; })_medianSizeForCurrentDocumentInPDFViewWithGetter:(id /* block */)arg1;
- (void)_prepareToRotate;
- (void)_recoverFromRotation;
- (void)_teardownPDFViewIfNecessary;
- (bool)_updateCachedThumbnailViewInsetsDidChangeRight;
- (void)_updateMinMaxZoomFactor;
- (void)_updatePDFViewDisplayMode;
- (void)_updatePageNumberOverlayToPage:(unsigned long long)arg1 animate:(bool)arg2;
- (void)_updateThumbnailViewAppearance;
- (void)_updateThumbnailViewHolderConstraints;
- (void)_userChangedScrollViewMagnificationNotification:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })cachedThumnailViewInsets;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (bool)constraintsAreHorizontal;
- (struct CGSize { double x1; double x2; })contentSize;
- (id)contentSnapshot;
- (id)contentViewScrollView;
- (id)controller:(id)arg1 willSetToolbarItems:(id)arg2;
- (void)controllerWillDismissSignatureCaptureView:(id)arg1;
- (void)controllerWillDismissSignatureManagerView:(id)arg1;
- (void)controllerWillShowSignatureCaptureView:(id)arg1;
- (void)controllerWillShowSignatureManagerView:(id)arg1;
- (void)dealloc;
- (long long)defaultToolTag;
- (bool)didSetup;
- (id)documentUnlockedWithPassword;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (void)editCheckpointReachedForAnnotationController:(id)arg1;
- (void)editDetectedForAnnotationController:(id)arg1;
- (bool)forcesPDFViewTopAlignment;
- (void)highlight:(id)arg1;
- (struct CGSize { double x1; double x2; })idealContentSizeForScreenSize:(struct CGSize { double x1; double x2; })arg1 windowDecorationSize:(struct CGSize { double x1; double x2; })arg2;
- (id)initWithPDFDocument:(id)arg1 delegate:(id)arg2;
- (unsigned long long)inkStyle;
- (id)menuItems:(id)arg1 forPage:(id)arg2;
- (bool)navigationModeHorizontal;
- (unsigned long long)pageCount;
- (id)pageLabelView;
- (id)pdfDocument;
- (void)pdfDocumentDidUnlock:(id)arg1;
- (id)pdfView;
- (void)pdfViewDidChangeCurrentPage:(id)arg1;
- (void)penStrokeCompletedForAnnotationController:(id)arg1;
- (id)popoverPresentingViewControllerForAnnotationController:(id)arg1;
- (void)positionSketchOverlay:(id)arg1 forAnnotationController:(id)arg2;
- (void)setCachedThumnailViewInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setConstraintsAreHorizontal:(bool)arg1;
- (void)setDidSetup:(bool)arg1;
- (void)setEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setForcesPDFViewTopAlignment:(bool)arg1;
- (void)setInkStyle:(unsigned long long)arg1;
- (void)setNavigationModeHorizontal:(bool)arg1;
- (void)setPageLabelView:(id)arg1;
- (void)setPdfView:(id)arg1;
- (void)setShowsThumbnailView:(bool)arg1;
- (void)setSourceContentReplacedAnnotationMaps:(id)arg1;
- (void)setThumbnailView:(id)arg1;
- (void)setThumbnailViewHolder:(id)arg1;
- (void)setThumbnailViewHolderConstraints:(id)arg1;
- (void)setThumbnailViewHolderRevealConstraint:(id)arg1;
- (void)setViewIsTransitioningBetweenSizes:(bool)arg1;
- (void)setViewTransitionPageToCenter:(id)arg1;
- (void)setViewTransitionPointOnPageToCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setViewTransitionPreviousAutoscalingState:(bool)arg1;
- (void)setViewTransitionPreviousScale:(double)arg1;
- (void)setup;
- (bool)shouldShowAnnotationsOfType:(id)arg1;
- (bool)showsThumbnailView;
- (id)sourceContentReplacedAnnotationMaps;
- (void)teardown;
- (id)thumbnailView;
- (id)thumbnailViewHolder;
- (id)thumbnailViewHolderConstraints;
- (id)thumbnailViewHolderRevealConstraint;
- (void)uninstallAllAnnotationControllerOverlays;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (bool)viewIsTransitioningBetweenSizes;
- (id)viewTransitionPageToCenter;
- (struct CGPoint { double x1; double x2; })viewTransitionPointOnPageToCenter;
- (bool)viewTransitionPreviousAutoscalingState;
- (double)viewTransitionPreviousScale;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleContentRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleContentRectInCoordinateSpace:(id)arg1;

// Image: /System/Library/AccessibilityBundles/MarkupUI.axbundle/MarkupUI

+ (Class)safeCategoryBaseClass;

- (void)_accessibilityLoadAccessibilityInformation;
- (id)_axAKOverlayView;
- (void)_axHighlightPopoverDismissed;
- (void)_axHighlightPopoverPresentedForAnnotation:(id)arg1 withHighlightController:(id)arg2 pullFocus:(bool)arg3;
- (void)loadContentWithCompletionBlock:(id /* block */)arg1;

@end
