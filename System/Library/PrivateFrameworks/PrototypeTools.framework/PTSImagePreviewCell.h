/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:12 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PrototypeTools/PrototypeTools-Structs.h>
#import <UIKit/UITableViewCell.h>

@class UIImageView, UIView, UILabel, UIImage, NSString;

@interface PTSImagePreviewCell : UITableViewCell {

	UIImageView* _imageViewOnLight;
	UIImageView* _imageViewOnDark;
	UIView* _lightBackground;
	UIView* _darkBackground;
	UILabel* _imageNameLabel;
	UIImage* _previewImage;

}

@property (nonatomic,retain) UIImage * previewImage;              //@synthesize previewImage=_previewImage - In the implementation block
@property (nonatomic,retain) NSString * imageName; 
+(double)heightForImage:(id)arg1 ;
+(void)_getLeftFrame:(CGRect*)arg1 rightFrame:(CGRect*)arg2 forImage:(id)arg3 inBounds:(CGRect)arg4 ;
-(void)layoutSubviews;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setPreviewImage:(UIImage *)arg1 ;
-(NSString *)imageName;
-(void)setImageName:(NSString *)arg1 ;
-(UIImage *)previewImage;
@end
