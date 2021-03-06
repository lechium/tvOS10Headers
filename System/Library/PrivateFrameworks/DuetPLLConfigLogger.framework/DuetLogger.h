/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:22 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/DuetPLLConfigLogger.framework/DuetPLLConfigLogger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <DuetPLLConfigLogger/DuetPLLConfigLogger-Structs.h>
@class NSObject, NSFileManager, NSString, NSMutableArray;

@interface DuetLogger : NSObject {

	asl_object_sRef log_client;
	asl_object_sRef log_msg;
	BOOL canWriteToFile;
	BOOL firstTime;
	NSObject*<OS_dispatch_queue> logQueue;
	int fd;
	NSFileManager* fileMgr;
	NSString* binaryName;
	NSString* filePath;
	NSString* fileName;
	NSString* homeDir;
	NSString* logState;
	NSMutableArray* duetLoggerSource;

}

@property (nonatomic,readonly) BOOL canWriteToFile; 
+(id)instance;
+(id)instance:(int)arg1 ;
-(void)dealloc;
-(void)addDataSource:(id)arg1 ;
-(void)setLoggingMode:(BOOL)arg1 ;
-(void)dumpAllLogs;
-(id)init:(id)arg1 withState:(id)arg2 ;
-(id)getUniqueFileName;
-(id)getHumanReadableTimeStamp;
-(void)createFile;
-(id)getTimeStamp;
-(void)logToFile:(id)arg1 ;
-(void)logToFileCString:(char*)arg1 ;
-(void)logToFileCStringSimpleDebug:(char*)arg1 ;
-(BOOL)canWriteToFile;
@end

