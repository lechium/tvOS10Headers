/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:58 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVServices/TVSPlaybackInterruptableRegistration.h>

@class NSMutableDictionary, TVSPlaybackInterruptionGroup, NSString;

@interface TVSPlaybackInterruptionCenter : NSObject <TVSPlaybackInterruptableRegistration> {

	NSMutableDictionary* _interruptionGroupByInterruptionID;
	TVSPlaybackInterruptionGroup* _uninterruptedGroup;

}

@property (nonatomic,retain) NSMutableDictionary * interruptionGroupByInterruptionID;              //@synthesize interruptionGroupByInterruptionID=_interruptionGroupByInterruptionID - In the implementation block
@property (nonatomic,retain) TVSPlaybackInterruptionGroup * uninterruptedGroup;                    //@synthesize uninterruptedGroup=_uninterruptedGroup - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultInterruptionCenter;
-(id)init;
-(void)interruptionWillBeginWithID:(id)arg1 ;
-(void)interruptionDidBeginWithID:(id)arg1 ;
-(void)interruptionWillEndWithID:(id)arg1 ;
-(void)interruptionDidEndWithID:(id)arg1 ;
-(void)addInterruptable:(id)arg1 ;
-(void)removeInterruptable:(id)arg1 ;
-(NSMutableDictionary *)interruptionGroupByInterruptionID;
-(TVSPlaybackInterruptionGroup *)uninterruptedGroup;
-(void)setUninterruptedGroup:(TVSPlaybackInterruptionGroup *)arg1 ;
-(id)_allInterruptionGroups;
-(void)setInterruptionGroupByInterruptionID:(NSMutableDictionary *)arg1 ;
@end
