/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:35 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPTimingSupport
@required
-(double)duration;
-(void)setDuration:(double)arg1;
-(void)setTimeIn:(double)arg1;
-(void)setPhaseInDuration:(double)arg1;
-(void)setPhaseOutDuration:(double)arg1;
-(BOOL)isTriggered;
-(void)setIsTriggered:(BOOL)arg1;
-(double)phaseInDuration;
-(double)phaseOutDuration;
-(double)numberOfLoops;
-(void)setNumberOfLoops:(double)arg1;
-(void)setStartsPaused:(BOOL)arg1;
-(double)timeIn;
-(BOOL)startsPaused;

@end

