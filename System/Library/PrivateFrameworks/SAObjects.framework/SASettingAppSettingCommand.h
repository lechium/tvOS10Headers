/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:13 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol SASettingAppSettingCommand <SAAceSerializable,SAClientBoundCommand>
@property (nonatomic,copy) NSString * appWithSettingsId; 
@property (nonatomic,copy) NSString * location; 
@required
-(NSString *)location;
-(void)setLocation:(id)arg1;
-(NSString *)appWithSettingsId;
-(void)setAppWithSettingsId:(id)arg1;

@end

