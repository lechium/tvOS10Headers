/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:21 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@interface _UIScreenEdgePanRecognizerEdgeSettings : _UISettings {

	double _hysteresis;
	double _edgeRegionSize;
	double _bottomEdgeRegionSize;
	double _backProjectionTime;
	double _edgeAngleWindow;
	double _edgeAngleWindowDecayTime;
	double _restrictedEdgeRegionTimeInterval;
	double _restrictedEdgeRegionMinimumWeight;
	double _maximumSwipeDuration;

}

@property (assign,nonatomic) double hysteresis;                                     //@synthesize hysteresis=_hysteresis - In the implementation block
@property (assign,nonatomic) double edgeRegionSize;                                 //@synthesize edgeRegionSize=_edgeRegionSize - In the implementation block
@property (assign,nonatomic) double bottomEdgeRegionSize;                           //@synthesize bottomEdgeRegionSize=_bottomEdgeRegionSize - In the implementation block
@property (assign,nonatomic) double backProjectionTime;                             //@synthesize backProjectionTime=_backProjectionTime - In the implementation block
@property (assign,nonatomic) double edgeAngleWindow;                                //@synthesize edgeAngleWindow=_edgeAngleWindow - In the implementation block
@property (assign,nonatomic) double edgeAngleWindowDegreees; 
@property (assign,nonatomic) double edgeAngleWindowDecayTime;                       //@synthesize edgeAngleWindowDecayTime=_edgeAngleWindowDecayTime - In the implementation block
@property (assign,nonatomic) double restrictedEdgeRegionTimeInterval;               //@synthesize restrictedEdgeRegionTimeInterval=_restrictedEdgeRegionTimeInterval - In the implementation block
@property (assign,nonatomic) double restrictedEdgeRegionMinimumWeight;              //@synthesize restrictedEdgeRegionMinimumWeight=_restrictedEdgeRegionMinimumWeight - In the implementation block
@property (assign,nonatomic) double maximumSwipeDuration;                           //@synthesize maximumSwipeDuration=_maximumSwipeDuration - In the implementation block
+(id)settingsControllerModule;
+(id)keyPathsForValuesAffectingEdgeAngleWindowDegreees;
-(void)setDefaultValues;
-(void)setHysteresis:(double)arg1 ;
-(void)setEdgeRegionSize:(double)arg1 ;
-(void)setBottomEdgeRegionSize:(double)arg1 ;
-(void)setBackProjectionTime:(double)arg1 ;
-(void)setEdgeAngleWindow:(double)arg1 ;
-(void)setEdgeAngleWindowDecayTime:(double)arg1 ;
-(void)setRestrictedEdgeRegionTimeInterval:(double)arg1 ;
-(void)setRestrictedEdgeRegionMinimumWeight:(double)arg1 ;
-(void)setMaximumSwipeDuration:(double)arg1 ;
-(double)edgeAngleWindow;
-(double)edgeAngleWindowDegreees;
-(void)setEdgeAngleWindowDegreees:(double)arg1 ;
-(double)hysteresis;
-(double)edgeRegionSize;
-(double)bottomEdgeRegionSize;
-(double)backProjectionTime;
-(double)edgeAngleWindowDecayTime;
-(double)restrictedEdgeRegionTimeInterval;
-(double)restrictedEdgeRegionMinimumWeight;
-(double)maximumSwipeDuration;
@end
