/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:39 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNContactStore, PRPersonaStore;

@interface CNAvatarViewControllerSettings : NSObject {

	BOOL _threeDTouchEnabled;
	CNContactStore* _contactStore;
	PRPersonaStore* _personaStore;

}

@property (nonatomic,retain) PRPersonaStore * personaStore;              //@synthesize personaStore=_personaStore - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;              //@synthesize contactStore=_contactStore - In the implementation block
@property (assign,nonatomic) BOOL threeDTouchEnabled;                    //@synthesize threeDTouchEnabled=_threeDTouchEnabled - In the implementation block
+(id)settingsWithContactStore:(id)arg1 ;
+(id)defaultSettings;
+(id)settingsWithContactStore:(id)arg1 personaStore:(id)arg2 threeDTouchEnabled:(BOOL)arg3 ;
+(BOOL)threeDTouchEnabledDefaultValue;
+(id)settingsWithContactStore:(id)arg1 threeDTouchEnabled:(BOOL)arg2 ;
-(CNContactStore *)contactStore;
-(PRPersonaStore *)personaStore;
-(id)initWithContactStore:(id)arg1 personaStore:(id)arg2 threeDTouchEnabled:(BOOL)arg3 ;
-(void)setThreeDTouchEnabled:(BOOL)arg1 ;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(void)setPersonaStore:(PRPersonaStore *)arg1 ;
-(BOOL)threeDTouchEnabled;
@end

