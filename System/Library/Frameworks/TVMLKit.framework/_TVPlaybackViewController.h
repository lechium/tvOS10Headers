/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:33 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVKit/TVPlaybackViewController.h>

@class UIViewController;

@interface _TVPlaybackViewController : TVPlaybackViewController {

	UIViewController* _overlayViewController;
	BOOL _viewDidAppear;
	struct {
		BOOL respondsToCustomAnimatorForNavigationControllerOperation;
		BOOL respondsToViewWillAppear;
		BOOL respondsToViewDidAppear;
		BOOL respondsToViewWillDisappear;
		BOOL respondsToViewDidDisappear;
	}  _tvPlaybackDelegateFlags;
	BOOL _interactiveOverlayDismissable;
	UIViewController* _interactiveOverlayViewController;

}

@property (assign,getter=isInteractiveOverlayDismissable,nonatomic) BOOL interactiveOverlayDismissable;              //@synthesize interactiveOverlayDismissable=_interactiveOverlayDismissable - In the implementation block
@property (nonatomic,retain) UIViewController * overlayViewController;                                               //@synthesize overlayViewController=_overlayViewController - In the implementation block
@property (nonatomic,retain) UIViewController * interactiveOverlayViewController;                                    //@synthesize interactiveOverlayViewController=_interactiveOverlayViewController - In the implementation block
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)navigationControllerDidShowViewController:(id)arg1 ;
-(UIViewController *)overlayViewController;
-(id)customAnimatorForNavigationControllerOperation:(long long)arg1 toViewController:(id)arg2 ;
-(id)customAnimatorForNavigationControllerOperation:(long long)arg1 fromViewController:(id)arg2 ;
-(void)setPlaybackDelegate:(id)arg1 ;
-(void)_currentChildViewControllerWillChangeTo:(id)arg1 ;
-(void)_currentChildViewControllerDidChangeFrom:(id)arg1 ;
-(UIViewController *)interactiveOverlayViewController;
-(void)_dismissPlayerFromInteractiveOverlay;
-(void)setInteractiveOverlayViewController:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)isInteractiveOverlayDismissable;
-(void)_updateInteractiveOverlayDismissableState;
-(void)_presentInteractiveOverlay:(BOOL)arg1 ;
-(void)setOverlayViewController:(UIViewController *)arg1 ;
-(void)setInteractiveOverlayDismissable:(BOOL)arg1 ;
-(void)setInteractiveOverlayViewController:(UIViewController *)arg1 ;
@end

