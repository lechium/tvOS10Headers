/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:10:01 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WeatherFoundation/WFResponse.h>

@class NSArray;

@interface WFFavoriteLocationResponse : WFResponse {

	NSArray* _favoriteLocations;

}

@property (readonly) NSArray * favoriteLocations;              //@synthesize favoriteLocations=_favoriteLocations - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSArray *)favoriteLocations;
-(id)initWithIdentifier:(id)arg1 favorites:(id)arg2 ;
@end
