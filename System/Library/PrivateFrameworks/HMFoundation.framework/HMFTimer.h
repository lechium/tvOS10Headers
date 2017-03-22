/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:23 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HMFTimerDelegate, OS_dispatch_queue, OS_dispatch_source;
@class NSObject;

@interface HMFTimer : NSObject {

	double _timeInterval;
	unsigned long long _leeway;
	BOOL _running;
	id<HMFTimerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSObject*<OS_dispatch_source> _timer;
	unsigned long long _options;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;              //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_source> timer;                   //@synthesize timer=_timer - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                            //@synthesize options=_options - In the implementation block
@property (assign,getter=isRunning,nonatomic) BOOL running;                           //@synthesize running=_running - In the implementation block
@property (__weak) id<HMFTimerDelegate> delegate;                                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double timeInterval;                                   //@synthesize timeInterval=_timeInterval - In the implementation block
@property (nonatomic,readonly) unsigned long long leeway;                             //@synthesize leeway=_leeway - In the implementation block
+(id)shortDescription;
-(void)setDelegate:(id<HMFTimerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)debugDescription;
-(id<HMFTimerDelegate>)delegate;
-(void)suspend;
-(BOOL)isRunning;
-(unsigned long long)options;
-(void)resume;
-(double)timeInterval;
-(id)shortDescription;
-(NSObject*<OS_dispatch_source>)timer;
-(void)fire;
-(unsigned long long)leeway;
-(void)_resume;
-(void)_suspend;
-(id)initWithTimeInterval:(double)arg1 options:(unsigned long long)arg2 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(void)kick;
-(void)_handleExpiration;
-(void)_kick;
-(void)_fire;
-(void)setRunning:(BOOL)arg1 ;
@end
