/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKNavigationDashboardPassViewController : PKNavigationController <CNAvatarViewDelegate, PKDashboardDelegate, PKDashboardPassViewControllerDelegate, PKForegroundActiveArbiterObserver, PKPassDeleteAnimationControllerDelegate, PKPassDeleteHandler, PKPassFooterViewDelegate, PKPassGroupViewDelegate, PKPassGroupViewReceiver, PKSecureElementObserver, PKSpendingSummaryViewControllerDelegate, UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate> {
    struct { 
        bool foreground; 
        bool foregroundActive; 
    }  _activeState;
    PKPassPresentationContext * _context;
    bool  _dashboardIsVisible;
    PKDashboardPassViewController * _dashboardVC;
    <PKDashboardPassDataSource> * _dataSource;
    PKPassDeleteAnimationController * _deleteAnimationController;
    double  _dismissVelocity;
    bool  _dismissedByDragging;
    bool  _footerSuppressed;
    <PKPassGroupViewDelegate> * _formerGroupViewDelegate;
    PKGroup * _group;
    bool  _groupViewNeedsToBeMovedWithContentOffset;
    bool  _invalidated;
    bool  _isDismissedWithAnimationTransitioner;
    bool  _isPresentedWithAnimationTransitioner;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastPreferredOffset;
    PKDashboardPassFlowLayout * _layout;
    PKPGSVTransitionInterstitialView * _leadingInterstitialItemView;
    UIView * _leadingItemView;
    _UIDynamicValueAnimation * _offsetAnimation;
    double  _offsetBeforeDrag;
    UIPanGestureRecognizer * _panGestureRecognizer;
    PKPass * _passBeingDeleted;
    <PKDashboardPassViewControllerDelegate> * _passDashboardDelegate;
    bool  _passDeletionInitiated;
    PKPassFooterView * _passFooterView;
    PKDashboardPassGroupItemPresenter * _passGroupPresenter;
    PKPassGroupView * _passGroupView;
    bool  _passGroupViewAcquired;
    bool  _passGroupViewIsInCollectionView;
    PKPassthroughView * _passthroughView;
    PKPassthroughView * _portalledPassthroughView;
    struct CGPoint { 
        double x; 
        double y; 
    }  _positionBeforeDrag;
    double  _presentationDuration;
    <PKPassGroupViewReceiver> * _receiver;
    PKSecureElement * _secureElement;
    bool  _shouldPauseDynamicCard;
    bool  _shouldUpdateSnapshotView;
    bool  _showingFooter;
    UIView * _snapshotView;
    bool  _snapshotViewIsHidden;
    PKAnimatedNavigationBarTitleView * _titleView;
    double  _topMargin;
    PKPGSVTransitionInterstitialView * _trailingInterstitialItemView;
    UIView * _trailingItemView;
    PKDashboardPaymentTransactionItemPresenter * _transactionItemPresenter;
    PKNavigationDashboardAnimatedTransitioningHandler * _transitioningHandler;
    unsigned char  _visibilityState;
}

@property (nonatomic, retain) PKDashboardPassViewController *dashboardVC;
@property (nonatomic, retain) <PKDashboardPassDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool footerSuppressed;
@property (getter=isFrontmostPassAuthorized, nonatomic, readonly) bool frontmostPassAuthorized;
@property (readonly) unsigned long long hash;
@property (getter=isInvalidated, nonatomic) bool invalidated;
@property (nonatomic, retain) PKDashboardPassFlowLayout *layout;
@property (nonatomic, readonly) UIView *leadingItemView;
@property (nonatomic, readonly) _UIDynamicValueAnimation *offsetAnimation;
@property (nonatomic) <PKDashboardPassViewControllerDelegate> *passDashboardDelegate;
@property (nonatomic, readonly) PKPassGroupView *passGroupView;
@property (nonatomic) bool passGroupViewIsInCollectionView;
@property (nonatomic) <PKPassGroupViewReceiver> *receiver;
@property (readonly) Class superclass;
@property (nonatomic) double topMargin;
@property (nonatomic, readonly) UIView *trailingItemView;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

