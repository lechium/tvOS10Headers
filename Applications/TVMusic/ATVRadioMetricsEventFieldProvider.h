//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SSMetricsEventFieldProvider.h"

@class NSDictionary, NSString;

@interface ATVRadioMetricsEventFieldProvider : NSObject <SSMetricsEventFieldProvider>
{
    NSDictionary *_dictionary;	// 8 = 0x8
}

@property(readonly, copy, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
- (void).cxx_destruct;	// IMP=0x0000000100003c10
- (id)valueForMetricsField:(id)arg1;	// IMP=0x0000000100003b78
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000100003aec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

