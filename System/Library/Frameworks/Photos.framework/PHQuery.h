/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:33 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/NSPredicateVisitor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSPredicate, NSFetchRequest, NSRelationshipDescription, NSManagedObjectID, PHCollection, NSString, NSMutableSet, NSMutableDictionary, PHFetchOptions, NSArray, PHPhotoLibrary, NSSet, NSDictionary;

@interface PHQuery : NSObject <NSPredicateVisitor, NSCopying> {

	NSPredicate* _cachedFetchOptionsPredicate;
	NSPredicate* _basePredicate;
	NSPredicate* _filterPredicate;
	NSFetchRequest* _fetchRequest;
	long long _collectionFetchType;
	BOOL _preparedContainerInfo;
	NSRelationshipDescription* _containerRelationship;
	NSManagedObjectID* _containerIdentifier;
	PHCollection* _containerCollection;
	BOOL _preparedCombinedQueryKeys;
	id _combinedQueryGroupKey;
	NSString* _combinedQueryKeyPath;
	NSManagedObjectID* _combinedQuerySeparatingIdentifier;
	BOOL _preparedFilteringAttributes;
	NSMutableSet* _filteringKeys;
	unsigned long long _filteringAttributesIndexValue;
	unsigned long long _filteringRelationshipsIndexValue;
	unsigned long long _objectToContainerRelationshipIndexValue;
	unsigned long long _containerToObjectRelationshipIndexValue;
	unsigned long long _containerSortingAttributesIndexValue;
	NSMutableSet* _filteringOids;
	NSMutableSet* _filteringObjectKeyPaths;
	NSMutableDictionary* _filteringRelationshipsIndexValueByBaseEntityName;
	BOOL __includesTrashedObjects;
	BOOL __includesCameraRoll;
	PHFetchOptions* _fetchOptions;
	NSString* _fetchType;
	NSArray* _seedOIDs;
	PHPhotoLibrary* _photoLibrary;

}

