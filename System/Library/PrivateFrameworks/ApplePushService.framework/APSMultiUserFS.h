/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:52 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface APSMultiUserFS : NSObject {

	NSString* _systemPathCache;
	BOOL _isMultiUser;

}

@property (readonly) BOOL isMultiUser;              //@synthesize isMultiUser=_isMultiUser - In the implementation block
+(id)sharedInstance;
-(BOOL)isMultiUser;
-(id)systemPath;
-(id)initWithIsMultiUserMode:(BOOL)arg1 ;
@end
