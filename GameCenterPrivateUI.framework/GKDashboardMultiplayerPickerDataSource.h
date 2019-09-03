/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKDashboardMultiplayerPickerDataSource : GKCollectionDataSource {
    bool  _browsingForNearbyPlayers;
    NSArray * _contactPlayers;
    GKContactDataSource * _contactSource;
    long long  _currentSegmentSection;
    bool  _didLoad;
    bool  _excludesContacts;
    NSArray * _filteredFriendPlayers;
    NSArray * _filteredRecentPlayers;
    NSArray * _friendPlayers;
    NSArray * _hiddenPlayers;
    bool  _isSegmented;
    long long  _maxSelectable;
    <GKDashboardNearbyBrowserDelegate> * _nearbyDelegate;
    NSMutableArray * _nearbyPlayers;
    id /* block */  _nearbyPlayersChangedHandler;
    NSMutableDictionary * _playerStates;
    NSArray * _recentPlayers;
    NSArray * _searchPlayers;
    NSMutableArray * _selectedPlayersStack;
    bool  _supportsNearby;
}

@property (nonatomic) bool browsingForNearbyPlayers;
@property (nonatomic, retain) NSArray *contactPlayers;
@property (nonatomic, readonly) NSDictionary *contactSectionHeaderIndexes;
@property (nonatomic, readonly) NSArray *contactSectionHeaders;
@property (nonatomic, readonly) NSDictionary *contactSkipIndexes;
@property (nonatomic, readonly) NSArray *contactSkipValues;
@property (nonatomic, retain) GKContactDataSource *contactSource;
@property (nonatomic) long long currentSegmentSection;
@property (nonatomic) bool didLoad;
@property (nonatomic) bool excludesContacts;
@property (nonatomic, retain) NSArray *filteredFriendPlayers;
@property (nonatomic, retain) NSArray *filteredRecentPlayers;
@property (nonatomic, retain) NSArray *friendPlayers;
@property (nonatomic, retain) NSArray *hiddenPlayers;
@property (nonatomic) bool isSegmented;
@property (nonatomic) long long maxSelectable;
@property (nonatomic) <GKDashboardNearbyBrowserDelegate> *nearbyDelegate;
@property (nonatomic, retain) NSMutableArray *nearbyPlayers;
@property (nonatomic, copy) id /* block */ nearbyPlayersChangedHandler;
@property (nonatomic, readonly) long long numberOfContacts;
@property (nonatomic, retain) NSMutableDictionary *playerStates;
@property (nonatomic, retain) NSArray *recentPlayers;
@property (nonatomic, retain) NSArray *searchPlayers;
@property (nonatomic, readonly) NSArray *selectedPlayers;
@property (nonatomic, retain) NSMutableArray *selectedPlayersStack;
@property (nonatomic) bool supportsNearby;
@property (nonatomic, readonly) long long unmodifiedItemCount;

- (bool)browsingForNearbyPlayers;
- (void)clearSelection;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)contactPlayers;
- (id)contactSectionHeaderIndexes;
- (id)contactSectionHeaders;
- (id)contactSkipIndexes;
- (id)contactSkipValues;
- (id)contactSource;
- (long long)currentSegmentSection;
- (void)dealloc;
- (bool)didLoad;
- (bool)excludesContacts;
- (void)filterPlayers;
- (id)filteredFriendPlayers;
- (id)filteredRecentPlayers;
- (id)firstIndexPathForPlayer:(id)arg1;
- (id)friendPlayers;
- (id)headerTextForSection:(long long)arg1;
- (id)hiddenPlayers;
- (id)indexPathForFirstPlayer;
- (id)indexPathForPlayer:(id)arg1 inSection:(long long)arg2;
- (id)initWithMaxSelectable:(long long)arg1 hiddenPlayers:(id)arg2;
- (bool)isSegmented;
- (long long)itemCount;
- (id)itemForIndexPath:(id)arg1;
- (void)loadDataWithCompletionHandler:(id /* block */)arg1;
- (long long)maxSelectable;
- (id)nearbyDelegate;
- (id)nearbyPlayers;
- (id /* block */)nearbyPlayersChangedHandler;
- (long long)numberOfContacts;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)playerForIndexPath:(id)arg1;
- (id)playerForPlayerID:(id)arg1;
- (id)playerStates;
- (id)playersForSection:(long long)arg1 ignoreSearch:(bool)arg2;
- (double)preferredCollectionHeight;
- (id)recentPlayers;
- (id)searchKeyForSection:(long long)arg1;
- (id)searchPlayers;
- (void)searchTextHasChanged;
- (id)selectedPlayers;
- (id)selectedPlayersStack;
- (void)setBrowsingForNearbyPlayers:(bool)arg1;
- (void)setContactPlayers:(id)arg1;
- (void)setContactSource:(id)arg1;
- (void)setCurrentSegmentSection:(long long)arg1;
- (void)setDidLoad:(bool)arg1;
- (void)setExcludesContacts:(bool)arg1;
- (void)setFilteredFriendPlayers:(id)arg1;
- (void)setFilteredRecentPlayers:(id)arg1;
- (void)setFriendPlayers:(id)arg1;
- (void)setHiddenPlayers:(id)arg1;
- (void)setIsSegmented:(bool)arg1;
- (void)setMaxSelectable:(long long)arg1;
- (void)setNearbyDelegate:(id)arg1;
- (void)setNearbyPlayer:(id)arg1 reachable:(bool)arg2;
- (void)setNearbyPlayerID:(id)arg1 reachable:(bool)arg2;
- (void)setNearbyPlayers:(id)arg1;
- (void)setNearbyPlayersChangedHandler:(id /* block */)arg1;
- (void)setPlayerStates:(id)arg1;
- (void)setRecentPlayers:(id)arg1;
- (void)setSearchPlayers:(id)arg1;
- (void)setSelectedPlayersStack:(id)arg1;
- (void)setSupportsNearby:(bool)arg1;
- (void)setupCollectionView:(id)arg1;
- (bool)supportsNearby;
- (long long)unmodifiedItemCount;

@end
