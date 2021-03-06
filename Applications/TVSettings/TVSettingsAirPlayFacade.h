//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface TVSettingsAirPlayFacade : NSObject
{
}

+ (id)sharedInstance;	// IMP=0x0000000100064f08
- (_Bool)_airPlayVerifyDevicesIsForced;	// IMP=0x00000001000658d0
@property(nonatomic) long long overscanAdjustment;
@property(nonatomic) _Bool verifyDevicesEnabled;
@property(nonatomic) unsigned long long securityType;
@property(readonly, copy, nonatomic) NSArray *availableSecurityTypes;
@property(copy, nonatomic) NSString *password;
@property(nonatomic) _Bool preferCloudPlayback;
@property(nonatomic) _Bool enabled;
- (id)_airPlayPreferences;	// IMP=0x0000000100064f88

@end

