/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:54 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PSSpecifierObserver <NSObject>
@property (nonatomic,readonly) long long observerType; 
@required
-(void)dataSource:(id)arg1 performUpdates:(id)arg2;
-(void)invalidateSpecifiersForDataSource:(id)arg1;
-(long long)observerType;

@end

