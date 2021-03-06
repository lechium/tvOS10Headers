/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:38 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, NSString;

@interface CNStarkNoContentBannerView : UIView {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;

}

@property (retain) UILabel * titleLabel;                             //@synthesize titleLabel=_titleLabel - In the implementation block
@property (retain) UILabel * subtitleLabel;                          //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) NSString * titleString; 
@property (nonatomic,retain) NSString * subtitleString; 
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(NSString *)titleString;
-(void)setTitleString:(NSString *)arg1 ;
-(void)setSubtitleString:(NSString *)arg1 ;
-(NSString *)subtitleString;
-(UILabel *)subtitleLabel;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
@end

