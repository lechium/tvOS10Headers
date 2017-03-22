/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:49 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, NSLock;

@interface ISClient : NSObject {

	NSString* _appleClientVersions;
	NSString* _appleClientApplication;
	NSString* _identifier;
	NSString* _partnerHeader;
	NSString* _userAgent;
	NSDictionary* _clientProvidedHeaders;
	NSLock* _lock;

}

@property (nonatomic,retain) NSLock * lock;                         //@synthesize lock=_lock - In the implementation block
@property (copy) NSString * appleClientApplication;                 //@synthesize appleClientApplication=_appleClientApplication - In the implementation block
@property (copy) NSString * userAgent;                              //@synthesize userAgent=_userAgent - In the implementation block
@property (readonly) NSString * appleClientVersions;                //@synthesize appleClientVersions=_appleClientVersions - In the implementation block
@property (copy) NSString * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (copy) NSString * partnerHeader;                          //@synthesize partnerHeader=_partnerHeader - In the implementation block
@property (copy) NSDictionary * clientProvidedHeaders;              //@synthesize clientProvidedHeaders=_clientProvidedHeaders - In the implementation block
+(id)currentClient;
-(void)dealloc;
-(id)init;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSLock *)lock;
-(NSString *)userAgent;
-(void)setUserAgent:(NSString *)arg1 ;
-(NSString *)partnerHeader;
-(NSString *)appleClientApplication;
-(NSString *)appleClientVersions;
-(NSDictionary *)clientProvidedHeaders;
-(void)setPartnerHeader:(NSString *)arg1 ;
-(void)_softwareMapInvalidatedNotification:(id)arg1 ;
-(id)_appleClientVersions;
-(void)setAppleClientApplication:(NSString *)arg1 ;
-(void)setClientProvidedHeaders:(NSDictionary *)arg1 ;
-(id)localStoreFrontID;
-(void)setLock:(NSLock *)arg1 ;
@end
