/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:20 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BSZeroingWeakReference : NSObject {

	id _object;
	Class _objectClass;
	unsigned long long _objectAddress;

}

@property (assign,nonatomic) Class objectClass;                             //@synthesize objectClass=_objectClass - In the implementation block
@property (assign,nonatomic) unsigned long long objectAddress;              //@synthesize objectAddress=_objectAddress - In the implementation block
@property (nonatomic,readonly) id object; 
+(id)referenceWithObject:(id)arg1 ;
-(unsigned long long)objectAddress;
-(void)setObjectClass:(Class)arg1 ;
-(void)setObjectAddress:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)object;
-(id)initWithObject:(id)arg1 ;
-(Class)objectClass;
@end
