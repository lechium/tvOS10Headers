/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:43 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CUDashboardClient : NSObject {

	SCD_Union_CU7 _destAddr;
	unsigned _destLen;
	unsigned char _key[32];
	char _model[32];
	char _osBuild[32];
	int _sock;
	unsigned char _udid[20];
	NSString* _server;

}

@property (nonatomic,retain) NSString * server;              //@synthesize server=_server - In the implementation block
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(NSString *)server;
-(int)activate;
-(int)_logCStr:(const char*)arg1 length:(unsigned long long)arg2 ;
-(int)_setupSocket;
-(void)setServer:(NSString *)arg1 ;
-(int)_activate;
-(int)logf:(const char*)arg1 ;
-(int)logv:(const char*)arg1 args:(char*)arg2 ;
-(int)logJSON:(id)arg1 ;
@end

