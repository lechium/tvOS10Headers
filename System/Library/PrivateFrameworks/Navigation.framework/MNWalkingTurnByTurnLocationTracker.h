/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:37 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Navigation/Navigation-Structs.h>
#import <Navigation/MNTurnByTurnLocationTracker.h>

@interface MNWalkingTurnByTurnLocationTracker : MNTurnByTurnLocationTracker {

	int _detectedTransportType;
	SCD_Struct_MN3 _detectedTransportTypeOrigin;

}
-(int)transportType;
-(id)initWithNavigationSession:(id)arg1 ;
-(id)_newMapMatcherForRoute:(id)arg1 ;
-(int)_detectedMotionForLocation:(id)arg1 ;
-(BOOL)_allowSwitchToTransportType:(int)arg1 forLocation:(id)arg2 ;
@end

