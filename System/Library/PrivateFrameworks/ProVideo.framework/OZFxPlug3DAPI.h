/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:51 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/Fx3DAPI.h>
#import <libobjc.A.dylib/Fx3DAPI_v2.h>
#import <libobjc.A.dylib/Fx3DAPI_v3.h>
#import <libobjc.A.dylib/PROAPIObject.h>

@class NSString;

@interface OZFxPlug3DAPI : NSObject <Fx3DAPI, Fx3DAPI_v2, Fx3DAPI_v3, PROAPIObject> {

	BOOL _is3D;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isUsingCamera;
-(BOOL)conformsToProtocol:(id)arg1 version:(unsigned)arg2 ;
-(double)focalLengthAtTime:(double)arg1 ;
-(id)cameraMatrixAtTime:(double)arg1 ;
-(id)layerMatrixAtTime:(double)arg1 ;
-(BOOL)is3D;
-(id)worldToFilmMatrix;
-(id)worldToObjectMatrix;
-(id)worldToEyeMatrix;
-(double)focalLengthAtFxTime:(/*function pointer*/void**)arg1 ;
-(void)_setCameraMatrix:(PCMatrix44Tmpl<double>)arg1 ;
-(void)_setWorldToFilmMatrix:(PCMatrix44Tmpl<double>)arg1 ;
-(void)_setLayerMatrix:(PCMatrix44Tmpl<double>)arg1 ;
-(void)_setWorldToLayerMatrix:(PCMatrix44Tmpl<double>)arg1 ;
-(void)_setWorldToObjectMatrix:(PCMatrix44Tmpl<double>)arg1 ;
-(void)_setWorldToEyeMatrix:(PCMatrix44Tmpl<double>)arg1 ;
-(void)_setIs3D:(BOOL)arg1 ;
-(void)_setFocalLength:(double)arg1 ;
-(id)worldToLayerMatrix;
@end

