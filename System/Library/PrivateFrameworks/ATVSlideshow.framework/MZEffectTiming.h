/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:35 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MZEffectTiming
@property (nonatomic,readonly) double phaseInDuration; 
@property (nonatomic,readonly) double mainDuration; 
@property (nonatomic,readonly) double phaseOutDuration; 
@optional
-(unsigned long long)idealNumberOfSlides;
-(void)appendSlideInformation:(id)arg1 andTextInformation:(id)arg2;
-(void)setMultiImageSlideRange:(NSRange)arg1;
-(NSRange*)multiImageSlideRange;

@required
-(double)phaseInDuration;
-(double)phaseOutDuration;
-(double)mainDuration;
-(void)setPhaseInDuration:(double)arg1 mainDuration:(double)arg2 phaseOutDuration:(double)arg3;
-(double)lowestDisplayTime;
-(double)showTimeForSlideAtIndex:(unsigned long long)arg1;
-(double)showDurationForSlideAtIndex:(unsigned long long)arg1;
-(double)displayTimeForSlideAtIndex:(unsigned long long)arg1;
-(double)displayTimeForTextAtIndex:(unsigned long long)arg1;

@end

