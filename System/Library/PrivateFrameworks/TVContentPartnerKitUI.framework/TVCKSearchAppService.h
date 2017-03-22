/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:48 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet, NSXPCListener, NSString;

@interface TVCKSearchAppService : NSObject <NSXPCListenerDelegate> {

	BOOL _started;
	NSObject*<OS_dispatch_queue> _acceptSerialQueue;
	NSMutableSet* _activeConnections;
	NSXPCListener* _serviceListener;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> acceptSerialQueue;              //@synthesize acceptSerialQueue=_acceptSerialQueue - In the implementation block
@property (nonatomic,retain) NSMutableSet * activeConnections;                            //@synthesize activeConnections=_activeConnections - In the implementation block
@property (nonatomic,retain) NSXPCListener * serviceListener;                             //@synthesize serviceListener=_serviceListener - In the implementation block
@property (assign,getter=isStarted,nonatomic) BOOL started;                               //@synthesize started=_started - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(BOOL)isStarted;
-(NSXPCListener *)serviceListener;
-(id)_init;
-(void)start;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSMutableSet *)activeConnections;
-(void)setStarted:(BOOL)arg1 ;
-(void)setServiceListener:(NSXPCListener *)arg1 ;
-(void)setAcceptSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setActiveConnections:(NSMutableSet *)arg1 ;
-(NSObject*<OS_dispatch_queue>)acceptSerialQueue;
-(void)_handleInvalidationForConnection:(id)arg1 ;
@end
