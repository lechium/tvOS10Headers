/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:42 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SFCompanionXPCManagerObserver.h>
#import <libobjc.A.dylib/SFActivityAdvertiserClient.h>

@protocol SFActivityAdvertiserDelegate, SFActivityAdvertiserProtocol;
@class SFInternalAdvertisement, NSString;

@interface SFActivityAdvertiser : NSObject <SFCompanionXPCManagerObserver, SFActivityAdvertiserClient> {

	BOOL _xpcSetupInProgress;
	id<SFActivityAdvertiserDelegate> _delegate;
	id<SFActivityAdvertiserProtocol> _connectionProxy;
	SFInternalAdvertisement* _currentAdvertisement;

}

@property (assign) BOOL xpcSetupInProgress;                                       //@synthesize xpcSetupInProgress=_xpcSetupInProgress - In the implementation block
@property (retain) id<SFActivityAdvertiserProtocol> connectionProxy;              //@synthesize connectionProxy=_connectionProxy - In the implementation block
@property (retain) SFInternalAdvertisement * currentAdvertisement;                //@synthesize currentAdvertisement=_currentAdvertisement - In the implementation block
@property (assign) id<SFActivityAdvertiserDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedAdvertiser;
-(void)setDelegate:(id<SFActivityAdvertiserDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<SFActivityAdvertiserDelegate>)delegate;
-(void)xpcManagerConnectionInterrupted;
-(void)xpcManagerDidResumeConnection:(id)arg1 ;
-(id<SFActivityAdvertiserProtocol>)connectionProxy;
-(void)setConnectionProxy:(id<SFActivityAdvertiserProtocol>)arg1 ;
-(void)setupProxyIfNeeded;
-(BOOL)xpcSetupInProgress;
-(void)setXpcSetupInProgress:(BOOL)arg1 ;
-(SFInternalAdvertisement *)currentAdvertisement;
-(void)setCurrentAdvertisement:(SFInternalAdvertisement *)arg1 ;
-(void)activityPayloadForAdvertisementPayload:(id)arg1 command:(id)arg2 requestedByDevice:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)didSendPayloadForActivityIdentifier:(id)arg1 toDevice:(id)arg2 error:(id)arg3 ;
-(void)pairedDevicesChanged:(id)arg1 ;
-(void)fetchLoginIDWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)fetchSFPeerDevicesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)fetchPeerForUUID:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)advertiseAdvertisementPayload:(id)arg1 options:(id)arg2 ;
@end

