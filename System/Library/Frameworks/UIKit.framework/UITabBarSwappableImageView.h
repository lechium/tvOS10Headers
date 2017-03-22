/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:33 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIImageView.h>

@class UIImage;

@interface UITabBarSwappableImageView : UIImageView {

	UIImage* _value;
	UIImage* _alternate;
	BOOL _showAlternate;

}
-(void)setImage:(id)arg1 ;
-(void)showAlternateImage:(BOOL)arg1 ;
-(void)setCurrentImage;
-(id)initWithImage:(id)arg1 alternateImage:(id)arg2 ;
-(void)setAlternateImage:(id)arg1 ;
@end
