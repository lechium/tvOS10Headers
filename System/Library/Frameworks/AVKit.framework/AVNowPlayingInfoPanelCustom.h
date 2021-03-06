/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:12 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <AVKit/AVNowPlayingInfoPanel.h>

@class UIViewController;

@interface AVNowPlayingInfoPanelCustom : AVNowPlayingInfoPanel {

	CGRect _originalBounds;
	UIViewController* _externalViewController;

}

@property (nonatomic,readonly) UIViewController * externalViewController;              //@synthesize externalViewController=_externalViewController - In the implementation block
-(void)setTitle:(id)arg1 ;
-(id)title;
-(void)loadView;
-(id)preferredFocusEnvironments;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
-(BOOL)_tvTabBarShouldAutohide;
-(BOOL)hasContent;
-(id)initWithIdentifier:(id)arg1 externalViewController:(id)arg2 ;
-(UIViewController *)externalViewController;
@end

