/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:07 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSPointerFunctions, NSArray, NSSet;

@interface NSHashTable : NSObject <NSCopying, NSCoding, NSFastEnumeration>

@property (copy,readonly) NSPointerFunctions * pointerFunctions; 
@property (readonly) unsigned long long count; 
@property (copy,readonly) NSArray * allObjects; 
@property (nonatomic,readonly) id anyObject; 
@property (copy,readonly) NSSet * setRepresentation; 
+(id)hashTableWithWeakObjects;
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)weakObjectsHashTable;
+(id)hashTableWithOptions:(unsigned long long)arg1 ;
-(NSPointerFunctions *)pointerFunctions;
-(void*)getItem:(const void*)arg1 ;
-(unsigned long long)weakCount;
-(void)insertKnownAbsentItem:(const void*)arg1 ;
-(void)getKeys:(const void*)arg1 count:(unsigned long long*)arg2 ;
-(id)initWithPointerFunctions:(id)arg1 capacity:(unsigned long long)arg2 ;
-(BOOL)intersectsHashTable:(id)arg1 ;
-(BOOL)isEqualToHashTable:(id)arg1 ;
-(BOOL)isSubsetOfHashTable:(id)arg1 ;
-(void)intersectHashTable:(id)arg1 ;
-(void)unionHashTable:(id)arg1 ;
-(void)minusHashTable:(id)arg1 ;
-(id)mutableSet;
-(id)initWithCoder:(id)arg1 ;
-(void)removeObject:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS5*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(id)init;
-(void)addObject:(id)arg1 ;
-(void)removeAllObjects;
-(id)description;
-(id)copy;
-(BOOL)containsObject:(id)arg1 ;
-(id)anyObject;
-(NSArray *)allObjects;
-(id)objectEnumerator;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)removeItem:(const void*)arg1 ;
-(NSSet *)setRepresentation;
-(id)initWithOptions:(unsigned long long)arg1 capacity:(unsigned long long)arg2 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)member:(id)arg1 ;
-(void)removeAllItems;
@end
