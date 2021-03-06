/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:29 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSTemporaryObjectID.h>

@class _NS128bitWrapper;

@interface _NSTemporaryObjectID2 : NSTemporaryObjectID {

	id _store;
	_NS128bitWrapper* _uuid128;

}
+(id)initWithEntity:(id)arg1 andUUIDString:(id)arg2 ;
-(void)finalize;
-(id)_referenceData;
-(void)_setPersistentStore:(id)arg1 ;
-(id)_storeIdentifier;
-(BOOL)_isPersistentStoreAlive;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)persistentStore;
@end

