/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:54 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TVSAppleConnectSettings : NSObject {

	BOOL _enabled;
	NSString* _accountID;
	NSString* _password;

}

@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,copy) NSString * accountID;                         //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,copy) NSString * password;                          //@synthesize password=_password - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)setIsEnabled:(BOOL)arg1 ;
-(void)_cacheCredentials;
-(void)_saveCredentials;
-(NSString *)accountID;
-(void)setAccountID:(NSString *)arg1 ;
-(BOOL)validateWithError:(id*)arg1 ;
-(id)tokenWithError:(id*)arg1 ;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
@end
