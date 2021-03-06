/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:55 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libacmobileshim.dylib/ACFComponents.h>

@protocol ACCTicketManagerProtocol, ACCSSOTGTStoragePolicy;
@interface ACCComponents : ACFComponents {

	id<ACCTicketManagerProtocol> _ticketManager;
	id<ACCSSOTGTStoragePolicy> _tgtStoragePolicy;

}

@property (nonatomic,retain) id<ACCSSOTGTStoragePolicy> tgtStoragePolicy;              //@synthesize tgtStoragePolicy=_tgtStoragePolicy - In the implementation block
@property (nonatomic,retain) id<ACCTicketManagerProtocol> ticketManager;               //@synthesize ticketManager=_ticketManager - In the implementation block
+(id)components;
+(id)defaultComponents;
-(void)dealloc;
-(id)createHandlerWithClass:(Class)arg1 context:(id)arg2 ;
-(id<ACCTicketManagerProtocol>)ticketManager;
-(id<ACCSSOTGTStoragePolicy>)tgtStoragePolicy;
-(void)setTgtStoragePolicy:(id<ACCSSOTGTStoragePolicy>)arg1 ;
-(void)setTicketManager:(id<ACCTicketManagerProtocol>)arg1 ;
@end

