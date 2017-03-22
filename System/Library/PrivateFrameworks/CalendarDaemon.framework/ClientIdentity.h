/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:24 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CalendarDaemon/CalendarDaemon-Structs.h>
@class NSString;

@interface ClientIdentity : NSObject {

	int _pid;
	NSString* _bundleIdentifier;
	NSString* _clientName;
	NSString* _codeSigningIdentity;
	SCD_Struct_Cl3 _auditToken;

}

@property (nonatomic,readonly) SCD_Struct_Cl3 auditToken;                        //@synthesize auditToken=_auditToken - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                 //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * clientName;                       //@synthesize clientName=_clientName - In the implementation block
@property (nonatomic,copy,readonly) NSString * codeSigningIdentity;              //@synthesize codeSigningIdentity=_codeSigningIdentity - In the implementation block
@property (nonatomic,readonly) int pid;                                          //@synthesize pid=_pid - In the implementation block
-(id)initWithAuditToken:(SCD_Struct_Cl3)arg1 ;
-(id)description;
-(NSString *)bundleIdentifier;
-(SCD_Struct_Cl3)auditToken;
-(NSString *)codeSigningIdentity;
-(NSString *)clientName;
-(int)pid;
@end
