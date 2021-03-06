//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, UIToolbar;

@interface MTButtonBar : UIView
{
    int _layout;	// 8 = 0x8
    UIToolbar *_toolbar;	// 16 = 0x10
    _Bool _pinned;	// 24 = 0x18
    _Bool _pinnable;	// 25 = 0x19
    _Bool _hasButtons;	// 26 = 0x1a
    NSArray *_buttons;	// 32 = 0x20
}

@property(readonly, nonatomic) _Bool hasButtons; // @synthesize hasButtons=_hasButtons;
@property(nonatomic) _Bool pinnable; // @synthesize pinnable=_pinnable;
@property(nonatomic, getter=isPinned) _Bool pinned; // @synthesize pinned=_pinned;
@property(copy, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
- (void).cxx_destruct;	// IMP=0x0000000100116260
- (struct CGRect)frameOfButton:(id)arg1;	// IMP=0x0000000100115fa8
- (void)setPinned:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100115e5c
- (void)layoutSubviews;	// IMP=0x0000000100115614
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001001155d4
- (id)initWithLayout:(int)arg1 buttons:(id)arg2;	// IMP=0x00000001001153e0
- (id)initWithButtons:(id)arg1;	// IMP=0x00000001001153c8

@end

