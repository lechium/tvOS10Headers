//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

@class GKTimeScopeButton, NSString, UILabel;

@interface GKDashboardLeaderboardScoreHeaderView : UICollectionReusableView
{
    id _timeScopeTarget;	// 8 = 0x8
    SEL _timeScopeAction;	// 16 = 0x10
    UILabel *_titleLabel;	// 24 = 0x18
    GKTimeScopeButton *_timeScopeButton;	// 32 = 0x20
}

+ (double)defaultHeight;	// IMP=0x000000010002a798
@property(nonatomic) GKTimeScopeButton *timeScopeButton; // @synthesize timeScopeButton=_timeScopeButton;
@property(nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) SEL timeScopeAction; // @synthesize timeScopeAction=_timeScopeAction;
@property(nonatomic) id timeScopeTarget; // @synthesize timeScopeTarget=_timeScopeTarget;
- (void)timeScopePressed:(id)arg1;	// IMP=0x000000010002a858
@property(nonatomic) long long timeScope; // @dynamic timeScope;
@property(copy, nonatomic) NSString *title; // @dynamic title;
- (void)awakeFromNib;	// IMP=0x000000010002a7a4

@end
