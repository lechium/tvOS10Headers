/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:18 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOMapServiceTransitLineTicket.h>

@class GEOMapServiceTraits, GEOPDPlaceRequest, GEOPDPlaceResponse, NSString;

@interface _GEOTransitLineTicket : NSObject <GEOMapServiceTransitLineTicket> {

	GEOPDPlaceRequest* _request;
	GEOPDPlaceResponse* _response;
	GEOMapServiceTraits* _traits;
	BOOL _canceled;

}

@property (getter=isCanceled,nonatomic,readonly) BOOL canceled;              //@synthesize canceled=_canceled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) GEOMapServiceTraits * traits;                 //@synthesize traits=_traits - In the implementation block
-(void)cancel;
-(void)dealloc;
-(GEOMapServiceTraits *)traits;
-(void)submitWithHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2 ;
-(BOOL)isCanceled;
-(id)initWithRequest:(id)arg1 traits:(id)arg2 ;
@end
