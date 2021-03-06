/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:39 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/CAPropertyInfo.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/CAMediaTiming.h>
#import <libobjc.A.dylib/CAAction.h>

@class CAStateControllerTransition, NSString, CAMediaTimingFunction;

@interface CAAnimation : NSObject <NSMutableCopying, CAPropertyInfo, NSCoding, NSCopying, CAMediaTiming, CAAction> {

	void* _attr;
	unsigned _flags;

}

@property (__weak) CAStateControllerTransition * CAStateControllerTransition; 
@property (getter=isEnabled) BOOL enabled; 
@property (copy) NSString * beginTimeMode; 
@property (assign) double frameInterval; 
@property (assign) long long preferredFramesPerSecond; 
@property (retain) CAMediaTimingFunction * timingFunction; 
@property (retain) id<CAAnimationDelegate> delegate; 
@property (getter=isRemovedOnCompletion) BOOL removedOnCompletion; 
@property (assign) double beginTime; 
@property (assign) double duration; 
@property (assign) float speed; 
@property (assign) double timeOffset; 
@property (assign) float repeatCount; 
@property (assign) double repeatDuration; 
@property (assign) BOOL autoreverses; 
@property (copy) NSString * fillMode; 
+(BOOL)resolveInstanceMethod:(SEL)arg1 ;
+(void)CAMLParserStartElement:(id)arg1 ;
+(id)defaultValueForKey:(id)arg1 ;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(/*function pointer*/void*)CA_setterForProperty:(const CAPropertyInfo*)arg1 ;
+(/*function pointer*/void*)CA_getterForProperty:(const CAPropertyInfo*)arg1 ;
+(BOOL)CA_encodesPropertyConditionally:(unsigned)arg1 type:(int)arg2 ;
+(id)animation;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)properties;
-(void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3 ;
-(id)CAMLTypeForKey:(id)arg1 ;
-(Object*)CA_copyRenderValue;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(BOOL)shouldArchiveValueForKey:(id)arg1 ;
-(unsigned)_propertyFlagsForLayer:(id)arg1 ;
-(BOOL)_setCARenderAnimation:(Animation*)arg1 layer:(id)arg2 ;
-(BOOL)removedOnCompletion;
-(id)valueForKey:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<CAAnimationDelegate>)arg1 ;
-(void)dealloc;
-(id)debugDescription;
-(id<CAAnimationDelegate>)delegate;
-(void)setSpeed:(float)arg1 ;
-(double)duration;
-(CAMediaTimingFunction *)timingFunction;
-(void)setDuration:(double)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)speed;
-(double)timeOffset;
-(void)setTimeOffset:(double)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(void)setRemovedOnCompletion:(BOOL)arg1 ;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(void)runActionForKey:(id)arg1 object:(id)arg2 arguments:(id)arg3 ;
-(float)repeatCount;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 ;
-(NSString *)beginTimeMode;
-(double)beginTime;
-(void)setFrameInterval:(double)arg1 ;
-(void)setFillMode:(NSString *)arg1 ;
-(void)setBeginTime:(double)arg1 ;
-(void)setBeginTimeMode:(NSString *)arg1 ;
-(void)setRepeatCount:(float)arg1 ;
-(void)setAutoreverses:(BOOL)arg1 ;
-(void)setPreferredFramesPerSecond:(long long)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3 ;
-(double)frameInterval;
-(long long)preferredFramesPerSecond;
-(BOOL)autoreverses;
-(double)repeatDuration;
-(void)setRepeatDuration:(double)arg1 ;
-(NSString *)fillMode;
-(BOOL)isRemovedOnCompletion;
-(void)setDefaultDuration:(double)arg1 ;
@end

