/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:12 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PrototypeTools/PrototypeTools-Structs.h>
#import <PrototypeTools/PTSRowAction.h>

@class NSString;

@interface PTSRestoreDefaultSettingsRowAction : PTSRowAction {

	NSString* _settingsKeyPath;

}

@property (nonatomic,copy) NSString * settingsKeyPath;              //@synthesize settingsKeyPath=_settingsKeyPath - In the implementation block
+(id)actionWithSettingsKeyPath:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)resolveTemplatesWithIndex:(unsigned long long)arg1 ;
-(void)setSettingsKeyPath:(NSString *)arg1 ;
-(NSString *)settingsKeyPath;
@end

