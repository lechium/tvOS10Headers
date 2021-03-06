//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVTableViewCell.h"

@interface TVHSTableViewCell : TVTableViewCell
{
    long long _placeholderAssetType;	// 8 = 0x8
}

@property(nonatomic) long long placeholderAssetType; // @synthesize placeholderAssetType=_placeholderAssetType;
- (void)_updatePlaceholderImageIfNeeded;	// IMP=0x000000010003d6b4
- (id)_textLabelColor;	// IMP=0x000000010003d64c
- (_Bool)_isFocusedInDarkMode;	// IMP=0x000000010003d5d4
- (id)_focusedInDarkModeTextColor;	// IMP=0x000000010003d558
- (id)_textColorWithDefaultColor:(id)arg1;	// IMP=0x000000010003d4e8
- (void)_updateForTraitChange;	// IMP=0x000000010003d49c
- (void)_updateForTraitChangeWithTextColor:(id)arg1;	// IMP=0x000000010003d3ec
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000010003d31c
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000010003d2a0
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000010003d164

@end

