/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
 */

@interface HROnboardingAtrialFibrillationGateViewController : HROnboardingBaseViewController <HRStackedButtonViewDelegate, UITextFieldDelegate> {
    HKSeparatorLineView * _birthdayBottomSeparator;
    UIStackView * _birthdayEntryView;
    UILabel * _birthdayFooterLabel;
    HKCaretOptionalTextField * _birthdayTextField;
    HKSeparatorLineView * _birthdayTopSeparator;
    UILabel * _bodyLabel;
    NSLayoutConstraint * _contentViewBottomConstraint;
    NSDateFormatter * _dateFormatter;
    NSDate * _dateOfBirth;
    UIDatePicker * _datePicker;
    NSNumber * _diagnosis;
    HKSeparatorLineView * _diagnosisBottomSeparator;
    UILabel * _diagnosisFooterLabel;
    HKSeparatorLineView * _diagnosisMiddleSeparator;
    UIView * _diagnosisNoBackground;
    UIImageView * _diagnosisNoCheckmark;
    UILabel * _diagnosisNoLabel;
    UIStackView * _diagnosisNoRow;
    UILabel * _diagnosisPromptLabel;
    HKSeparatorLineView * _diagnosisTopSeparator;
    UIView * _diagnosisYesBackground;
    UIImageView * _diagnosisYesCheckmark;
    UILabel * _diagnosisYesLabel;
    UIStackView * _diagnosisYesRow;
    HRStackedButtonView * _stackedButtonView;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) HKSeparatorLineView *birthdayBottomSeparator;
@property (nonatomic, retain) UIStackView *birthdayEntryView;
@property (nonatomic, retain) UILabel *birthdayFooterLabel;
@property (nonatomic, retain) HKCaretOptionalTextField *birthdayTextField;
@property (nonatomic, retain) HKSeparatorLineView *birthdayTopSeparator;
@property (nonatomic, retain) UILabel *bodyLabel;
@property (nonatomic, retain) NSLayoutConstraint *contentViewBottomConstraint;
@property (nonatomic, retain) NSDateFormatter *dateFormatter;
@property (nonatomic, retain) NSDate *dateOfBirth;
@property (nonatomic, retain) UIDatePicker *datePicker;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSNumber *diagnosis;
@property (nonatomic, retain) HKSeparatorLineView *diagnosisBottomSeparator;
@property (nonatomic, retain) UILabel *diagnosisFooterLabel;
@property (nonatomic, retain) HKSeparatorLineView *diagnosisMiddleSeparator;
@property (nonatomic, retain) UIView *diagnosisNoBackground;
@property (nonatomic, retain) UIImageView *diagnosisNoCheckmark;
@property (nonatomic, retain) UILabel *diagnosisNoLabel;
@property (nonatomic, retain) UIStackView *diagnosisNoRow;
@property (nonatomic, retain) UILabel *diagnosisPromptLabel;
@property (nonatomic, retain) HKSeparatorLineView *diagnosisTopSeparator;
@property (nonatomic, retain) UIView *diagnosisYesBackground;
@property (nonatomic, retain) UIImageView *diagnosisYesCheckmark;
@property (nonatomic, retain) UILabel *diagnosisYesLabel;
@property (nonatomic, retain) UIStackView *diagnosisYesRow;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HRStackedButtonView *stackedButtonView;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *titleLabel;

// Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI

