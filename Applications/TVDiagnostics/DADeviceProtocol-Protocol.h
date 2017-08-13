//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@protocol DADeviceProtocol <NSObject>
@property(copy, nonatomic) CDUnknownBlockType clientStatusLoopCompletionBlock;
@property(nonatomic) __weak id <DKBrightnessResponder><DKVolumeHUDResponder> responder;
@property(nonatomic) __weak id <DADisplayProtocol> display;
@property(retain, nonatomic) NSMutableArray *childDevices;
@property(nonatomic) __weak id <DADeviceProtocol> parentDevice;
- (void)waitUntilClientStatusLoopHasEnded;
- (void)endClientStatusLoop;
- (_Bool)startClientStatusLoop;
- (NSString *)description;
- (NSString *)userAssignedName;
- (NSString *)productClass;
- (NSString *)serialNumber;
@end
