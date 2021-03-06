/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:05 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSString, NSDictionary, GKPlayerInternal, NSDate;

@interface GKAchievementInternal : GKInternalRepresentation {

	NSString* _identifier;
	NSString* _groupIdentifier;
	NSString* _title;
	NSString* _achievedDescription;
	NSString* _unachievedDescription;
	NSDictionary* _icons;
	GKPlayerInternal* _player;
	SCD_Union_GK11 _attributes;
	NSDate* _lastReportedDate;
	double _percentComplete;

}

@property (assign,nonatomic) unsigned attributes; 
@property (nonatomic,retain) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * groupIdentifier;                       //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
@property (nonatomic,retain) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * achievedDescription;                   //@synthesize achievedDescription=_achievedDescription - In the implementation block
@property (nonatomic,retain) NSString * unachievedDescription;                 //@synthesize unachievedDescription=_unachievedDescription - In the implementation block
@property (nonatomic,retain) NSDictionary * icons;                             //@synthesize icons=_icons - In the implementation block
@property (assign,nonatomic) unsigned short maximumPoints; 
@property (assign,getter=isHidden,nonatomic) BOOL hidden; 
@property (assign,getter=isReplayable,nonatomic) BOOL replayable; 
@property (nonatomic,retain) NSDate * lastReportedDate;                        //@synthesize lastReportedDate=_lastReportedDate - In the implementation block
@property (assign,nonatomic) double percentComplete;                           //@synthesize percentComplete=_percentComplete - In the implementation block
@property (nonatomic,retain) GKPlayerInternal * player;                        //@synthesize player=_player - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)secureCodedPropertyKeys;
-(void)setGroupIdentifier:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isHidden;
-(void)setHidden:(BOOL)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(double)percentComplete;
-(NSString *)identifier;
-(NSString *)title;
-(void)setIdentifier:(NSString *)arg1 ;
-(unsigned)attributes;
-(void)setAttributes:(unsigned)arg1 ;
-(void)setIcons:(NSDictionary *)arg1 ;
-(NSDictionary *)icons;
-(void)setPercentComplete:(double)arg1 ;
-(NSString *)groupIdentifier;
-(void)setPlayer:(GKPlayerInternal *)arg1 ;
-(GKPlayerInternal *)player;
-(id)serverRepresentation;
-(id)descriptionSubstitutionMap;
-(void)setLastReportedDate:(NSDate *)arg1 ;
-(NSString *)achievedDescription;
-(NSString *)unachievedDescription;
-(void)setAchievedDescription:(NSString *)arg1 ;
-(void)setUnachievedDescription:(NSString *)arg1 ;
-(void)setMaximumPoints:(unsigned short)arg1 ;
-(void)setReplayable:(BOOL)arg1 ;
-(void)mergePropertiesFromDescription:(id)arg1 ;
-(NSDate *)lastReportedDate;
-(unsigned short)maximumPoints;
-(BOOL)isReplayable;
@end

