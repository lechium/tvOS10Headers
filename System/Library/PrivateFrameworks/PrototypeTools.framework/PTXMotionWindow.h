/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:12 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PTXMotionWindow : NSObject {

	double _radius;
	double _maxIncrease;
	long long _direction;
	double _effectiveRadius;
	double _center;
	double _upperLimit;
	double _lowerLimit;

}
-(void)reset;
-(double)mappedOffset:(double)arg1 ;
-(void)setIncreaseFactor:(double)arg1 fixingOffset:(double)arg2 ;
-(id)initWithRadius:(double)arg1 maxIncrease:(double)arg2 direction:(long long)arg3 ;
@end

