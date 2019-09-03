/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

@interface FRPersonalizationUtilities : NSObject

+ (double)decayedDiversificationPenaltyWithInitialValue:(double)arg1 finalValue:(double)arg2 halfLife:(double)arg3 baselineAggregate:(id)arg4;
+ (id)diversifyItems:(id)arg1 withLimit:(unsigned long long)arg2 similarityStartExpectation:(double)arg3 similarityEndExpectation:(double)arg4 publisherDiversificationSlope:(double)arg5 publisherDiversificationYIntercept:(double)arg6;
+ (id)diversifyItems:(id)arg1 withPreselectedItems:(id)arg2 limit:(unsigned long long)arg3 similarityStartExpectation:(double)arg4 similarityEndExpectation:(double)arg5 publisherDiversificationSlope:(double)arg6 publisherDiversificationYIntercept:(double)arg7;
+ (id)limitItems:(id)arg1 byHourlyFlowRate:(double)arg2 itemFilterPerPublisher:(double)arg3 timeInterval:(double)arg4;
+ (id)sortItems:(id)arg1 withItemToGlobalScoreMap:(id)arg2 readonlyPersonalizationAggregateStore:(id)arg3 personalizationWhitelist:(id)arg4 configurableValues:(id)arg5 userProfile:(id)arg6;
+ (id)sortItems:(id)arg1 withItemToGlobalScoreMap:(id)arg2 readonlyPersonalizationAggregateStore:(id)arg3 personalizationWhitelist:(id)arg4 configurableValues:(id)arg5 userProfile:(id)arg6 translatedTagIDs:(id)arg7 sortOptions:(long long)arg8 configurationSet:(long long)arg9;

@end
