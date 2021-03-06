/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:38 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreCDPUI/CoreCDPUI-Structs.h>
#import <Preferences/DevicePINPane.h>

@class CDPPaneHeaderView;

@interface CDPPassphraseEntryPane : DevicePINPane {

	CDPPaneHeaderView* _headerView;
	double _keyboardOffset;

}

@property (nonatomic,readonly) CGRect availableHeaderRect; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)headerView;
-(void)_keyboardLayoutChanged;
-(double)keyboardHeightOffset;
-(void)_layoutHeaderRect;
-(void)_layoutPinView;
-(CGRect)availableHeaderRect;
-(void)didFinishResizingHeaderView;
-(void)didFinishResizingPinView;
-(void)_layoutSubviews;
@end

