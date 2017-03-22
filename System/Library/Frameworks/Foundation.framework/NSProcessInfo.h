/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:09 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@class NSDictionary, NSArray, NSString;

@interface NSProcessInfo : NSObject {

	NSDictionary* environment;
	NSArray* arguments;
	NSString* hostName;
	NSString* name;
	long long automaticTerminationOptOutCounter;

}

@property (copy,readonly) NSString * userName; 
@property (copy,readonly) NSString * fullUserName; 
@property (copy,readonly) NSDictionary * environment; 
@property (copy,readonly) NSArray * arguments; 
@property (copy,readonly) NSString * hostName; 
@property (copy) NSString * processName; 
@property (readonly) int processIdentifier; 
@property (copy,readonly) NSString * globallyUniqueString; 
@property (copy,readonly) NSString * operatingSystemVersionString; 
@property (readonly) SCD_Struct_NS43 operatingSystemVersion; 
@property (readonly) unsigned long long processorCount; 
@property (readonly) unsigned long long activeProcessorCount; 
@property (readonly) unsigned long long physicalMemory; 
@property (readonly) double systemUptime; 
@property (assign) BOOL automaticTerminationSupportEnabled; 
+(id)processInfo;
-(void)performExpiringActivityWithReason:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_registerForHardwareStateNotifications;
-(id)beginActivityWithOptions:(unsigned long long)arg1 reason:(id)arg2 ;
-(void)_reactivateActivity:(id)arg1 ;
-(void)endActivity:(id)arg1 ;
-(unsigned long long)operatingSystem;
-(void)setArguments:(NSArray *)arg1 ;
-(NSString *)hostName;
-(void)setProcessName:(NSString *)arg1 ;
-(NSString *)globallyUniqueString;
-(NSString *)userName;
-(id)userFullName;
-(id)operatingSystemName;
-(NSString *)operatingSystemVersionString;
-(BOOL)isOperatingSystemAtLeastVersion:(SCD_Struct_NS43)arg1 ;
-(unsigned long long)activeProcessorCount;
-(BOOL)isTranslated;
-(void)disableSuddenTermination;
-(void)enableSuddenTermination;
-(void)_exitIfSuddenTerminationEnabledWithStatus:(int)arg1 ;
-(void)_exitWhenSuddenTerminationEnabledWithStatus:(int)arg1 ;
-(long long)_suddenTerminationDisablingCount;
-(void)disableAutomaticTermination:(id)arg1 ;
-(void)enableAutomaticTermination:(id)arg1 ;
-(void)setAutomaticTerminationSupportEnabled:(BOOL)arg1 ;
-(BOOL)automaticTerminationSupportEnabled;
-(void)_disableAutomaticTerminationOnly:(id)arg1 ;
-(void)_enableAutomaticTerminationOnly:(id)arg1 ;
-(void)performActivityWithOptions:(unsigned long long)arg1 reason:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)beginSuspensionOfSystemBehaviors:(unsigned long long)arg1 reason:(id)arg2 ;
-(void)endSystemBehaviorSuspension:(id)arg1 ;
-(void)performActivityWithOptions:(unsigned long long)arg1 reason:(id)arg2 block:(/*^block*/id)arg3 ;
-(BOOL)isLowPowerModeEnabled;
-(void)dealloc;
-(NSDictionary *)environment;
-(id)userHomeDirectory;
-(NSString *)processName;
-(double)systemUptime;
-(unsigned long long)processorCount;
-(int)processIdentifier;
-(SCD_Struct_NS43)operatingSystemVersion;
-(NSArray *)arguments;
-(unsigned long long)physicalMemory;
@end
