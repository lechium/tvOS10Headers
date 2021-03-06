/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:54 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol KeychainSyncPhoneSettingsFragmentDelegate;
@class NSArray, PSPhoneNumberSpecifier, PSSpecifier, PSListController, NSString, KeychainSyncCountryInfo, PSEditableTableCell;

@interface KeychainSyncPhoneSettingsFragment : NSObject {

	NSArray* _specifiers;
	PSPhoneNumberSpecifier* _phoneNumberSpecifier;
	PSSpecifier* _countrySpecifier;
	PSListController* _listController;
	NSString* _phoneNumber;
	KeychainSyncCountryInfo* _countryInfo;
	id<KeychainSyncPhoneSettingsFragmentDelegate> _delegate;
	NSString* _title;

}

@property (nonatomic,readonly) NSArray * specifiers; 
@property (nonatomic,retain) NSString * phoneNumber;                                                     //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,retain) KeychainSyncCountryInfo * countryInfo;                                      //@synthesize countryInfo=_countryInfo - In the implementation block
@property (nonatomic,readonly) PSEditableTableCell * phoneNumberCell; 
@property (assign,nonatomic,__weak) id<KeychainSyncPhoneSettingsFragmentDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * title;                                                           //@synthesize title=_title - In the implementation block
-(void)setDelegate:(id<KeychainSyncPhoneSettingsFragmentDelegate>)arg1 ;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(id<KeychainSyncPhoneSettingsFragmentDelegate>)delegate;
-(NSString *)title;
-(void)resignFirstResponder;
-(NSString *)phoneNumber;
-(void)textFieldChanged:(id)arg1 ;
-(void)setDialingCountryInfo:(id)arg1 forSpecifier:(id)arg2 ;
-(id)dialingCountryInfoForSpecifier:(id)arg1 ;
-(void)setPhoneNumber:(id)arg1 forSpecifier:(id)arg2 ;
-(id)phoneNumberForSpecifier:(id)arg1 ;
-(PSEditableTableCell *)phoneNumberCell;
-(id)unformattedPhoneNumber;
-(KeychainSyncCountryInfo *)countryInfo;
-(id)initWithListController:(id)arg1 ;
-(NSArray *)specifiers;
-(void)reloadSpecifiers;
-(void)setCountryInfo:(KeychainSyncCountryInfo *)arg1 ;
-(void)setPhoneNumber:(NSString *)arg1 ;
@end

