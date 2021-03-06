/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:40 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotoVision.framework/PhotoVision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PVClustererPerformanceStats : NSObject {

	double _timeToCreateFaceObserviations;
	double _timeToCluster;
	double _timeToPersistClusters;
	double _timeToAutoname;
	double _timeToUpdateKeyFaces;
	double _totalTime;

}

@property (assign) double timeToCreateFaceObserviations;              //@synthesize timeToCreateFaceObserviations=_timeToCreateFaceObserviations - In the implementation block
@property (assign) double timeToCluster;                              //@synthesize timeToCluster=_timeToCluster - In the implementation block
@property (assign) double timeToPersistClusters;                      //@synthesize timeToPersistClusters=_timeToPersistClusters - In the implementation block
@property (assign) double timeToAutoname;                             //@synthesize timeToAutoname=_timeToAutoname - In the implementation block
@property (assign) double timeToUpdateKeyFaces;                       //@synthesize timeToUpdateKeyFaces=_timeToUpdateKeyFaces - In the implementation block
@property (assign) double totalTime;                                  //@synthesize totalTime=_totalTime - In the implementation block
-(void)clear;
-(double)totalTime;
-(void)setTotalTime:(double)arg1 ;
-(double)timeToCreateFaceObserviations;
-(void)setTimeToCreateFaceObserviations:(double)arg1 ;
-(double)timeToCluster;
-(void)setTimeToCluster:(double)arg1 ;
-(double)timeToPersistClusters;
-(void)setTimeToPersistClusters:(double)arg1 ;
-(double)timeToAutoname;
-(void)setTimeToAutoname:(double)arg1 ;
-(double)timeToUpdateKeyFaces;
-(void)setTimeToUpdateKeyFaces:(double)arg1 ;
@end

