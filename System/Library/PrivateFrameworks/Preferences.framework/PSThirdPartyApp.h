/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:54 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, LSApplicationProxy;

@interface PSThirdPartyApp : NSObject {

	NSString* _localizedName;
	LSApplicationProxy* _proxy;

}

@property (nonatomic,readonly) LSApplicationProxy * proxy;              //@synthesize proxy=_proxy - In the implementation block
-(id)description;
-(id)localizedName;
-(void)load;
-(LSApplicationProxy *)proxy;
-(id)initWithApplicationProxy:(id)arg1 ;
@end
