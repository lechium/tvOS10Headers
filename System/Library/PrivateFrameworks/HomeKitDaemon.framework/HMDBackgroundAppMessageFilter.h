/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:29 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDMessageFilter.h>

@class NSMutableSet;

@interface HMDBackgroundAppMessageFilter : HMDMessageFilter {

	NSMutableSet* _pidOfAppsRunningInBackground;

}

@property (nonatomic,retain) NSMutableSet * pidOfAppsRunningInBackground;              //@synthesize pidOfAppsRunningInBackground=_pidOfAppsRunningInBackground - In the implementation block
+(BOOL)isWhitelistedMessage:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(void)updateAppWithPid:(int)arg1 runningInBackground:(BOOL)arg2 ;
-(BOOL)acceptMessage:(id)arg1 target:(id)arg2 errorReason:(id*)arg3 ;
-(NSMutableSet *)pidOfAppsRunningInBackground;
-(void)setPidOfAppsRunningInBackground:(NSMutableSet *)arg1 ;
@end

