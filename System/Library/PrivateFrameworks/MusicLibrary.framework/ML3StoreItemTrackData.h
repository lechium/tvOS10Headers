/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:00 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSData, NSDateFormatter;

@interface ML3StoreItemTrackData : NSObject {

	NSArray* _lookupItems;
	NSData* _trackData;
	NSArray* _parsedStoreItemsImportProperties;
	NSDateFormatter* _storePlatformDateFormatter;

}

@property (nonatomic,readonly) NSData * trackData; 
@property (nonatomic,readonly) NSArray * parsedStoreItemsImportProperties; 
@property (nonatomic,readonly) unsigned long long trackCount; 
+(id)_allSongItemsFromLookupItems:(id)arg1 ;
+(double)_songDurationFromOffersArray:(id)arg1 ;
+(id)_artworkTokenForItemWithCollectionID:(unsigned long long)arg1 itemID:(unsigned long long)arg2 ;
+(id)_allSongItemsFromCollectionLookupItem:(id)arg1 ;
+(id)_artworkTokenFromLookupItem:(id)arg1 ;
-(id)_storeItemsImportPropertiesFromLookupItems:(id)arg1 ;
-(id)_storeItemsImportPropertiesFromTrackData:(id)arg1 ;
-(id)_importDictionaryForLookupItem:(id)arg1 parentCollectionCache:(id)arg2 ;
-(id)_parentDictForItemAlbumId:(id)arg1 ;
-(id)_storePlatformDateFormatter;
-(id)initWithTrackData:(id)arg1 ;
-(unsigned long long)trackCount;
-(id)initWithLookupItems:(id)arg1 ;
-(NSData *)trackData;
-(NSArray *)parsedStoreItemsImportProperties;
@end