- (void).cxx_destruct;
- (void)_adjustButtonFooterViewLocationForViewContentHeight;
- (double)_ageEntryFooterToDiagnosisPromptFirstBaseline;
- (double)_ageEntryLastBaselineToBottomSeparator;
- (id)_ageEntryTitleFont;
- (double)_ageEntryTopSeparatorToFirstBaseline;
- (id)_bodyFont;
- (double)_bodyLastBaselineToAgeEntryTop;
- (id)_dateOfBirthDatePicker;
- (void)_dateOfBirthTapped:(id)arg1;
- (void)_datePickerValueChanged:(id)arg1;
- (double)_diagnosisFooterLabelToContinueButton;
- (double)_diagnosisLastBaselineToBottomSeparator;
- (id)_diagnosisPromptFont;
- (double)_diagnosisPromptLastBaselineToDiagnosisTop;
- (void)_diagnosisRowTapped:(id)arg1;
- (double)_diagnosisTopSeparatorToFirstBaseline;
- (void)_didTapBackground;
- (id)_footnoteFont;
- (void)_keyboardFrameChanged:(id)arg1;
- (bool)_meetsAgeRequirement;
- (bool)_meetsDiagnosisRequirement;
- (double)_separatorToFooterFirstBaseline;
- (void)_setUpBirthdayEntryView;
- (void)_setUpButtonFooterView;
- (void)_setUpDiagnosisRowWithTitle:(id)arg1 value:(bool)arg2;
- (double)_titleLastBaselineToBodyFirstBaseline;
- (void)_updateButtonState;
- (void)_updateDateOfBirthDisplay;
- (id)ageIneligiblePromptAckButtonString;
- (id)ageIneligiblePromptBodyString;
- (id)ageIneligiblePromptTitleString;
- (id)ageLimit;
- (id)ageWithDate:(id)arg1;
- (id)birthdayBottomSeparator;
- (id)birthdayEntryView;
- (id)birthdayFooterLabel;
- (id)birthdayTextField;
- (id)birthdayTopSeparator;
- (id)bodyLabel;
- (id)contentViewBottomConstraint;
- (id)dateFormatter;
- (id)dateOfBirth;
- (id)datePicker;
- (id)diagnosis;
- (id)diagnosisBottomSeparator;
- (id)diagnosisFooterLabel;
- (id)diagnosisIneligiblePromptAckButtonString;
- (id)diagnosisIneligiblePromptBodyString;
- (id)diagnosisIneligiblePromptTitleString;
- (id)diagnosisMiddleSeparator;
- (id)diagnosisNoBackground;
- (id)diagnosisNoCheckmark;
- (id)diagnosisNoLabel;
- (id)diagnosisNoRow;
- (id)diagnosisPromptLabel;
- (id)diagnosisTopSeparator;
- (id)diagnosisYesBackground;
- (id)diagnosisYesCheckmark;
- (id)diagnosisYesLabel;
- (id)diagnosisYesRow;
- (id)initForOnboarding:(bool)arg1;
- (void)setBirthdayBottomSeparator:(id)arg1;
- (void)setBirthdayEntryView:(id)arg1;
- (void)setBirthdayFooterLabel:(id)arg1;
- (void)setBirthdayTextField:(id)arg1;
- (void)setBirthdayTopSeparator:(id)arg1;
- (void)setBodyLabel:(id)arg1;
- (void)setContentViewBottomConstraint:(id)arg1;
- (void)setDateFormatter:(id)arg1;
- (void)setDateOfBirth:(id)arg1;
- (void)setDatePicker:(id)arg1;
- (void)setDiagnosis:(id)arg1;
- (void)setDiagnosisBottomSeparator:(id)arg1;
- (void)setDiagnosisFooterLabel:(id)arg1;
- (void)setDiagnosisMiddleSeparator:(id)arg1;
- (void)setDiagnosisNoBackground:(id)arg1;
- (void)setDiagnosisNoCheckmark:(id)arg1;
- (void)setDiagnosisNoLabel:(id)arg1;
- (void)setDiagnosisNoRow:(id)arg1;
- (void)setDiagnosisPromptLabel:(id)arg1;
- (void)setDiagnosisTopSeparator:(id)arg1;
- (void)setDiagnosisYesBackground:(id)arg1;
- (void)setDiagnosisYesCheckmark:(id)arg1;
- (void)setDiagnosisYesLabel:(id)arg1;
- (void)setDiagnosisYesRow:(id)arg1;
- (void)setStackedButtonView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setUpConstraints;
- (void)setUpUI;
- (id)stackedButtonView;
- (void)stackedButtonView:(id)arg1 didTapButtonAtIndex:(long long)arg2;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (id)titleLabel;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Image: /System/Library/AccessibilityBundles/HeartRhythmUI.axbundle/HeartRhythmUI

+ (Class)safeCategoryBaseClass;

- (void)_accessibilityLoadAccessibilityInformation;
- (void)_axSetupSelectionRow:(id)arg1 expectedResult:(bool)arg2;

@end
