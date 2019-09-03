/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGMNLEventInBanner : NSObject {
    PETScalarEventTracker * _tracker;
}

@property (nonatomic, readonly) PETScalarEventTracker *tracker;

- (void).cxx_destruct;
- (id)init;
- (void)trackEventWithScalar:(unsigned long long)arg1 interface:(struct SGMNLEventInterface_ { unsigned long long x1; })arg2 actionType:(struct SGMNLEventActionType_ { unsigned long long x1; })arg3 eventType:(id)arg4 languageID:(id)arg5 daysFromStartDate:(unsigned long long)arg6 confidenceScore:(unsigned long long)arg7 significantSender:(struct SGMBoolOption_ { unsigned long long x1; })arg8 participantCount:(unsigned long long)arg9 extractionLevel:(struct SGMNLEventExtractionLevel_ { unsigned long long x1; })arg10 usedBubblesCount:(unsigned long long)arg11 titleSource:(struct SGMEventTitleSource_ { unsigned long long x1; })arg12 titleAdj:(struct SGMEventStringAdj_ { unsigned long long x1; })arg13 dateAdj:(struct SGMEventDateAdj_ { unsigned long long x1; })arg14 duraAdj:(struct SGMEventDurationAdj_ { unsigned long long x1; })arg15 locationAdj:(struct SGMEventLocationAdj_ { unsigned long long x1; })arg16 addedAttendeesCount:(id)arg17 calendarAppUsageLevel:(id)arg18 mailAppUsageLevel:(struct SGMAppUsageLevel_ { unsigned long long x1; })arg19 messagesAppUsageLevel:(struct SGMAppUsageLevel_ { unsigned long long x1; })arg20;
- (id)tracker;

@end
