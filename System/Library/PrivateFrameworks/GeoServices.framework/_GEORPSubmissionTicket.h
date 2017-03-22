/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:18 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOMapServiceProblemReportTicket.h>

@protocol GEOMapItem;
@class GEOMapServiceTraits, NSData, GEORPProblem, GEORPProblemRequest, NSString;

@interface _GEORPSubmissionTicket : NSObject <GEOMapServiceProblemReportTicket> {

	NSData* _resubmissionData;
	GEORPProblem* _problem;
	id<GEOMapItem> _place;
	id<GEOMapItem> _startPlace;
	id<GEOMapItem> _endPlace;
	GEORPProblemRequest* _problemRequest;
	NSData* _pushToken;
	NSString* _emailAddress;
	GEOMapServiceTraits* _traits;
	BOOL _started;
	BOOL _canceled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) GEOMapServiceTraits * traits;              //@synthesize traits=_traits - In the implementation block
-(void)cancel;
-(void)dealloc;
-(GEOMapServiceTraits *)traits;
-(void)submitWithHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2 ;
-(id)initWithResubmissionData:(id)arg1 traits:(id)arg2 ;
-(id)initWithProblem:(id)arg1 placeForProblemContext:(id)arg2 placeForStartDirectionsSearchInput:(id)arg3 placeForEndDirectionsSearchInput:(id)arg4 pushToken:(id)arg5 allowContactBackAtEmailAddress:(id)arg6 traits:(id)arg7 ;
@end
