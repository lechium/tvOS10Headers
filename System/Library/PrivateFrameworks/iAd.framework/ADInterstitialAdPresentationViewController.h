/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:52 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iAd/iAd-Structs.h>
#import <UIKit/UIViewController.h>

@class ADInterstitialAd, ADCountdownButton;

@interface ADInterstitialAdPresentationViewController : UIViewController {

	ADInterstitialAd* _interstitialAd;
	ADCountdownButton* _closeButton;

}

@property (nonatomic,__weak,readonly) ADInterstitialAd * interstitialAd; 
@property (nonatomic,retain) ADCountdownButton * closeButton;                         //@synthesize closeButton=_closeButton - In the implementation block
-(void)dealloc;
-(BOOL)prefersStatusBarHidden;
-(void)loadView;
-(BOOL)wantsFullScreenLayout;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(BOOL)shouldTestVisibilityAtPoint:(CGPoint)arg1 ;
-(id)initForInterstitialAd:(id)arg1 ;
-(ADInterstitialAd *)interstitialAd;
-(void)setCloseButton:(ADCountdownButton *)arg1 ;
-(ADCountdownButton *)closeButton;
@end

