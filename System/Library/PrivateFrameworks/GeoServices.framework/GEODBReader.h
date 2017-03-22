/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:12 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <GeoServices/GeoServices-Structs.h>
@class NSObject, NSString;

@interface GEODBReader : NSObject {

	BOOL _defunct;
	BOOL _closed;
	int _editionUpdating;
	NSObject*<OS_dispatch_queue> _readQueue;
	NSString* _path;
	sqlite3Ref _db;
	sqlite3_stmtRef _tileQuery;
	sqlite3_stmtRef _versionQuery;
	SCD_Struct_GE68* _expirationRecords;
	unsigned long long _expirationRecordCount;

}

@property (assign) BOOL closed; 
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
-(void)_databaseReset:(id)arg1 ;
-(void)_deviceLocking;
-(void)_editionUpdateBegin:(id)arg1 ;
-(void)_editionUpdateEnd:(id)arg1 ;
-(void)_closeDB;
-(void)_openDB;
-(BOOL)closed;
-(void)setClosed:(BOOL)arg1 ;
-(id)_dataForA:(unsigned)arg1 andB:(unsigned)arg2 andC:(unsigned)arg3 andD:(unsigned)arg4 isCurrent:(BOOL*)arg5 eTag:(id*)arg6 ;
-(id)_dataForKey:(GEOTileKey)arg1 isCurrent:(BOOL*)arg2 eTag:(id*)arg3 ;
-(id)dataForKey:(GEOTileKey*)arg1 isCurrent:(BOOL*)arg2 eTag:(id*)arg3 ;
-(void)dataForKey:(GEOTileKey*)arg1 asyncHandler:(/*^block*/id)arg2 ;
-(void)dataForKeys:(GEOTileKeyList*)arg1 asyncHandler:(/*^block*/id)arg2 ;
-(void)setExpirationRecords:(SCD_Struct_GE68*)arg1 count:(unsigned long long)arg2 ;
@end
