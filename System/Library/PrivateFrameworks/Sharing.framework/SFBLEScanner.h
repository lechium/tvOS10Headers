/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:43 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sharing/Sharing-Structs.h>
#import <libobjc.A.dylib/CBCentralManagerDelegate.h>
#import <libobjc.A.dylib/WPAWDLDelegate.h>
#import <libobjc.A.dylib/WPNearbyDelegate.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class CBCentralManager, NSData, NSObject, CURetrier, WPAWDL, WPNearby, WPPairing, NSArray, CUBitCoder, NSString;

@interface SFBLEScanner : NSObject <CBCentralManagerDelegate, WPAWDLDelegate, WPNearbyDelegate> {

	BOOL _activateCalled;
	BTSessionImplRef _btSession;
	BOOL _btStarted;
	CBCentralManager* _centralManager;
	NSMutableDictionary* _devices;
	BOOL _invalidateCalled;
	BOOL _needDups;
	NSData* _payloadFilterData;
	NSData* _payloadFilterMask;
	long long _payloadType;
	NSObject*<OS_dispatch_source> _rescanTimer;
	_sFILE* _rssiEventLogFile;
	BOOL _scanStarted;
	CURetrier* _startRetrier;
	BOOL _timeoutFired;
	NSObject*<OS_dispatch_source> _timeoutTimer;
	WPAWDL* _wpAirDrop;
	WPNearby* _wpNearby;
	long long _wpNearbyType;
	WPPairing* _wpPairing;
	LogCategory* _ucat;
	BOOL _rssiLog;
	BOOL _scanCache;
	unsigned _changeFlags;
	/*^block*/id _bluetoothStateChangedHandler;
	NSArray* _deviceFilter;
	/*^block*/id _deviceFoundHandler;
	/*^block*/id _deviceLostHandler;
	/*^block*/id _deviceChangedHandler;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	CUBitCoder* _payloadCoder;
	double _rescanInterval;
	long long _rssiThreshold;
	long long _scanInterval;
	long long _scanRate;
	long long _scanWindow;
	double _timeout;
	/*^block*/id _timeoutHandler;

}

