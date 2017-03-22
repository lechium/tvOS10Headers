/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:29 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOBaseMapItem.h>

@class GEOLocation, NSDictionary, NSString, NSURL, GEOPlace, GEOAddressObject;

@interface GEOMapItemAssistant : GEOBaseMapItem {

	GEOLocation* _location;
	NSDictionary* _addressDictionary;
	NSString* _name;
	NSURL* _businessURL;
	NSString* _phoneNumber;
	unsigned long long _muid;
	NSString* _attributionID;
	unsigned _sampleSizeForUserRatingScore;
	float _normalizedUserRatingScore;
	GEOPlace* _place;
	GEOAddressObject* _addressObject;

}
-(void)dealloc;
-(id)description;
-(id)name;
-(BOOL)isValid;
-(unsigned long long)_muid;
-(SCD_Struct_GE26)coordinate;
-(id)_place;
-(id)addressObject;
-(id)weatherDisplayName;
-(id)geoAddress;
-(id)addressDictionary;
-(BOOL)_hasResolvablePartialInformation;
-(BOOL)_hasMUID;
-(id)_businessURL;
-(BOOL)_hasUserRatingScore;
-(unsigned)_sampleSizeForUserRatingScore;
-(float)_normalizedUserRatingScore;
-(id)initWithWithLocation:(id)arg1 addressDictionary:(id)arg2 name:(id)arg3 businessURL:(id)arg4 phoneNumber:(id)arg5 sessionID:(id)arg6 muid:(unsigned long long)arg7 attributionID:(id)arg8 sampleSizeForUserRatingScore:(unsigned)arg9 normalizedUserRatingScore:(float)arg10 ;
@end
