/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:59 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CPLAbstractObject.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, NSURL, NSMutableArray, CPLPlatformObject;

@interface CPLEngineFileStorage : NSObject <CPLAbstractObject> {

	NSObject*<OS_dispatch_queue> _lock;
	NSString* _logDomain;
	NSURL* _crashMarkerURL;
	NSMutableArray* _uncommittedFiles;
	BOOL _keepOriginals;
	BOOL _deleteImmediately;
	CPLPlatformObject* _platformObject;
	NSURL* _baseURL;

}

@property (assign,nonatomic) BOOL keepOriginals;                                //@synthesize keepOriginals=_keepOriginals - In the implementation block
@property (assign,nonatomic) BOOL deleteImmediately;                            //@synthesize deleteImmediately=_deleteImmediately - In the implementation block
@property (nonatomic,readonly) NSURL * baseURL;                                 //@synthesize baseURL=_baseURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CPLPlatformObject * platformObject;              //@synthesize platformObject=_platformObject - In the implementation block
+(id)platformImplementationProtocol;
-(NSURL *)baseURL;
-(CPLPlatformObject *)platformObject;
-(BOOL)openWithRecoveryHandler:(/*^block*/id)arg1 error:(id*)arg2 ;
-(BOOL)doWrite:(/*^block*/id)arg1 error:(id*)arg2 ;
-(BOOL)storeFileAtURL:(id)arg1 identity:(id)arg2 isOriginal:(BOOL)arg3 needsCommit:(BOOL*)arg4 error:(id*)arg5 ;
-(BOOL)discardUncommittedFileWithIdentity:(id)arg1 error:(id*)arg2 ;
-(id)retainFileURLForIdentity:(id)arg1 resourceType:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)checkFileSizeForIdentity:(id)arg1 ;
-(void)doRead:(/*^block*/id)arg1 ;
-(BOOL)releaseFileURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)hasFileWithIdentity:(id)arg1 ;
-(BOOL)storeUnretainedFileAtURL:(id)arg1 identity:(id)arg2 isOriginal:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)deleteFileWithIdentity:(id)arg1 error:(id*)arg2 ;
-(BOOL)discardAllRetainedFileURLsWithError:(id*)arg1 ;
-(BOOL)compactStorage:(id*)arg1 ;
-(BOOL)commitFileWithIdentity:(id)arg1 error:(id*)arg2 ;
-(BOOL)_recoverFromCrashWithRecoveryHandler:(/*^block*/id)arg1 error:(id*)arg2 ;
-(BOOL)_fixupIdentity:(id)arg1 fileURL:(id)arg2 data:(id)arg3 error:(id*)arg4 ;
-(void)_addIdentityToUncommittedFiles:(id)arg1 ;
-(void)_removeIdentityFromUncommittedFiles:(id)arg1 ;
-(BOOL)deleteFileWithIdentity:(id)arg1 includingOriginal:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)storeUnretainedData:(id)arg1 identity:(id)arg2 isOriginal:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)compactStorageIncludeOriginals:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)tryToFreeDiskSpace:(unsigned long long)arg1 actuallyFreedSpace:(unsigned long long*)arg2 includeOriginals:(BOOL)arg3 error:(id*)arg4 ;
-(id)fileEnumeratorIncludingPropertiesForKeys:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(BOOL)_compactStorageIncludeOriginals:(BOOL)arg1 desiredFreeSpace:(unsigned long long*)arg2 error:(id*)arg3 ;
-(unsigned long long)countOfUncommittedFiles;
-(BOOL)hasCrashMarker;
-(BOOL)storeData:(id)arg1 identity:(id)arg2 isOriginal:(BOOL)arg3 needsCommit:(BOOL*)arg4 error:(id*)arg5 ;
-(BOOL)tryToFreeDiskSpace:(unsigned long long)arg1 actuallyFreedSpace:(unsigned long long*)arg2 error:(id*)arg3 ;
-(id)fileEnumerator;
-(BOOL)keepOriginals;
-(void)setKeepOriginals:(BOOL)arg1 ;
-(BOOL)deleteImmediately;
-(void)setDeleteImmediately:(BOOL)arg1 ;
-(BOOL)closeWithError:(id*)arg1 ;
-(id)initWithBaseURL:(id)arg1 ;
@end

