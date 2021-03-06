/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:25 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface PLThrottleTimer : NSObject {

	id _target;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _timeoutId;
	unsigned long long _maxTimeoutId;
	BOOL _isPingedSinceLastFire;
	BOOL _isPaused;
	BOOL _isInvalid;
	SEL _action;
	double _timeout;
	double _maxTimeout;

}

@property (nonatomic,__weak,readonly) id target; 
@property (nonatomic,readonly) SEL action;                     //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) double timeout;                 //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,readonly) double maxTimeout;              //@synthesize maxTimeout=_maxTimeout - In the implementation block
-(void)invalidate;
-(SEL)action;
-(id)target;
-(void)setPaused:(BOOL)arg1 ;
-(double)timeout;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 timeout:(double)arg3 maxTimeout:(double)arg4 ;
-(void)ping;
-(void)_inqFireWithTimeout:(BOOL)arg1 timeoutId:(unsigned long long)arg2 maxTimeout:(BOOL)arg3 maxTimeoutId:(unsigned long long)arg4 ;
-(void)_inqScheduleTimeout:(BOOL)arg1 maxTimeout:(BOOL)arg2 ;
-(double)maxTimeout;
@end

