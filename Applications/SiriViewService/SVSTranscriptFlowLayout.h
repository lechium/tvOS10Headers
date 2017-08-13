//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewFlowLayout.h"

@class NSMutableArray;

@interface SVSTranscriptFlowLayout : UICollectionViewFlowLayout
{
    NSMutableArray *_insertedIndexPaths;	// 8 = 0x8
    NSMutableArray *_reloadedIndexPaths;	// 16 = 0x10
    NSMutableArray *_handledIndexPaths;	// 24 = 0x18
}

@property(readonly, nonatomic, getter=_handledIndexPaths) NSMutableArray *handledIndexPaths; // @synthesize handledIndexPaths=_handledIndexPaths;
@property(readonly, nonatomic, getter=_reloadedIndexPaths) NSMutableArray *reloadedIndexPaths; // @synthesize reloadedIndexPaths=_reloadedIndexPaths;
@property(readonly, nonatomic, getter=_insertedIndexPaths) NSMutableArray *insertedIndexPaths; // @synthesize insertedIndexPaths=_insertedIndexPaths;
- (void).cxx_destruct;	// IMP=0x0000000100051858
- (CDUnknownBlockType)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 type:(unsigned long long)arg3;	// IMP=0x000000010005153c
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;	// IMP=0x00000001000513f8
- (void)finalizeCollectionViewUpdates;	// IMP=0x0000000100051324
- (void)prepareForCollectionViewUpdates:(id)arg1;	// IMP=0x0000000100051114
- (id)init;	// IMP=0x0000000100051034

@end
