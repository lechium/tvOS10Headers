/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:14 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class UILabel, UIActivityIndicatorView, NSTimer;

@interface TVLProxyViewController : UIViewController {

	BOOL _beginLoadWithViewAppearance;
	BOOL _animating;
	unsigned long long _state;
	/*^block*/id _loadHandler;
	UILabel* _label;
	UIActivityIndicatorView* _spinnerView;
	NSTimer* _spinnerTimer;

}

@property (nonatomic,readonly) UILabel * label;                                    //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) UIActivityIndicatorView * spinnerView;              //@synthesize spinnerView=_spinnerView - In the implementation block
@property (nonatomic,readonly) NSTimer * spinnerTimer;                             //@synthesize spinnerTimer=_spinnerTimer - In the implementation block
@property (nonatomic,readonly) unsigned long long state;                           //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL beginLoadWithViewAppearance;                     //@synthesize beginLoadWithViewAppearance=_beginLoadWithViewAppearance - In the implementation block
@property (assign,getter=isAnimating,nonatomic) BOOL animating;                    //@synthesize animating=_animating - In the implementation block
@property (nonatomic,copy) id loadHandler;                                         //@synthesize loadHandler=_loadHandler - In the implementation block
-(void)dealloc;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)didMoveToParentViewController:(id)arg1 ;
-(BOOL)isAnimating;
-(void)setAnimating:(BOOL)arg1 ;
-(UILabel *)label;
-(id)initWithLoadHandler:(/*^block*/id)arg1 ;
-(void)setBeginLoadWithViewAppearance:(BOOL)arg1 ;
-(void)_invalidateSpinnerTimer;
-(void)_showSpinnerAction:(id)arg1 ;
-(BOOL)beginLoadWithViewAppearance;
-(void)_executeLoadHandler;
-(NSTimer *)spinnerTimer;
-(void)setLoadHandler:(id)arg1 ;
-(id)loadHandler;
-(UIActivityIndicatorView *)spinnerView;
@end
