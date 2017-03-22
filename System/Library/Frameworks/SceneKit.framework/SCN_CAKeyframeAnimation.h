/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:28 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <QuartzCore/CAKeyframeAnimation.h>

@interface SCN_CAKeyframeAnimation : CAKeyframeAnimation {

	_C3DKeyframedAnimation* _c3dAnimation;
	BOOL _caReady;

}
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setSpeed:(float)arg1 ;
-(double)duration;
-(id)timingFunction;
-(void)setDuration:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)speed;
-(double)timeOffset;
-(void)setTimeOffset:(double)arg1 ;
-(void)setAdditive:(BOOL)arg1 ;
-(void)setRemovedOnCompletion:(BOOL)arg1 ;
-(void)setTimingFunction:(id)arg1 ;
-(BOOL)isAdditive;
-(float)repeatCount;
-(void)setFillMode:(id)arg1 ;
-(void)setRepeatCount:(float)arg1 ;
-(void)setAutoreverses:(BOOL)arg1 ;
-(id)values;
-(void)setValues:(id)arg1 ;
-(void)setKeyTimes:(id)arg1 ;
-(id)keyTimes;
-(void)setTimingFunctions:(id)arg1 ;
-(void)setFadeInDuration:(double)arg1 ;
-(void)setFadeOutDuration:(double)arg1 ;
-(double)fadeInDuration;
-(double)fadeOutDuration;
-(BOOL)autoreverses;
-(void)setUsesSceneTimeBase:(BOOL)arg1 ;
-(double)repeatDuration;
-(BOOL)usesSceneTimeBase;
-(void)setRepeatDuration:(double)arg1 ;
-(id)fillMode;
-(void)setC3dAnimation:(_C3DKeyframedAnimation*)arg1 ;
-(void)_convertToCA;
-(void)_clearC3DCache;
-(id)timingFunctions;
-(id)tensionValues;
-(void)setTensionValues:(id)arg1 ;
-(id)continuityValues;
-(void)setContinuityValues:(id)arg1 ;
-(id)biasValues;
-(void)setBiasValues:(id)arg1 ;
-(BOOL)isRemovedOnCompletion;
-(void)setCommitsOnCompletion:(BOOL)arg1 ;
-(BOOL)commitsOnCompletion;
-(void)setAnimationEvents:(id)arg1 ;
-(id)animationEvents;
-(BOOL)isCumulative;
-(_C3DKeyframedAnimation*)c3dAnimation;
-(void)setCumulative:(BOOL)arg1 ;
@end
