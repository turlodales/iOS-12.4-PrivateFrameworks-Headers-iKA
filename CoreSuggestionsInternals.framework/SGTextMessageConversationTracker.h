/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGTextMessageConversationTracker : NSObject {
    _PASLRUCache * _conversationFeaturizations;
    _PASLRUCache * _conversations;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
}

+ (id)instance;

- (void).cxx_destruct;
- (id)addMessage:(id)arg1;
- (void)clear;
- (id)conversationFeaturizationForIdentifier:(id)arg1;
- (id)conversationForIdentifier:(id)arg1;
- (id)init;

@end
