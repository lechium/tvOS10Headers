/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:25 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BSPortDeathWatcher, NSMutableArray, NSLock;

@interface SBSpringBoardDiedDeactivationHandler : NSObject {

	BSPortDeathWatcher* _portDeathWatcher;
	NSMutableArray* _handlerBlockArray;
	NSLock* _lock;

}
+(id)sharedInstance;
-(void)addDeactivationBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)init;
@end

