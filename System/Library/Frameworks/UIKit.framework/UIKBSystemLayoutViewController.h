/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:21 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIViewController.h>

@class NSMutableArray;

@interface UIKBSystemLayoutViewController : UIViewController {

	NSMutableArray* _constraints;
	unsigned long long _horizontalLayoutType;
	unsigned long long _verticalLayoutType;
	CGSize _centeredOffsets;
	UIEdgeInsets _minimumInsets;

}

@property (assign,nonatomic) unsigned long long horizontalLayoutType;              //@synthesize horizontalLayoutType=_horizontalLayoutType - In the implementation block
@property (assign,nonatomic) unsigned long long verticalLayoutType;                //@synthesize verticalLayoutType=_verticalLayoutType - In the implementation block
@property (assign,nonatomic) UIEdgeInsets minimumInsets;                           //@synthesize minimumInsets=_minimumInsets - In the implementation block
@property (assign,nonatomic) CGSize centeredOffsets;                               //@synthesize centeredOffsets=_centeredOffsets - In the implementation block
+(id)systemLayoutViewControllerWithViewController:(id)arg1 ;
-(void)dealloc;
-(void)updateViewConstraints;
-(unsigned long long)horizontalLayoutType;
-(unsigned long long)verticalLayoutType;
-(void)setHorizontalLayoutType:(unsigned long long)arg1 ;
-(void)setVerticalLayoutType:(unsigned long long)arg1 ;
-(void)setMinimumInsets:(UIEdgeInsets)arg1 ;
-(void)setCenteredOffsets:(CGSize)arg1 ;
-(UIEdgeInsets)minimumInsets;
-(CGSize)centeredOffsets;
@end

