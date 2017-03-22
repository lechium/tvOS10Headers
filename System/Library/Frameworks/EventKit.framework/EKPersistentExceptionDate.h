/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:26 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentObject.h>

@class NSDate, EKPersistentCalendarItem;

@interface EKPersistentExceptionDate : EKPersistentObject

@property (nonatomic,readonly) NSDate * date; 
@property (nonatomic,retain) EKPersistentCalendarItem * owner; 
+(id)relations;
+(id)exceptionDateWithDate:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSDate *)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(EKPersistentCalendarItem *)owner;
-(void)setOwner:(EKPersistentCalendarItem *)arg1 ;
-(id)initWithExceptionDate:(id)arg1 ;
-(int)entityType;
@end
