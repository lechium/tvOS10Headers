/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:08 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSFormatter.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSLocale, NSNumberFormatter;

@interface NSMeasurementFormatter : NSFormatter <NSSecureCoding> {

	void* _formatter;

}

@property (assign) unsigned long long unitOptions; 
@property (assign) long long unitStyle; 
@property (copy) NSLocale * locale; 
@property (copy) NSNumberFormatter * numberFormatter; 
+(BOOL)supportsSecureCoding;
-(void)setNumberFormatter:(NSNumberFormatter *)arg1 ;
-(NSNumberFormatter *)numberFormatter;
-(unsigned long long)unitOptions;
-(void)setUnitOptions:(unsigned long long)arg1 ;
-(id)stringFromUnit:(id)arg1 ;
-(id)stringFromMeasurement:(id)arg1 ;
-(id)measurementFromString:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(id)stringForObjectValue:(id)arg1 ;
-(long long)unitStyle;
-(void)setUnitStyle:(long long)arg1 ;
@end

