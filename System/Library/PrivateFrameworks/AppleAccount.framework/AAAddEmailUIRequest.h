/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:56 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AARequest.h>

@class ACAccount;

@interface AAAddEmailUIRequest : AARequest {

	ACAccount* _account;

}

@property (nonatomic,retain) ACAccount * account;              //@synthesize account=_account - In the implementation block
-(id)initWithURLString:(id)arg1 account:(id)arg2 ;
-(id)urlRequest;
-(id)initWithAccount:(id)arg1 ;
-(id)urlString;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
@end

