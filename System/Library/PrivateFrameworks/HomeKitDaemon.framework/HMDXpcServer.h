/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:26 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFMessageDispatcher.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/HMDApplicationMonitorDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class HMDApplicationRegistry, NSObject, NSUUID, NSXPCListener, NSMutableSet, HMDApplicationMonitor, HMDCentralMessageDispatcher, HMFMessageDispatcher, HMDBackgroundAppMessageFilter, HMDLostModeMessageFilter, NSString;

@interface HMDXpcServer : HMFMessageDispatcher <NSXPCListenerDelegate, HMFMessageReceiver, HMDApplicationMonitorDelegate> {

	HMDApplicationRegistry* _appRegistry;
	NSObject*<OS_dispatch_queue> _xpcWorkQueue;
	NSUUID* _uuid;
	NSXPCListener* _xpcListener;
	NSMutableSet* _xpcClients;
	HMDApplicationMonitor* _appMonitor;
	NSObject*<OS_dispatch_group> _activeMessageTracker;
	HMDCentralMessageDispatcher* _recvDispatcher;
	HMFMessageDispatcher* _notificationRelayDispatcher;
	HMDBackgroundAppMessageFilter* _backgroundAppMsgFilter;
	HMDLostModeMessageFilter* _lostModeMessageFilter;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> xpcWorkQueue;                           //@synthesize xpcWorkQueue=_xpcWorkQueue - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                                       //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSXPCListener * xpcListener;                                         //@synthesize xpcListener=_xpcListener - In the implementation block
@property (nonatomic,retain) NSMutableSet * xpcClients;                                           //@synthesize xpcClients=_xpcClients - In the implementation block
@property (nonatomic,retain) HMDApplicationRegistry * appRegistry;                                //@synthesize appRegistry=_appRegistry - In the implementation block
@property (assign,nonatomic,__weak) HMDApplicationMonitor * appMonitor;                           //@synthesize appMonitor=_appMonitor - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> activeMessageTracker;                   //@synthesize activeMessageTracker=_activeMessageTracker - In the implementation block
@property (nonatomic,retain) HMDCentralMessageDispatcher * recvDispatcher;                        //@synthesize recvDispatcher=_recvDispatcher - In the implementation block
@property (nonatomic,retain) HMFMessageDispatcher * notificationRelayDispatcher;                  //@synthesize notificationRelayDispatcher=_notificationRelayDispatcher - In the implementation block
@property (nonatomic,retain) HMDBackgroundAppMessageFilter * backgroundAppMsgFilter;              //@synthesize backgroundAppMsgFilter=_backgroundAppMsgFilter - In the implementation block
@property (nonatomic,retain) HMDLostModeMessageFilter * lostModeMessageFilter;                    //@synthesize lostModeMessageFilter=_lostModeMessageFilter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
-(void)dealloc;
-(void)reset;
-(BOOL)stop;
-(BOOL)start;
-(NSUUID *)uuid;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)deregisterReceiver:(id)arg1 ;
-(void)_registerForMessages;
-(void)registerForMessage:(id)arg1 receiver:(id)arg2 messageHandler:(/*^block*/id)arg3 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)setNotificationRelayDispatcher:(HMFMessageDispatcher *)arg1 ;
-(HMFMessageDispatcher *)notificationRelayDispatcher;
-(id)initWithQueue:(id)arg1 receiveDispatcher:(id)arg2 notificationRelayDispatcher:(id)arg3 messageFilterChain:(id)arg4 registerAsMachService:(BOOL)arg5 ;
-(HMDApplicationRegistry *)appRegistry;
-(void)sendMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)sendMessage:(id)arg1 target:(id)arg2 completionQueue:(id)arg3 deliveryCompletionHandler:(/*^block*/id)arg4 ;
-(void)dispatchMessage:(id)arg1 target:(id)arg2 ;
-(HMDCentralMessageDispatcher *)recvDispatcher;
-(NSXPCListener *)xpcListener;
-(HMDApplicationMonitor *)appMonitor;
-(NSMutableSet *)xpcClients;
-(NSObject*<OS_dispatch_queue>)xpcWorkQueue;
-(NSObject*<OS_dispatch_group>)activeMessageTracker;
-(HMDBackgroundAppMessageFilter *)backgroundAppMsgFilter;
-(void)_sendMessage:(id)arg1 andInvokeCompletionHandler:(/*^block*/id)arg2 withDeliveryCompletion:(/*^block*/id)arg3 ;
-(void)deregisterForMessage:(id)arg1 receiver:(id)arg2 ;
-(void)_handleSuspendXPCConnectionRequest:(id)arg1 ;
-(void)_handleResumeXPCConnectionRequest:(id)arg1 ;
-(void)applicationMonitorDidChangeActiveHomeKitAppStatus:(BOOL)arg1 ;
-(void)applicationMonitorDidChangeAppState:(id)arg1 ;
-(id)endPoint;
-(void)setAppRegistry:(HMDApplicationRegistry *)arg1 ;
-(void)setXpcWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setXpcListener:(NSXPCListener *)arg1 ;
-(void)setXpcClients:(NSMutableSet *)arg1 ;
-(void)setAppMonitor:(HMDApplicationMonitor *)arg1 ;
-(void)setActiveMessageTracker:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)setRecvDispatcher:(HMDCentralMessageDispatcher *)arg1 ;
-(void)setBackgroundAppMsgFilter:(HMDBackgroundAppMessageFilter *)arg1 ;
-(HMDLostModeMessageFilter *)lostModeMessageFilter;
-(void)setLostModeMessageFilter:(HMDLostModeMessageFilter *)arg1 ;
@end