- (void).cxx_destruct;
- (double)_alphaForPassthroughView;
- (id)_barcodePassDetailsViewControllerForBarcodePass:(id)arg1;
- (void)_canPresentCreditDetailsViewControllerWithCompletion:(id /* block */)arg1;
- (bool)_canShowPassFooterWithFooterState:(long long)arg1;
- (id)_cardIndexPath;
- (void)_dismissIfPossible;
- (id)_dynamicAnimationForUpperBoundaryWithStart:(double)arg1 upperBoundary:(double)arg2 lowerBoundary:(double)arg3 initialVelocity:(double)arg4;
- (void)_ensureCardPresence;
- (long long)_footerStateForPassView:(id)arg1;
- (void)_handlePanGroupGesture:(id)arg1;
- (void)_handleScrollViewPanGroupGesture:(id)arg1;
- (id)_paymentPassDetailsViewControllerForPaymentPass:(id)arg1;
- (void)_showPassFooterView:(bool)arg1 forPassView:(id)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (void)_updateNavigationBarWithPassAppeared:(bool)arg1;
- (void)_updatePassFooterViewAnimated:(bool)arg1;
- (void)_updatePassFooterViewIfNecessaryAnimated:(bool)arg1;
- (void)_updatePausedState;
- (void)_updateSnapshotView;
- (void)_updateTopViewController:(id)arg1;
- (void)acquireGroupView:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)contentDidScroll;
- (void)dashboardPassViewController:(id)arg1 didRequestPaymentForPass:(id)arg2;
- (id)dashboardVC;
- (id)dataSource;
- (id)dataSourceForGroupView:(id)arg1;
- (void)dealloc;
- (void)deleteAnimationController:(id)arg1 didComplete:(bool)arg2;
- (void)deleteAnimationControllerWillBeginDeleteAnimation:(id)arg1;
- (void)doneTapped:(id)arg1;
- (bool)footerSuppressed;
- (void)foregroundActiveArbiter:(id)arg1 didUpdateForegroundActiveState:(struct { bool x1; bool x2; })arg2;
- (void)groupView:(id)arg1 deleteButtonPressedForPass:(id)arg2;
- (void)groupView:(id)arg1 didUpdatePassView:(id)arg2;
- (void)groupView:(id)arg1 frontmostPassViewDidChange:(id)arg2 withContext:(id)arg3;
- (long long)groupViewContentModeForFrontmostPassWhenPiled:(id)arg1 withDefaultContentMode:(long long)arg2;
- (long long)groupViewContentModeForFrontmostPassWhenStacked:(id)arg1;
- (void)groupViewIsAvailable:(id)arg1;
- (unsigned long long)groupViewPassesSuppressedContent:(id)arg1;
- (bool)groupViewShouldAllowPanning:(id)arg1;
- (void)groupViewTapped:(id)arg1;
- (bool)handleDeletePassRequestWithPass:(id)arg1 forViewController:(id)arg2;
- (void)hideTitleView;
- (void)infoTapped:(id)arg1;
- (void)insertGroupView;
- (id)interactionControllerForPresentation:(id)arg1;
- (void)invalidate;
- (bool)isFrontmostPassAuthorized;
- (bool)isInvalidated;
- (bool)isPassFooterViewInGroup:(id)arg1;
- (id)layout;
- (void)leadingHeaderViewInterstitialIsAvailable:(id)arg1;
- (id)leadingItemView;
- (void)loadView;
- (long long)modalPresentationStyle;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;
- (void)noteTransitionCompleted;
- (id)offsetAnimation;
- (id)passDashboardDelegate;
- (void)passFooterViewDidChangeCoachingState:(id)arg1;
- (void)passFooterViewDidChangeUserIntentRequirement:(id)arg1;
- (id)passGroupView;
- (bool)passGroupViewIsInCollectionView;
- (struct CGPoint { double x1; double x2; })preferredContentOffset;
- (void)presentBalanceDetailsWithCompletion:(id /* block */)arg1;
- (void)presentDailyCashForComponents:(id)arg1 completion:(id /* block */)arg2;
- (void)presentPassDetailsAnimated:(bool)arg1 action:(unsigned long long)arg2;
- (void)presentSpendingSummaryWithType:(unsigned long long)arg1 unit:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)presentTransaction:(id)arg1 forPaymentPass:(id)arg2;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)presentersForDataSource:(id)arg1;
- (id)presentingViewControllerForAvatarView:(id)arg1;
- (id)receiver;
- (void)relinquishGroupView;
- (void)secureElementDidEnterRestrictedMode:(id)arg1;
- (void)secureElementDidLeaveRestrictedMode:(id)arg1;
- (void)setDashboardVC:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setFooterSuppressed:(bool)arg1;
- (void)setInvalidated:(bool)arg1;
- (void)setLayout:(id)arg1;
- (void)setPassDashboardDelegate:(id)arg1;
- (void)setPassGroupViewIsInCollectionView:(bool)arg1;
- (void)setReceiver:(id)arg1;
- (void)setTopMargin:(double)arg1;
- (void)setTransitionDuration:(double)arg1;
- (bool)shouldOverrideContentOffset;
- (void)summaryTypeDidChange;
- (unsigned long long)suppressedContentForPassFooter:(id)arg1;
- (double)topMargin;
- (void)trailingHeaderViewInterstitialIsAvailable:(id)arg1;
- (id)trailingItemView;
- (id)transactionItemPresenter;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;

// Image: /System/Library/AccessibilityBundles/PassKitUI.axbundle/PassKitUI

+ (Class)safeCategoryBaseClass;

- (void)_accessibilityLoadAccessibilityInformation;
- (void)didMoveToWindow;
- (id)initWithPassGroupView:(id)arg1 groupViewReceiver:(id)arg2 context:(id)arg3;

@end