@property (nonatomic,copy) id bluetoothStateChangedHandler;                           //@synthesize bluetoothStateChangedHandler=_bluetoothStateChangedHandler - In the implementation block
@property (assign,nonatomic) unsigned changeFlags;                                    //@synthesize changeFlags=_changeFlags - In the implementation block
@property (nonatomic,copy) NSArray * deviceFilter;                                    //@synthesize deviceFilter=_deviceFilter - In the implementation block
@property (nonatomic,copy) id deviceFoundHandler;                                     //@synthesize deviceFoundHandler=_deviceFoundHandler - In the implementation block
@property (nonatomic,copy) id deviceLostHandler;                                      //@synthesize deviceLostHandler=_deviceLostHandler - In the implementation block
@property (nonatomic,copy) id deviceChangedHandler;                                   //@synthesize deviceChangedHandler=_deviceChangedHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,retain) CUBitCoder * payloadCoder;                               //@synthesize payloadCoder=_payloadCoder - In the implementation block
@property (assign,nonatomic) double rescanInterval;                                   //@synthesize rescanInterval=_rescanInterval - In the implementation block
@property (assign,nonatomic) BOOL rssiLog;                                            //@synthesize rssiLog=_rssiLog - In the implementation block
@property (assign,nonatomic) long long rssiThreshold;                                 //@synthesize rssiThreshold=_rssiThreshold - In the implementation block
@property (assign,nonatomic) BOOL scanCache;                                          //@synthesize scanCache=_scanCache - In the implementation block
@property (assign,nonatomic) long long scanInterval;                                  //@synthesize scanInterval=_scanInterval - In the implementation block
@property (assign,nonatomic) long long scanRate;                                      //@synthesize scanRate=_scanRate - In the implementation block
@property (assign,nonatomic) long long scanWindow;                                    //@synthesize scanWindow=_scanWindow - In the implementation block
@property (assign,nonatomic) double timeout;                                          //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,copy) id timeoutHandler;                                         //@synthesize timeoutHandler=_timeoutHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)invalidate;
-(id)initWithType:(long long)arg1 ;
-(void)_invalidate;
-(id)invalidationHandler;
-(void)setInvalidationHandler:(id)arg1 ;
-(double)timeout;
-(void)setTimeout:(double)arg1 ;
-(void)centralManagerDidUpdateState:(id)arg1 ;
-(void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4 ;
-(id)timeoutHandler;
-(void)setTimeoutHandler:(id)arg1 ;
-(long long)scanRate;
-(long long)scanInterval;
-(void)setScanInterval:(long long)arg1 ;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(void)nearbyDidUpdateState:(id)arg1 ;
-(void)nearby:(id)arg1 didStartScanningForType:(long long)arg2 ;
-(void)nearby:(id)arg1 didDiscoverType:(long long)arg2 withData:(id)arg3 fromPeer:(id)arg4 peerInfo:(id)arg5 ;
-(void)nearby:(id)arg1 didLosePeer:(id)arg2 type:(long long)arg3 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(id)bluetoothStateChangedHandler;
-(void)setBluetoothStateChangedHandler:(id)arg1 ;
-(void)awdlDidUpdateState:(id)arg1 ;
-(void)awdlStartedScanning:(id)arg1 ;
-(void)awdl:(id)arg1 failedToStartScanningWithError:(id)arg2 ;
-(void)awdl:(id)arg1 foundDevice:(id)arg2 rssi:(id)arg3 ;
-(void)nearby:(id)arg1 didFailToStartScanningForType:(long long)arg2 WithError:(id)arg3 ;
-(void)pairingDidUpdateState:(id)arg1 ;
-(void)pairingStartedScanning:(id)arg1 ;
-(void)pairing:(id)arg1 failedToStartScanningWithError:(id)arg2 ;
-(void)pairing:(id)arg1 foundDevice:(id)arg2 payload:(id)arg3 rssi:(id)arg4 peerInfo:(id)arg5 ;
-(void)_rssiLogClose;
-(void)_invokeBlockActivateSafe:(/*^block*/id)arg1 ;
-(int)_btSessionEnsureStarted;
-(void)_rssiLogOpen;
-(void)_restartIfNeeded;
-(void)_btSessionEnsureStopped;
-(BOOL)_updateCounterpart:(id)arg1 ;
-(BOOL)_needDups;
-(void)_updateRescanTimer;
-(void)_startTimeoutIfNeeded;
-(void)_timeoutTimerFired;
-(void)_rescanTimerFired;
-(void)_poweredOff;
-(void)_foundDevice:(id)arg1 advertisementData:(id)arg2 rssi:(long long)arg3 fields:(id)arg4 ;
-(id)pairingParsePayload:(id)arg1 identifier:(id)arg2 bleDevice:(id)arg3 ;
-(unsigned)statusToHeadsetStatus:(unsigned char)arg1 ;
-(BOOL)pairingUpdatePairedInfo:(id)arg1 fields:(id)arg2 bleDevice:(id)arg3 ;
-(void)setChangeFlags:(unsigned)arg1 ;
-(void)setDeviceFilter:(NSArray *)arg1 ;
-(void)setPayloadFilterData:(id)arg1 mask:(id)arg2 ;
-(void)setRssiThreshold:(long long)arg1 ;
-(void)setScanCache:(BOOL)arg1 ;
-(void)setScanRate:(long long)arg1 ;
-(unsigned)changeFlags;
-(NSArray *)deviceFilter;
-(id)deviceFoundHandler;
-(void)setDeviceFoundHandler:(id)arg1 ;
-(id)deviceLostHandler;
-(void)setDeviceLostHandler:(id)arg1 ;
-(id)deviceChangedHandler;
-(void)setDeviceChangedHandler:(id)arg1 ;
-(CUBitCoder *)payloadCoder;
-(void)setPayloadCoder:(CUBitCoder *)arg1 ;
-(double)rescanInterval;
-(void)setRescanInterval:(double)arg1 ;
-(BOOL)rssiLog;
-(void)setRssiLog:(BOOL)arg1 ;
-(long long)rssiThreshold;
-(BOOL)scanCache;
-(long long)scanWindow;
-(void)setScanWindow:(long long)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
@end

