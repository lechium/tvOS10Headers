/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:43 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber, HAPService, HAPCharacteristicMetadata, NSDate, CBCharacteristic;

@interface HAPCharacteristic : NSObject {

	BOOL _eventNotificationsEnabled;
	BOOL _shouldValidateValueAfterReading;
	NSString* _type;
	NSNumber* _instanceID;
	HAPService* _service;
	unsigned long long _properties;
	HAPCharacteristicMetadata* _metadata;
	id _value;
	NSDate* _valueUpdatedTime;
	NSNumber* _stateNumber;
	HAPCharacteristicMetadata* _accessoryMetadata;

}

@property (setter=setCBCharacteristic:,nonatomic,retain) CBCharacteristic * cbCharacteristic; 
@property (nonatomic,copy) NSString * type;                                                                //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSNumber * instanceID;                                                          //@synthesize instanceID=_instanceID - In the implementation block
@property (assign,nonatomic,__weak) HAPService * service;                                                  //@synthesize service=_service - In the implementation block
@property (assign,nonatomic) unsigned long long properties;                                                //@synthesize properties=_properties - In the implementation block
@property (assign,nonatomic) BOOL eventNotificationsEnabled;                                               //@synthesize eventNotificationsEnabled=_eventNotificationsEnabled - In the implementation block
@property (nonatomic,copy) HAPCharacteristicMetadata * metadata;                                           //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) HAPCharacteristicMetadata * accessoryMetadata;                              //@synthesize accessoryMetadata=_accessoryMetadata - In the implementation block
@property (nonatomic,retain) NSDate * valueUpdatedTime;                                                    //@synthesize valueUpdatedTime=_valueUpdatedTime - In the implementation block
@property (assign,nonatomic) BOOL shouldValidateValueAfterReading;                                         //@synthesize shouldValidateValueAfterReading=_shouldValidateValueAfterReading - In the implementation block
@property (setter=setValue:,nonatomic,copy) id value;                                                      //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSNumber * stateNumber;                                                     //@synthesize stateNumber=_stateNumber - In the implementation block
@property (nonatomic,readonly) BOOL supportsAdditionalAuthorizationData; 
-(id)description;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(id)value;
-(void)setValue:(id)arg1 ;
-(void)setProperties:(unsigned long long)arg1 ;
-(unsigned long long)properties;
-(HAPCharacteristicMetadata *)metadata;
-(void)setMetadata:(HAPCharacteristicMetadata *)arg1 ;
-(void)setService:(HAPService *)arg1 ;
-(void)setEventNotificationsEnabled:(BOOL)arg1 ;
-(BOOL)shouldValidateValueAfterReading;
-(BOOL)eventNotificationsEnabled;
-(BOOL)isEqualToCharacteristic:(id)arg1 ;
-(void)setShouldValidateValueAfterReading:(BOOL)arg1 ;
-(id)initWithType:(id)arg1 instanceID:(id)arg2 value:(id)arg3 stateNumber:(id)arg4 properties:(unsigned long long)arg5 eventNotificationsEnabled:(BOOL)arg6 metadata:(id)arg7 ;
-(HAPCharacteristicMetadata *)accessoryMetadata;
-(id)propertiesDescription;
-(CBCharacteristic *)cbCharacteristic;
-(void)setCBCharacteristic:(id)arg1 ;
-(void)setValueUpdatedTime:(NSDate *)arg1 ;
-(void)_updateMetadata:(id)arg1 withProvidedMetadata:(id)arg2 ;
-(id)_generateValidMetadata:(id)arg1 ;
-(BOOL)supportsAdditionalAuthorizationData;
-(NSNumber *)instanceID;
-(HAPService *)service;
-(NSNumber *)stateNumber;
-(id)validateValue:(id)arg1 outValue:(id*)arg2 ;
-(void)setInstanceID:(NSNumber *)arg1 ;
-(NSDate *)valueUpdatedTime;
@end
