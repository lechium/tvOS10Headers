/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:46 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpotlightDaemon/MDAgent.h>

@class MDSearchableIndexService;

@interface MDIndexAgent : MDAgent {

	MDSearchableIndexService* _service;

}

@property (retain) MDSearchableIndexService * service;              //@synthesize service=_service - In the implementation block
+(id)xpcInterface;
+(id)machServiceName;
+(id)clientXPCInterface;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)setService:(MDSearchableIndexService *)arg1 ;
-(MDSearchableIndexService *)service;
-(id)initWithClientConnection:(id)arg1 clientLink:(id)arg2 indexer:(id)arg3 ;
-(void)_pullEntitlementsOffConnection:(id)arg1 ;
@end
