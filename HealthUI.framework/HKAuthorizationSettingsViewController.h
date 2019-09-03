/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKAuthorizationSettingsViewController : HKTableViewController <HKDocumentPickerViewControllerDelegate, HKHealthPrivacyServicePromptController, HKSourceAuthorizationControllerDelegate, HKSwitchTableViewCellDelegate> {
    NSArray * _actualSections;
    UIBarButtonItem * _cancelButtonItem;
    <HKHealthPrivacyServicePromptControllerDelegate> * _delegate;
    HKDisplayCategoryController * _displayCategoryController;
    NSArray * _documents;
    UIBarButtonItem * _doneButtonItem;
    HKHealthStore * _healthStore;
    NSArray * _readingTypeOrdering;
    NSString * _researchStudyUsageDescription;
    NSString * _shareDescription;
    HKSource * _source;
    HKSourceAuthorizationController * _sourceAuthorizationController;
    long long  _style;
    NSSet * _typesToRead;
    NSSet * _typesToShare;
    NSString * _updateDescription;
}

@property (retain) NSArray *actualSections;
@property (nonatomic, retain) UIBarButtonItem *cancelButtonItem;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HKHealthPrivacyServicePromptControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HKDisplayCategoryController *displayCategoryController;
@property (nonatomic, retain) UIBarButtonItem *doneButtonItem;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (readonly) bool isPrompting;
@property (nonatomic, copy) NSString *researchStudyUsageDescription;
@property (nonatomic, copy) NSString *shareDescription;
@property (nonatomic, retain) HKSource *source;
@property (nonatomic, retain) HKSourceAuthorizationController *sourceAuthorizationController;
@property (nonatomic, readonly) long long style;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSSet *typesToRead;
@property (nonatomic, retain) NSSet *typesToShare;
@property (nonatomic, copy) NSString *updateDescription;

- (void).cxx_destruct;
- (void)_addCancelAndDoneButtons;
- (void)_addHeaderView;
- (id)_authorizationSettingCellForRowAtIndexPath:(id)arg1;
- (void)_configurationFailedWithError:(id)arg1;
- (void)_done:(id)arg1;
- (void)_finishWithError:(id)arg1;
- (bool)_isTypeEnabledAtIndexPath:(id)arg1;
- (id)_localizedNameForSection:(long long)arg1 type:(id)arg2;
- (id)_openAppCell;
- (bool)_shouldDisplayHealthRecordsRequests;
- (bool)_shouldDisplayReadingSection;
- (bool)_shouldDisplaySharingSection;
- (id)_specialCellWithIdentifier:(id)arg1;
- (id)_toggleAllCell;
- (id)_typeForIndexPath:(id)arg1 section:(long long*)arg2;
- (id)actualSections;
- (void)authorizationController:(id)arg1 parentTypeIsDisabled:(id)arg2 forType:(id)arg3 inSection:(long long)arg4;
- (void)authorizationController:(id)arg1 subTypesEnabled:(id)arg2 forType:(id)arg3 inSection:(long long)arg4;
- (long long)authorizationSectionForSection:(long long)arg1;
- (id)cancelButtonItem;
- (id)delegate;
- (id)displayCategoryController;
- (void)documentPickerViewControllerDidFinish:(id)arg1 error:(id)arg2;
- (id)doneButtonItem;
- (id)healthStore;
- (id)init;
- (id)initWithHealthStore:(id)arg1 style:(long long)arg2;
- (bool)isPrompting;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadAuthorizationSettings;
- (id)researchStudyUsageDescription;
- (id)sectionsForAuthController:(id)arg1;
- (void)setActualSections:(id)arg1;
- (void)setCancelButtonItem:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayCategoryController:(id)arg1;
- (void)setDoneButtonItem:(id)arg1;
- (void)setResearchStudyUsageDescription:(id)arg1;
- (void)setShareDescription:(id)arg1;
- (void)setSource:(id)arg1;
- (void)setSourceAuthorizationController:(id)arg1;
- (void)setTypesToRead:(id)arg1;
- (void)setTypesToShare:(id)arg1;
- (void)setUpdateDescription:(id)arg1;
- (id)shareDescription;
- (bool)shouldPresent;
- (id)source;
- (id)sourceAuthorizationController;
- (long long)style;
- (void)switchCellValueChanged:(id)arg1 value:(bool)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)typesToRead;
- (id)typesToShare;
- (void)updateAllowButtonEnabledState;
- (id)updateDescription;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
