/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:23 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PLSMetadataUtilities : NSObject
+(id)dictionaryFromManagedObject:(id)arg1 excludeAttributes:(id)arg2 includingRelationships:(id)arg3 excludeRelationshipAttributes:(id)arg4 andSubRelationships:(id)arg5 ;
+(id)_normalizeObjectForJSON:(id)arg1 ;
+(void)writeJSONData:(id)arg1 toFile:(id)arg2 ;
+(void)_writeJSONForObjectDetails:(id)arg1 toFile:(id)arg2 ;
+(id)_allAlbumsInPhotoLibrary:(id)arg1 ;
+(id)_detailsForAsset:(id)arg1 includingLocal:(BOOL)arg2 includingFingerprints:(BOOL)arg3 ;
+(BOOL)_writeDetails:(id)arg1 forEntityNamed:(id)arg2 toFilepath:(id)arg3 withDefaultFilename:(id)arg4 ;
+(id)_detailsForAlbum:(id)arg1 ;
+(id)_nameForAdjustmentType:(int)arg1 ;
+(BOOL)initializeJSONFileAtPath:(id)arg1 ;
+(void)serializeJSONFromObjectDetails:(id)arg1 ToPath:(id)arg2 ;
+(id)allAssetsDetailsWriteToPath:(id)arg1 includingLocal:(BOOL)arg2 includingFingerprints:(BOOL)arg3 forAlbumTitled:(id)arg4 ;
+(id)allAlbumsDetailsWriteToPath:(id)arg1 ;
@end
