/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:49 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FamilyCircle/FAFamilyCircleRequest.h>

@class NSNumber;

@interface FARemoveFamilyMemberRequest : FAFamilyCircleRequest {

	NSNumber* _memberDSID;

}

@property (copy,readonly) NSNumber * memberDSID;              //@synthesize memberDSID=_memberDSID - In the implementation block
-(NSNumber *)memberDSID;
-(id)initWithFamilyMemberDSID:(id)arg1 ;
-(void)startRequestWithCompletionHandler:(/*^block*/id)arg1 ;
@end

