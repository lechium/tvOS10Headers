/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:43 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CBScalablePipeManagerDelegate <NSObject>
@required
-(void)scalablePipeManagerDidUpdateState:(id)arg1;
-(void)scalablePipeManager:(id)arg1 didRegisterEndpoint:(id)arg2 error:(id)arg3;
-(void)scalablePipeManager:(id)arg1 didUnregisterEndpoint:(id)arg2;
-(void)scalablePipeManager:(id)arg1 pipeDidConnect:(id)arg2;
-(void)scalablePipeManager:(id)arg1 pipeDidDisconnect:(id)arg2 error:(id)arg3;

@end

