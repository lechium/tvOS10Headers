//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class UIColor;

@interface IMRadialProgressButton : UIButton
{
    float _progress;	// 8 = 0x8
    UIColor *_progressColor;	// 16 = 0x10
    UIColor *_emptyProgressColor;	// 24 = 0x18
    UIColor *_selectedProgressColor;	// 32 = 0x20
}

@property(retain, nonatomic) UIColor *selectedProgressColor; // @synthesize selectedProgressColor=_selectedProgressColor;
@property(retain, nonatomic) UIColor *emptyProgressColor; // @synthesize emptyProgressColor=_emptyProgressColor;
@property(retain, nonatomic) UIColor *progressColor; // @synthesize progressColor=_progressColor;
@property(nonatomic) float progress; // @synthesize progress=_progress;
- (struct CGRect)contentRectForBounds:(struct CGRect)arg1;	// IMP=0x000000010022d1a0
- (struct CGRect)backgroundRectForBounds:(struct CGRect)arg1;	// IMP=0x000000010022d0c0
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000010022d098
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x000000010022cdf8
- (void)dealloc;	// IMP=0x000000010022cd70
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010022cc90

@end

