/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:04 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _UIFocusEngine;

@interface _UIFocusEngineDelayedPressAction : NSObject {

	_UIFocusEngine* _sender;
	long long _pressType;
	double _timestamp;

}

@property (nonatomic,__weak,readonly) _UIFocusEngine * sender;              //@synthesize sender=_sender - In the implementation block
@property (nonatomic,readonly) long long pressType;                         //@synthesize pressType=_pressType - In the implementation block
@property (nonatomic,readonly) double timestamp;                            //@synthesize timestamp=_timestamp - In the implementation block
+(void)sendDelayedPressWithType:(long long)arg1 timestamp:(double)arg2 sender:(id)arg3 ;
-(double)timestamp;
-(id)_initWithPressType:(long long)arg1 timestamp:(double)arg2 sender:(id)arg3 ;
-(void)_sendPressEvent;
-(_UIFocusEngine *)sender;
-(long long)pressType;
@end

