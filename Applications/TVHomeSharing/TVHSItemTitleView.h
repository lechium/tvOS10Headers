//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVItemTitleView.h"

@class TVSContentRating;

@interface TVHSItemTitleView : TVItemTitleView
{
    TVSContentRating *_contentRating;	// 8 = 0x8
}

@property(retain, nonatomic) TVSContentRating *contentRating; // @synthesize contentRating=_contentRating;
- (void).cxx_destruct;	// IMP=0x000000010000c4fc
- (void)_updateContentRatingBadge;	// IMP=0x000000010000c310
- (id)_lightModeTextColor;	// IMP=0x000000010000c264
- (id)_darkModeTextColor;	// IMP=0x000000010000c1b8
- (id)_textColor;	// IMP=0x000000010000c104
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000010000bfc0

@end

