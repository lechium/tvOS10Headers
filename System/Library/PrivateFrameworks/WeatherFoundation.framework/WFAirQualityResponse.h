/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:10:01 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WeatherFoundation/WFResponse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class WFAirQualityConditions, NSData;

@interface WFAirQualityResponse : WFResponse <NSSecureCoding> {

	BOOL _responseWasFromCache;
	WFAirQualityConditions* _airQualityConditions;
	NSData* _rawAPIData;

}

@property (assign,nonatomic) BOOL responseWasFromCache;                        //@synthesize responseWasFromCache=_responseWasFromCache - In the implementation block
@property (nonatomic,retain) NSData * rawAPIData;                              //@synthesize rawAPIData=_rawAPIData - In the implementation block
@property (retain) WFAirQualityConditions * airQualityConditions;              //@synthesize airQualityConditions=_airQualityConditions - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAirQualityConditions:(WFAirQualityConditions *)arg1 ;
-(WFAirQualityConditions *)airQualityConditions;
-(NSData *)rawAPIData;
-(void)setRawAPIData:(NSData *)arg1 ;
-(void)setResponseWasFromCache:(BOOL)arg1 ;
-(BOOL)responseWasFromCache;
@end

