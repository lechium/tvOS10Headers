/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:30 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSFetchRequest.h>

@class NSDictionary;

@interface NSCachingFetchRequest : NSFetchRequest {

	NSDictionary* _substitutionVariables;
	CFDictionaryRef _cachedInfo;
	BOOL _hasCachedInfo;
	id _identifier;
	int _lock;

}

@property (nonatomic,readonly) id _identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSDictionary * substitutionVariables; 
+(id)_generateIdentifier;
-(NSDictionary *)substitutionVariables;
-(void)setSubstitutionVariables:(NSDictionary *)arg1 ;
-(BOOL)_isCachingFetchRequest__;
-(id)_copyForDirtyContext;
-(id)_cachedInfoForRequestor:(id)arg1 ;
-(void)_cacheInfo:(id)arg1 forRequestor:(id)arg2 ;
-(void)_sanityCheckVariables:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_identifier;
@end

