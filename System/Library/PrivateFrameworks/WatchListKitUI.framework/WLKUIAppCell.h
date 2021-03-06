/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:10:01 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionViewCell.h>

@class UIImage, NSString, UIImageView, UILabel;

@interface WLKUIAppCell : UICollectionViewCell {

	UIImage* _image;
	NSString* _title;
	BOOL _didLayout;
	UIImageView* _imageView;
	UILabel* _titleLabel;

}
-(void)setImage:(id)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(void)updateConstraints;
@end

