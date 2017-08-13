//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LSApplicationWorkspaceObserverProtocol.h"

@class HBTopShelfRepresentation, LSApplicationProxy, NSRecursiveLock, NSString, TVTopShelfProviderExtension;

@interface HBTopShelfExtensionMonitor : NSObject <LSApplicationWorkspaceObserverProtocol>
{
    NSRecursiveLock *__lock;	// 8 = 0x8
    LSApplicationProxy *__appProxy;	// 16 = 0x10
    HBTopShelfRepresentation *__representation;	// 24 = 0x18
    HBTopShelfRepresentation *__staticRepresentation;	// 32 = 0x20
    TVTopShelfProviderExtension *__providerExtension;	// 40 = 0x28
    id __restrictionDidChangeToken;	// 48 = 0x30
    id __internetDidChangeToken;	// 56 = 0x38
    id __topShelfPurgeToken;	// 64 = 0x40
    int __notifyToken;	// 72 = 0x48
    _Bool __inDock;	// 76 = 0x4c
    _Bool __focused;	// 77 = 0x4d
    _Bool __binaryExtension;	// 78 = 0x4e
    _Bool __gotNote;	// 79 = 0x4f
    _Bool __fetching;	// 80 = 0x50
    _Bool __installing;	// 81 = 0x51
    _Bool __uninstalling;	// 82 = 0x52
    _Bool __internetBecameAvailable;	// 83 = 0x53
    _Bool __quickUpdate;	// 84 = 0x54
    double __lastFetchStartAT;	// 88 = 0x58
    double __lastFetchEndAT;	// 96 = 0x60
    double __fetchIfStillFocusedAT;	// 104 = 0x68
    double __fetchAT;	// 112 = 0x70
    double __lastSetTimerAT;	// 120 = 0x78
    struct __CFRunLoopTimer *__timer;	// 128 = 0x80
}

+ (void)initialize;	// IMP=0x000000010000a218
- (void).cxx_destruct;	// IMP=0x000000010000d3d4
- (void)__fetch;	// IMP=0x000000010000ca6c
- (void)fetchFreshDataAfterLongDelay;	// IMP=0x000000010000ca38
- (void)fetchFreshDataAfterShortDelay;	// IMP=0x000000010000ca04
- (void)fetchFreshDataNow;	// IMP=0x000000010000c9d0
@property(nonatomic, getter=isInDock) _Bool inDock;
@property(nonatomic, getter=isFocused) _Bool focused;
- (void)__setRepresentation:(id)arg1;	// IMP=0x000000010000c438
@property(readonly, nonatomic) HBTopShelfRepresentation *representation;
- (void)__setAppProxy:(id)arg1;	// IMP=0x000000010000be54
@property(readonly, nonatomic) LSApplicationProxy *appProxy;
- (void)applicationsDidUninstall:(id)arg1;	// IMP=0x000000010000bd9c
- (void)applicationsDidFailToUninstall:(id)arg1;	// IMP=0x000000010000bccc
- (void)applicationsWillUninstall:(id)arg1;	// IMP=0x000000010000bbd8
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x000000010000baec
- (void)applicationsDidFailToInstall:(id)arg1;	// IMP=0x000000010000ba00
- (void)applicationInstallsDidCancel:(id)arg1;	// IMP=0x000000010000b930
- (void)applicationsWillInstall:(id)arg1;	// IMP=0x000000010000b83c
- (void)__handleDataChangedNote;	// IMP=0x000000010000b724
- (void)__adjustFocused:(_Bool)arg1 timerTo:(double)arg2 plus:(double)arg3;	// IMP=0x000000010000b5e0
- (void)__establishNextTimer;	// IMP=0x000000010000b47c
- (void)__wipeFocusedTimer;	// IMP=0x000000010000b3a8
- (void)__suppressTimer;	// IMP=0x000000010000b308
- (void)dealloc;	// IMP=0x000000010000b118
- (id)initWithProxy:(id)arg1;	// IMP=0x000000010000a2bc
- (id)init;	// IMP=0x000000010000a280

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
