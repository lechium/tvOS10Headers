/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:52 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iAd/iAd-Structs.h>
#import <UIKit/UIControl.h>

@class UIImage, UIImageView;

@interface ADPrivacyButton : UIControl {

	UIImage* _iconImage;
	UIImage* _highlightedIconImage;
	UIImageView* _iconImageView;

}

@property (nonatomic,retain) UIImage * iconImage;                         //@synthesize iconImage=_iconImage - In the implementation block
@property (nonatomic,retain) UIImage * highlightedIconImage;              //@synthesize highlightedIconImage=_highlightedIconImage - In the implementation block
@property (nonatomic,retain) UIImageView * iconImageView;                 //@synthesize iconImageView=_iconImageView - In the implementation block
+(id)_iconImage;
+(id)_highlightedIconImage;
-(void)dealloc;
-(id)init;
-(CGSize)intrinsicContentSize;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIImage *)iconImage;
-(UIImageView *)iconImageView;
-(void)setHighlightedIconImage:(UIImage *)arg1 ;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(UIImage *)highlightedIconImage;
-(void)setIconImage:(UIImage *)arg1 ;
@end

