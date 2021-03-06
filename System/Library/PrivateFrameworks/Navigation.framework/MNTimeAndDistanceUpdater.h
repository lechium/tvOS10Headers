/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:36 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNTimeAndDistanceUpdaterDelegate;
@interface MNTimeAndDistanceUpdater : NSObject {

	id<MNTimeAndDistanceUpdaterDelegate> _delegate;
	double _remainingTime;
	double _remainingDistance;
	double _distanceToManeuverStart;
	double _distanceToManeuverEnd;

}

@property (assign,nonatomic,__weak) id<MNTimeAndDistanceUpdaterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double remainingTime;                                            //@synthesize remainingTime=_remainingTime - In the implementation block
@property (nonatomic,readonly) double remainingDistance;                                        //@synthesize remainingDistance=_remainingDistance - In the implementation block
@property (nonatomic,readonly) double distanceToManeuverStart;                                  //@synthesize distanceToManeuverStart=_distanceToManeuverStart - In the implementation block
@property (nonatomic,readonly) double distanceToManeuverEnd;                                    //@synthesize distanceToManeuverEnd=_distanceToManeuverEnd - In the implementation block
-(void)setDelegate:(id<MNTimeAndDistanceUpdaterDelegate>)arg1 ;
-(id<MNTimeAndDistanceUpdaterDelegate>)delegate;
-(double)distanceToManeuverStart;
-(double)distanceToManeuverEnd;
-(double)remainingTime;
-(void)updateForLocation:(id)arg1 route:(id)arg2 etaRoute:(id)arg3 ;
-(double)remainingDistance;
@end

