//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSDictionary, NSString, NSURL, TVImageView, TVSImageProxy, UIActivityIndicatorView, UILabel, UIScrollView;

@interface TVMusicLyricsViewController : UIViewController
{
    UILabel *_lyricsLabel;	// 8 = 0x8
    UIScrollView *_lyricsScrollView;	// 16 = 0x10
    UIActivityIndicatorView *_spinnerView;	// 24 = 0x18
    NSString *_songTitle;	// 32 = 0x20
    NSString *_songAlbum;	// 40 = 0x28
    NSString *_songArtist;	// 48 = 0x30
    UILabel *_songTitleLabel;	// 56 = 0x38
    UILabel *_songSubtitleLabel;	// 64 = 0x40
    double _startViewTime;	// 72 = 0x48
    id <TVSMediaItem> _mediaItem;	// 80 = 0x50
    NSDictionary *_storeArtworkDictionary;	// 88 = 0x58
    NSURL *_artworkURL;	// 96 = 0x60
    TVSImageProxy *_artworkImageProxy;	// 104 = 0x68
    TVImageView *_artworkImageView;	// 112 = 0x70
    NSString *_lyrics;	// 120 = 0x78
    NSString *_lyricsID;	// 128 = 0x80
}

+ (id)HTMLifyNewlines:(id)arg1;	// IMP=0x000000010000f4ac
+ (id)attributedStringFromLyricsString:(id)arg1;	// IMP=0x000000010000f2bc
+ (id)_sharedOperationQueue;	// IMP=0x000000010000f208
+ (void)getLyricsForAdamID:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010000d26c
@property(copy, nonatomic) NSString *lyricsID; // @synthesize lyricsID=_lyricsID;
@property(copy, nonatomic) NSString *lyrics; // @synthesize lyrics=_lyrics;
@property(retain, nonatomic) TVImageView *artworkImageView; // @synthesize artworkImageView=_artworkImageView;
@property(retain, nonatomic) TVSImageProxy *artworkImageProxy; // @synthesize artworkImageProxy=_artworkImageProxy;
@property(retain, nonatomic) NSURL *artworkURL; // @synthesize artworkURL=_artworkURL;
@property(retain, nonatomic) NSDictionary *storeArtworkDictionary; // @synthesize storeArtworkDictionary=_storeArtworkDictionary;
@property(retain, nonatomic) id <TVSMediaItem> mediaItem; // @synthesize mediaItem=_mediaItem;
- (void).cxx_destruct;	// IMP=0x000000010000f68c
- (void)_handleTogglePlayPause;	// IMP=0x000000010000f1a0
- (_Bool)_reportPAFEventForLyricsView;	// IMP=0x000000010000ee80
- (void)_showErrorAlertWithTitle:(id)arg1 message:(id)arg2;	// IMP=0x000000010000eccc
- (void)viewWillLayoutSubviews;	// IMP=0x000000010000e6d4
- (id)preferredFocusEnvironments;	// IMP=0x000000010000e668
- (void)setSongTitle:(id)arg1;	// IMP=0x000000010000e078
- (_Bool)showLyrics:(id)arg1 withLyricsID:(id)arg2 error:(id)arg3;	// IMP=0x000000010000dd00
- (void)_hideActivityIndicator;	// IMP=0x000000010000dcb4
- (void)_showActivityIndicator;	// IMP=0x000000010000db88
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000010000db00
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010000da8c
- (void)viewDidLoad;	// IMP=0x000000010000d588
- (id)initWithMediaItem:(id)arg1;	// IMP=0x000000010000d1e8
- (id)initWithLyrics:(id)arg1 lyricsID:(id)arg2;	// IMP=0x000000010000d11c

@end

