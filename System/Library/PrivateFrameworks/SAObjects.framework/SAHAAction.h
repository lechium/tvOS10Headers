/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:04 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString, SAHAAttributeValue;

@interface SAHAAction : SADomainObject

@property (nonatomic,copy) NSString * actionType; 
@property (nonatomic,copy) NSString * attribute; 
@property (nonatomic,retain) SAHAAttributeValue * value; 
+(id)action;
+(id)actionWithDictionary:(id)arg1 context:(id)arg2 ;
-(SAHAAttributeValue *)value;
-(void)setValue:(SAHAAttributeValue *)arg1 ;
-(NSString *)actionType;
-(void)setActionType:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setAttribute:(NSString *)arg1 ;
-(NSString *)attribute;
@end

