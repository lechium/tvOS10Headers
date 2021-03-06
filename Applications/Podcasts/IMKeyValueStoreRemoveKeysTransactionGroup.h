//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMKeyValueStoreTransactionGroup.h"

#import "MZKeyValueStoreTransactionProcessing.h"

@class IMKeyValueStoreTransaction, NSArray, NSMutableDictionary, NSString;

@interface IMKeyValueStoreRemoveKeysTransactionGroup : IMKeyValueStoreTransactionGroup <MZKeyValueStoreTransactionProcessing>
{
    NSArray *_keys;	// 8 = 0x8
    NSMutableDictionary *_itemsToRemove;	// 16 = 0x10
    IMKeyValueStoreTransaction *_currenTransaction;	// 24 = 0x18
}

- (void)transaction:(id)arg1 mergeData:(id)arg2 forKey:(id)arg3 domainVersion:(id)arg4 version:(id)arg5 mismatch:(_Bool)arg6 finishedBlock:(CDUnknownBlockType)arg7;	// IMP=0x0000000100068808
- (void)transaction:(id)arg1 didProcessResponseWithDomainVersion:(id)arg2;	// IMP=0x0000000100068804
- (void)transaction:(id)arg1 willProcessResponseWithDomainVersion:(id)arg2;	// IMP=0x0000000100068800
- (id)dataForSetTransaction:(id)arg1 key:(id)arg2 version:(id *)arg3;	// IMP=0x00000001000687c0
- (id)versionForGetTransaction:(id)arg1 key:(id)arg2;	// IMP=0x00000001000687b8
- (_Bool)scheduleNextTransactionInController:(id)arg1;	// IMP=0x0000000100068604
- (id)_transactionItemForKey:(id)arg1;	// IMP=0x0000000100068530
- (void)dealloc;	// IMP=0x00000001000684a8
- (id)initWithKeys:(id)arg1;	// IMP=0x000000010006840c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

