//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSNumber, TVNPDataImageLoader, TVNPMetadataPlayer;

@interface TVNPMediaRemoteObserver : NSObject
{
    _Bool _isObserving;	// 8 = 0x8
    _Bool _airtunesIsPlaying;	// 9 = 0x9
    NSDictionary *_airtunesTimeData;	// 16 = 0x10
    NSNumber *_lastTrackIdentifier;	// 24 = 0x18
    TVNPDataImageLoader *_imageLoader;	// 32 = 0x20
    TVNPMetadataPlayer *_player;	// 40 = 0x28
}

@property(retain, nonatomic) TVNPMetadataPlayer *player; // @synthesize player=_player;
- (void).cxx_destruct;	// IMP=0x0000000100006c6c
- (void)_updateTimeStampFromAirtunesd:(id)arg1;	// IMP=0x0000000100006be0
- (void)_updateNowPlayingProcessWithPid:(int)arg1;	// IMP=0x0000000100006ad8
- (void)_nowPlayingProcessDidChange:(id)arg1;	// IMP=0x0000000100006a4c
- (void)_updatePlayerTimeWithInfo:(id)arg1;	// IMP=0x00000001000068d8
- (void)_deregisterAsObserver;	// IMP=0x00000001000067cc
- (void)_registerAsObserver;	// IMP=0x000000010000669c
- (void)_updateNowPlayingInfo:(id)arg1;	// IMP=0x0000000100005d6c
- (void)_nowPlayingInfoDidChange:(id)arg1;	// IMP=0x0000000100005cb0
- (void)reset;	// IMP=0x0000000100005bf0
- (void)prepareForPlayback;	// IMP=0x000000010000598c
- (id)init;	// IMP=0x000000010000590c

@end

