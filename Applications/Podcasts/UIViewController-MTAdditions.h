//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@interface UIViewController (MTAdditions)
+ (id)mt_rootViewController;	// IMP=0x00000001000d021c
- (id)mt_topViewController;	// IMP=0x00000001000d0178
- (_Bool)mt_isVisible;	// IMP=0x00000001000d00fc
- (void)simulateMemoryWarning;	// IMP=0x00000001000d00f8
- (_Bool)isADescendantOfParentViewController:(id)arg1;	// IMP=0x00000001000d001c
- (void)visitChildenViewControllers:(CDUnknownBlockType)arg1;	// IMP=0x00000001000cfec8
- (id)recursiveDescription;	// IMP=0x00000001000cfe5c
- (id)_recursiveDescriptionWithLevel:(long long)arg1 result:(id)arg2;	// IMP=0x00000001000cfc4c
@end
