/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:54 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSString;

@interface TVSDataQueryProcessor : NSObject {

	NSObject*<OS_dispatch_queue> _serialProcessingQueue;
	NSMutableDictionary* _dataClientQueryRecords;
	NSString* _processingQueueName;

}

@property (nonatomic,copy) NSString * processingQueueName;              //@synthesize processingQueueName=_processingQueueName - In the implementation block
+(void)initialize;
-(void)shutdownClient:(id)arg1 ;
-(void)processQuery:(id)arg1 concurrentCount:(int)arg2 dataClient:(id)arg3 priority:(long long)arg4 withCompletionQueue:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(id)initWithQueueName:(id)arg1 ;
-(void)executeFirstQuery:(id)arg1 dataClient:(id)arg2 ;
-(void)completeQuery:(id)arg1 dataClient:(id)arg2 ;
-(void)executeQuery:(id)arg1 andProcessNextWithDataClient:(id)arg2 ;
-(NSString *)processingQueueName;
-(void)setProcessingQueueName:(NSString *)arg1 ;
@end

