/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:31 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HAPAccessoryServerBrowserDelegate <NSObject>
@required
-(void)accessoryServerBrowser:(id)arg1 didFindAccessoryServer:(id)arg2 stateChanged:(BOOL)arg3 stateNumber:(id)arg4;
-(void)accessoryServerBrowser:(id)arg1 didRemoveAccessoryServer:(id)arg2;
-(void)accessoryServerBrowser:(id)arg1 didStartDiscoveringWithError:(id)arg2;
-(void)accessoryServerBrowser:(id)arg1 didStopDiscoveringWithError:(id)arg2;
-(void)accessoryServerBrowser:(id)arg1 didFailToDiscoverAccessoryServerWithIdentifier:(id)arg2;

@end

