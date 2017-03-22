/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:08 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DAActionConsumer.h>

@class NSConditionLock;

@interface MFDAMailAccountConsumer : NSObject <DAActionConsumer> {

	NSConditionLock* _doneCondition;
	BOOL _shouldRetryRequest;
	BOOL _alwaysReportFailures;

}
-(void)dealloc;
-(id)init;
-(void)waitUntilDone;
-(BOOL)shouldRetryRequest;
-(id)initWithAlwaysReportFailures:(BOOL)arg1 ;
-(void)taskFailed:(id)arg1 statusCode:(long long)arg2 error:(id)arg3 ;
-(void)setDone:(BOOL)arg1 ;
-(void)actionFailed:(long long)arg1 forTask:(id)arg2 error:(id)arg3 ;
-(BOOL)waitUntilDoneBeforeDate:(id)arg1 ;
@end
