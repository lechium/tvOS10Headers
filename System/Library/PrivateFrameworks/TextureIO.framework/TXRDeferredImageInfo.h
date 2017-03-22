/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:58 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class NSObject, TXRImageInfo;

@interface TXRDeferredImageInfo : NSObject {

	NSObject*<OS_dispatch_semaphore> _infoLoaded;
	TXRImageInfo* _info;

}

@property (nonatomic,retain) TXRImageInfo * info;              //@synthesize info=_info - In the implementation block
-(id)init;
-(TXRImageInfo *)info;
-(void)setInfo:(TXRImageInfo *)arg1 ;
-(void)signalLoaded;
@end
