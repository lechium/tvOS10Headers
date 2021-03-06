//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BKSAnimationFenceHandle, NSArray;

@protocol PBSystemServiceClientInterface <NSObject>
- (void)prepareForKioskAppTransitionWithCompletion:(void (^)(void))arg1;
- (void)sharedAppStateDidChange;
- (void)startIdleScreenAppTransitionForType:(long long)arg1 animationDuration:(double)arg2 animationFence:(BKSAnimationFenceHandle *)arg3 delay:(double)arg4;
- (void)startKioskAppTransitionForType:(long long)arg1 animationDuration:(double)arg2 animationFence:(BKSAnimationFenceHandle *)arg3 delay:(double)arg4;
- (void)kioskAppPurgeTopShelfContentForApplicationIdentifiers:(NSArray *)arg1;
- (void)kioskAppHandleHomeButtonWithCompletion:(void (^)(void))arg1;
@end

