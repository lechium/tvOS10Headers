/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:53 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface TVSiTunesKeyValueStoreSyncResponse : NSObject {

	BOOL _success;
	NSString* _domainVersion;
	NSArray* _peerPutItems;
	NSArray* _putOKKeys;
	NSArray* _rejectedKeys;

}

@property (nonatomic,readonly) BOOL success;                          //@synthesize success=_success - In the implementation block
@property (nonatomic,readonly) NSString * domainVersion;              //@synthesize domainVersion=_domainVersion - In the implementation block
@property (nonatomic,readonly) NSArray * peerPutItems;                //@synthesize peerPutItems=_peerPutItems - In the implementation block
@property (nonatomic,readonly) NSArray * putOKKeys;                   //@synthesize putOKKeys=_putOKKeys - In the implementation block
@property (nonatomic,readonly) NSArray * rejectedKeys;                //@synthesize rejectedKeys=_rejectedKeys - In the implementation block
-(id)_initWithSuccess:(BOOL)arg1 domainVersion:(id)arg2 peerPutItems:(id)arg3 putOKKeys:(id)arg4 rejectedKeys:(id)arg5 ;
-(NSString *)domainVersion;
-(NSArray *)peerPutItems;
-(NSArray *)putOKKeys;
-(NSArray *)rejectedKeys;
-(BOOL)success;
@end

