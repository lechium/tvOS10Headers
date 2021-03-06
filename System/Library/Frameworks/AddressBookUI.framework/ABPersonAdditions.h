/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:46 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AddressBookUI/AddressBookUI-Structs.h>
@interface ABPersonAdditions : NSObject
+(CFArrayRef)copyOptionalNameAffixProperties;
+(CFArrayRef)copyOptionalJobProperties;
+(CFArrayRef)copyOptionalProperties;
+(BOOL)isNameProperty:(int)arg1 ;
+(CFArrayRef)copyNamePropertiesWithCurrentNameFormat;
+(CFArrayRef)copyOptionalNameProperties;
+(CFArrayRef)copyNamePropertiesForEditing:(BOOL)arg1 includeRequiredNameProperties:(BOOL)arg2 people:(id)arg3 ;
+(CFArrayRef)copyDefaultDisplayedProperties;
+(CFArrayRef)newCFArrayByUnwrappingIntegersInArray:(id)arg1 ;
+(id)arrayByWrappingIntegersInCFArray:(CFArrayRef)arg1 ;
+(void)initializeAddressBookProperties;
+(CFArrayRef)copyNamePropertiesForEditing:(BOOL)arg1 includeRequiredNameProperties:(BOOL)arg2 person:(id)arg3 ;
+(CFArrayRef)copyAllProperties;
+(void)cloneNamePropertiesFromPerson:(void*)arg1 toPerson:(void*)arg2 ;
+(CFArrayRef)copyProperties:(CFArrayRef)arg1 excludingProperties:(CFArrayRef)arg2 ;
+(CFArrayRef)copyNamePropertiesForEditing:(BOOL)arg1 person:(id)arg2 ;
+(void)person:(void*)arg1 allowsLabels:(BOOL*)arg2 customLabels:(BOOL*)arg3 forProperty:(int)arg4 ;
@end

