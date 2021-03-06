//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMViewController.h"

#import "IMLibraryBooksDataSourceDelegate.h"

@class IMLibraryBooksDataSource, IMToolbar, NSArray, NSPredicate, NSString, UIBarButtonItem, UITextField;

@interface IMLibraryBooksViewController : IMViewController <IMLibraryBooksDataSourceDelegate>
{
    id <IMLibraryBooksViewControllerDelegate> _delegate;	// 40 = 0x28
    NSPredicate *_mainPredicate;	// 48 = 0x30
    NSPredicate *_compoundPredicate;	// 56 = 0x38
    NSArray *_embeddedToolbarItems;	// 64 = 0x40
    IMToolbar *_embeddedToolbar;	// 72 = 0x48
    _Bool _repeatAppearance;	// 80 = 0x50
    UIBarButtonItem *_searchBarItem;	// 88 = 0x58
    NSString *_hiddenObjectID;	// 96 = 0x60
    _Bool _multiselectEnabled;	// 104 = 0x68
    UITextField *_searchField;	// 112 = 0x70
    Class _cellPrototype;	// 120 = 0x78
    IMLibraryBooksDataSource *_dataSource;	// 128 = 0x80
    struct CGPoint _oldContentOffset;	// 136 = 0x88
}

+ (struct CGSize)coverArtDesiredSize;	// IMP=0x000000010017d5e4
@property(retain, nonatomic) NSString *hiddenObjectID; // @synthesize hiddenObjectID=_hiddenObjectID;
@property(nonatomic) struct CGPoint oldContentOffset; // @synthesize oldContentOffset=_oldContentOffset;
@property(nonatomic) Class cellPrototype; // @synthesize cellPrototype=_cellPrototype;
@property(retain, nonatomic) NSArray *embeddedToolbarItems; // @synthesize embeddedToolbarItems=_embeddedToolbarItems;
@property(retain, nonatomic) IMToolbar *embeddedToolbar; // @synthesize embeddedToolbar=_embeddedToolbar;
@property(retain, nonatomic) NSPredicate *mainPredicate; // @synthesize mainPredicate=_mainPredicate;
@property(nonatomic, getter=isMultiselectEnabled) _Bool multiselectEnabled; // @synthesize multiselectEnabled=_multiselectEnabled;
@property(retain, nonatomic) IMLibraryBooksDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) id <IMLibraryBooksViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)predicateForDataSource:(id)arg1;	// IMP=0x000000010017da10
- (id)sectionNameKeyPathForDataSource:(id)arg1;	// IMP=0x000000010017da08
- (id)sortDescriptorsForDataSource:(id)arg1;	// IMP=0x000000010017da00
- (id)collectionChangeParametersForObjects:(id)arg1;	// IMP=0x000000010017d9f8
- (id)collectionChangeParametersForObject:(id)arg1 visibleOnly:(_Bool)arg2;	// IMP=0x000000010017d9f0
- (_Bool)wantsEmbeddedToolbar;	// IMP=0x000000010017d798
@property(readonly, nonatomic) UIBarButtonItem *searchBarItem;
@property(readonly, nonatomic) UITextField *searchField;
- (void)setSearchTextWithoutSearching:(id)arg1;	// IMP=0x000000010017d6ec
- (void)setSearchText:(id)arg1;	// IMP=0x000000010017d66c
- (id)searchText;	// IMP=0x000000010017d648
- (void)searchTextDidChange:(id)arg1;	// IMP=0x000000010017d608
- (id)searchBar;	// IMP=0x000000010017d600
- (void)scrollToMakeObjectVisible:(id)arg1;	// IMP=0x000000010017d5fc
- (_Bool)isBookFullyVisible:(id)arg1;	// IMP=0x000000010017d5f4
- (void)resetSpotForObject:(id)arg1;	// IMP=0x000000010017d5e0
- (void)setEmptySpot:(_Bool)arg1 forObject:(id)arg2;	// IMP=0x000000010017d5dc
- (id)borderForObject:(id)arg1;	// IMP=0x000000010017d5d4
- (struct CGRect)shadowRectForObject:(id)arg1;	// IMP=0x000000010017d5c0
- (struct CGRect)coverRectForObject:(id)arg1 generic:(_Bool *)arg2;	// IMP=0x000000010017d5ac
- (struct CGRect)coverRectForObject:(id)arg1;	// IMP=0x000000010017d59c
- (id)coverImageForObject:(id)arg1;	// IMP=0x000000010017d594
- (struct CGPoint)contentOffsetForTop;	// IMP=0x000000010017d560
- (void)repopulateDisplay;	// IMP=0x000000010017d52c
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000010017d3e0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010017d37c
- (id)allObjects;	// IMP=0x000000010017d2f4
- (_Bool)wantsCollectionAnimation;	// IMP=0x000000010017d2ec
- (void)dealloc;	// IMP=0x000000010017d258
- (void)releaseViews;	// IMP=0x000000010017d1c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

