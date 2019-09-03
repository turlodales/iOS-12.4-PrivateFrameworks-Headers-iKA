/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCPlayerLanguageOptionGroup : NSObject {
    bool  _allowEmptySelection;
    unsigned long long  _currentIndex;
    NSArray * _options;
    MPCPlayerResponse * _response;
}

@property (nonatomic, readonly) unsigned long long indexOfSelectedOption;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) unsigned long long numberOfOptions;
@property (nonatomic, retain) NSArray *options;
@property (nonatomic, readonly) MPCPlayerResponse *response;

- (void).cxx_destruct;
- (id)changeRequestForOptionAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfSelectedOption;
- (id)initWithLanguageOptionGroups:(id)arg1 currentLanguageOptions:(id)arg2 response:(id)arg3;
- (id)localizedTitle;
- (id)localizedTitleForOptionAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfOptions;
- (id)options;
- (id)response;
- (void)setOptions:(id)arg1;

@end