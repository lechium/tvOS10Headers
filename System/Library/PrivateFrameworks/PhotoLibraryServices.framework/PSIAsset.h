/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:26 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSString, NSArray;

@interface PSIAsset : NSObject <NSCopying> {

	NSMutableDictionary* _synonymsByOriginalWord;
	NSMutableDictionary* _categoriesToPairedOwningCategories;
	NSString* _uuid;
	NSArray* _contentStrings;
	CFArrayRef _categories;
	CFArrayRef _owningCategories;

}

@property (setter=setUUID:,nonatomic,copy) NSString * uuid;                     //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain,readonly) NSArray * contentStrings;                 //@synthesize contentStrings=_contentStrings - In the implementation block
@property (nonatomic,retain,readonly) CFArrayRef categories;                    //@synthesize categories=_categories - In the implementation block
@property (nonatomic,retain,readonly) CFArrayRef owningCategories;              //@synthesize owningCategories=_owningCategories - In the implementation block
-(void)dealloc;
-(id)init;
-(id)description;
-(CFArrayRef)categories;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)clear;
-(NSString *)uuid;
-(NSArray *)contentStrings;
-(void)addContentString:(id)arg1 category:(short)arg2 owningCategory:(short)arg3 ;
-(void)reverse;
-(void)addContentString:(id)arg1 category:(short)arg2 owningCategory:(short)arg3 categoryAndOwningCategoryArePaired:(BOOL)arg4 ;
-(void)addSynonym:(id)arg1 category:(short)arg2 originalContentString:(id)arg3 ;
-(void)setUUID:(id)arg1 ;
-(id)_initForCopy:(BOOL)arg1 ;
-(void)enumerateSynonymsForOriginalContentString:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)pairedCategoryForCategory:(short)arg1 ;
-(CFArrayRef)owningCategories;
@end

