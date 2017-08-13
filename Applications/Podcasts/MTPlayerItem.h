//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMPlayerItem.h"

@class MTEpisode, NSDate, NSString, NSURL;

@interface MTPlayerItem : IMPlayerItem
{
    NSString *_podcastUuid;	// 8 = 0x8
    NSString *_podcastFeedUrl;	// 16 = 0x10
    long long _podcastStoreId;	// 24 = 0x18
    NSURL *_artworkUrl;	// 32 = 0x20
    NSString *_episodeUuid;	// 40 = 0x28
    NSString *_episodeGuid;	// 48 = 0x30
    long long _episodeStoreId;	// 56 = 0x38
    long long _episodePID;	// 64 = 0x40
    NSDate *_pubDate;	// 72 = 0x48
    NSString *_subtitle;	// 80 = 0x50
    NSString *_itemDescription;	// 88 = 0x58
    NSString *_storeReportingParams;	// 96 = 0x60
}

+ (id)subtitleStringForEpisode:(id)arg1;	// IMP=0x0000000100013ecc
+ (id)subtitleStringForArtist:(id)arg1 album:(id)arg2;	// IMP=0x0000000100013d80
+ (id)createAssetForUrl:(id)arg1;	// IMP=0x0000000100012854
@property(retain, nonatomic) NSString *storeReportingParams; // @synthesize storeReportingParams=_storeReportingParams;
@property(retain, nonatomic) NSString *itemDescription; // @synthesize itemDescription=_itemDescription;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSDate *pubDate; // @synthesize pubDate=_pubDate;
@property(nonatomic) long long episodePID; // @synthesize episodePID=_episodePID;
@property(nonatomic) long long episodeStoreId; // @synthesize episodeStoreId=_episodeStoreId;
@property(retain, nonatomic) NSString *episodeGuid; // @synthesize episodeGuid=_episodeGuid;
@property(retain, nonatomic) NSString *episodeUuid; // @synthesize episodeUuid=_episodeUuid;
@property(retain, nonatomic) NSURL *artworkUrl; // @synthesize artworkUrl=_artworkUrl;
@property(nonatomic) long long podcastStoreId; // @synthesize podcastStoreId=_podcastStoreId;
@property(retain, nonatomic) NSString *podcastFeedUrl; // @synthesize podcastFeedUrl=_podcastFeedUrl;
@property(retain, nonatomic) NSString *podcastUuid; // @synthesize podcastUuid=_podcastUuid;
- (void).cxx_destruct;	// IMP=0x0000000100014470
- (void)updateActivity:(id)arg1;	// IMP=0x0000000100013ca8
- (id)externalMetadata;	// IMP=0x0000000100013650
- (id)nowPlayingInfo;	// IMP=0x0000000100013310
- (void)retrieveArtwork:(CDUnknownBlockType)arg1 withSize:(struct CGSize)arg2;	// IMP=0x0000000100012e5c
@property(readonly, nonatomic) long long mpItemType;
- (void)notifyUserIsNotPlayable;	// IMP=0x0000000100012c78
- (_Bool)isPlayable;	// IMP=0x0000000100012bdc
@property(readonly, nonatomic) MTEpisode *episode;
- (id)initWithAsset:(id)arg1;	// IMP=0x000000010001277c

@end
