/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:05 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MCPeerIDInternal : NSObject {

	NSString* _idString;
	unsigned long long _pid64;
	NSString* _displayName;

}

@property (nonatomic,readonly) NSString * idString;                   //@synthesize idString=_idString - In the implementation block
@property (nonatomic,readonly) unsigned long long pid64;              //@synthesize pid64=_pid64 - In the implementation block
@property (nonatomic,readonly) NSString * displayName;                //@synthesize displayName=_displayName - In the implementation block
-(void)dealloc;
-(NSString *)displayName;
-(NSString *)idString;
-(id)initWithIDString:(id)arg1 pid64:(unsigned long long)arg2 displayName:(id)arg3 ;
-(unsigned long long)pid64;
@end
