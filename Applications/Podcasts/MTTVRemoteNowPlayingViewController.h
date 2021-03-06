//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PBSViewServicePresenter.h"

@class NSString, TVNavigationController, UITapGestureRecognizer, UIView;

@interface MTTVRemoteNowPlayingViewController : UIViewController <PBSViewServicePresenter>
{
    TVNavigationController *_navigationController;	// 8 = 0x8
    UITapGestureRecognizer *_menuGestureRecognizer;	// 16 = 0x10
    id <TVSAVFPlayback> _player;	// 24 = 0x18
    UIView *_nowPlayingWallPaper;	// 32 = 0x20
}

+ (id)_remoteViewControllerInterface;	// IMP=0x0000000100005ff4
+ (id)_exportedInterface;	// IMP=0x0000000100005ed8
@property(retain, nonatomic) UIView *nowPlayingWallPaper; // @synthesize nowPlayingWallPaper=_nowPlayingWallPaper;
@property(retain, nonatomic) id <TVSAVFPlayback> player; // @synthesize player=_player;
@property(retain, nonatomic) UITapGestureRecognizer *menuGestureRecognizer; // @synthesize menuGestureRecognizer=_menuGestureRecognizer;
@property(retain, nonatomic) TVNavigationController *navigationController; // @synthesize navigationController=_navigationController;
- (void).cxx_destruct;	// IMP=0x00000001000061e8
- (void)_menuPressed:(id)arg1;	// IMP=0x0000000100006010
- (void)_dismissRemoteViewController;	// IMP=0x0000000100005e94
- (void)_playerDidChangeState:(id)arg1;	// IMP=0x0000000100005ccc
- (void)viewServiceEndPresentationWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010000597c
- (void)viewServiceBeginPresentationWithOptions:(id)arg1;	// IMP=0x0000000100005490
- (void)dealloc;	// IMP=0x0000000100005414
- (void)viewDidLoad;	// IMP=0x0000000100005268
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000010000516c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

