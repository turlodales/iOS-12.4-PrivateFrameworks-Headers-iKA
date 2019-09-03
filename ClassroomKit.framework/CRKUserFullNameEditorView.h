/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKUserFullNameEditorView : UIView <CRKUserNameEditorViewDelegate> {
    NSObject<CRKFullNameEditorViewDelegate> * _delegate;
    CRKUserNameEditorView * _familyNameEditorView;
    CRKUserNameEditorView * _givenNameEditorView;
    UIStackView * _nameEditorStackView;
    UIView * _separatorView;
    bool  _showFamilyNameFirst;
    bool  _showPhoneticName;
    NSLayoutConstraint * mEqualNameEditorHeightConstraint;
}

@property (nonatomic) NSObject<CRKFullNameEditorViewDelegate> *delegate;
@property (getter=isEmpty, nonatomic, readonly) bool empty;
@property (nonatomic, copy) NSString *familyName;
@property (nonatomic, readonly) CRKUserNameEditorView *familyNameEditorView;
@property (nonatomic, copy) NSString *givenName;
@property (nonatomic, readonly) CRKUserNameEditorView *givenNameEditorView;
@property (nonatomic, readonly) UIStackView *nameEditorsStackView;
@property (nonatomic, copy) NSString *phoneticFamilyName;
@property (nonatomic, copy) NSString *phoneticGivenName;
@property (nonatomic, readonly) UIView *separatorView;
@property (getter=shouldShowFamilyNameFirst, nonatomic) bool showFamilyNameFirst;
@property (getter=shouldShowPhoneticName, nonatomic) bool showPhoneticName;

- (void).cxx_destruct;
- (void)_commonInit_UserFullNameEditorView;
- (id)_firstNameEditorView;
- (id)_lastNameEditorView;
- (id)accessibilityElements;
- (id)delegate;
- (id)familyName;
- (id)familyNameEditorView;
- (id)givenName;
- (id)givenNameEditorView;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAccessibilityElement;
- (bool)isEmpty;
- (id)nameEditorsStackView;
- (id)phoneticFamilyName;
- (id)phoneticGivenName;
- (id)separatorView;
- (void)setDelegate:(id)arg1;
- (void)setFamilyName:(id)arg1;
- (void)setGivenName:(id)arg1;
- (void)setPhoneticFamilyName:(id)arg1;
- (void)setPhoneticGivenName:(id)arg1;
- (void)setShowFamilyNameFirst:(bool)arg1;
- (void)setShowPhoneticName:(bool)arg1;
- (bool)shouldShowFamilyNameFirst;
- (bool)shouldShowPhoneticName;
- (void)userNameEditorViewDidEditName:(id)arg1;
- (void)userNameEditorViewDidEditPhoneticName:(id)arg1;
- (bool)userNameEditorViewShouldReturn:(id)arg1;

@end
