//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SVSAceCommandRecordDelegate.h"

@class NSMutableDictionary, NSString;

@interface SVSAceCommandRecords : NSObject <SVSAceCommandRecordDelegate>
{
    id <SVSAceCommandRecordsDelegate> _delegate;	// 8 = 0x8
    NSMutableDictionary *_recordsByCommandIdentifier;	// 16 = 0x10
}

@property(readonly, nonatomic, getter=_recordsByCommandIdentifier) NSMutableDictionary *recordsByCommandIdentifier; // @synthesize recordsByCommandIdentifier=_recordsByCommandIdentifier;
@property(nonatomic) __weak id <SVSAceCommandRecordsDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x00000001000389c4
- (long long)resultForAceCommand:(id)arg1;	// IMP=0x0000000100038934
- (void)recordActionCompletedUnsuccessfullyForAceCommand:(id)arg1;	// IMP=0x00000001000387d4
- (void)recordActionCompletedSuccessfullyForAceCommand:(id)arg1;	// IMP=0x0000000100038674
- (void)recordActionStartedForAceCommand:(id)arg1;	// IMP=0x0000000100038514
- (id)_recordForAceCommand:(id)arg1;	// IMP=0x0000000100038450
- (id)aceCommandWithIdentifier:(id)arg1;	// IMP=0x00000001000383a8
- (void)registerAceCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100038140
- (void)aceCommandRecordDidChangeResult:(id)arg1;	// IMP=0x0000000100038070
- (id)init;	// IMP=0x0000000100037ff4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

