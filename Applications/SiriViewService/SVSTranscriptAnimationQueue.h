//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFQueue.h"

@interface SVSTranscriptAnimationQueue : AFQueue
{
}

- (id)nextNonPinningAnimationForTranscriptItem:(id)arg1;	// IMP=0x000000010000335c
- (id)dequeueAllAnimations;	// IMP=0x0000000100003350
- (id)dequeNextAnimation;	// IMP=0x0000000100003344
- (id)nextAnimation;	// IMP=0x0000000100003338
- (void)enqueueAnimations:(id)arg1;	// IMP=0x000000010000332c
- (void)enqueueAnimation:(id)arg1;	// IMP=0x0000000100003320

@end

