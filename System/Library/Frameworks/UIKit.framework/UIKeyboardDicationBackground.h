/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:36 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, UIKeyboardDicationBackgroundGradientView;

@interface UIKeyboardDicationBackground : UIView {

	NSArray* _shadows;
	UIKeyboardDicationBackgroundGradientView* _gradient;

}

@property (nonatomic,retain) UIKeyboardDicationBackgroundGradientView * gradient;              //@synthesize gradient=_gradient - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setGradient:(UIKeyboardDicationBackgroundGradientView *)arg1 ;
-(UIKeyboardDicationBackgroundGradientView *)gradient;
-(id)shadows;
@end

