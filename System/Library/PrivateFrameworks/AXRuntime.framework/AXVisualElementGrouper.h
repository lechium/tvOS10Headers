/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:30 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXRuntime/AXElementGrouper.h>

@interface AXVisualElementGrouper : AXElementGrouper {

	double _maximumNeighbourDistance;
	double _maximumDistanceForAligningEdges;

}

@property (assign,nonatomic) double maximumNeighbourDistance;                     //@synthesize maximumNeighbourDistance=_maximumNeighbourDistance - In the implementation block
@property (assign,nonatomic) double maximumDistanceForAligningEdges;              //@synthesize maximumDistanceForAligningEdges=_maximumDistanceForAligningEdges - In the implementation block
-(id)init;
-(id)_groupablesForItems:(id)arg1 ;
-(id)initWithHeuristics:(long long)arg1 ;
-(void)setMaximumNeighbourDistance:(double)arg1 ;
-(void)setMaximumDistanceForAligningEdges:(double)arg1 ;
-(double)maximumDistanceForAligningEdges;
-(double)maximumNeighbourDistance;
@end
