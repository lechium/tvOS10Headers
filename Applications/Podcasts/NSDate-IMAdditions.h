//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDate.h"

@interface NSDate (IMAdditions)
+ (id)stringWithDurationLongMinutes:(double)arg1;	// IMP=0x0000000100199724
+ (id)stringWithDurationRentalDuration:(double)arg1;	// IMP=0x0000000100199450
+ (id)stringWithDurationRentalExpiration:(double)arg1 shouldWarn:(_Bool *)arg2;	// IMP=0x0000000100199440
+ (id)stringWithDurationRentalExpiration:(double)arg1 shouldWarn:(_Bool *)arg2 abbreviated:(_Bool)arg3;	// IMP=0x00000001001991b0
+ (id)stringWithDurationSongWithHours:(double)arg1;	// IMP=0x0000000100199068
+ (id)stringWithDuration:(double)arg1;	// IMP=0x0000000100198f2c
+ (id)mailLikeDescriptionFromDate:(id)arg1;	// IMP=0x0000000100198e70
+ (id)downloadDurationStringFromTime:(double)arg1;	// IMP=0x0000000100198e64
+ (id)downloadDurationStringFromTime_Phone:(double)arg1;	// IMP=0x0000000100198e58
+ (id)shortStandardTimeStringFromDate:(id)arg1;	// IMP=0x0000000100198db4
+ (id)amPMStringFromDate:(id)arg1;	// IMP=0x0000000100198cc8
+ (id)postTimeStringFromDate:(id)arg1;	// IMP=0x0000000100198c44
+ (id)dayOfWeekFromDate:(id)arg1;	// IMP=0x0000000100198ba8
+ (id)monthYearFromDate:(id)arg1;	// IMP=0x0000000100198b64
+ (id)dateFormatterWithTemplate:(id)arg1;	// IMP=0x000000010019897c
+ (id)longDayStringFromDate:(id)arg1;	// IMP=0x00000001001988e0
+ (id)shortTimeStringFromDate:(id)arg1;	// IMP=0x00000001001988c8
+ (id)longDateStringFromDate:(id)arg1;	// IMP=0x00000001001988b0
+ (id)mediumDateStringFromDate:(id)arg1;	// IMP=0x0000000100198898
+ (id)shortDateStringFromDate:(id)arg1;	// IMP=0x0000000100198880
+ (id)shortDateStringFromDateNoRel:(id)arg1;	// IMP=0x0000000100198868
+ (id)dateStringFromDate:(id)arg1 withDateStyle:(unsigned long long)arg2 timeStyle:(unsigned long long)arg3 isRelative:(_Bool)arg4;	// IMP=0x00000001001986a8
+ (id)dateFormatter;	// IMP=0x00000001001985d4
- (id)daysFromToday;	// IMP=0x0000000100199ba4
- (_Bool)nextWeek;	// IMP=0x0000000100199b5c
- (_Bool)thisWeek;	// IMP=0x0000000100199b1c
- (_Bool)lastWeek;	// IMP=0x0000000100199ad4
- (_Bool)inSameWeekAs:(id)arg1;	// IMP=0x0000000100199a00
- (id)dateForBeginningOfMonth;	// IMP=0x0000000100199948
- (id)dateForEndOfDay;	// IMP=0x0000000100199880
- (id)dateForBeginningOfDay;	// IMP=0x00000001001997b8
- (id)dateAtWeekStart;	// IMP=0x0000000100198578
- (_Bool)isNextWeek;	// IMP=0x0000000100198528
- (_Bool)wasLessThanAWeekAgo;	// IMP=0x00000001001984b4
- (_Bool)wasLastWeek;	// IMP=0x0000000100198464
- (_Bool)isThisWeek;	// IMP=0x0000000100198424
- (_Bool)wasYesterday;	// IMP=0x00000001001983d4
- (_Bool)isFuture;	// IMP=0x0000000100198388
- (_Bool)isToday;	// IMP=0x0000000100198348
- (id)dateWithDeltaWeeks:(long long)arg1;	// IMP=0x00000001001982a0
- (id)dateWithDeltaDays:(long long)arg1;	// IMP=0x00000001001981f8
- (_Bool)isEqualToYear:(id)arg1;	// IMP=0x0000000100198124
- (_Bool)isEqualToWeek:(id)arg1;	// IMP=0x0000000100198050
- (_Bool)isEqualToDay:(id)arg1;	// IMP=0x0000000100197fa0
@end

