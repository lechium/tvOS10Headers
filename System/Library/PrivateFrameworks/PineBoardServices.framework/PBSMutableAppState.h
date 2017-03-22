/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:31 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PineBoardServices/PBSAppState.h>

@class PBSBadgeValue;

@interface PBSMutableAppState : PBSAppState

@property (nonatomic,copy) PBSBadgeValue * badgeValue; 
@property (assign,getter=isBadgeEnabled,nonatomic) BOOL badgeEnabled; 
@property (assign,getter=isRecentlyUpdated,nonatomic) BOOL recentlyUpdated; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
-(id)init;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setBadgeValue:(PBSBadgeValue *)arg1 ;
-(id)initWithApplicationIdentifer:(id)arg1 ;
-(void)_notifyMutableAppStateDidChange;
-(void)setBadgeEnabled:(BOOL)arg1 ;
-(void)setRecentlyUpdated:(BOOL)arg1 ;
-(void)incrementCacheDeleting;
-(void)decrementCacheDeleting;
-(void)setCacheDeletingCount:(long long)arg1 ;
-(void)enqueueUserNotification:(id)arg1 ;
-(void)clearUserNotifications;
@end
