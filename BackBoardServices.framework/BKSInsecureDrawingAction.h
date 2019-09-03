/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSInsecureDrawingAction : BSAction

@property (nonatomic, readonly) NSDictionary *pidToContextIdsDictionary;
@property (nonatomic, readonly) NSArray *processIds;
@property (nonatomic, readonly) NSArray *secureModeViolations;

- (id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(id /* block */)arg4;
- (id)initWithPidToContextIdsDictionary:(id)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)pidToContextIdsDictionary;
- (id)processIds;
- (id)secureModeViolations;

@end