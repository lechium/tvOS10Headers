/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:26 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MPCReportingController.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, RTCReporting;

@interface MPCRTCReportingController : MPCReportingController {

	NSObject*<OS_dispatch_queue> _accessQueue;
	unsigned long long _reportingState;
	NSMutableArray* _reportingStateLoadCompletionHandlers;
	RTCReporting* _rtcReporting;
	BOOL _shouldDeferEventFlushing;

}

@property (assign,nonatomic) BOOL shouldDeferEventFlushing; 
-(id)init;
-(void)_recordReportingEvents:(id)arg1 ;
-(BOOL)_getMethod:(unsigned short*)arg1 respCode:(unsigned short*)arg2 infoDictionary:(id*)arg3 fromReportingEvent:(id)arg4 ;
-(void)setShouldDeferEventFlushing:(BOOL)arg1 ;
-(BOOL)shouldDeferEventFlushing;
@end

