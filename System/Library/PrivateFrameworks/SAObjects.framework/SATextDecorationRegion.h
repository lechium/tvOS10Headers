/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:06 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSNumber, NSString;

@interface SATextDecorationRegion : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSNumber * length; 
@property (nonatomic,copy) NSString * property; 
@property (nonatomic,copy) NSNumber * start; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)textDecorationRegion;
+(id)textDecorationRegionWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSNumber *)length;
-(NSNumber *)start;
-(void)setStart:(NSNumber *)arg1 ;
-(void)setLength:(NSNumber *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)property;
-(void)setProperty:(NSString *)arg1 ;
@end
