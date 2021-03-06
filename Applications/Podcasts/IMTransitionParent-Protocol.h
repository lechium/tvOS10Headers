//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMTransition;

@protocol IMTransitionParent <NSObject>

@optional
- (void)childTransitionDidComplete:(IMTransition *)arg1 finished:(_Bool)arg2;
- (void)childTransitionDidStart:(IMTransition *)arg1;
- (void)childTransitionWillStart:(IMTransition *)arg1;
- (_Bool)shouldPerformChildTransition:(IMTransition *)arg1;
@end

