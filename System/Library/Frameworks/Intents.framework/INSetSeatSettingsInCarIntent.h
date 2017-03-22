/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:07 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INSetSeatSettingsInCarIntentExport.h>

@class NSNumber, NSString;

@interface INSetSeatSettingsInCarIntent : INIntent <INSetSeatSettingsInCarIntentExport>

@property (nonatomic,copy,readonly) NSNumber * enableHeating; 
@property (nonatomic,copy,readonly) NSNumber * enableCooling; 
@property (nonatomic,copy,readonly) NSNumber * enableMassage; 
@property (nonatomic,readonly) long long seat; 
@property (nonatomic,copy,readonly) NSNumber * level; 
@property (nonatomic,readonly) long long relativeLevelSetting; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)setLevel:(NSNumber *)arg1 ;
-(NSNumber *)level;
-(id)_dictionaryRepresentation;
-(id)_metadata;
-(id)_typedBackingStore;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 ;
-(void)setEnableHeating:(NSNumber *)arg1 ;
-(void)setEnableCooling:(NSNumber *)arg1 ;
-(void)setEnableMassage:(NSNumber *)arg1 ;
-(void)setSeat:(long long)arg1 ;
-(void)setRelativeLevelSetting:(long long)arg1 ;
-(NSNumber *)enableHeating;
-(NSNumber *)enableCooling;
-(NSNumber *)enableMassage;
-(long long)seat;
-(long long)relativeLevelSetting;
-(id)initWithEnableHeating:(id)arg1 enableCooling:(id)arg2 enableMassage:(id)arg3 seat:(long long)arg4 level:(id)arg5 relativeLevelSetting:(long long)arg6 ;
@end
