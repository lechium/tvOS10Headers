//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIAlertController.h"

#import "HBBubbleAnimatorViewProvider.h"

@class NSString;

@interface HBAlertController : UIAlertController <HBBubbleAnimatorViewProvider>
{
    _Bool _shouldProvideViewForBubbleAnimator;	// 8 = 0x8
}

@property(nonatomic) _Bool shouldProvideViewForBubbleAnimator; // @synthesize shouldProvideViewForBubbleAnimator=_shouldProvideViewForBubbleAnimator;
- (id)viewsForAnimator:(id)arg1;	// IMP=0x0000000100036f9c
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100036efc
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100036e5c
- (void)dealloc;	// IMP=0x0000000100036db8
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100036d30
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100036ce8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

