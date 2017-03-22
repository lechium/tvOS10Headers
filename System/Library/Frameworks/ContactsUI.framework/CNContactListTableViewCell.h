/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:35 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@protocol ABStyleProvider;
@class CNContactFormatter, CNContact, CNContactMatchInfo;

@interface CNContactListTableViewCell : UITableViewCell {

	BOOL _isMeCard;
	id<ABStyleProvider> _styleProvider;
	CNContactFormatter* _contactFormatter;
	CNContact* _contact;
	CNContactMatchInfo* _contactMatchInfo;

}

@property (nonatomic,readonly) id<ABStyleProvider> styleProvider;                //@synthesize styleProvider=_styleProvider - In the implementation block
@property (nonatomic,retain) CNContactFormatter * contactFormatter;              //@synthesize contactFormatter=_contactFormatter - In the implementation block
@property (nonatomic,retain) CNContact * contact;                                //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) CNContactMatchInfo * contactMatchInfo;              //@synthesize contactMatchInfo=_contactMatchInfo - In the implementation block
@property (assign,nonatomic) BOOL isMeCard;                                      //@synthesize isMeCard=_isMeCard - In the implementation block
+(void)initialize;
+(void)contentSizeCategoryDidChange:(id)arg1 ;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(CNContactFormatter *)contactFormatter;
-(void)setContactFormatter:(CNContactFormatter *)arg1 ;
-(id<ABStyleProvider>)styleProvider;
-(void)setContactMatchInfo:(CNContactMatchInfo *)arg1 ;
-(void)setIsMeCard:(BOOL)arg1 ;
-(CNContactMatchInfo *)contactMatchInfo;
-(BOOL)isMeCard;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
@end
