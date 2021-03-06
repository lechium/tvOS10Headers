//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PBSViewServicePresenter.h"

@class NSString, TVConferenceRoomDisplayViewController;

@interface TVCRDServiceInstructionsViewController : UIViewController <PBSViewServicePresenter>
{
    TVConferenceRoomDisplayViewController *_crdViewController;	// 8 = 0x8
}

+ (id)_remoteViewControllerInterface;	// IMP=0x000000010000513c
+ (id)_exportedInterface;	// IMP=0x0000000100005020
@property(retain, nonatomic) TVConferenceRoomDisplayViewController *crdViewController; // @synthesize crdViewController=_crdViewController;
- (void).cxx_destruct;	// IMP=0x000000010000523c
- (void)viewServiceEndPresentationWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100004eb4
- (void)viewServiceUpdatePresentationWithOptions:(id)arg1;	// IMP=0x0000000100004e24
- (void)viewServiceBeginPresentationWithOptions:(id)arg1;	// IMP=0x0000000100004c54

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

