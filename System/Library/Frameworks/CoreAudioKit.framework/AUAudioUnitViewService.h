/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:01 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/AUAudioUnitRemoteViewProtocol.h>

@class AURemoteExtensionContext, NSString;

@interface AUAudioUnitViewService : UIViewController <AUAudioUnitRemoteViewProtocol> {

	AURemoteExtensionContext* _extensionContext;

}

@property (assign) AURemoteExtensionContext * extensionContext;              //@synthesize extensionContext=_extensionContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(AURemoteExtensionContext *)extensionContext;
-(void)loadView;
-(id)exportedInterface;
-(id)remoteViewControllerInterface;
-(void)connectToContextWithSessionID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_connectChildView:(/*^block*/id)arg1 ;
-(void)setExtensionContext:(AURemoteExtensionContext *)arg1 ;
@end

