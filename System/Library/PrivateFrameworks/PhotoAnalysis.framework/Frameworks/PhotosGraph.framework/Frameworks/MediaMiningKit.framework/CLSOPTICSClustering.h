/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:43 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/MediaMiningKit-Structs.h>
#import <MediaMiningKit/CLSDataDensityClustering.h>

@class NSProgress;

@interface CLSOPTICSClustering : CLSDataDensityClustering {

	NSProgress* _progress;
	double _maximumDistance;
	unsigned long long _minimumNumberOfObjects;

}
-(id)init;
-(id)performWithDataset:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(void)setMaximumDistance:(double)arg1 ;
-(void)setMinimumNumberOfObjects:(unsigned long long)arg1 ;
-(double)maximumDistance;
-(unsigned long long)minimumNumberOfObjects;
-(id)preprocessData:(id)arg1 ;
-(id)orderedDatasetByReachabilityDistance:(id)arg1 ;
-(id)extractRootClusters:(id)arg1 inOriginalDataset:(id)arg2 inProgressBlock:(/*^block*/id)arg3 ;
-(id)extractSubClusters:(id)arg1 inDataset:(id)arg2 parentIndex:(long long)arg3 inProgressBlock:(/*^block*/id)arg4 ;
-(id)prepareOrderedDatasetIndexRange:(NSRange)arg1 inDataset:(id)arg2 ;
-(void)updateNeighbors:(id)arg1 forIndex:(unsigned long long)arg2 ;
-(long long)updateReachibilityDistance:(id)arg1 forIndex:(unsigned long long)arg2 ;
@end
