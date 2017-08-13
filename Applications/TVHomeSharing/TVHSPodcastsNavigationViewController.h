//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVHSPreviewTableNavagationViewController.h"

@class TVHSPodcastEpisodesByDateReleasedNavigationItem, TVHSPodcastsByNameNavigationItem, TVHSUnwatchedPodcastsNavigationItem;

@interface TVHSPodcastsNavigationViewController : TVHSPreviewTableNavagationViewController
{
    TVHSPodcastsByNameNavigationItem *_podcastsByNameNavigationItem;	// 8 = 0x8
    TVHSUnwatchedPodcastsNavigationItem *_unwatchedPodcastsNavigationItem;	// 16 = 0x10
    TVHSPodcastEpisodesByDateReleasedNavigationItem *_podcastEpisodesByDateNavigationItem;	// 24 = 0x18
}

@property(retain, nonatomic) TVHSPodcastEpisodesByDateReleasedNavigationItem *podcastEpisodesByDateNavigationItem; // @synthesize podcastEpisodesByDateNavigationItem=_podcastEpisodesByDateNavigationItem;
@property(retain, nonatomic) TVHSUnwatchedPodcastsNavigationItem *unwatchedPodcastsNavigationItem; // @synthesize unwatchedPodcastsNavigationItem=_unwatchedPodcastsNavigationItem;
@property(retain, nonatomic) TVHSPodcastsByNameNavigationItem *podcastsByNameNavigationItem; // @synthesize podcastsByNameNavigationItem=_podcastsByNameNavigationItem;
- (void).cxx_destruct;	// IMP=0x000000010003ba14
- (void)updateWithPodcastsSortedByName:(id)arg1 podcastEpisodesSortedByDateReleased:(id)arg2;	// IMP=0x000000010003b81c
- (id)initWithDataClient:(id)arg1 unwatchedPodcastsNavigationItem:(id)arg2 podcastsByNameNavigationItem:(id)arg3 podcastEpisodesByDateNavigationItem:(id)arg4 mediaCategorySettings:(id)arg5;	// IMP=0x000000010003b644
- (id)initWithDataClient:(id)arg1;	// IMP=0x000000010003b4fc

@end
