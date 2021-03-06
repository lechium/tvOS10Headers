/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:41 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantTV.framework/SetupAssistantTV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SetupAssistantTV/SATVTableViewController.h>
#import <libobjc.A.dylib/SATVTouchRemoteSetupManagerDelegate.h>

@class UILabel, NSString;

@interface SATVTapToSetupController : SATVTableViewController <SATVTouchRemoteSetupManagerDelegate> {

	UILabel* _footerLabel;
	NSString* _setupDeviceName;
	NSString* _setupNetworkName;

}

@property (nonatomic,copy) NSString * setupDeviceName;               //@synthesize setupDeviceName=_setupDeviceName - In the implementation block
@property (nonatomic,copy) NSString * setupNetworkName;              //@synthesize setupNetworkName=_setupNetworkName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)controllerNeedsToRun;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)_stopTouchRemoteSetup;
-(void)_startTouchRemoteSetup;
-(void)_showFooterLabelHint;
-(void)setSetupDeviceName:(NSString *)arg1 ;
-(void)setSetupNetworkName:(NSString *)arg1 ;
-(NSString *)setupDeviceName;
-(NSString *)setupNetworkName;
-(id)presentingControllerForSetupManager:(id)arg1 ;
-(void)touchRemoteSetupManagerDidPromptToBeginSetup:(id)arg1 ;
-(void)touchRemoteSetupManager:(id)arg1 didBeginSetupWithDeviceName:(id)arg2 ;
-(void)touchRemoteSetupManager:(id)arg1 didBeginConfigurationPhase:(long long)arg2 withMetadata:(id)arg3 ;
-(BOOL)touchRemoteSetupManager:(id)arg1 shouldConnectToNetworkWithName:(id)arg2 ;
-(void)touchRemoteSetupManager:(id)arg1 networkConnectionStateDidChange:(long long)arg2 ;
-(void)touchRemoteSetupManager:(id)arg1 willAttemptAuthenticationForAccount:(unsigned long long)arg2 ;
-(void)touchRemoteSetupManager:(id)arg1 didFinishAuthenticationForAccount:(unsigned long long)arg2 withResult:(BOOL)arg3 error:(id)arg4 ;
-(void)touchRemoteSetupManagerDidFinishSetup:(id)arg1 ;
-(void)touchRemoteSetupManager:(id)arg1 didFailSetupWithError:(id)arg2 ;
-(void)touchRemoteSetupManager:(id)arg1 presentErrorAlert:(id)arg2 ;
-(void)touchRemoteSetupManagerStartTimeoutExpired:(id)arg1 ;
-(void)_restartTouchRemoteSetup;
-(void)_presentError:(id)arg1 ;
@end

