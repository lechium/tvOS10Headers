/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:17 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CVML.framework/CVML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDevice;
@class CIContext, NSHashTable, NSLock;

@interface CVMLImageBufferManager : NSObject {

	CIContext* mainCIContext;
	id<MTLDevice> mainCIContextMetalDevice;
	CIContext* lowPriorityCIContext;
	id<MTLDevice> lowPriorityCIContextMetalDevice;
	NSHashTable* activeImageBuffers;
	NSLock* bufferTableLock;

}
+(id)manager;
-(void)dealloc;
-(id)init;
-(void)purgeAllCaches;
-(void)addImageBuffer:(id)arg1 ;
-(void)removeBuffer:(id)arg1 ;
-(id)sharedCIContextWithOptions:(id)arg1 ;
@end
