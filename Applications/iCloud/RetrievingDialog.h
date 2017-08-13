//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface RetrievingDialog : NSObject
{
    id <RetrievingDialogDelegate> _delegate;	// 8 = 0x8
    struct __CFUserNotification *_retrievingNotification;	// 16 = 0x10
    long long _state;	// 24 = 0x18
}

@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) struct __CFUserNotification *retrievingNotification; // @synthesize retrievingNotification=_retrievingNotification;
@property(nonatomic) __weak id <RetrievingDialogDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x000000010000501c
- (void)dealloc;	// IMP=0x0000000100004f84
- (void)schedule;	// IMP=0x0000000100004eac
- (void)_schedule;	// IMP=0x0000000100004d4c
- (void)_displayIfRequired;	// IMP=0x0000000100004b98
- (void)dismissDialog:(id)arg1;	// IMP=0x0000000100004b44
- (void)_display;	// IMP=0x0000000100004670
- (void)_timeoutMinPeriod;	// IMP=0x00000001000045f4
- (void)abort;	// IMP=0x00000001000044dc
- (void)_dismiss;	// IMP=0x0000000100004424
- (const char *)stateName;	// IMP=0x00000001000043e0
- (id)init;	// IMP=0x000000010000439c

@end
