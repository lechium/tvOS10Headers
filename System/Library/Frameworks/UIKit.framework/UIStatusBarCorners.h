/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:32 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface UIStatusBarCorners : UIView {

	int _cornerStyle;
	int _cornerAlignment;
	UIView* _leftCorner;
	UIView* _rightCorner;

}
+(double)cornerRadius;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(int)cornerStyle;
-(id)initForAlignment:(int)arg1 style:(int)arg2 ;
-(id)_imageForCornerWithStyle:(int)arg1 ;
@end

