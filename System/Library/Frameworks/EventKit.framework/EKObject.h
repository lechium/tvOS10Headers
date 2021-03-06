/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:25 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, EKPersistentObject, NSString, EKObjectRelation, NSMutableSet, EKEventStore;

@interface EKObject : NSObject {

	unsigned _flags;
	NSMutableDictionary* _dirtyProperties;
	NSMutableDictionary* _cachedProperties;
	EKPersistentObject* _persistentObject;
	NSString* _propertyName;
	EKObjectRelation* _owningRelation;
	NSMutableDictionary* _relations;
	NSMutableSet* _weakRelations;

}

@property (nonatomic,retain) NSMutableDictionary * dirtyProperties;               //@synthesize dirtyProperties=_dirtyProperties - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedProperties;              //@synthesize cachedProperties=_cachedProperties - In the implementation block
@property (nonatomic,retain) EKPersistentObject * persistentObject;               //@synthesize persistentObject=_persistentObject - In the implementation block
@property (nonatomic,copy) NSString * propertyName;                               //@synthesize propertyName=_propertyName - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * relations;                     //@synthesize relations=_relations - In the implementation block
@property (nonatomic,retain) NSMutableSet * weakRelations;                        //@synthesize weakRelations=_weakRelations - In the implementation block
@property (assign,nonatomic) unsigned flags;                                      //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) EKObjectRelation * owningRelation;                   //@synthesize owningRelation=_owningRelation - In the implementation block
@property (nonatomic,retain) EKEventStore * eventStore; 
@property (nonatomic,readonly) BOOL hasChanges; 
@property (getter=isNew,nonatomic,readonly) BOOL new; 
-(void)setPropertyName:(NSString *)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)reset;
-(id)owner;
-(BOOL)refresh;
-(NSString *)propertyName;
-(BOOL)isNew;
-(NSMutableDictionary *)relations;
-(id)initWithPersistentObject:(id)arg1 ;
-(EKPersistentObject *)persistentObject;
-(id)persistentOrDirtyPropertyForKey:(id)arg1 ;
-(id)relationForKey:(id)arg1 ;
-(BOOL)propertyValueForKey:(id)arg1 value:(id*)arg2 ;
-(void)setPropertyValue:(id)arg1 forKey:(id)arg2 ;
-(NSMutableDictionary *)dirtyProperties;
-(EKEventStore *)eventStore;
-(id)lazyLoadRelationForKey:(id)arg1 ;
-(BOOL)validate:(id*)arg1 ;
-(void)setPersistentObject:(EKPersistentObject *)arg1 ;
-(BOOL)existsInStore;
-(id)committedValueForKey:(id)arg1 ;
-(void)faultPropertiesWithNames:(id)arg1 ;
-(BOOL)isPropertyDirty:(id)arg1 ;
-(void)updatePersistentObject;
-(id)propertyValueForKey:(id)arg1 ;
-(void)didCommit;
-(void)updatePersistentObjectSkippingProperties:(id)arg1 ;
-(void)updatePersistentValueForKeyIfNeeded:(id)arg1 ;
-(BOOL)rebase;
-(void)setEventStore:(EKEventStore *)arg1 ;
-(void)cachePropertyValue:(id)arg1 forKey:(id)arg2 ;
-(void)clearPropertyValueForKey:(id)arg1 ;
-(BOOL)boolPropertyForKey:(id)arg1 withPersistentFallback:(/*^block*/id)arg2 ;
-(int)intPropertyForKey:(id)arg1 withPersistentFallback:(/*^block*/id)arg2 ;
-(id)propertyForKey:(id)arg1 withPersistentFallback:(/*^block*/id)arg2 ;
-(void)insertPersistentObjectIfNeeded;
-(void)deletePersistentObject;
-(void)childRelationChanged:(id)arg1 ;
-(void)addWeakRelation:(id)arg1 ;
-(void)removeWeakRelation:(id)arg1 ;
-(void)setDirtyProperties:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)cachedProperties;
-(void)setCachedProperties:(NSMutableDictionary *)arg1 ;
-(EKObjectRelation *)owningRelation;
-(void)setOwningRelation:(EKObjectRelation *)arg1 ;
-(void)setRelations:(NSMutableDictionary *)arg1 ;
-(NSMutableSet *)weakRelations;
-(void)setWeakRelations:(NSMutableSet *)arg1 ;
-(BOOL)hasChanges;
-(id)objectID;
-(void)rollback;
-(unsigned)flags;
-(void)setFlags:(unsigned)arg1 ;
@end

