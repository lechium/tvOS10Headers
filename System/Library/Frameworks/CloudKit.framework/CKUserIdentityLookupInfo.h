/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:51 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CKRecordID, NSData;

@interface CKUserIdentityLookupInfo : NSObject <NSSecureCoding, NSCopying> {

	BOOL _shouldReportMissingIdentity;
	NSString* _emailAddress;
	NSString* _phoneNumber;
	CKRecordID* _userRecordID;
	NSString* _dsid;
	NSData* _encryptedPersonalInfo;

}

@property (nonatomic,copy) NSString * emailAddress;                         //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,copy) CKRecordID * userRecordID;                       //@synthesize userRecordID=_userRecordID - In the implementation block
@property (nonatomic,copy) NSString * phoneNumber;                          //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (assign,nonatomic) BOOL shouldReportMissingIdentity;              //@synthesize shouldReportMissingIdentity=_shouldReportMissingIdentity - In the implementation block
@property (nonatomic,retain) NSString * dsid;                               //@synthesize dsid=_dsid - In the implementation block
@property (nonatomic,retain) NSData * encryptedPersonalInfo;                //@synthesize encryptedPersonalInfo=_encryptedPersonalInfo - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)lookupInfosWithEmails:(id)arg1 ;
+(id)lookupInfosWithRecordIDs:(id)arg1 ;
+(id)lookupInfosWithPhoneNumbers:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)phoneNumber;
-(void)setEmailAddress:(NSString *)arg1 ;
-(id)CKPropertiesDescription;
-(id)ckShortDescription;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(id)lookupValue;
-(id)initWithEmailAddress:(id)arg1 ;
-(id)initWithPhoneNumber:(id)arg1 ;
-(id)initWithUserRecordID:(id)arg1 ;
-(CKRecordID *)userRecordID;
-(NSData *)encryptedPersonalInfo;
-(void)setEncryptedPersonalInfo:(NSData *)arg1 ;
-(void)setUserRecordID:(CKRecordID *)arg1 ;
-(BOOL)shouldReportMissingIdentity;
-(long long)lookupField;
-(void)_stripPersonalInfo;
-(void)setShouldReportMissingIdentity:(BOOL)arg1 ;
-(NSString *)emailAddress;
-(void)setDsid:(NSString *)arg1 ;
-(NSString *)dsid;
-(void)setPhoneNumber:(NSString *)arg1 ;
@end
