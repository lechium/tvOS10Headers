//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, TVSiCloudAccountManager;

@interface TVSettingsDeviceFacade : NSObject
{
    _Bool _hasLoadedLimitAdTracking;	// 8 = 0x8
    NSString *_currentLocale;	// 16 = 0x10
    TVSiCloudAccountManager *_iCloudAccountManager;	// 24 = 0x18
    _Bool _limitAdTrackingAvailable;	// 32 = 0x20
    _Bool _refreshingLimitAdTracking;	// 33 = 0x21
    NSArray *_availableNames;	// 40 = 0x28
    NSString *_timeZoneCityName;	// 48 = 0x30
    long long _effectiveUserInterfaceStyle;	// 56 = 0x38
    double _sleepTimeout;	// 64 = 0x40
}

+ (_Bool)automaticallyNotifiesObserversOfCurrentLocale;	// IMP=0x000000010001eb00
+ (id)sharedInstance;	// IMP=0x000000010001e5ec
@property(nonatomic) double sleepTimeout; // @synthesize sleepTimeout=_sleepTimeout;
@property(nonatomic) long long effectiveUserInterfaceStyle; // @synthesize effectiveUserInterfaceStyle=_effectiveUserInterfaceStyle;
@property(copy, nonatomic) NSString *timeZoneCityName; // @synthesize timeZoneCityName=_timeZoneCityName;
@property(readonly, nonatomic) _Bool refreshingLimitAdTracking; // @synthesize refreshingLimitAdTracking=_refreshingLimitAdTracking;
@property(readonly, nonatomic) _Bool limitAdTrackingAvailable; // @synthesize limitAdTrackingAvailable=_limitAdTrackingAvailable;
@property(copy, nonatomic) NSArray *availableNames; // @synthesize availableNames=_availableNames;
- (void).cxx_destruct;	// IMP=0x0000000100020960
@property(nonatomic) _Bool updateSoftwareAutomatically;
@property(readonly, nonatomic) _Bool shouldAllowAppOTA;
- (_Bool)setMyPhotoStreamEnabled:(_Bool)arg1 error:(id *)arg2;	// IMP=0x000000010002072c
@property(readonly, nonatomic) _Bool myPhotoStreamEnabled;
- (_Bool)setICloudPhotoLibraryEnabled:(_Bool)arg1 error:(id *)arg2;	// IMP=0x000000010002062c
@property(readonly, nonatomic) _Bool iCloudPhotoLibraryEnabled;
- (_Bool)setICloudSharedPhotosEnabled:(_Bool)arg1 error:(id *)arg2;	// IMP=0x000000010002052c
@property(readonly, nonatomic) _Bool iCloudSharedPhotosEnabled;
- (void)_updateSleepTimeoutValue;	// IMP=0x00000001000202cc
- (void)_updateEffectiveUserInterfaceStyle;	// IMP=0x0000000100020068
- (id)cityNameForCityID:(id)arg1;	// IMP=0x000000010001ff84
@property(copy, nonatomic) NSString *timeZoneCityID;
@property(nonatomic, getter=isAutomaticTimeZoneSelectionEnabled) _Bool automaticTimeZoneSelectionEnabled;
@property(readonly, copy, nonatomic) NSArray *availableLocales;
- (void)_updateCurrentLocale;	// IMP=0x000000010001fd2c
@property(copy, nonatomic) NSString *currentLocale;
@property(copy, nonatomic) NSString *systemLanguage;
- (_Bool)_canEnableLimitAdTracking;	// IMP=0x000000010001fbd0
- (void)resetAdvertisingIdentifier;	// IMP=0x000000010001fabc
- (void)refreshLimitAdTracking;	// IMP=0x000000010001f8d4
@property(nonatomic) _Bool limitAdTracking;
@property(nonatomic) _Bool shouldSendAppAnalytics;
@property(readonly, nonatomic) _Bool isSendAppAnalyticsLockedDown;
@property(nonatomic) _Bool shouldSendDataToApple;
@property(readonly, nonatomic) _Bool isSendDataToAppleLockedDown;
- (id)internetConfigurationSummary;	// IMP=0x000000010001f304
@property(readonly, copy, nonatomic) NSString *systemSoftwareVersion;
@property(readonly, copy, nonatomic) NSString *serialNumber;
@property(readonly, copy, nonatomic) NSString *marketingNumber;
@property(readonly, copy, nonatomic) NSString *modelDescription;
@property(copy, nonatomic) NSString *name;
- (id)_pineBoardPreferences;	// IMP=0x000000010001eb08
- (id)init;	// IMP=0x000000010001e68c

@end

