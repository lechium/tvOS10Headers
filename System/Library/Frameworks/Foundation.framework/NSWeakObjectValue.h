/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:10 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSValue.h>

@interface NSWeakObjectValue : NSValue {

	void* _value;
	id _object;
	BOOL _useFallback;

}
-(id)weakObjectValue;
-(void)dealloc;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)getValue:(void*)arg1 ;
-(const char*)objCType;
-(BOOL)isEqualToValue:(id)arg1 ;
-(id)nonretainedObjectValue;
-(id)initWithObject:(id)arg1 ;
@end
