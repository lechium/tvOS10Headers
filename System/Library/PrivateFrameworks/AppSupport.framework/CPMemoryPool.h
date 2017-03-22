/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:17 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppSupport/AppSupport-Structs.h>
@class NSMutableArray;

@interface CPMemoryPool : NSObject {

	opaque_pthread_mutex_t _lock;
	NSMutableArray* _files;
	char* _label;
	unsigned long long _slotLength;

}

@property (nonatomic,readonly) unsigned long long slotLength;              //@synthesize slotLength=_slotLength - In the implementation block
-(void)dealloc;
-(unsigned long long)slotLength;
-(id)nextSlotWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(id)initWithLabel:(const char*)arg1 slotLength:(unsigned long long)arg2 ;
@end
