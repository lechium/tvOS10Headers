/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:11 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CHSynchronizableProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface CHSynchronizable : NSObject <CHSynchronizableProtocol> {

	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(id)initWithQueue:(id)arg1 ;
-(id)initWithName:(const char*)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)execute:(/*^block*/id)arg1 ;
-(void)executeSync:(/*^block*/id)arg1 ;
-(id)executeSyncWithResult:(/*^block*/id)arg1 ;
-(BOOL)executeSyncWithBOOL:(/*^block*/id)arg1 ;
@end
