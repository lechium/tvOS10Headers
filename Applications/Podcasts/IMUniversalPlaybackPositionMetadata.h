//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface IMUniversalPlaybackPositionMetadata : NSObject <NSCopying>
{
    _Bool _hasBeenPlayed;	// 8 = 0x8
    _Bool _isNew;	// 9 = 0x9
    NSString *_itemIdentifier;	// 16 = 0x10
    double _timestamp;	// 24 = 0x18
    double _bookmarkTime;	// 32 = 0x20
    unsigned long long _playCount;	// 40 = 0x28
}

+ (id)metadataWithValuesItemIdentifier:(id)arg1 keyValueStorePayload:(id)arg2;	// IMP=0x00000001000466bc
+ (id)metadataWithValuesFromDataSourceItem:(id)arg1;	// IMP=0x0000000100046350
+ (id)keyValueStoreItemIdentifierForItem:(id)arg1;	// IMP=0x0000000100045d50
@property(nonatomic) _Bool isNew; // @synthesize isNew=_isNew;
@property(nonatomic) unsigned long long playCount; // @synthesize playCount=_playCount;
@property(nonatomic) _Bool hasBeenPlayed; // @synthesize hasBeenPlayed=_hasBeenPlayed;
@property(nonatomic) double bookmarkTime; // @synthesize bookmarkTime=_bookmarkTime;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
- (id)keyValueStorePayload;	// IMP=0x0000000100046b08
- (void)dealloc;	// IMP=0x0000000100045cf4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100045c20
- (unsigned long long)hash;	// IMP=0x0000000100045b64
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100045a74
- (id)description;	// IMP=0x00000001000458c0
- (id)init;	// IMP=0x000000010004588c

@end

