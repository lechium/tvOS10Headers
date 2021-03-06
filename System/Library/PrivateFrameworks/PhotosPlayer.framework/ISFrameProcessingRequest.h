/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:47 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotosPlayer/PhotosPlayer-Structs.h>
@class CIImage;

@interface ISFrameProcessingRequest : NSObject {

	CIImage* _image;
	long long _type;
	double _renderScale;
	SCD_Struct_IS4 _time;

}

@property (nonatomic,retain) CIImage * image;                  //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) SCD_Struct_IS4 time;              //@synthesize time=_time - In the implementation block
@property (assign,nonatomic) long long type;                   //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) double renderScale;               //@synthesize renderScale=_renderScale - In the implementation block
-(void)setImage:(CIImage *)arg1 ;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(CIImage *)image;
-(SCD_Struct_IS4)time;
-(void)setTime:(SCD_Struct_IS4)arg1 ;
-(void)setRenderScale:(double)arg1 ;
-(double)renderScale;
@end

