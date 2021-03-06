//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber, NSURL, SSAccount, TVSStoreFrontLocale;

@interface TVSettingsITMSFacade : NSObject
{
    id _accountStoreObservingToken;	// 8 = 0x8
    NSArray *_availableLocales;	// 16 = 0x10
    TVSStoreFrontLocale *_locale;	// 24 = 0x18
    _Bool _ignoreAccountStoreChangedNotification;	// 32 = 0x20
    _Bool _autoDownloadApps;	// 33 = 0x21
    SSAccount *_preferredAccount;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x0000000100040778
@property(retain, nonatomic) SSAccount *preferredAccount; // @synthesize preferredAccount=_preferredAccount;
@property(nonatomic) _Bool autoDownloadApps; // @synthesize autoDownloadApps=_autoDownloadApps;
- (void).cxx_destruct;	// IMP=0x0000000100041f70
- (void)killStoreApps;	// IMP=0x0000000100041c6c
- (void)_updateAutoDownloadApps;	// IMP=0x0000000100041b90
- (void)_automaticDownloadKindsChangedNotification:(id)arg1;	// IMP=0x0000000100041a80
- (void)_updateAccountPasswordSettings:(id)arg1;	// IMP=0x00000001000416bc
- (void)_accountStoreChangedNotification:(id)arg1;	// IMP=0x00000001000415b8
- (void)setAsnFreeSetting:(id)arg1;	// IMP=0x0000000100041324
@property(readonly, retain, nonatomic) NSNumber *asnFreeSetting;
- (void)setAsnPaidSetting:(id)arg1;	// IMP=0x0000000100041180
@property(readonly, retain, nonatomic) NSNumber *asnPaidSetting;
@property(readonly, retain, nonatomic) NSArray *asnValues;
@property(readonly, retain, nonatomic) NSURL *manageSubscriptionsURL;
@property(nonatomic) _Bool addingToPlaylistAddsToLibrary;
@property(nonatomic, getter=isMatchEnabled) _Bool matchEnabled;
- (void)dealloc;	// IMP=0x00000001000409f0
- (id)init;	// IMP=0x00000001000407f8

@end

