/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:29 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue;
@class PSIDatabase, NSObject, NSString, NSMutableArray, NSArray;

@interface PSIGroupResult : NSObject <NSCopying> {

	PSIDatabase* _idx;
	PSIDatabase* _heldIdx;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _owningContentString;
	NSMutableArray* _assetUUIDs;
	BOOL _didFetchOwningContentString;
	float _score;
	NSArray* _searchTokens;
	NSArray* _contentStrings;
	NSArray* _matchRanges;
	CFArrayRef _categories;
	PSIGroupResult* _additionalGroupResult;
	CFArrayRef _owningGroupIds;
	CFArrayRef _assetIds;

}

@property (nonatomic,retain) NSArray * contentStrings;                            //@synthesize contentStrings=_contentStrings - In the implementation block
@property (nonatomic,retain) NSArray * matchRanges;                               //@synthesize matchRanges=_matchRanges - In the implementation block
@property (nonatomic,retain) CFArrayRef categories;                               //@synthesize categories=_categories - In the implementation block
@property (nonatomic,retain) CFArrayRef owningGroupIds;                           //@synthesize owningGroupIds=_owningGroupIds - In the implementation block
@property (nonatomic,retain) CFArrayRef assetIds;                                 //@synthesize assetIds=_assetIds - In the implementation block
@property (assign,nonatomic) float score;                                         //@synthesize score=_score - In the implementation block
@property (assign,nonatomic,__weak) PSIDatabase * idx;                            //@synthesize idx=_idx - In the implementation block
@property (nonatomic,retain) NSArray * searchTokens;                              //@synthesize searchTokens=_searchTokens - In the implementation block
@property (nonatomic,retain) PSIGroupResult * additionalGroupResult;              //@synthesize additionalGroupResult=_additionalGroupResult - In the implementation block
@property (nonatomic,readonly) unsigned long long matchCount; 
@property (readonly) NSString * owningContentString; 
@property (readonly) NSArray * assetUUIDs; 
-(void)dealloc;
-(id)init;
-(id)description;
-(CFArrayRef)categories;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setScore:(float)arg1 ;
-(float)score;
-(NSArray *)contentStrings;
-(void)setCategories:(CFArrayRef)arg1 ;
-(void)setContentStrings:(NSArray *)arg1 ;
-(id)unitTestDescription;
-(CFArrayRef)assetIds;
-(void)setAssetIds:(CFArrayRef)arg1 ;
-(NSArray *)searchTokens;
-(void)setSearchTokens:(NSArray *)arg1 ;
-(NSArray *)assetUUIDs;
-(CFArrayRef)owningGroupIds;
-(void)setIdx:(PSIDatabase *)arg1 ;
-(void)setOwningGroupIds:(CFArrayRef)arg1 ;
-(void)setMatchRanges:(NSArray *)arg1 ;
-(void)setAdditionalGroupResult:(PSIGroupResult *)arg1 ;
-(unsigned long long)matchCount;
-(id)_prepareForFetchWithCount:(unsigned long long)arg1 outRange:(NSRange*)arg2 outFetchOwningContentString:(BOOL*)arg3 ;
-(NSString *)owningContentString;
-(void)fetchNextAssetUUIDs:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSArray *)matchRanges;
-(PSIGroupResult *)additionalGroupResult;
-(PSIDatabase *)idx;
@end
