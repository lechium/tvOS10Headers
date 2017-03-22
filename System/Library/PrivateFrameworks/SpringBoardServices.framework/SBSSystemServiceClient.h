/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:24 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardServices/SBSServiceFacilityClient.h>

@interface SBSSystemServiceClient : SBSServiceFacilityClient {

	BOOL _buttonEventServiceIsWaitingForServerMessages;

}
+(id)serviceFacilityIdentifier;
-(void)handleMessage:(id)arg1 withType:(long long)arg2 ;
-(void)fetchUnlockCredentialSetWithCompletion:(/*^block*/id)arg1 ;
-(void)acquireAssertionOfType:(long long)arg1 forReason:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)setEventMask:(unsigned long long)arg1 forButtonKind:(long long)arg2 priority:(long long)arg3 ;
-(void)setHapticType:(long long)arg1 forButtonKind:(long long)arg2 ;
-(void)fetchHapticTypeForButtonKind:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)setButtonEventServiceIsWaitingForServerMessages:(BOOL)arg1 ;
-(void)_handleButtonEventConsumePressMessage:(id)arg1 ;
@end
