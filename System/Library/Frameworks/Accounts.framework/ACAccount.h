/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:30 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Accounts/Accounts-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ACAccountStore, NSString, ACAccountType, ACAccountCredential, NSMutableDictionary, NSURL, NSDate, NSArray, NSMutableSet, NSDictionary, NSSet;

@interface ACAccount : NSObject <NSSecureCoding, NSCopying> {

	ACAccountStore* _store;
	NSString* _identifier;
	NSString* _accountDescription;
	NSString* _owningBundleID;
	NSString* _username;
	NSString* _authenticationType;
	NSString* _credentialType;
	NSString* _clientToken;
	BOOL _haveCheckedForClientToken;
	ACAccountType* _accountType;
	ACAccountCredential* _credential;
	NSMutableDictionary* _properties;
	NSMutableDictionary* _dataclassProperties;
	BOOL _accountAccessAvailable;
	BOOL _authenticated;
	BOOL _active;
	BOOL _supportsAuthentication;
	BOOL _visible;
	NSURL* _objectID;
	NSDate* _date;
	NSDate* _lastCredentialRenewalRejectionDate;
	ACAccount* _parentAccount;
	BOOL _haveCheckedForParentAccount;
	NSString* _parentAccountIdentifier;
	BOOL _haveCheckedForChildAccounts;
	NSArray* _childAccounts;
	NSMutableSet* _enabledDataclasses;
	NSMutableSet* _provisionedDataclasses;
	NSMutableSet* _dirtyProperties;
	NSMutableSet* _dirtyAccountProperties;
	NSMutableSet* _dirtyDataclassProperties;
	id _credentialsDidChangeObserver;
	/*^block*/id _accountPropertiesTransformer;
	BOOL _creatingFromManagedObject;

}

