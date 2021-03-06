//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKCollectionDataSource.h"

@class GKChallenge, NSArray, NSMutableDictionary;

@interface GKDashboardChallengePlayerPickerDataSource : GKCollectionDataSource
{
    GKChallenge *_challenge;	// 8 = 0x8
    NSArray *_players;	// 16 = 0x10
    NSMutableDictionary *_playerStates;	// 24 = 0x18
    NSMutableDictionary *_playerAchievementDates;	// 32 = 0x20
    NSArray *_searchPlayers;	// 40 = 0x28
}

@property(retain, nonatomic) NSArray *searchPlayers; // @synthesize searchPlayers=_searchPlayers;
@property(retain, nonatomic) NSMutableDictionary *playerAchievementDates; // @synthesize playerAchievementDates=_playerAchievementDates;
@property(retain, nonatomic) NSMutableDictionary *playerStates; // @synthesize playerStates=_playerStates;
@property(retain, nonatomic) NSArray *players; // @synthesize players=_players;
@property(retain, nonatomic) GKChallenge *challenge; // @synthesize challenge=_challenge;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;	// IMP=0x000000010003eb50
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000010003ea74
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000010003ea08
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x000000010003e9f4
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000010003e87c
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x000000010003e874
- (void)searchTextHasChanged;	// IMP=0x000000010003e71c
- (id)searchKeyForSection:(long long)arg1;	// IMP=0x000000010003e710
- (id)indexPathForPlayer:(id)arg1;	// IMP=0x000000010003e6a0
- (void)clearSelection;	// IMP=0x000000010003e514
@property(readonly, nonatomic) NSArray *selectedPlayers;
- (id)playerForIndexPath:(id)arg1;	// IMP=0x000000010003e30c
- (id)itemForIndexPath:(id)arg1;	// IMP=0x000000010003e300
- (double)preferredCollectionHeight;	// IMP=0x000000010003e2ec
- (id)sectionHeaderText;	// IMP=0x000000010003e234
- (long long)itemCount;	// IMP=0x000000010003e210
- (id)currentPlayers;	// IMP=0x000000010003e1bc
- (void)loadDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010003cfc0
- (void)setupCollectionView:(id)arg1;	// IMP=0x000000010003cf3c
- (void)dealloc;	// IMP=0x000000010003ce8c
- (id)initWithChallenge:(id)arg1;	// IMP=0x000000010003ce18

@end

