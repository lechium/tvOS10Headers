//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IMExpandingLabel, NSString, UIButton, UIImageView, UILabel, UIPopoverController;

@interface MTPodcastInfoView : UIView
{
    id <MTPodcastInfoViewDelegate> _delegate;	// 8 = 0x8
    NSString *_podcastUuid;	// 16 = 0x10
    UIImageView *_imageView;	// 24 = 0x18
    UILabel *_titleLabel;	// 32 = 0x20
    UILabel *_authorLabel;	// 40 = 0x28
    UIView *_separatorBelowAuthor;	// 48 = 0x30
    UIButton *_settingsButton;	// 56 = 0x38
    UIButton *_shareButton;	// 64 = 0x40
    UIPopoverController *_sharePopover;	// 72 = 0x48
    IMExpandingLabel *_descriptionView;	// 80 = 0x50
    UIView *_bottomSeparator;	// 88 = 0x58
}

@property(retain, nonatomic) UIView *bottomSeparator; // @synthesize bottomSeparator=_bottomSeparator;
@property(retain, nonatomic) IMExpandingLabel *descriptionView; // @synthesize descriptionView=_descriptionView;
@property(retain, nonatomic) UIPopoverController *sharePopover; // @synthesize sharePopover=_sharePopover;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) UIButton *settingsButton; // @synthesize settingsButton=_settingsButton;
@property(retain, nonatomic) UIView *separatorBelowAuthor; // @synthesize separatorBelowAuthor=_separatorBelowAuthor;
@property(retain, nonatomic) UILabel *authorLabel; // @synthesize authorLabel=_authorLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) NSString *podcastUuid; // @synthesize podcastUuid=_podcastUuid;
@property(nonatomic) __weak id <MTPodcastInfoViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x000000010014f6c0
- (id)metricsContentIdentifier;	// IMP=0x000000010014f2e4
- (id)metricsName;	// IMP=0x000000010014f2b8
- (void)descriptionViewTapped:(id)arg1;	// IMP=0x000000010014f210
- (void)update;	// IMP=0x000000010014f02c
- (void)_updateFonts;	// IMP=0x000000010014ee4c
- (void)contentSizeCategoryDidChange:(id)arg1;	// IMP=0x000000010014ee08
- (void)layoutSubviews;	// IMP=0x000000010014e9bc
- (void)addSubviews;	// IMP=0x000000010014e42c
- (void)dealloc;	// IMP=0x000000010014e3b0
- (id)initWithPodcastUuid:(id)arg1;	// IMP=0x000000010014e274

@end

