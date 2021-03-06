/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKAppDataSet : NSObject <NSCopying> {
    NSDictionary * _indexTitles;
    NSArray * _itemIDs;
    NSArray * _items;
    NSDictionary * _usedPrototypesByType;
}

@property (nonatomic, readonly, copy) NSDictionary *indexTitles;
@property (nonatomic, readonly, copy) NSArray *itemIDs;
@property (nonatomic, readonly, copy) NSArray *items;
@property (nonatomic, readonly, copy) NSDictionary *usedPrototypesByType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)indexTitles;
- (id)initWithItems:(id)arg1 usedPrototypesByType:(id)arg2 indexTitles:(id)arg3;
- (id)itemIDs;
- (id)items;
- (id)usedPrototypesByType;

@end
