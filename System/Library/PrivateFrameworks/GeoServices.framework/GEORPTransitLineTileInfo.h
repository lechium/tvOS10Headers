/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:18 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEORPTransitLineTileInfo : PBCodable <NSCopying> {

	unsigned long long _transitLineMuid;
	NSString* _transitLineName;
	NSString* _transitSystemName;
	SCD_Struct_GE15 _has;

}

@property (assign,nonatomic) BOOL hasTransitLineMuid; 
@property (assign,nonatomic) unsigned long long transitLineMuid;              //@synthesize transitLineMuid=_transitLineMuid - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitLineName; 
@property (nonatomic,retain) NSString * transitLineName;                      //@synthesize transitLineName=_transitLineName - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitSystemName; 
@property (nonatomic,retain) NSString * transitSystemName;                    //@synthesize transitSystemName=_transitSystemName - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasTransitSystemName;
-(NSString *)transitSystemName;
-(void)setTransitSystemName:(NSString *)arg1 ;
-(void)setTransitLineMuid:(unsigned long long)arg1 ;
-(void)setHasTransitLineMuid:(BOOL)arg1 ;
-(BOOL)hasTransitLineMuid;
-(BOOL)hasTransitLineName;
-(unsigned long long)transitLineMuid;
-(NSString *)transitLineName;
-(void)setTransitLineName:(NSString *)arg1 ;
@end
