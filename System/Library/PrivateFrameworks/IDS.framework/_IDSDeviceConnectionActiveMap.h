/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:51 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IDS/IDS-Structs.h>
@class NSMutableDictionary;

@interface _IDSDeviceConnectionActiveMap : NSObject {

	NSMutableDictionary* _activeConnectionMap;
	os_unfair_lock_s _writeLock;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)setActiveConnection:(id)arg1 forKey:(id)arg2 ;
-(BOOL)hasActiveConnection:(id)arg1 forKey:(id)arg2 ;
-(void)removeActiveConnection:(id)arg1 forKey:(id)arg2 ;
@end
