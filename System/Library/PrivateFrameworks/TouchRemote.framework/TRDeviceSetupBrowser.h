/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:50 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TRTransferBrowserDelegate.h>

@protocol TRDeviceSetupBrowserDelegate;
@class TRTransferBrowser, TRDeviceSetupPeripheral, NSString;

@interface TRDeviceSetupBrowser : NSObject <TRTransferBrowserDelegate> {

	id<TRDeviceSetupBrowserDelegate> _delegate;
	TRTransferBrowser* _transferBrowser;
	TRDeviceSetupPeripheral* _peripheral;

}

@property (nonatomic,retain) TRTransferBrowser * transferBrowser;                           //@synthesize transferBrowser=_transferBrowser - In the implementation block
@property (nonatomic,retain) TRDeviceSetupPeripheral * peripheral;                          //@synthesize peripheral=_peripheral - In the implementation block
@property (assign,nonatomic,__weak) id<TRDeviceSetupBrowserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long state; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)defer;
-(void)setDelegate:(id<TRDeviceSetupBrowserDelegate>)arg1 ;
-(id)init;
-(id<TRDeviceSetupBrowserDelegate>)delegate;
-(long long)state;
-(void)stop;
-(void)start;
-(TRDeviceSetupPeripheral *)peripheral;
-(void)setPeripheral:(TRDeviceSetupPeripheral *)arg1 ;
-(void)browser:(id)arg1 didStartTransferWithSendDataHandler:(/*^block*/id)arg2 ;
-(void)browserDidDisconnect:(id)arg1 ;
-(void)browser:(id)arg1 didReceiveData:(id)arg2 replyHandler:(/*^block*/id)arg3 ;
-(void)browserDidChangeState:(id)arg1 ;
-(TRTransferBrowser *)transferBrowser;
-(void)setTransferBrowser:(TRTransferBrowser *)arg1 ;
@end

