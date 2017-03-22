/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:25 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKObject.h>
#import <libobjc.A.dylib/EKIdentityProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, EKCalendarItem, NSURL, NSPredicate;

@interface EKParticipant : EKObject <EKIdentityProtocol, NSCopying> {

	NSString* _email;
	NSString* _inviterNameString;
	EKCalendarItem* _owner;

}

@property (nonatomic,copy) NSString * emailAddress; 
@property (nonatomic,copy) NSString * email;                                       //@synthesize email=_email - In the implementation block
@property (nonatomic,copy) NSURL * addressURL; 
@property (nonatomic,copy) NSString * inviterNameString;                           //@synthesize inviterNameString=_inviterNameString - In the implementation block
@property (assign,nonatomic) int proposedStartDateStatus; 
@property (nonatomic,readonly) NSString * UUID; 
@property (nonatomic,copy) NSString * firstName; 
@property (nonatomic,copy) NSString * lastName; 
@property (nonatomic,copy) NSString * comment; 
@property (nonatomic,readonly) EKCalendarItem * owner;                             //@synthesize owner=_owner - In the implementation block
@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) long long participantStatus; 
@property (nonatomic,readonly) long long participantRole; 
@property (nonatomic,readonly) long long participantType; 
@property (getter=isCurrentUser,nonatomic,readonly) BOOL currentUser; 
@property (nonatomic,readonly) NSPredicate * contactPredicate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void*)findABPersonByURL:(id)arg1 inAddressBook:(void*)arg2 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)URL;
-(NSString *)UUID;
-(EKCalendarItem *)owner;
-(NSString *)comment;
-(void)setComment:(NSString *)arg1 ;
-(void)setDisplayName:(id)arg1 ;
-(void)setEmail:(NSString *)arg1 ;
-(void)setEmailAddress:(NSString *)arg1 ;
-(NSPredicate *)contactPredicate;
-(id)nameComponents;
-(id)_persistentItem;
-(long long)participantType;
-(BOOL)isEqualToParticipant:(id)arg1 ;
-(long long)participantStatus;
-(id)proposedStartDateForEvent:(id)arg1 ;
-(NSURL *)addressURL;
-(long long)participantRole;
-(void)setProposedStartDateStatus:(int)arg1 ;
-(int)proposedStartDateStatus;
-(void)setAddressURL:(NSURL *)arg1 ;
-(const void*)ABRecordWithAddressBook:(void*)arg1 ;
-(BOOL)isLocationRoom;
-(void)setProposedStartDate:(id)arg1 forEvent:(id)arg2 ;
-(NSString *)inviterNameString;
-(id)setInviterNameString;
-(void)setInviterNameString:(NSString *)arg1 ;
-(NSString *)emailAddress;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSString *)email;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(BOOL)isCurrentUser;
@end
