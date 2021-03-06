//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSHashTable, UIView;

@interface HBBubbleAnimator : NSObject
{
    UIView *_referenceView;	// 8 = 0x8
    unsigned long long _numberOfVirtualGridRows;	// 16 = 0x10
    unsigned long long _numberOfVirtualGridColumns;	// 24 = 0x18
    Class _preferedInitialViewClass;	// 32 = 0x20
    NSArray *_allAnimatedViews;	// 40 = 0x28
    NSHashTable *_viewProviders;	// 48 = 0x30
    unsigned long long _animationState;	// 56 = 0x38
}

+ (id)keyPathsForValuesAffectingAnimating;	// IMP=0x00000001000302dc
+ (void)initialize;	// IMP=0x000000010002fe10
@property(nonatomic) unsigned long long animationState; // @synthesize animationState=_animationState;
@property(retain, nonatomic) NSHashTable *viewProviders; // @synthesize viewProviders=_viewProviders;
@property(copy, nonatomic) NSArray *allAnimatedViews; // @synthesize allAnimatedViews=_allAnimatedViews;
@property(nonatomic) Class preferedInitialViewClass; // @synthesize preferedInitialViewClass=_preferedInitialViewClass;
@property(nonatomic) unsigned long long numberOfVirtualGridColumns; // @synthesize numberOfVirtualGridColumns=_numberOfVirtualGridColumns;
@property(nonatomic) unsigned long long numberOfVirtualGridRows; // @synthesize numberOfVirtualGridRows=_numberOfVirtualGridRows;
@property(retain, nonatomic) UIView *referenceView; // @synthesize referenceView=_referenceView;
- (void).cxx_destruct;	// IMP=0x0000000100033714
- (double)referenceSpaceDistanceToPoint:(struct CGPoint)arg1 fromView:(id)arg2;	// IMP=0x00000001000335bc
- (struct CGRect)convertViewRectToReferenceSpace:(id)arg1;	// IMP=0x00000001000334c0
- (struct CGPoint)convertViewCenterToReferenceSpace:(id)arg1;	// IMP=0x00000001000333ec
- (_Bool)visibilityInReferenceSpaceForView:(id)arg1;	// IMP=0x000000010003330c
- (_Bool)intersectView:(id)arg1 forIndexPath:(id)arg2 centerDiff:(struct CGPoint)arg3;	// IMP=0x00000001000331b8
- (_Bool)intersectsRect:(struct CGRect)arg1 forIndexPath:(id)arg2 centerDiff:(struct CGPoint)arg3;	// IMP=0x0000000100033188
- (double)intersectionConfidenceForView:(id)arg1 toIndexPath:(id)arg2 centerDiff:(struct CGPoint)arg3;	// IMP=0x0000000100033034
- (double)intersectionConfidenceForRect:(struct CGRect)arg1 toIndexPath:(id)arg2 centerDiff:(struct CGPoint)arg3;	// IMP=0x0000000100032f98
- (struct CGRect)rectForIndexPath:(id)arg1 centerDiff:(struct CGPoint)arg2;	// IMP=0x0000000100032e74
- (id)indexPathsForRect:(struct CGRect)arg1 centerDiff:(struct CGPoint)arg2;	// IMP=0x0000000100032ccc
- (void)_removeAllAnimations;	// IMP=0x0000000100032a78
- (id)_gatherViewGroupsWithStartPoint:(struct CGPoint)arg1 animationBehavior:(unsigned long long)arg2;	// IMP=0x0000000100031a08
- (void)_applicationDidBecomeActiveNotification:(id)arg1;	// IMP=0x000000010003196c
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;	// IMP=0x00000001000318e4
- (void)unregisterViewProvider:(id)arg1;	// IMP=0x0000000100031878
- (void)registerViewProvider:(id)arg1;	// IMP=0x0000000100031800
- (void)startFromPoint:(struct CGPoint)arg1 animationBehavior:(unsigned long long)arg2 duration:(double)arg3 delay:(double)arg4;	// IMP=0x00000001000303a4
@property(readonly, nonatomic, getter=isAnimating) _Bool animating;
- (void)dealloc;	// IMP=0x0000000100030060
- (id)init;	// IMP=0x000000010002fe7c

@end

