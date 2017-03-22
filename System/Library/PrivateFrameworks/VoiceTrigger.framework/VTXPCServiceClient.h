/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:50 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection;

@interface VTXPCServiceClient : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _vtxConnection;

}
-(void)dealloc;
-(id)init;
-(id)_service;
-(void)notifyVoiceTriggeredSiriSessionCancelled;
-(void)notifySecondChanceRequest;
-(void)notifyTriggerEventRequest;
-(void)resetAssertions;
-(void)clearVoiceTriggerCount;
-(void)enableVoiceTrigger:(BOOL)arg1 withAssertion:(id)arg2 ;
-(void)setPhraseSpotterBypassing:(BOOL)arg1 timeout:(double)arg2 ;
-(unsigned char)getLastTriggerType;
-(long long)getVoiceTriggerCount;
-(id)getFirstChanceAudioBuffer;
-(id)getFirstChanceVTEventInfo;
-(id)getFirstChanceTriggeredDate;
@end
