/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI
 */

@interface BSUIRelativeDateLabel : BSUIDefaultDateLabel <BSRelativeDateTimerDelegate> {
    long long  _comparedToNow;
    BSRelativeDateTimer * _relativeDateTimer;
    unsigned long long  _resolution;
    unsigned long long  _value;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI

- (void).cxx_destruct;
- (id)constructLabelString;
- (void)dealloc;
- (void)prepareForReuse;
- (void)setTimeZoneRelativeStartDate:(id)arg1 absoluteStartDate:(id)arg2;
- (void)timerFiredWithValue:(unsigned long long)arg1 forResolution:(unsigned long long)arg2 comparedToNow:(long long)arg3;

// Image: /System/Library/AccessibilityBundles/BaseBoardUI.axbundle/BaseBoardUI

+ (Class)safeCategoryBaseClass;

- (id)accessibilityLabel;

@end