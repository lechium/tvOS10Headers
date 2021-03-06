//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTResultsController.h"

#import "NSFetchedResultsControllerDelegate.h"

@class NSArray, NSFetchRequest, NSPredicate, NSString;

@interface MTCoreDataResultsController : MTResultsController <NSFetchedResultsControllerDelegate>
{
    NSArray *_propertyKeys;	// 8 = 0x8
    NSFetchRequest *_fetchRequest;	// 16 = 0x10
    id <MTFetchedResultsControllerProtocol> _frc;	// 24 = 0x18
}

@property(retain, nonatomic) id <MTFetchedResultsControllerProtocol> frc; // @synthesize frc=_frc;
@property(retain, nonatomic) NSFetchRequest *fetchRequest; // @synthesize fetchRequest=_fetchRequest;
@property(retain, nonatomic) NSArray *propertyKeys; // @synthesize propertyKeys=_propertyKeys;
- (void).cxx_destruct;	// IMP=0x00000001000c3b0c
- (void)controllerDidChangeContent:(id)arg1;	// IMP=0x00000001000c3a10
- (void)controllerWillChangeContent:(id)arg1;	// IMP=0x00000001000c39c8
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;	// IMP=0x00000001000c3910
- (void)_setFrc:(id)arg1;	// IMP=0x00000001000c3888
- (void)_initializeFrc;	// IMP=0x00000001000c3654
- (id)allObjects;	// IMP=0x00000001000c3600
- (unsigned long long)numberOfObjectsInSection:(unsigned long long)arg1;	// IMP=0x00000001000c35f4
- (id)indexPathForObject:(id)arg1;	// IMP=0x00000001000c3570
- (id)objectAtIndexPath:(id)arg1;	// IMP=0x00000001000c340c
- (void)reloadData;	// IMP=0x00000001000c33d4
@property(retain, nonatomic) NSArray *sortDescriptors;
@property(retain, nonatomic) NSPredicate *predicate;
- (void)dealloc;	// IMP=0x00000001000c31fc
- (id)initWithFetchRequest:(id)arg1 propertyKeys:(id)arg2;	// IMP=0x00000001000c3140
- (id)initWithFetchRequest:(id)arg1;	// IMP=0x00000001000c3130
- (id)initWithEntityName:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 propertyKeys:(id)arg4;	// IMP=0x00000001000c3010
- (id)initWithEntityName:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3;	// IMP=0x00000001000c2f94

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

