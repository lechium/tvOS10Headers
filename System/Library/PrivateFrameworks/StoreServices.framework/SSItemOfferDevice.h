/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:49 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SSItemOfferDeviceError, NSString;

@interface SSItemOfferDevice : NSObject {

	long long _deviceIdentifier;
	SSItemOfferDeviceError* _incompatibleDeviceError;
	SSItemOfferDeviceError* _incompatibleSystemError;
	NSString* _minimumProductVersion;

}

@property (nonatomic,readonly) long long deviceIdentifier;                                    //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * minimumProductVersion;                              //@synthesize minimumProductVersion=_minimumProductVersion - In the implementation block
@property (nonatomic,readonly) SSItemOfferDeviceError * incompatibleDeviceError;              //@synthesize incompatibleDeviceError=_incompatibleDeviceError - In the implementation block
@property (nonatomic,readonly) SSItemOfferDeviceError * incompatibleSystemError;              //@synthesize incompatibleSystemError=_incompatibleSystemError - In the implementation block
-(id)initWithOfferDeviceDicitionary:(id)arg1 ;
-(id)initWithDeviceIdentifier:(long long)arg1 ;
-(SSItemOfferDeviceError *)incompatibleDeviceError;
-(SSItemOfferDeviceError *)incompatibleSystemError;
-(NSString *)minimumProductVersion;
-(void)dealloc;
-(id)init;
-(long long)deviceIdentifier;
@end
