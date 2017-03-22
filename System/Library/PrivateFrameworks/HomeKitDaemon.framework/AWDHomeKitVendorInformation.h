/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:29 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDHomeKitVendorInformation : PBCodable <NSCopying> {

	NSString* _firmwareVersion;
	NSString* _manufacturer;
	NSString* _model;
	NSString* _name;

}

@property (nonatomic,readonly) BOOL hasManufacturer; 
@property (nonatomic,retain) NSString * manufacturer;                 //@synthesize manufacturer=_manufacturer - In the implementation block
@property (nonatomic,readonly) BOOL hasModel; 
@property (nonatomic,retain) NSString * model;                        //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) BOOL hasFirmwareVersion; 
@property (nonatomic,retain) NSString * firmwareVersion;              //@synthesize firmwareVersion=_firmwareVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                         //@synthesize name=_name - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)model;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasName;
-(BOOL)hasManufacturer;
-(BOOL)hasModel;
-(NSString *)manufacturer;
-(void)setManufacturer:(NSString *)arg1 ;
-(void)setModel:(NSString *)arg1 ;
-(NSString *)firmwareVersion;
-(void)setFirmwareVersion:(NSString *)arg1 ;
-(BOOL)hasFirmwareVersion;
@end
