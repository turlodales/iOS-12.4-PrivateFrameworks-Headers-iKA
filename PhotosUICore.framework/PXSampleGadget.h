/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXSampleGadget : UIViewController <PXGadget> {
    unsigned long long  _accessoryButtonType;
    UIView * _colorView;
    <PXGadgetDelegate> * _delegate;
    bool  _expanded;
    PXGadgetSpec * _gadgetSpec;
    NSString * _gadgetTitle;
    bool  _hasBeenToldToLoadContent;
    bool  _hasContentToDisplay;
    unsigned long long  _preferredExpandedHeight;
    unsigned long long  _preferredHeight;
    long long  _priority;
}

@property (nonatomic, readonly) const struct __CFString { }*accessoryButtonEventTrackerKey;
@property (nonatomic, readonly) NSString *accessoryButtonTitle;
@property (nonatomic) unsigned long long accessoryButtonType;
@property (nonatomic, retain) UIView *colorView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXGadgetDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool expanded;
@property (nonatomic, retain) PXGadgetSpec *gadgetSpec;
@property (nonatomic, copy) NSString *gadgetTitle;
@property (nonatomic, readonly) unsigned long long gadgetType;
@property (nonatomic) bool hasBeenToldToLoadContent;
@property (nonatomic, readonly) bool hasContentToDisplay;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long headerStyle;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic) unsigned long long preferredExpandedHeight;
@property (nonatomic) unsigned long long preferredHeight;
@property (nonatomic) long long priority;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsAssetsDrop;
@property (nonatomic, readonly) bool supportsHighlighting;
@property (nonatomic, readonly) bool supportsSelection;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleContentRect;

- (void).cxx_destruct;
- (unsigned long long)accessoryButtonType;
- (id)colorView;
- (struct NSObject { Class x1; }*)contentViewController;
- (id)delegate;
- (bool)expanded;
- (id)gadgetSpec;
- (id)gadgetTitle;
- (unsigned long long)gadgetType;
- (bool)hasBeenToldToLoadContent;
- (bool)hasContentToDisplay;
- (bool)hasLoadedContentData;
- (id)init;
- (void)loadContentData;
- (id)localizedTitle;
- (unsigned long long)preferredExpandedHeight;
- (unsigned long long)preferredHeight;
- (long long)priority;
- (void)setAccessoryButtonType:(unsigned long long)arg1;
- (void)setColorView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExpanded:(bool)arg1;
- (void)setGadgetSpec:(id)arg1;
- (void)setGadgetTitle:(id)arg1;
- (void)setHasBeenToldToLoadContent:(bool)arg1;
- (void)setPreferredExpandedHeight:(unsigned long long)arg1;
- (void)setPreferredHeight:(unsigned long long)arg1;
- (void)setPriority:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)userDidSelectAccessoryButton:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
