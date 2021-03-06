/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:14 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TULogging : NSObject
+(BOOL)isWalkaboutEnabled;
+(void)enablePhoneLogging;
+(void)disablePhoneLogging;
+(void)registerForShouldLogChangedNotification;
+(void)unregisterForShouldLogChangedNotification;
+(BOOL)sendDirectoryToCrashReporter:(id)arg1 error:(id*)arg2 ;
@end

