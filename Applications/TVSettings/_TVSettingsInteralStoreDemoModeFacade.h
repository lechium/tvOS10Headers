//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface _TVSettingsInteralStoreDemoModeFacade : NSObject
{
    _Bool _videoPlaybackRestricted;	// 8 = 0x8
    double _videoPlaybackRestrictionTimeout;	// 16 = 0x10
    NSString *_modeType;	// 24 = 0x18
    NSString *_screenSaverConfigurationURLString;	// 32 = 0x20
}

@property(copy, nonatomic) NSString *screenSaverConfigurationURLString; // @synthesize screenSaverConfigurationURLString=_screenSaverConfigurationURLString;
@property(copy, nonatomic) NSString *modeType; // @synthesize modeType=_modeType;
@property(nonatomic) double videoPlaybackRestrictionTimeout; // @synthesize videoPlaybackRestrictionTimeout=_videoPlaybackRestrictionTimeout;
@property(nonatomic) _Bool videoPlaybackRestricted; // @synthesize videoPlaybackRestricted=_videoPlaybackRestricted;
- (void).cxx_destruct;	// IMP=0x000000010002c5cc
- (_Bool)applyChanges;	// IMP=0x000000010002c2b8
@property(readonly, getter=isDirty) _Bool dirty;
- (id)availableModeTypes;	// IMP=0x000000010002bfa8
- (void)restoreDefaults;	// IMP=0x000000010002be04
- (id)init;	// IMP=0x000000010002bdac

@end

