//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTCollectionListViewController.h"

#import "IMActionControllerDelegate.h"
#import "MTEpisodeCollectionViewCellDelegate.h"
#import "MTReachabilityObserver.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class NSString, UIRefreshControl, UISearchController;

@interface MTEpisodeCollectionViewController : MTCollectionListViewController <MTReachabilityObserver, IMActionControllerDelegate, UICollectionViewDelegateFlowLayout, MTEpisodeCollectionViewCellDelegate>
{
    _Bool _needsScrollAdjust;	// 8 = 0x8
    double _lastDownloadUpdate;	// 16 = 0x10
    _Bool _cellularReachable;	// 24 = 0x18
    UISearchController *_searchController;	// 32 = 0x20
    _Bool _showsArtworkInCells;	// 40 = 0x28
    _Bool _showsPlayStateInCells;	// 41 = 0x29
    int _refreshControlState;	// 44 = 0x2c
    unsigned long long _cellStyle;	// 48 = 0x30
    UIRefreshControl *_mt_refreshControl;	// 56 = 0x38
    NSString *_expandedEpisodeUuid;	// 64 = 0x40
}

+ (Class)sizingCellClass;	// IMP=0x0000000100117010
@property(retain, nonatomic) NSString *expandedEpisodeUuid; // @synthesize expandedEpisodeUuid=_expandedEpisodeUuid;
@property(nonatomic) int refreshControlState; // @synthesize refreshControlState=_refreshControlState;
@property(retain, nonatomic, setter=mt_setRefreshControl:) UIRefreshControl *mt_refreshControl; // @synthesize mt_refreshControl=_mt_refreshControl;
@property(nonatomic) unsigned long long cellStyle; // @synthesize cellStyle=_cellStyle;
@property(nonatomic) _Bool showsPlayStateInCells; // @synthesize showsPlayStateInCells=_showsPlayStateInCells;
@property(nonatomic) _Bool showsArtworkInCells; // @synthesize showsArtworkInCells=_showsArtworkInCells;
- (void).cxx_destruct;	// IMP=0x000000010011ab30
- (id)editingToolbarItems;	// IMP=0x000000010011a930
- (void)markSelectedItemsAsSaved:(_Bool)arg1;	// IMP=0x000000010011a6a8
- (void)markSelectedItems:(_Bool)arg1;	// IMP=0x000000010011a300
- (void)scrollToLatestIfNeeded:(_Bool)arg1;	// IMP=0x000000010011a1ac
- (void)setNumberOfColumns:(unsigned long long)arg1;	// IMP=0x000000010011a08c
- (_Bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;	// IMP=0x000000010011a084
- (void)deselectedItemAtIndexPath:(id)arg1;	// IMP=0x000000010011a074
- (void)selectedItemAtIndexPath:(id)arg1;	// IMP=0x0000000100119eb0
- (double)calculateCellWidthForSize:(struct CGSize)arg1;	// IMP=0x0000000100119d00
- (double)estimatedCellHeightForWidth:(double)arg1;	// IMP=0x0000000100119cb4
- (void)expandCollectionViewCell:(id)arg1;	// IMP=0x0000000100119c3c
- (void)collapseCollectionViewCell:(id)arg1;	// IMP=0x0000000100119bc4
- (void)setExpandedEpisodeUuid:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100119ab0
- (void)toggleExpansionForEpisodeUuid:(id)arg1;	// IMP=0x0000000100119a0c
- (double)_currentMaxWidthForSectionHeaders;	// IMP=0x000000010011999c
- (void)_updateSectionHeaderInsets;	// IMP=0x00000001001197e8
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;	// IMP=0x0000000100119770
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x00000001001196a4
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x00000001001195fc
- (void)collectionView:(id)arg1 configureCell:(id)arg2 withObject:(id)arg3 atIndexPath:(id)arg4;	// IMP=0x0000000100119420
- (id)reuseIdentifierForItemAtIndexPath:(id)arg1;	// IMP=0x00000001001193f4
- (void)dismissSwipeToDeleteMode;	// IMP=0x0000000100119370
- (void)didPerformActionInSheet:(id)arg1;	// IMP=0x0000000100119364
- (void)playEpisodeAtIndexPath:(id)arg1;	// IMP=0x0000000100119338
- (void)cellDidChangeSize:(id)arg1;	// IMP=0x0000000100119214
- (void)cell:(id)arg1 moreButtonTapped:(id)arg2;	// IMP=0x0000000100119180
- (void)controllerDidChangeContent:(id)arg1;	// IMP=0x00000001001190c0
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;	// IMP=0x0000000100118f80
- (id)objectAtIndexPath:(id)arg1;	// IMP=0x0000000100118f4c
- (void)didEndRefreshing;	// IMP=0x0000000100118f3c
- (void)endRefreshing;	// IMP=0x0000000100118e04
- (void)beginRefreshing;	// IMP=0x0000000100118da8
- (void)refreshControlStateMovedToEnding;	// IMP=0x0000000100118da4
- (void)refreshControlStateMovedToIdle;	// IMP=0x0000000100118da0
- (void)refreshControlStateMovedToRefreshing;	// IMP=0x0000000100118d9c
- (_Bool)shouldCalculateDynamicHeightForIndexPath:(id)arg1;	// IMP=0x0000000100118cc0
- (void)updateCellSizesWithSize:(struct CGSize)arg1;	// IMP=0x0000000100118c70
- (void)_willUpdateCollectionView:(id)arg1;	// IMP=0x0000000100118380
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100118264
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100117f94
- (void)updateCellStyle;	// IMP=0x0000000100117d94
- (unsigned long long)sectionTypeForIndexPath:(id)arg1;	// IMP=0x0000000100117c0c
- (id)indexPathForEpisodeUuid:(id)arg1;	// IMP=0x0000000100117b34
- (void)updateActionSheetsAndPopovers;	// IMP=0x00000001001179b0
- (void)dismissActionSheetsAndPopovers;	// IMP=0x000000010011782c
- (void)nowPlayingItemChanged:(id)arg1;	// IMP=0x00000001001175c0
- (void)reachabilityChangedFrom:(_Bool)arg1 to:(_Bool)arg2;	// IMP=0x00000001001174c8
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000010011739c
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000100117330
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000001001172c0
- (void)viewDidLoad;	// IMP=0x0000000100117270
- (void)registerCollectionViewClasses;	// IMP=0x00000001001171dc
- (void)dealloc;	// IMP=0x0000000100117110
- (id)initWithCompositeFetchedResultsController:(id)arg1;	// IMP=0x0000000100117034
- (id)init;	// IMP=0x0000000100117024

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

