/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:20 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSMutableArray;

@interface GEOTFRoadSpeed : PBCodable <NSCopying> {

	SCD_Struct_GE72* _geoIds;
	SCD_Struct_GE114* _latitudeCoordinates;
	SCD_Struct_GE114* _longitudeCoordinates;
	long long _geoid;
	int _color;
	float _confidence;
	unsigned _decayTimeWindowInMinutes;
	float _endOffset;
	NSData* _openlr;
	NSMutableArray* _predictedSpeeds;
	unsigned _speedKph;
	float _startOffset;
	NSData* _zilch;
	BOOL _hidden;
	SCD_Struct_GE73 _has;

}

@property (assign,nonatomic) long long geoid;                                             //@synthesize geoid=_geoid - In the implementation block
@property (assign,nonatomic) BOOL hasStartOffset; 
@property (assign,nonatomic) float startOffset;                                           //@synthesize startOffset=_startOffset - In the implementation block
@property (assign,nonatomic) BOOL hasEndOffset; 
@property (assign,nonatomic) float endOffset;                                             //@synthesize endOffset=_endOffset - In the implementation block
@property (assign,nonatomic) BOOL hasHidden; 
@property (assign,nonatomic) BOOL hidden;                                                 //@synthesize hidden=_hidden - In the implementation block
@property (nonatomic,retain) NSMutableArray * predictedSpeeds;                            //@synthesize predictedSpeeds=_predictedSpeeds - In the implementation block
@property (assign,nonatomic) BOOL hasColor; 
@property (assign,nonatomic) int color;                                                   //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) BOOL hasSpeedKph; 
@property (assign,nonatomic) unsigned speedKph;                                           //@synthesize speedKph=_speedKph - In the implementation block
@property (nonatomic,readonly) BOOL hasZilch; 
@property (nonatomic,retain) NSData * zilch;                                              //@synthesize zilch=_zilch - In the implementation block
@property (assign,nonatomic) BOOL hasDecayTimeWindowInMinutes; 
@property (assign,nonatomic) unsigned decayTimeWindowInMinutes;                           //@synthesize decayTimeWindowInMinutes=_decayTimeWindowInMinutes - In the implementation block
@property (assign,nonatomic) BOOL hasConfidence; 
@property (assign,nonatomic) float confidence;                                            //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,readonly) unsigned long long latitudeCoordinatesCount; 
@property (nonatomic,readonly) float* latitudeCoordinates; 
@property (nonatomic,readonly) unsigned long long longitudeCoordinatesCount; 
@property (nonatomic,readonly) float* longitudeCoordinates; 
@property (nonatomic,readonly) unsigned long long geoIdsCount; 
@property (nonatomic,readonly) long long* geoIds; 
@property (nonatomic,readonly) BOOL hasOpenlr; 
@property (nonatomic,retain) NSData * openlr;                                             //@synthesize openlr=_openlr - In the implementation block
+(Class)predictedSpeedType;
-(void)dealloc;
-(void)setHidden:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)color;
-(void)setColor:(int)arg1 ;
-(float)endOffset;
-(float)startOffset;
-(id)dictionaryRepresentation;
-(void)setStartOffset:(float)arg1 ;
-(float)confidence;
-(void)setConfidence:(float)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)geoIdsCount;
-(long long*)geoIds;
-(void)clearGeoIds;
-(void)addGeoIds:(long long)arg1 ;
-(long long)geoIdsAtIndex:(unsigned long long)arg1 ;
-(void)setGeoIds:(long long*)arg1 count:(unsigned long long)arg2 ;
-(void)setHasStartOffset:(BOOL)arg1 ;
-(BOOL)hasStartOffset;
-(void)setEndOffset:(float)arg1 ;
-(void)setHasEndOffset:(BOOL)arg1 ;
-(BOOL)hasEndOffset;
-(BOOL)hidden;
-(void)setHasHidden:(BOOL)arg1 ;
-(BOOL)hasHidden;
-(void)clearPredictedSpeeds;
-(void)addPredictedSpeed:(id)arg1 ;
-(unsigned long long)predictedSpeedsCount;
-(id)predictedSpeedAtIndex:(unsigned long long)arg1 ;
-(void)setHasColor:(BOOL)arg1 ;
-(BOOL)hasColor;
-(id)colorAsString:(int)arg1 ;
-(int)StringAsColor:(id)arg1 ;
-(void)setSpeedKph:(unsigned)arg1 ;
-(void)setHasSpeedKph:(BOOL)arg1 ;
-(BOOL)hasSpeedKph;
-(void)setDecayTimeWindowInMinutes:(unsigned)arg1 ;
-(void)setHasDecayTimeWindowInMinutes:(BOOL)arg1 ;
-(BOOL)hasDecayTimeWindowInMinutes;
-(void)setHasConfidence:(BOOL)arg1 ;
-(BOOL)hasConfidence;
-(BOOL)hasOpenlr;
-(NSMutableArray *)predictedSpeeds;
-(void)setPredictedSpeeds:(NSMutableArray *)arg1 ;
-(unsigned)speedKph;
-(unsigned)decayTimeWindowInMinutes;
-(NSData *)openlr;
-(void)setOpenlr:(NSData *)arg1 ;
-(BOOL)hasZilch;
-(unsigned long long)latitudeCoordinatesCount;
-(float*)latitudeCoordinates;
-(void)clearLatitudeCoordinates;
-(void)addLatitudeCoordinates:(float)arg1 ;
-(float)latitudeCoordinatesAtIndex:(unsigned long long)arg1 ;
-(void)setLatitudeCoordinates:(float*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)longitudeCoordinatesCount;
-(float*)longitudeCoordinates;
-(void)clearLongitudeCoordinates;
-(void)addLongitudeCoordinates:(float)arg1 ;
-(float)longitudeCoordinatesAtIndex:(unsigned long long)arg1 ;
-(void)setLongitudeCoordinates:(float*)arg1 count:(unsigned long long)arg2 ;
-(long long)geoid;
-(void)setGeoid:(long long)arg1 ;
-(NSData *)zilch;
-(void)setZilch:(NSData *)arg1 ;
@end
