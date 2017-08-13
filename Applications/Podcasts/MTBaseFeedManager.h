//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTURLSessionManager.h"

@class NSObject<OS_dispatch_queue>;

@interface MTBaseFeedManager : MTURLSessionManager
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
}

+ (void)standardDeviationForEpisodes:(id)arg1 standardDeviation:(double *)arg2 average:(double *)arg3;	// IMP=0x0000000100102acc
+ (void)postNotificationName:(id)arg1 userInfo:(id)arg2;	// IMP=0x000000010010294c
+ (void)didFinishUpdatingAllFeeds:(_Bool)arg1;	// IMP=0x00000001001027cc
+ (void)didFinishUpdatingFeedUrl:(id)arg1;	// IMP=0x00000001001025fc
+ (void)didStartUpdatingFeedUrl:(id)arg1;	// IMP=0x000000010010245c
+ (id)_metadataPath;	// IMP=0x00000001001023d0
+ (void)saveSubscriptionMetadata;	// IMP=0x0000000100102338
+ (void)removeMetadataForPodcastUuid:(id)arg1;	// IMP=0x00000001001022b8
+ (unsigned long long)updatingCount;	// IMP=0x0000000100102054
+ (_Bool)isUpdatingFeedUrl:(id)arg1;	// IMP=0x0000000100101fb4
+ (_Bool)isUpdatingPodcastUuid:(id)arg1;	// IMP=0x0000000100101c78
+ (void)initialize;	// IMP=0x00000001000fee3c
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void).cxx_destruct;	// IMP=0x0000000100102e40
- (void)startDownloadForFeedUrl:(id)arg1 userInitiated:(_Bool)arg2 useBackgroundFetch:(_Bool)arg3;	// IMP=0x00000001001021ac
- (_Bool)abortUpdatesIfNetworkUnreachable:(_Bool)arg1;	// IMP=0x00000001001020bc
- (_Bool)updatePodcast:(id)arg1 withFeed:(id)arg2;	// IMP=0x00000001001006c8
- (void)task:(id)arg1 didFailWithError:(id)arg2 orStatusCode:(long long)arg3;	// IMP=0x00000001000ffcb0
- (void)task:(id)arg1 didCompleteWithData:(id)arg2;	// IMP=0x00000001000ff098
- (id)init;	// IMP=0x00000001000fefa8
- (void)configureSession:(id)arg1;	// IMP=0x00000001000fef40

@end
