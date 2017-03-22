/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:34 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _CLLocationSmootherProxy;

@interface CLLocationSmoother : NSObject {

	_CLLocationSmootherProxy* _locationManagerSmootherProxy;

}

@property (nonatomic,retain) _CLLocationSmootherProxy * locationManagerSmootherProxy;              //@synthesize locationManagerSmootherProxy=_locationManagerSmootherProxy - In the implementation block
@property (assign,nonatomic) id<CLLocationManagerDelegateInternal> delegate; 
-(void)setDelegate:(id<CLLocationManagerDelegateInternal>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<CLLocationManagerDelegateInternal>)delegate;
-(_CLLocationSmootherProxy *)locationManagerSmootherProxy;
-(void)smoothLocations:(id)arg1 ;
-(void)setLocationManagerSmootherProxy:(_CLLocationSmootherProxy *)arg1 ;
@end
