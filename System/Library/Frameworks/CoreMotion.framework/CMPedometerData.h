/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:54 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSNumber, NSUUID;

@interface CMPedometerData : NSObject <NSSecureCoding, NSCopying> {

	NSDate* fStartDate;
	NSDate* fEndDate;
	NSNumber* fNumberOfSteps;
	NSNumber* fDistance;
	NSNumber* fFloorsAscended;
	NSNumber* fFloorsDescended;
	NSNumber* fRecordId;
	NSNumber* fCurrentPace;
	NSNumber* fCurrentCadence;
	NSNumber* fActiveTime;
	NSUUID* fSourceId;
	NSNumber* fIsOdometerDistance;
	NSNumber* fIsOdometerPace;
	NSNumber* fNumberOfPushes;
	NSNumber* fWorkoutType;

}

@property (nonatomic,readonly) long long recordId; 
@property (nonatomic,readonly) NSUUID * sourceId; 
@property (nonatomic,readonly) NSNumber * numberOfPushes; 
@property (nonatomic,readonly) NSNumber * workoutType; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) NSNumber * numberOfSteps; 
@property (nonatomic,readonly) NSNumber * distance; 
@property (nonatomic,readonly) NSNumber * floorsAscended; 
@property (nonatomic,readonly) NSNumber * floorsDescended; 
@property (nonatomic,readonly) NSNumber * currentPace; 
@property (nonatomic,readonly) NSNumber * currentCadence; 
@property (nonatomic,readonly) NSNumber * averageActivePace; 
+(BOOL)supportsSecureCoding;
+(id)maxPedometerEntries;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)numberOfSteps;
-(NSNumber *)numberOfPushes;
-(NSNumber *)floorsAscended;
-(NSNumber *)floorsDescended;
-(id)activeTime;
-(NSNumber *)currentPace;
-(NSNumber *)currentCadence;
-(BOOL)isOdometerDistance;
-(BOOL)isOdometerPace;
-(id)initWithStartDate:(double)arg1 endDate:(double)arg2 steps:(int)arg3 distance:(double)arg4 floorsAscended:(id)arg5 floorsDescended:(id)arg6 recordID:(long long)arg7 currentPace:(id)arg8 currentCadence:(id)arg9 activeTime:(id)arg10 sourceId:(id)arg11 isOdometerDistance:(id)arg12 isOdometerPace:(id)arg13 pushes:(int)arg14 workoutType:(int)arg15 ;
-(NSNumber *)averageActivePace;
-(NSNumber *)distance;
-(NSUUID *)sourceId;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(long long)recordId;
-(NSNumber *)workoutType;
@end
