//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVHSEpisodeCollection.h"

@interface TVHSPodcast : TVHSEpisodeCollection
{
    unsigned long long _podcastType;	// 8 = 0x8
}

+ (unsigned long long)_podcastTypeFromEpisode:(id)arg1;	// IMP=0x0000000100013be4
@property(nonatomic) unsigned long long podcastType; // @synthesize podcastType=_podcastType;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100013b94
- (void)setEpisodes:(id)arg1;	// IMP=0x00000001000139f4

@end

