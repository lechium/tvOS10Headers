/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:49 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TVSettingKit.framework/TVSettingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@protocol _TSKAnimatorDelegate;
@class NSString;

@interface _TSKZoomAnimator : NSObject <UIViewControllerAnimatedTransitioning> {

	long long _operation;
	id<_TSKAnimatorDelegate> _animatorDelegate;

}

@property (assign,nonatomic) long long operation;                                           //@synthesize operation=_operation - In the implementation block
@property (assign,nonatomic,__weak) id<_TSKAnimatorDelegate> animatorDelegate;              //@synthesize animatorDelegate=_animatorDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)transitionDuration:(id)arg1 ;
-(long long)operation;
-(void)setOperation:(long long)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)animationEnded:(BOOL)arg1 ;
-(void)_animatePush:(BOOL)arg1 withContext:(id)arg2 ;
-(id<_TSKAnimatorDelegate>)animatorDelegate;
-(void)setAnimatorDelegate:(id<_TSKAnimatorDelegate>)arg1 ;
@end
