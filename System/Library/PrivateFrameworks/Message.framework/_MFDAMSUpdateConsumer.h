/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:09 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/_MFDAMSBasicConsumer.h>
#import <libobjc.A.dylib/MFDASyncActionsConsumer.h>

@interface _MFDAMSUpdateConsumer : _MFDAMSBasicConsumer <MFDASyncActionsConsumer>
-(void)handleResponse:(id)arg1 error:(id)arg2 ;
-(BOOL)handleItems:(id)arg1 ;
-(void)drainMailbox;
-(void)receiveSyncActions:(id)arg1 ;
-(void)commitSyncActions;
@end

