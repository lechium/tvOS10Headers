/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:05 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSArray, SAHAFilter;

@interface SAHACommand : SADomainCommand

@property (nonatomic,copy) NSArray * actions; 
@property (nonatomic,retain) SAHAFilter * filter; 
+(id)commandWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)command;
-(void)setActions:(NSArray *)arg1 ;
-(NSArray *)actions;
-(void)setFilter:(SAHAFilter *)arg1 ;
-(SAHAFilter *)filter;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end