@property (nonatomic,readonly) NSURL * objectID; 
@property (nonatomic,readonly) ACAccountStore * accountStore; 
@property (nonatomic,retain) ACAccount * parentAccount; 
@property (nonatomic,readonly) NSString * parentAccountIdentifier; 
@property (nonatomic,readonly) NSArray * childAccounts; 
@property (nonatomic,retain) NSMutableSet * enabledDataclasses; 
@property (nonatomic,retain) NSMutableSet * provisionedDataclasses; 
@property (nonatomic,__weak,readonly) NSDictionary * dataclassProperties; 
@property (assign,getter=isAuthenticated,nonatomic) BOOL authenticated; 
@property (nonatomic,__weak,readonly) NSDictionary * accountProperties; 
@property (nonatomic,__weak,readonly) ACAccount * displayAccount; 
@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (assign,nonatomic) BOOL supportsAuthentication; 
@property (getter=isDirty,nonatomic,readonly) BOOL dirty; 
@property (nonatomic,readonly) NSSet * dirtyProperties;                                //@synthesize dirtyProperties=_dirtyProperties - In the implementation block
@property (nonatomic,readonly) NSSet * dirtyAccountProperties;                         //@synthesize dirtyAccountProperties=_dirtyAccountProperties - In the implementation block
@property (nonatomic,readonly) NSSet * dirtyDataclassProperties;                       //@synthesize dirtyDataclassProperties=_dirtyDataclassProperties - In the implementation block
@property (nonatomic,readonly) NSString * authenticationType; 
@property (nonatomic,readonly) NSString * credentialType; 
@property (nonatomic,readonly) BOOL supportsPush; 
@property (nonatomic,retain) NSDate * creationDate; 
@property (assign,getter=isVisible,nonatomic) BOOL visible; 
@property (nonatomic,retain) NSDate * lastCredentialRenewalRejectionDate; 
@property (nonatomic,readonly) NSString * shortDebugName; 
@property (nonatomic,readonly) NSString * clientToken; 
@property (copy) id accountPropertiesTransformer;                                      //@synthesize accountPropertiesTransformer=_accountPropertiesTransformer - In the implementation block
@property (nonatomic,__weak,readonly) NSString * identifier; 
@property (nonatomic,retain) ACAccountType * accountType; 
@property (nonatomic,copy) NSString * accountDescription; 
@property (nonatomic,copy) NSString * username; 
@property (nonatomic,readonly) NSString * userFullName; 
@property (nonatomic,retain) ACAccountCredential * credential; 
+(id)_createNewAccountUID;
+(BOOL)supportsSecureCoding;
-(NSString *)userFullName;
-(void)_clearCachedChildAccounts;
-(void)_clearCachedCredentials;
-(void)_installCredentialsChangedObserver;
-(void)credentialsChanged:(id)arg1 ;
-(id)accountPropertiesTransformer;
-(void)_markAccountPropertyDirty:(id)arg1 ;
-(id)enabledAndSyncableDataclasses;
-(BOOL)_useParentForCredentials;
-(void)_markDataclassPropertyDirty:(id)arg1 ;
-(void)_markCredentialDirty;
-(id)defaultAutodiscoverDomainForChildType:(id)arg1 ;
-(void)setCreatingFromManagedObject:(BOOL)arg1 ;
-(NSString *)shortDebugName;
-(void)setSecIdentity:(SecIdentityRef)arg1 ;
-(void)setSecCertificates:(id)arg1 ;
-(void)setAccountPropertiesTransformer:(id)arg1 ;
-(BOOL)isAuthenticated;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)reload;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(BOOL)isActive;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setVisible:(BOOL)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(BOOL)isVisible;
-(id)propertyForKey:(id)arg1 ;
-(void)refresh;
-(void)setProperty:(id)arg1 forKey:(id)arg2 ;
-(ACAccountCredential *)credential;
-(void)setCreationDate:(NSDate *)arg1 ;
-(NSDate *)creationDate;
-(id)fullDescription;
-(id)initWithManagedAccount:(id)arg1 ;
-(id)qualifiedUsername;
-(void)setCredentialType:(NSString *)arg1 ;
-(void)setOwningBundleID:(id)arg1 ;
-(id)initWithManagedAccount:(id)arg1 accountStore:(id)arg2 ;
-(void)_loadAllCachedProperties;
-(void)_setAccountStore:(id)arg1 ;
-(NSSet *)dirtyDataclassProperties;
-(id)_initWithManagedAccount:(id)arg1 accountStore:(id)arg2 withDirtyStateFromAccount:(id)arg3 ;
-(id)diffAccount:(id)arg1 ;
-(void)takeValuesFromModifiedAccount:(id)arg1 ;
-(void)setDataclassProperties:(NSDictionary *)arg1 ;
-(void)setEnabledDataclasses:(NSMutableSet *)arg1 ;
-(void)setLastCredentialRenewalRejectionDate:(NSDate *)arg1 ;
-(void)_clearDirtyProperties;
-(void)_markPropertyDirty:(id)arg1 ;
-(void)_loadCachedPropertiesWithoutCredentials;
-(id)accountByCleaningThirdPartyTransformations;
-(NSDate *)lastCredentialRenewalRejectionDate;
-(void)setAccountProperties:(NSDictionary *)arg1 ;
-(BOOL)supportsAuthentication;
-(void)setSupportsAuthentication:(BOOL)arg1 ;
-(SecIdentityRef)copySecIdentity;
-(id)secCertificates;
-(BOOL)authenticated;
-(NSSet *)dirtyAccountProperties;
-(void)setProperties:(id)arg1 forDataclass:(id)arg2 ;
-(id)owningBundleID;
-(NSString *)credentialType;
-(NSSet *)dirtyProperties;
-(BOOL)isPropertyDirty:(id)arg1 ;
-(void)_setObjectID:(id)arg1 ;
-(id)childAccountsWithAccountTypeIdentifier:(id)arg1 ;
-(BOOL)isEnabledToSyncDataclass:(id)arg1 ;
-(BOOL)addClientToken:(id)arg1 ;
-(ACAccount *)displayAccount;
-(NSString *)accountDescription;
-(void)setProvisionedDataclasses:(NSMutableSet *)arg1 ;
-(ACAccount *)parentAccount;
-(NSString *)parentAccountIdentifier;
-(NSDictionary *)accountProperties;
-(void)setAccountDescription:(NSString *)arg1 ;
-(id)credentialWithError:(id*)arg1 ;
-(NSMutableSet *)enabledDataclasses;
-(NSArray *)childAccounts;
-(void)setParentAccount:(ACAccount *)arg1 ;
-(NSString *)clientToken;
-(void)setAuthenticationType:(NSString *)arg1 ;
-(id)initWithAccountType:(id)arg1 ;
-(void)setCredential:(ACAccountCredential *)arg1 ;
-(void)setAuthenticated:(BOOL)arg1 ;
-(id)accountPropertyForKey:(id)arg1 ;
-(void)setAccountProperty:(id)arg1 forKey:(id)arg2 ;
-(NSString *)authenticationType;
-(void)setAccountType:(ACAccountType *)arg1 ;
-(ACAccountType *)accountType;
-(NSURL *)objectID;
-(BOOL)isEnabledForDataclass:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 forDataclass:(id)arg2 ;
-(id)propertiesForDataclass:(id)arg1 ;
-(NSMutableSet *)provisionedDataclasses;
-(BOOL)isProvisionedForDataclass:(id)arg1 ;
-(NSString *)username;
-(BOOL)isDirty;
-(ACAccountStore *)accountStore;
-(NSDictionary *)dataclassProperties;
-(BOOL)supportsPush;
-(void)setUsername:(NSString *)arg1 ;
-(void)markAllPropertiesDirty;
@end

