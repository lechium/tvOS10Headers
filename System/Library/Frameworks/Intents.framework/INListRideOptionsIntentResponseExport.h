/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:04 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, NSDate;


@protocol INListRideOptionsIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) NSArray * rideOptions; 
@property (nonatomic,copy) NSArray * paymentMethods; 
@property (nonatomic,copy) NSDate * expirationDate; 
@required
-(long long)code;
-(void)setExpirationDate:(id)arg1;
-(NSDate *)expirationDate;
-(NSArray *)rideOptions;
-(NSArray *)paymentMethods;
-(void)setPaymentMethods:(id)arg1;
-(void)setRideOptions:(id)arg1;

@end

