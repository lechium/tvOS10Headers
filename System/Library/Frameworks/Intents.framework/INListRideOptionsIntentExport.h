/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:03 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class CLPlacemark;


@protocol INListRideOptionsIntentExport <NSObject,JSExport>
@property (nonatomic,copy) CLPlacemark * pickupLocation; 
@property (nonatomic,copy) CLPlacemark * dropOffLocation; 
@required
-(id)init;
-(void)setPickupLocation:(id)arg1;
-(void)setDropOffLocation:(id)arg1;
-(CLPlacemark *)pickupLocation;
-(CLPlacemark *)dropOffLocation;

@end
