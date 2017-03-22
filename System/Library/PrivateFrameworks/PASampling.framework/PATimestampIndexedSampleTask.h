/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:39 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PASampleTaskData;

@interface PATimestampIndexedSampleTask : NSObject {

	unsigned long long _lastTimestampIndex;
	PASampleTaskData* _sampleTask;

}

@property (assign) unsigned long long lastTimestampIndex;              //@synthesize lastTimestampIndex=_lastTimestampIndex - In the implementation block
@property (readonly) PASampleTaskData * sampleTask;                    //@synthesize sampleTask=_sampleTask - In the implementation block
-(id)debugDescription;
-(id)initWithSampleTask:(id)arg1 atTimestampIndex:(unsigned long long)arg2 ;
-(unsigned long long)lastTimestampIndex;
-(void)setLastTimestampIndex:(unsigned long long)arg1 ;
-(PASampleTaskData *)sampleTask;
@end
