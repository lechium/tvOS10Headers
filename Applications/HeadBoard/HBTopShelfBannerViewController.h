//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "HBBubbleAnimatorViewProvider.h"
#import "HBCarouselCollectionViewCellDelegate.h"
#import "TVCarouselViewDataSource.h"
#import "TVCarouselViewDelegate.h"

@class NSString, TVCarouselView;

@interface HBTopShelfBannerViewController : UIViewController <HBBubbleAnimatorViewProvider, HBCarouselCollectionViewCellDelegate, TVCarouselViewDataSource, TVCarouselViewDelegate>
{
    TVCarouselView *_carouselView;	// 8 = 0x8
}

@property(retain, nonatomic) TVCarouselView *carouselView; // @synthesize carouselView=_carouselView;
- (void).cxx_destruct;	// IMP=0x000000010000a204
- (void)_updateCarouselViewInteritemSpacing;	// IMP=0x000000010000a178
- (void)_updateCarouselViewSettings;	// IMP=0x000000010000a00c
- (id)viewsForAnimator:(id)arg1;	// IMP=0x0000000100009e20
- (void)collectionViewCellDidUnfocus:(id)arg1;	// IMP=0x0000000100009d24
- (void)collectionViewCellDidChangeFocusDirection:(id)arg1;	// IMP=0x0000000100009c8c
- (id)carouselView:(id)arg1 cellForItemAtIndex:(unsigned long long)arg2;	// IMP=0x0000000100009c0c
- (unsigned long long)numberOfItemsInCarouselView:(id)arg1;	// IMP=0x0000000100009c04
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100009b64
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100009ac4
- (void)viewWillLayoutSubviews;	// IMP=0x0000000100009a74
- (void)loadView;	// IMP=0x00000001000098e0
- (void)focusedViewDidChange;	// IMP=0x0000000100009890
- (id)preferredFocusedItem;	// IMP=0x0000000100009884
- (void)configureCell:(id)arg1 forItemAtIndex:(unsigned long long)arg2;	// IMP=0x0000000100009880
- (Class)cellClass;	// IMP=0x000000010000986c
- (void)dealloc;	// IMP=0x00000001000097c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

