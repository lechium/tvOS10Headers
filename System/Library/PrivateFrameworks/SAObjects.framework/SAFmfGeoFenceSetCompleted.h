/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:04 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class SAFmfGeoFence, NSURL, NSString;

@interface SAFmfGeoFenceSetCompleted : SADomainCommand <SAServerBoundCommand>

@property (nonatomic,retain) SAFmfGeoFence * geoFence; 
@property (nonatomic,copy) NSURL * searchContext; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)geoFenceSetCompleted;
+(id)geoFenceSetCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSURL *)searchContext;
-(void)setSearchContext:(NSURL *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SAFmfGeoFence *)geoFence;
-(void)setGeoFence:(SAFmfGeoFence *)arg1 ;
@end
