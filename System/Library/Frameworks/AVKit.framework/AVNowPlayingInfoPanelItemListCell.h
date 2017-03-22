/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:10 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UIStackView, UIImageView, UILabel, NSLayoutConstraint, UIColor, UIImage, NSString;

@interface AVNowPlayingInfoPanelItemListCell : UICollectionViewCell {

	UIStackView* _containerView;
	UIImageView* _imageView;
	UIImageView* _checkmarkImageView;
	UILabel* _titleLabel;
	NSLayoutConstraint* _imageHeightConstraint;
	NSLayoutConstraint* _imageWidthConstraint;
	NSLayoutConstraint* _titleWidthConstraint;
	NSLayoutConstraint* _titleLabelTopToImageBottomConstraint;
	NSLayoutConstraint* _containerLeftConstraint;
	NSLayoutConstraint* _containerRightConstraint;
	NSLayoutConstraint* _imageFocusedFrameGuideLeftConstraint;
	NSLayoutConstraint* _imageFocusedFrameGuideRightConstraint;
	UIColor* _unhighlightedTextColor;
	UIColor* _highlightedTextColor;

}

@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,retain) NSString * title; 
+(id)labelFontForImages:(BOOL)arg1 ;
+(id)checkmarkImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(NSString *)title;
-(UIImage *)image;
-(void)focusedViewDidChange;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg1 ;
@end