@property (assign,setter=_setIncludesTrashedObjects:,nonatomic) BOOL _includesTrashedObjects;                //@synthesize _includesTrashedObjects=__includesTrashedObjects - In the implementation block
@property (assign,setter=_setIncludesCameraRoll:,nonatomic) BOOL _includesCameraRoll;                        //@synthesize _includesCameraRoll=__includesCameraRoll - In the implementation block
@property (readonly) NSString * fetchType;                                                                   //@synthesize fetchType=_fetchType - In the implementation block
@property (readonly) NSFetchRequest * fetchRequest; 
@property (readonly) NSPredicate * basePredicate;                                                            //@synthesize basePredicate=_basePredicate - In the implementation block
@property (readonly) NSPredicate * filterPredicate; 
@property (readonly) NSArray * seedOIDs;                                                                     //@synthesize seedOIDs=_seedOIDs - In the implementation block
@property (readonly) PHPhotoLibrary * photoLibrary;                                                          //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (readonly) id combinedQueryGroupKey; 
@property (readonly) NSString * combinedQueryKeyPath; 
@property (readonly) NSManagedObjectID * combinedQuerySeparatingIdentifier; 
@property (nonatomic,readonly) NSSet * filteringOids; 
@property (nonatomic,readonly) NSDictionary * filteringRelationshipsIndexValueByBaseEntityName; 
@property (nonatomic,copy) PHFetchOptions * fetchOptions;                                                    //@synthesize fetchOptions=_fetchOptions - In the implementation block
+(id)queryForAssetsWithOptions:(id)arg1 ;
+(id)queryForFaceGroupsWithOptions:(id)arg1 ;
+(id)queryForFaceGroupsWithLocalIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)queryForFaceGroupsWithType:(long long)arg1 options:(id)arg2 ;
+(id)queryForFaceGroupsForPerson:(id)arg1 withType:(long long)arg2 options:(id)arg3 ;
+(id)queryForFaceGroupsWithFace:(id)arg1 type:(long long)arg2 options:(id)arg3 ;
+(id)queryForAssetCollectionsContainingAsset:(id)arg1 withType:(long long)arg2 ;
+(id)queryForAssetCollectionsContainingAssets:(id)arg1 withType:(long long)arg2 ;
+(id)queryForAssetCollectionsWithType:(long long)arg1 localIdentifiers:(id)arg2 ;
+(id)queryForAssetCollectionsWithLocalIdentifiers:(id)arg1 ;
+(id)queryForAssetCollectionsWithCloudIdentifiers:(id)arg1 ;
+(id)queryForAssetCollectionsWithType:(long long)arg1 subtype:(long long)arg2 options:(id)arg3 ;
+(id)queryForAssetCollectionsWithObjectIDs:(id)arg1 ;
+(id)queryForMomentsInMomentList:(id)arg1 options:(id)arg2 ;
+(id)queryForMomentsWithOptions:(id)arg1 ;
+(id)queryForMomentsBackingMemory:(id)arg1 ;
+(id)queryForCollectionListContainingCollection:(id)arg1 ;
+(id)queryForCollectionListsWithType:(long long)arg1 localIdentifiers:(id)arg2 ;
+(id)queryForCollectionListsWithCloudIdentifiers:(id)arg1 ;
+(id)queryForCollectionListsWithType:(long long)arg1 subtype:(long long)arg2 options:(id)arg3 ;
+(id)queryForRootAlbumCollectionList;
+(id)queryForMomentListsWithSubType:(long long)arg1 containingMoment:(id)arg2 ;
+(id)queryForMomentListsWithSubType:(long long)arg1 options:(id)arg2 ;
+(id)queryForFacesInFaceGroup:(id)arg1 options:(id)arg2 ;
+(id)queryForCollectionsInCollectionList:(id)arg1 options:(id)arg2 ;
+(id)queryForMovieCuratedAssetsInMemory:(id)arg1 options:(id)arg2 ;
+(id)queryForKeyAssetInMemory:(id)arg1 options:(id)arg2 ;
+(id)queryForCuratedAssetsInMemory:(id)arg1 options:(id)arg2 ;
+(id)queryForRepresentativeAssetsInMemory:(id)arg1 options:(id)arg2 ;
+(id)queryForFacesInAsset:(id)arg1 options:(id)arg2 ;
+(id)queryForType:(id)arg1 withBasePredicate:(id)arg2 inLibrary:(id)arg3 ;
+(id)queryForType:(id)arg1 withIdentifiers:(id)arg2 local:(BOOL)arg3 ;
+(id)queryForAssetsInBoundingBoxWithTopLeftLocation:(id)arg1 bottomRightLocation:(id)arg2 options:(id)arg3 ;
+(id)queryForAssetsInAssetCollection:(id)arg1 options:(id)arg2 ;
+(id)queryForAssetsWithMediaType:(long long)arg1 options:(id)arg2 ;
+(id)queryForAssetsWithLocalIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)queryForAssetsWithCloudIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)queryForAssetsWithBurstIdentifier:(id)arg1 options:(id)arg2 ;
+(id)queryForCustomKeyAssetsInAssetCollection:(id)arg1 options:(id)arg2 ;
+(id)queryForKeyAssetsInAssetCollection:(id)arg1 options:(id)arg2 ;
+(id)queryForAssetsForPersons:(id)arg1 options:(id)arg2 ;
+(id)queryForAssetsForFaces:(id)arg1 options:(id)arg2 ;
+(id)queryForAssetsForFaceGroups:(id)arg1 options:(id)arg2 ;
+(id)queryForFacesForPerson:(id)arg1 options:(id)arg2 ;
+(id)queryForPersonsWithOptions:(id)arg1 ;
+(id)queryForPersonsWithType:(long long)arg1 options:(id)arg2 ;
+(id)queryForPersonsWithLocalIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)queryForPersonsInAsset:(id)arg1 options:(id)arg2 ;
+(id)queryForPersonsInAssets:(id)arg1 withOptions:(id)arg2 ;
+(id)queryForPersonsWithFace:(id)arg1 options:(id)arg2 ;
+(id)queryForAssociatedPersonForFaceGroup:(id)arg1 withOptions:(id)arg2 ;
+(id)queryForFacesWithOptions:(id)arg1 ;
+(id)queryForFacesWithLocalIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)queryForKeyFaceOnPerson:(id)arg1 options:(id)arg2 ;
+(id)queryForFacesOnAssetWithFace:(id)arg1 options:(id)arg2 ;
+(id)queryForKeyFaceForFaceGroup:(id)arg1 options:(id)arg2 ;
+(id)queryForSingletonFacesWithOptions:(id)arg1 ;
+(id)queryForRejectedFacesOnPerson:(id)arg1 options:(id)arg2 ;
+(id)_relationshipForFetchType:(id)arg1 predicate:(id)arg2 ;
+(id)_transformedSortDescriptors:(id)arg1 forFetchType:(id)arg2 ;
+(id)defaultSortDescriptorForFetchType:(id)arg1 predicate:(id)arg2 ;
+(id)_containerIdentifierForFetchType:(id)arg1 predicate:(id)arg2 outRelationship:(id*)arg3 ;
+(id)_filterPredicateFromFetchOptionsPredicate:(id)arg1 options:(id)arg2 phClass:(Class)arg3 ;
+(id)_fetchOptionsForFetchingAssetsFromAssetCollection:(id)arg1 options:(id)arg2 ;
+(id)queryForType:(id)arg1 withBasePredicate:(id)arg2 seedOIDs:(id)arg3 inLibrary:(id)arg4 ;
+(id)_fetchTypeForLocalIdentifiers:(id)arg1 ;
+(id)_rootFolderID;
+(id)_queryForPersonsInAssetsWithObjectIDs:(id)arg1 withOptions:(id)arg2 ;
+(id)combinedFetchRequestForQueries:(id)arg1 ;
+(id)queryForAssetsWithObjectIDs:(id)arg1 options:(id)arg2 ;
+(BOOL)_validateLocalIdentifiers:(id)arg1 compatibilityWithFetchType:(id)arg2 ;
+(id)queryForMomentsContainingAssetsWithLocalIdentifiers:(id)arg1 ;
+(id)queryForTopLevelUserCollections;
+(id)queryForCloudSharedAlbums;
-(void)visitPredicate:(id)arg1 ;
-(void)visitPredicateExpression:(id)arg1 ;
-(void)visitPredicateOperator:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(PHPhotoLibrary *)photoLibrary;
-(NSFetchRequest *)fetchRequest;
-(id)containerIdentifier;
-(NSPredicate *)filterPredicate;
-(id)executeQuery;
-(long long)collectionFetchType;
-(id)combinedQueryGroupKey;
-(id)initForType:(id)arg1 withBasePredicate:(id)arg2 inLibrary:(id)arg3 ;
-(id)initForType:(id)arg1 withBasePredicate:(id)arg2 seedOIDs:(id)arg3 inLibrary:(id)arg4 ;
-(BOOL)_includesTrashedObjects;
-(void)_setIncludesTrashedObjects:(BOOL)arg1 ;
-(BOOL)_includesCameraRoll;
-(void)_setIncludesCameraRoll:(BOOL)arg1 ;
-(void)_setContainerCollection:(id)arg1 ;
-(void)_setCollectionFetchType:(long long)arg1 ;
-(id)effectivePredicateForPHClass:(Class)arg1 request:(id)arg2 includingBasePredicate:(BOOL)arg3 ;
-(id)_effectiveSortDescriptors;
-(BOOL)_isAlbumContentSort;
-(BOOL)_isAlbumContentTitleSort;
-(NSPredicate *)basePredicate;
-(id)_createFetchRequestIncludingBasePredicate:(BOOL)arg1 ;
-(void)_prepareContainerInfo;
-(NSString *)combinedQueryKeyPath;
-(NSManagedObjectID *)combinedQuerySeparatingIdentifier;
-(void)_prepareCombinedQueryKeys;
-(void)_prepareFilteringAttributes;
-(id)_containerRelationship;
-(id)updatedQueryWithChange:(id)arg1 ;
-(unsigned long long)containerSortingAttributesIndexValue;
-(unsigned long long)filteringAttributesIndexValue;
-(unsigned long long)filteringRelationshipsIndexValue;
-(unsigned long long)objectToContainerRelationshipIndexValue;
-(unsigned long long)containerToObjectRelationshipIndexValue;
-(NSSet *)filteringOids;
-(NSDictionary *)filteringRelationshipsIndexValueByBaseEntityName;
-(NSArray *)seedOIDs;
-(PHFetchOptions *)fetchOptions;
-(NSString *)fetchType;
-(void)setFetchOptions:(PHFetchOptions *)arg1 ;
@end
