/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:57 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AAURLSession;

@interface AARemoteServer : NSObject {

	AAURLSession* _session;

}
+(id)sharedSession;
+(id)newSigningSessionWithError:(id*)arg1 ;
-(id)init;
-(id)_redactedHeadersFromHTTPHeaders:(id)arg1 ;
-(void)fetchServerConfigForSettingsWithCachePolicy:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)registerAccount:(id)arg1 withHSA:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)registerAccount:(id)arg1 withHSA:(BOOL)arg2 usingCookieHeaders:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_fetchServerConfigWithContext:(long long)arg1 cachePolicy:(long long)arg2 responseClass:(Class)arg3 completion:(/*^block*/id)arg4 ;
-(id)_newURLRequestWithURLString:(id)arg1 ;
-(void)_startRequest:(id)arg1 responseClass:(Class)arg2 mainThread:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(id)_bodyDictionaryWithProtocolVersion:(id)arg1 ;
-(id)_redactedBodyStringWithPropertyList:(id)arg1 ;
-(void)fetchServerConfigForBuddyWithCachePolicy:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)authenticateAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)loginDelegates:(id)arg1 parameters:(id)arg2 completion:(/*^block*/id)arg3 ;
@end
