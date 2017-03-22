/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:03 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/_HMAccessoryProfile.h>

@class _HMCameraStreamControl, _HMCameraSnapshotControl, _HMCameraSettingsControl, _HMCameraAudioControl, NSArray;

@interface _HMCameraProfile : _HMAccessoryProfile {

	_HMCameraStreamControl* _streamControlInternal;
	_HMCameraSnapshotControl* _snapshotControlInternal;
	_HMCameraSettingsControl* _settingsControl;
	_HMCameraAudioControl* _speakerControl;
	_HMCameraAudioControl* _microphoneControl;

}

@property (nonatomic,readonly) _HMCameraStreamControl * streamControlInternal;                  //@synthesize streamControlInternal=_streamControlInternal - In the implementation block
@property (nonatomic,readonly) _HMCameraSnapshotControl * snapshotControlInternal;              //@synthesize snapshotControlInternal=_snapshotControlInternal - In the implementation block
@property (nonatomic,readonly) _HMCameraSettingsControl * settingsControl;                      //@synthesize settingsControl=_settingsControl - In the implementation block
@property (nonatomic,readonly) _HMCameraAudioControl * speakerControl;                          //@synthesize speakerControl=_speakerControl - In the implementation block
@property (nonatomic,readonly) _HMCameraAudioControl * microphoneControl;                       //@synthesize microphoneControl=_microphoneControl - In the implementation block
@property (nonatomic,readonly) NSArray * controls; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSArray *)controls;
-(_HMCameraSettingsControl *)settingsControl;
-(void)_createControls:(id)arg1 ;
-(_HMCameraStreamControl *)streamControlInternal;
-(_HMCameraSnapshotControl *)snapshotControlInternal;
-(_HMCameraAudioControl *)microphoneControl;
-(_HMCameraAudioControl *)speakerControl;
-(void)configureWithAccessory:(id)arg1 clientQueue:(id)arg2 delegateCaller:(id)arg3 msgDispatcher:(id)arg4 home:(id)arg5 ;
-(void)_registerNotificationHandlers;
@end
