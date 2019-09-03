/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKPointerSet : NSObject <NSFastEnumeration> {
    NSHashTable * mBackingStore;
}

@property (nonatomic, readonly, copy) NSArray *allObjects;
@property (nonatomic, readonly) long long count;

+ (id)setWithArray:(id)arg1;
+ (id)setWithSet:(id)arg1;

- (void).cxx_destruct;
- (void)addObject:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (id)allObjects;
- (bool)containsObject:(id)arg1;
- (long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isSubsetOfSet:(id)arg1;
- (void)removeAllObjects;
- (void)removeObject:(id)arg1;
- (id)setByIntersectingSet:(id)arg1;
- (id)setBySubtractingSet:(id)arg1;

@end
