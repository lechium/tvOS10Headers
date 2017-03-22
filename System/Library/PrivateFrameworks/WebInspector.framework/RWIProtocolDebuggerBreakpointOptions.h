/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:41 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, NSArray;

@interface RWIProtocolDebuggerBreakpointOptions : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * condition; 
@property (nonatomic,copy) NSArray * actions; 
@property (assign,nonatomic) BOOL autoContinue; 
@property (assign,nonatomic) int ignoreCount; 
-(void)setActions:(NSArray *)arg1 ;
-(NSArray *)actions;
-(NSString *)condition;
-(void)setCondition:(NSString *)arg1 ;
-(void)setAutoContinue:(BOOL)arg1 ;
-(BOOL)autoContinue;
-(void)setIgnoreCount:(int)arg1 ;
-(int)ignoreCount;
@end
