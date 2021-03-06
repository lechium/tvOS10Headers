/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:01 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CBPeripheralManagerDelegate.h>

@class CBPeripheralManager, NSString;

@interface AMSBTLEAdvertisementManager : NSObject <CBPeripheralManagerDelegate> {

	CBPeripheralManager* peripheralManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)peripheralManagerDidUpdateState:(id)arg1 ;
-(void)peripheralManager:(id)arg1 didReceiveReadRequest:(id)arg2 ;
-(void)peripheralManagerDidStartAdvertising:(id)arg1 error:(id)arg2 ;
-(BOOL)isLECapableHardware;
-(void)advertiseMIDIService;
-(void)stopAdvertisingMIDIService;
-(BOOL)isAdvertising;
@end

