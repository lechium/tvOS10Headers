//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTCollectionViewCell.h"

#import "MTEpisodeLockupDelegate.h"

@class MTColorTheme, MTEpisode, MTEpisodeActionController, MTEpisodeLockup, NSString, UIView;

@interface MTEpisodeCollectionViewCell : MTCollectionViewCell <MTEpisodeLockupDelegate>
{
    UIView *_lockupContainer;	// 8 = 0x8
    MTEpisodeLockup *_episodeLockup;	// 16 = 0x10
}

+ (double)maximumContentWidthForStyle:(unsigned long long)arg1;	// IMP=0x000000010008508c
+ (struct CGSize)artworkSizeForStyle:(unsigned long long)arg1;	// IMP=0x0000000100085078
+ (double)estimatedHeightForWidth:(double)arg1 style:(unsigned long long)arg2;	// IMP=0x0000000100084fa0
+ (double)estimatedHeightForWidth:(double)arg1 showsArtwork:(_Bool)arg2;	// IMP=0x0000000100084f58
+ (unsigned long long)styleForWidth:(double)arg1 showsArtwork:(_Bool)arg2;	// IMP=0x0000000100084f44
@property(retain, nonatomic) MTEpisodeLockup *episodeLockup; // @synthesize episodeLockup=_episodeLockup;
@property(retain, nonatomic) UIView *lockupContainer; // @synthesize lockupContainer=_lockupContainer;
- (void).cxx_destruct;	// IMP=0x0000000100086868
- (void)clearLayer:(id)arg1;	// IMP=0x0000000100086784
- (void)lockupDidChangeSize:(id)arg1;	// IMP=0x000000010008668c
- (void)lockup:(id)arg1 moreButtonTapped:(id)arg2;	// IMP=0x000000010008661c
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000100086584
- (void)moreButtonTapped:(id)arg1;	// IMP=0x0000000100086580
- (void)updateOverlayForSelectedOrIsNew;	// IMP=0x0000000100086028
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000100085f48
- (void)layoutSubviews;	// IMP=0x0000000100085e30
- (void)prepareForReuse;	// IMP=0x0000000100085d84
- (void)fixEmptyTextContainers;	// IMP=0x0000000100085d44
- (void)invalidateLayoutMargins;	// IMP=0x0000000100085d04
- (void)invalidateSizeMetrics;	// IMP=0x0000000100085cc4
- (void)updateActionSheetsAndPopovers;	// IMP=0x0000000100085c84
- (void)dismissActionSheetsAndPopovers;	// IMP=0x0000000100085c44
@property(readonly, nonatomic) MTEpisodeActionController *actionController;
@property(nonatomic, getter=isCurrentPlayerItem) _Bool currentPlayerItem;
@property(nonatomic, getter=isExpanded) _Bool expanded;
@property(retain, nonatomic) MTColorTheme *colorTheme;
@property(retain, nonatomic) MTEpisode *episode;
- (void)updateCurrentRowHeight;	// IMP=0x00000001000858a0
- (void)setSelected:(_Bool)arg1;	// IMP=0x000000010008577c
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x000000010008572c
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000001000855e0
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001000855d4
@property(nonatomic) _Bool showsPlayState;
@property(nonatomic) _Bool showsPubDate;
@property(nonatomic) unsigned long long style;
- (void)applyLayoutAttributes:(id)arg1;	// IMP=0x000000010008532c
- (void)dealloc;	// IMP=0x00000001000852b4
- (void)setupCell;	// IMP=0x00000001000850f8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000850a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <MTEpisodeCollectionViewCellDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
