/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKDiscoveryArticleLayout : NSObject <NSSecureCoding> {
    id /* block */  _actionOnDismiss;
    PKDiscoveryCard * _card;
    PKDiscoveryCallToAction * _footerLockup;
    NSString * _itemIdentifier;
    NSArray * _shelves;
    long long  _variant;
    long long  _version;
}

@property (nonatomic, copy) id /* block */ actionOnDismiss;
@property (nonatomic, readonly) PKDiscoveryCard *card;
@property (nonatomic, readonly) PKDiscoveryCallToAction *footerLockup;
@property (nonatomic, retain) NSString *itemIdentifier;
@property (nonatomic, readonly) NSArray *shelves;
@property (nonatomic, readonly) long long variant;
@property (nonatomic, readonly) long long version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id /* block */)actionOnDismiss;
- (id)card;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)footerLockup;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)itemIdentifier;
- (void)localizeWithBundle:(id)arg1;
- (void)localizeWithBundle:(id)arg1 table:(id)arg2;
- (void)setActionOnDismiss:(id /* block */)arg1;
- (void)setForItem:(id)arg1;
- (void)setItemIdentifier:(id)arg1;
- (id)shelves;
- (long long)variant;
- (long long)version;

@end
