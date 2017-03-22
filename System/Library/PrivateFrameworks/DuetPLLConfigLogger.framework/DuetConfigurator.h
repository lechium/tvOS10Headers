/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:22 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/DuetPLLConfigLogger.framework/DuetPLLConfigLogger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetPLLConfigLogger/DuetPLLConfigLogger-Structs.h>
#import <DuetPLLConfigLogger/DuetLoggerProtocol.h>

@class NSBundle, NSMutableDictionary, NSMutableArray, NSUserDefaults;

@interface DuetConfigurator : NSObject <DuetLoggerProtocol> {

	NSBundle* bundle;
	NSMutableDictionary* dictOfConfigurations;
	NSMutableDictionary* appBlackMap;
	NSMutableArray* appWhiteListArray;
	NSUserDefaults* sbDomain;
	NSUserDefaults* bkbdDDomain;

}

@property (nonatomic,retain,readonly) NSMutableDictionary * appBlackMap; 
@property (nonatomic,retain,readonly) NSMutableArray * appWhiteListArray; 
+(id)sharedInstance;
-(id)init;
-(long long)getInt64For:(id)arg1 ;
-(NSMutableArray *)appWhiteListArray;
-(void)logAll:(asl_object_sRef)arg1 withMsg:(asl_object_sRef)arg2 withLevel:(int)arg3 ;
-(void)logLight:(asl_object_sRef)arg1 withMsg:(asl_object_sRef)arg2 withLevel:(int)arg3 ;
-(void)reloadBundleFromDisk;
-(double)getDoubleFor:(id)arg1 ;
-(NSMutableDictionary *)appBlackMap;
-(void)loadBundleConfigurations;
-(id)getNSNumberFor:(id)arg1 ;
-(void)loadConfigurations:(id)arg1 ;
-(void)updateSpringBoardConfiguration:(id)arg1 ;
@end
