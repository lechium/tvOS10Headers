/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:40 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PASampling/PASampleAggregator.h>

@class NSString;

@interface PAProcessInstanceAggregator : PASampleAggregator {

	unsigned long long _startingTSDSIndex;
	NSString* _headerNote;
	unsigned long long _stackshotFrameAddress;
	unsigned long long _timestampIndexWhenTransitionedToSamplingAllProcesses;
	BOOL _forceOneBasedTimeIndexes;

}

@property (readonly) BOOL hasTargetProcess; 
@property (assign) unsigned long long stackshotFrameAddress;                                               //@synthesize stackshotFrameAddress=_stackshotFrameAddress - In the implementation block
@property (readonly) unsigned long long timestampIndexWhenTransitionedToSamplingAllProcesses;              //@synthesize timestampIndexWhenTransitionedToSamplingAllProcesses=_timestampIndexWhenTransitionedToSamplingAllProcesses - In the implementation block
@property (copy) NSString * headerNote;                                                                    //@synthesize headerNote=_headerNote - In the implementation block
@property (assign) BOOL forceOneBasedTimeIndexes;                                                          //@synthesize forceOneBasedTimeIndexes=_forceOneBasedTimeIndexes - In the implementation block
@property (assign) BOOL printSpinSignatureStack; 
@property (assign) BOOL printHeavyStacks; 
-(void)setSamples:(id)arg1 ;
-(BOOL)printSpinSignatureStack;
-(void)setPrintSpinSignatureStack:(BOOL)arg1 ;
-(BOOL)printHeavyStacks;
-(void)setPrintHeavyStacks:(BOOL)arg1 ;
-(void)printHeaderToOutputStream:(id)arg1 ;
-(id)sortedTasks;
-(void)printFooterToOutputStream:(id)arg1 ;
-(id)newAggregatedTaskForIdentificationPurposesWithSampleTask:(id)arg1 ;
-(id)newAggregatedTaskForSampleTask:(id)arg1 atTimestampIndex:(unsigned long long)arg2 ;
-(id)initWithSampleStore:(id)arg1 ;
-(id)sampleTaskWithPid:(int)arg1 atTimestampIndex:(unsigned long long)arg2 ;
-(BOOL)hasTargetProcess;
-(int)displayTimeIndexForTimestampIndex:(unsigned long long)arg1 ;
-(unsigned long long)timestampIndexWhenTransitionedToSamplingAllProcesses;
-(unsigned long long)stackshotFrameAddress;
-(id)kernelSampleTaskForSymbolication;
-(void)setStackshotFrameAddress:(unsigned long long)arg1 ;
-(id)sampleTaskWithUniqueId:(unsigned long long)arg1 atTimestampIndex:(unsigned long long)arg2 ;
-(unsigned long long)sampleIndexForDisplayTimeIndex:(int)arg1 ;
-(void)filterToDisplayTimeIndexStart:(unsigned long long)arg1 end:(unsigned long long)arg2 ;
-(void)filterToMachTimeRangeStart:(double)arg1 end:(double)arg2 ;
-(BOOL)forceOneBasedTimeIndexes;
-(void)setForceOneBasedTimeIndexes:(BOOL)arg1 ;
-(NSString *)headerNote;
-(void)setHeaderNote:(NSString *)arg1 ;
@end

