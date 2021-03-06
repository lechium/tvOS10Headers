/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:45 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TVScrubImageLoaderDelegate <NSObject>
@required
-(BOOL)okToPreloadImages;
-(void)scrubImageLoaderImagesDidBecomeUnavailable:(id)arg1;
-(void)scrubImageLoaderImagesDidBecomeAvailable:(id)arg1;
-(void)scrubImageLoader:(id)arg1 imageDidLoad:(id)arg2 requestedTime:(double)arg3 imageTime:(double)arg4;

@end

