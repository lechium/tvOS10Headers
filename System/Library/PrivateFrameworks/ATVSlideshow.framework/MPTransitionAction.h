/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:34 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <ATVSlideshow/MPAction.h>

@protocol MPActionableSupport;
@class NSString, NSMutableDictionary, NSObject, NSDictionary;

@interface MPTransitionAction : MPAction {

	NSString* _transitionID;
	double _transitionDuration;
	NSMutableDictionary* _transitionAttributes;
	NSObject*<MPActionableSupport> _transitionDestination;

}

@property (nonatomic,copy) NSDictionary * transitionAttributes;                                 //@synthesize transitionAttributes=_transitionAttributes - In the implementation block
@property (nonatomic,copy) NSString * transitionID;                                             //@synthesize transitionID=_transitionID - In the implementation block
@property (assign,nonatomic) double transitionDuration;                                         //@synthesize transitionDuration=_transitionDuration - In the implementation block
@property (nonatomic,retain) NSObject*<MPActionableSupport> transitionDestination;              //@synthesize transitionDestination=_transitionDestination - In the implementation block
+(id)transitionAction;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAction:(id)arg1 ;
-(double)transitionDuration;
-(void)setTransitionDuration:(double)arg1 ;
-(void)configureTarget;
-(void)setTransitionAttributes:(NSDictionary *)arg1 ;
-(void)setTransitionDestination:(NSObject*<MPActionableSupport>)arg1 ;
-(id)transitionAttributeForKey:(id)arg1 ;
-(NSDictionary *)transitionAttributes;
-(NSObject*<MPActionableSupport>)transitionDestination;
-(NSString *)transitionID;
-(void)setTransitionID:(NSString *)arg1 ;
@end

