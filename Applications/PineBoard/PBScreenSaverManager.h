//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, PBRemoteViewController, TVSPreferences, TVSStateMachine;

@interface PBScreenSaverManager : NSObject
{
    _Bool _holdOffForMusicEnabled;	// 8 = 0x8
    _Bool _needsDismissal;	// 9 = 0x9
    double _screenSaverActivationDelayInMinutes;	// 16 = 0x10
    unsigned long long _displayState;	// 24 = 0x18
    TVSPreferences *_screenSaverPrefs;	// 32 = 0x20
    TVSStateMachine *_stateMachine;	// 40 = 0x28
    NSMutableArray *_pendingActivationRequests;	// 48 = 0x30
    PBRemoteViewController *_screenSaverViewController;	// 56 = 0x38
}

+ (id)sharedInstance;	// IMP=0x00000001000108bc
+ (void)initialize;	// IMP=0x0000000100010850
@property(retain, nonatomic) PBRemoteViewController *screenSaverViewController; // @synthesize screenSaverViewController=_screenSaverViewController;
@property(nonatomic) _Bool needsDismissal; // @synthesize needsDismissal=_needsDismissal;
@property(readonly, nonatomic) NSMutableArray *pendingActivationRequests; // @synthesize pendingActivationRequests=_pendingActivationRequests;
@property(readonly, nonatomic) TVSStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(readonly, nonatomic) TVSPreferences *screenSaverPrefs; // @synthesize screenSaverPrefs=_screenSaverPrefs;
@property(nonatomic) _Bool holdOffForMusicEnabled; // @synthesize holdOffForMusicEnabled=_holdOffForMusicEnabled;
@property(readonly, nonatomic) unsigned long long displayState; // @synthesize displayState=_displayState;
@property(nonatomic) double screenSaverActivationDelayInMinutes; // @synthesize screenSaverActivationDelayInMinutes=_screenSaverActivationDelayInMinutes;
- (void).cxx_destruct;	// IMP=0x000000010001272c
- (void)_notifyPhotosSourcesDaemon;	// IMP=0x0000000100012648
- (void)_updateActivationDelay;	// IMP=0x00000001000125cc
- (id)_screenSaverControllerClassNameForAppBundleID:(id)arg1;	// IMP=0x00000001000124d4
- (id)_screenSaverAppBundleID;	// IMP=0x0000000100012468
- (void)_postSystemDidChangeIdleState:(_Bool)arg1;	// IMP=0x00000001000121cc
- (void)_saveScreenSaverSnapshotForWindow:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100012050
- (void)_dismissScreenSaver;	// IMP=0x0000000100011ea0
- (void)_activateScreenSaverViewControllerWithInfo:(id)arg1;	// IMP=0x00000001000119f0
- (void)_initializeStateMachine;	// IMP=0x0000000100010e80
@property(readonly, nonatomic) _Bool screenSaverIsActive;
- (_Bool)dismissScreenSaver;	// IMP=0x0000000100010c7c
- (void)activateScreenSaverFromUserAction:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100010b58
- (void)fetchInitialPhotoAssets;	// IMP=0x0000000100010b4c
- (id)init;	// IMP=0x000000010001093c

@end

