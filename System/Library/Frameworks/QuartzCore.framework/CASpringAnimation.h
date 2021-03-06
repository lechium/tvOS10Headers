/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:39 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CABasicAnimation.h>

@interface CASpringAnimation : CABasicAnimation

@property (assign) double velocity; 
@property (assign) double mass; 
@property (assign) double stiffness; 
@property (assign) double damping; 
@property (assign) double initialVelocity; 
@property (readonly) double settlingDuration; 
+(id)defaultValueForKey:(id)arg1 ;
-(unsigned)_propertyFlagsForLayer:(id)arg1 ;
-(Animation*)_copyRenderAnimationForLayer:(id)arg1 ;
-(BOOL)_setCARenderAnimation:(Animation*)arg1 layer:(id)arg2 ;
-(double)_timeFunction:(double)arg1 ;
-(void)setVelocity:(double)arg1 ;
-(void)setStiffness:(double)arg1 ;
-(void)setDamping:(double)arg1 ;
-(void)setMass:(double)arg1 ;
-(float)_solveForInput:(float)arg1 ;
-(double)velocity;
-(double)damping;
-(double)mass;
-(double)durationForEpsilon:(double)arg1 ;
-(double)stiffness;
-(double)initialVelocity;
-(double)settlingDuration;
-(void)setInitialVelocity:(double)arg1 ;
@end

