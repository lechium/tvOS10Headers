/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:30 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface UIInputViewAnimationStyle : NSObject <NSCopying> {

	BOOL animated;
	double duration;
	unsigned long long extraOptions;
	BOOL interactivelyCancelled;
	BOOL force;

}

@property (assign,nonatomic) BOOL force; 
@property (assign,nonatomic) BOOL animated; 
@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) unsigned long long extraOptions; 
@property (assign,nonatomic) BOOL interactivelyCancelled; 
@property (nonatomic,readonly) BOOL isAnimationCompleted; 
@property (nonatomic,readonly) BOOL canDismissWithScrollView; 
+(id)animationStyleImmediate;
+(id)animationStyleDefault;
+(id)animationStyleAnimated:(BOOL)arg1 duration:(double)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setForce:(BOOL)arg1 ;
-(BOOL)force;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)animated;
-(void)setAnimated:(BOOL)arg1 ;
-(void)setExtraOptions:(unsigned long long)arg1 ;
-(unsigned long long)extraOptions;
-(void)setInteractivelyCancelled:(BOOL)arg1 ;
-(void)launchAnimation:(/*^block*/id)arg1 afterStarted:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 forHost:(id)arg4 fromCurrentPosition:(BOOL)arg5 ;
-(id)controllerForStartPlacement:(id)arg1 endPlacement:(id)arg2 ;
-(BOOL)isAnimationCompleted;
-(BOOL)canDismissWithScrollView;
-(id)endPlacementForInputViewSet:(id)arg1 ;
-(BOOL)interactivelyCancelled;
-(id)startPlacementForInputViewSet:(id)arg1 currentPlacement:(id)arg2 ;
@end
