/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:03 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, _INPBAppId, _INPBBuildId, NSMutableArray;

@interface _INPBAppBundleInfo : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	_INPBAppId* _appId;
	_INPBBuildId* _buildId;
	NSMutableArray* _intentSupports;
	NSMutableArray* _localizedProjects;
	NSMutableArray* _supportedPlatforms;

}

@property (nonatomic,retain) NSMutableArray * intentSupports;                  //@synthesize intentSupports=_intentSupports - In the implementation block
@property (nonatomic,retain) NSMutableArray * localizedProjects;               //@synthesize localizedProjects=_localizedProjects - In the implementation block
@property (nonatomic,readonly) BOOL hasAppId; 
@property (nonatomic,retain) _INPBAppId * appId;                               //@synthesize appId=_appId - In the implementation block
@property (nonatomic,readonly) BOOL hasBuildId; 
@property (nonatomic,retain) _INPBBuildId * buildId;                           //@synthesize buildId=_buildId - In the implementation block
@property (nonatomic,retain) NSMutableArray * supportedPlatforms;              //@synthesize supportedPlatforms=_supportedPlatforms - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)options;
+(Class)intentSupportType;
+(Class)localizedProjectsType;
+(Class)supportedPlatformsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasAppId;
-(_INPBAppId *)appId;
-(void)setAppId:(_INPBAppId *)arg1 ;
-(void)setBuildId:(_INPBBuildId *)arg1 ;
-(BOOL)hasBuildId;
-(_INPBBuildId *)buildId;
-(void)addIntentSupport:(id)arg1 ;
-(void)addLocalizedProjects:(id)arg1 ;
-(void)addSupportedPlatforms:(id)arg1 ;
-(void)clearIntentSupports;
-(unsigned long long)intentSupportsCount;
-(id)intentSupportAtIndex:(unsigned long long)arg1 ;
-(void)clearLocalizedProjects;
-(unsigned long long)localizedProjectsCount;
-(id)localizedProjectsAtIndex:(unsigned long long)arg1 ;
-(void)clearSupportedPlatforms;
-(unsigned long long)supportedPlatformsCount;
-(id)supportedPlatformsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)intentSupports;
-(void)setIntentSupports:(NSMutableArray *)arg1 ;
-(NSMutableArray *)localizedProjects;
-(void)setLocalizedProjects:(NSMutableArray *)arg1 ;
-(NSMutableArray *)supportedPlatforms;
-(void)setSupportedPlatforms:(NSMutableArray *)arg1 ;
@end

