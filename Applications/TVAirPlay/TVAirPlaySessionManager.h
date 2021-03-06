//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TVAirPlayMediaViewControllerDelegate.h"

@class NSArray, NSMapTable, NSMutableArray, NSString, TVAirPlayMediaViewController, TVSStateMachine;

@interface TVAirPlaySessionManager : NSObject <TVAirPlayMediaViewControllerDelegate>
{
    NSMutableArray *_sessions;	// 8 = 0x8
    NSMapTable *_pendingCompletionHandlers;	// 16 = 0x10
    TVSStateMachine *_stateMachine;	// 24 = 0x18
    TVAirPlayMediaViewController *_mediaViewController;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x00000001000084e4
- (void).cxx_destruct;	// IMP=0x0000000100009ee0
- (void)_callPendingCompletionHandlersWithError:(id)arg1;	// IMP=0x0000000100009d60
- (void)_updatePresentedViewController;	// IMP=0x0000000100009d40
- (void)_updateForSessionChange;	// IMP=0x0000000100009ce4
- (id)_sessionOfType:(long long)arg1 identifier:(id)arg2 activeOnly:(_Bool)arg3;	// IMP=0x0000000100009b1c
- (void)_requestMediaViewController;	// IMP=0x0000000100009838
- (id)_cleanupWithError:(id)arg1;	// IMP=0x000000010000969c
- (id)_handleForegroundUpdate;	// IMP=0x00000001000094c8
- (id)_handleBackgroundSessionUpdate;	// IMP=0x0000000100009310
- (void)_initializeStateMachine;	// IMP=0x0000000100008ec8
- (void)mediaViewControllerDidDismiss:(id)arg1;	// IMP=0x0000000100008de8
- (void)mediaViewControllerDidBecomeReady:(id)arg1;	// IMP=0x0000000100008ca0
@property(readonly, copy, nonatomic) NSArray *activeSessions;
- (id)urlSessionWithID:(id)arg1;	// IMP=0x0000000100008bdc
- (id)streamingSessionWithID:(id)arg1;	// IMP=0x0000000100008bc0
- (id)presentationSessionWithID:(id)arg1;	// IMP=0x0000000100008ba4
- (id)infoSessionWithID:(id)arg1;	// IMP=0x0000000100008b08
- (void)deregisterSession:(id)arg1 immediately:(_Bool)arg2;	// IMP=0x0000000100008848
- (void)registerSession:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000086d4
- (void)dealloc;	// IMP=0x0000000100008658
- (id)init;	// IMP=0x0000000100008598

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

