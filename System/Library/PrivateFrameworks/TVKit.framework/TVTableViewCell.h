/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:45 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIImage, TVSImageProxy, UIColor;

@interface TVTableViewCell : UITableViewCell {

	UIImage* _backingImage;
	BOOL _rendersImageAsTemplates;
	BOOL _allowsFocus;
	UIImage* _placeholderImage;
	TVSImageProxy* _imageProxy;
	UIColor* __imageTintColor;
	double __imageViewWidth;

}

@property (setter=_setImageTintColor:,nonatomic,retain) UIColor * _imageTintColor;              //@synthesize _imageTintColor=__imageTintColor - In the implementation block
@property (assign,setter=_setImageViewWidth:,nonatomic) double _imageViewWidth;                 //@synthesize _imageViewWidth=__imageViewWidth - In the implementation block
@property (assign,nonatomic) BOOL rendersImageAsTemplates;                                      //@synthesize rendersImageAsTemplates=_rendersImageAsTemplates - In the implementation block
@property (nonatomic,retain) UIImage * placeholderImage;                                        //@synthesize placeholderImage=_placeholderImage - In the implementation block
@property (nonatomic,retain) TVSImageProxy * imageProxy;                                        //@synthesize imageProxy=_imageProxy - In the implementation block
@property (assign,nonatomic) BOOL allowsFocus;                                                  //@synthesize allowsFocus=_allowsFocus - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)_setImageTintColor:(id)arg1 ;
-(BOOL)canBecomeFocused;
-(void)prepareForReuse;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(UIImage *)placeholderImage;
-(UIColor *)_imageTintColor;
-(TVSImageProxy *)imageProxy;
-(void)setImageProxy:(TVSImageProxy *)arg1 ;
-(void)setImageProxy:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateImage;
-(id)labelForMarquee;
-(double)_imageViewWidth;
-(double)_textLabelWidthWithXPosition:(double)arg1 currentWidth:(double)arg2 ;
-(BOOL)rendersImageAsTemplates;
-(void)setRendersImageAsTemplates:(BOOL)arg1 ;
-(void)_setImageViewWidth:(double)arg1 ;
-(void)setAllowsFocus:(BOOL)arg1 ;
-(BOOL)allowsFocus;
@end

