/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:12 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VSViewControllerFactory : NSObject
+(id)sharedFactory;
-(id)identityProviderPickerViewControllerWithIdentityProviders:(id)arg1 ;
-(id)viewControlllerForUnsupportedProvider:(id)arg1 withRequestingAppDisplayName:(id)arg2 acknowledgementHandler:(/*^block*/id)arg3 ;
-(void)viewServiceRemoteViewControllerWithCompletion:(/*^block*/id)arg1 ;
-(id)autoAuthenticationViewController;
-(id)credentialEntryViewController;
-(id)onscreenCodeAuthenticationViewController;
-(id)webAuthenticationViewController;
-(id)loadingViewController;
-(id)viewControllerToConfirmAccountDeletionForIdentityProviderDisplayName:(id)arg1 preferredStyle:(long long)arg2 confirmationHandler:(/*^block*/id)arg3 ;
-(id)viewControllerToConfirmDeveloperIdentityProviderDeletionWithConfirmationHandler:(/*^block*/id)arg1 ;
-(id)viewControllerForAboutPrivacyWithTarget:(id)arg1 action:(SEL)arg2 ;
@end

