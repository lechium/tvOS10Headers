/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:43 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVPlayerViewControllerPlaybackDelegate
@optional
-(void)playerViewController:(id)arg1 shouldSeekToTime:(double)arg2 completion:(/*^block*/id)arg3;
-(void)playerViewController:(id)arg1 shouldSeekToDate:(id)arg2 completion:(/*^block*/id)arg3;
-(void)playerViewController:(id)arg1 shouldPlayFromTime:(double)arg2 completion:(/*^block*/id)arg3;
-(void)playerViewController:(id)arg1 shouldPauseWithCompletion:(/*^block*/id)arg2;
-(void)playerViewController:(id)arg1 shouldScanAtRate:(double)arg2 completion:(/*^block*/id)arg3;
-(void)didFinishScanningForPlayerViewController:(id)arg1;

@end
