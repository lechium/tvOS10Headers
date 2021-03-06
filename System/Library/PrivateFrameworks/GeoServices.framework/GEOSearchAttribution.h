/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:27 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface GEOSearchAttribution : PBCodable <NSCopying> {

	NSMutableArray* _attributionURLs;
	NSString* _sourceIdentifier;
	unsigned _sourceVersion;

}

@property (nonatomic,retain) NSString * sourceIdentifier;                   //@synthesize sourceIdentifier=_sourceIdentifier - In the implementation block
@property (assign,nonatomic) unsigned sourceVersion;                        //@synthesize sourceVersion=_sourceVersion - In the implementation block
@property (nonatomic,retain) NSMutableArray * attributionURLs;              //@synthesize attributionURLs=_attributionURLs - In the implementation block
+(Class)attributionURLsType;
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
-(unsigned)sourceVersion;
-(void)setSourceVersion:(unsigned)arg1 ;
-(void)clearAttributionURLs;
-(void)addAttributionURLs:(id)arg1 ;
-(unsigned long long)attributionURLsCount;
-(id)attributionURLsAtIndex:(unsigned long long)arg1 ;
-(NSString *)sourceIdentifier;
-(void)setSourceIdentifier:(NSString *)arg1 ;
-(NSMutableArray *)attributionURLs;
-(void)setAttributionURLs:(NSMutableArray *)arg1 ;
@end

