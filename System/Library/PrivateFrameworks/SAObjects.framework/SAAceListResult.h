/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:03 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseAceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SAAceListResult : SABaseAceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * result; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)aceListResult;
+(id)aceListResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)result;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setResult:(NSArray *)arg1 ;
@end

