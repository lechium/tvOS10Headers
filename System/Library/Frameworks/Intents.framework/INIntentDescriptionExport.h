/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:03 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDictionary;


@protocol INIntentDescriptionExport <NSObject,JSExport>
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * responseName; 
@property (nonatomic,readonly) Class facadeClass; 
@property (nonatomic,readonly) Class dataClass; 
@property (nonatomic,copy,readonly) NSString * type; 
@property (nonatomic,readonly) BOOL isPrivate; 
@property (nonatomic,readonly) SEL handleSelector; 
@property (nonatomic,readonly) SEL confirmSelector; 
@property (nonatomic,copy,readonly) NSDictionary * slotsByName; 
@required
-(id)init;
-(NSString *)name;
-(NSString *)type;
-(NSString *)responseName;
-(Class)facadeClass;
-(Class)dataClass;
-(BOOL)isPrivate;
-(SEL)handleSelector;
-(SEL)confirmSelector;
-(NSDictionary *)slotsByName;

@end
