/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:39 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATFoundation/ATSocket.h>
#import <libobjc.A.dylib/NSNetServiceDelegate.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>

@protocol OS_tcp_connection, OS_dispatch_queue, OS_dispatch_semaphore, OS_dispatch_source;
@class NSString, NSObject;

@interface ATNetServiceSocket : ATSocket <NSNetServiceDelegate, NSStreamDelegate> {

	BOOL _connected;
	NSString* _serviceName;
	NSString* _serviceType;
	NSString* _serviceDomain;
	NSString* _hostname;
	unsigned short _port;
	NSObject*<OS_tcp_connection> _connection;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_semaphore> _sema;
	NSObject*<OS_dispatch_source> _source;
	char _readBuffer[65536];
	BOOL _enableTLS;
	NSString* _interfaceName;

}

@property (nonatomic,copy) NSString * interfaceName;                //@synthesize interfaceName=_interfaceName - In the implementation block
@property (assign,nonatomic) BOOL enableTLS;                        //@synthesize enableTLS=_enableTLS - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)open;
-(BOOL)_connect;
-(void)setInterfaceName:(NSString *)arg1 ;
-(NSString *)interfaceName;
-(BOOL)enableTLS;
-(void)setEnableTLS:(BOOL)arg1 ;
-(void)closeDescriptor;
-(id)initWithServiceName:(id)arg1 type:(id)arg2 domain:(id)arg3 ;
@end

