/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

@interface MCQuestionView : UIView <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate> {
    NSString * _defaultText;
    bool  _isInitialQuestion;
    bool  _isLastQuestion;
    bool  _isPasswordQuestion;
    bool  _isRequiredQuestion;
    long long  _keyboardType;
    UILabel * _labelAboveField;
    UILabel * _labelBelowField;
    unsigned long long  _minimumLength;
    MCQuestionPane * _ownerPane;
    NSString * _placeholderText;
    UITextField * _questionField;
    UITableView * _questionTable;
    long long  _textAutoCaps;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isInitialQuestion;
@property (nonatomic) MCQuestionPane *ownerPane;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI

- (void).cxx_destruct;
- (void)_configureQuestionField;
- (void)_setStylesOnLabelAboveField;
- (void)_setStylesOnLabelBelowField;
- (void)_textFieldValueChanged:(id)arg1;
- (id)answer;
- (void)claimFirstResponder;
- (void)clearInputField;
- (void)dealloc;
- (void)disableInputField;
- (void)enableInputField;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isInitialQuestion;
- (void)layoutSubviews;
- (id)ownerPane;
- (void)setIsInitialQuestion:(bool)arg1;
- (void)setIsLastQuestion:(bool)arg1;
- (void)setIsPasswordQuestion:(bool)arg1;
- (void)setIsRequiredField:(bool)arg1;
- (void)setOwnerPane:(id)arg1;
- (void)setProperties:(id)arg1;
- (void)setTextAboveField:(id)arg1;
- (void)setTextBelowField:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)textFieldShouldReturn:(id)arg1;

// Image: /System/Library/AccessibilityBundles/ManagedConfigurationUI.axbundle/ManagedConfigurationUI

+ (Class)safeCategoryBaseClass;

- (bool)_accessibilityHandwritingAttributeAcceptsRawInput;
- (unsigned long long)_accessibilityHandwritingAttributeAllowedCharacterSets;
- (bool)_accessibilityHandwritingAttributeCanDeleteCharacter;
- (unsigned long long)_accessibilityHandwritingAttributePreferredCharacterSet;
- (bool)_accessibilityHandwritingAttributeShouldEchoCharacter;
- (bool)_accessibilityHandwritingAttributeShouldPlayKeyboardSecureClickSound;
- (void)_accessibilityInsertText:(id)arg1 atPosition:(long long)arg2;
- (bool)_accessibilityIsPasswordQuestion;
- (long long)_accessibilityQuestionKeyboardType;
- (id)_accessibilityQuestionTextField;
- (void)_accessibilityReplaceCharactersAtCursor:(unsigned long long)arg1 withString:(id)arg2;
- (bool)_accessibilitySupportsHandwriting;

@end
