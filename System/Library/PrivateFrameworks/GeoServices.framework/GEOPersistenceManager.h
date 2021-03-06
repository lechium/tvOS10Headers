/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:34 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GEOPersistenceManager : NSObject
+(BOOL)createMuidMappingDirectoryForPath:(id)arg1 WithError:(id*)arg2 ;
+(BOOL)readPhoneNumberMuidMapping:(id*)arg1 uniquePhoneNumbers:(id*)arg2 atPath:(id)arg3 error:(id*)arg4 ;
+(BOOL)readPhoneNumberMuidMapping:(id*)arg1 uniquePhoneNumbers:(id*)arg2 version:(id*)arg3 atPath:(id)arg4 error:(id*)arg5 ;
+(BOOL)writePhoneNumberMuidMappingForMapping:(id)arg1 uniquePhoneNumbers:(id)arg2 toPath:(id)arg3 error:(id*)arg4 ;
+(BOOL)phoneNumberMuidMappingFileExistsAtPath:(id)arg1 ;
@end

