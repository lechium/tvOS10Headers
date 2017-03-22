/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:33 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSLock, NSString, NSObject;

@interface GEOLogMessageFactory : NSObject {

	NSLock* _lock;
	NSString* _carrierOperatorName;
	NSLock* _carrierNameLock;
	NSLock* _coreTelephonyServerLock;
	NSObject*<OS_dispatch_queue> _carrierNameQueue;

}

@property (nonatomic,readonly) NSString * carrierOperatorName; 
+(id)sharedInstance;
+(BOOL)deviceHasRadio;
-(void)dealloc;
-(id)init;
-(int)_bucketValueForTimeDelta:(double)arg1 ;
-(NSString *)carrierOperatorName;
-(void)_connectToCoreTelephonyServer;
-(void)_updateCarrierOperatorName;
-(id)_retrieveCarrierOperatorName;
@end
