/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:44 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/_SBIconProgressTransition.h>

@interface _SBIconProgressFractionTransition : _SBIconProgressTransition {

	double _targetFraction;

}
+(id)newTransitionToFraction:(double)arg1 ;
-(void)completeTransitionAndUpdateView:(id)arg1 ;
-(void)updateToFraction:(double)arg1 ;
-(BOOL)isCompleteWithView:(id)arg1 ;
-(void)updateView:(id)arg1 withElapsedTime:(double)arg2 ;
-(void)_updateView:(id)arg1 forDisplayedFraction:(double)arg2 ;
@end
