//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBSBulletinServiceDelegate.h"

@class NSString, PBBulletinService, PBSBulletin, TVSAudioRoutingController;

@interface PBVolumeChangeObserver : NSObject <PBSBulletinServiceDelegate>
{
    _Bool _observing;	// 8 = 0x8
    PBBulletinService *_bulletinService;	// 16 = 0x10
    PBSBulletin *_volumeBulletin;	// 24 = 0x18
    TVSAudioRoutingController *_routingController;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x0000000100036278
@property(retain, nonatomic) TVSAudioRoutingController *routingController; // @synthesize routingController=_routingController;
@property(retain, nonatomic) PBSBulletin *volumeBulletin; // @synthesize volumeBulletin=_volumeBulletin;
@property(retain, nonatomic) PBBulletinService *bulletinService; // @synthesize bulletinService=_bulletinService;
- (void).cxx_destruct;	// IMP=0x0000000100036ba4
- (void)_presentVolumeBulletinForRoute:(id)arg1;	// IMP=0x000000010003668c
- (void)bulletinService:(id)arg1 didDismissBulletin:(id)arg2 withReason:(unsigned long long)arg3;	// IMP=0x0000000100036640
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001000364e4
- (void)stopObserving;	// IMP=0x0000000100036474
- (void)startObserving;	// IMP=0x00000001000363c4
- (id)init;	// IMP=0x000000010003632c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

