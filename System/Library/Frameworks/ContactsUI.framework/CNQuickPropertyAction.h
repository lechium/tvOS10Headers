/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:34 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNQuickContactAction.h>

@class CNPropertyAction;

@interface CNQuickPropertyAction : CNQuickContactAction

@property (nonatomic,readonly) CNPropertyAction * propertyAction; 
-(BOOL)enabled;
-(id)identifier;
-(unsigned long long)score;
-(CNPropertyAction *)propertyAction;
-(id)propertyItem;
-(id)initWithPropertyAction:(id)arg1 ;
-(id)_coreDuetValue;
-(void)performWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)titleForContext:(long long)arg1 ;
-(id)subtitleForContext:(long long)arg1 ;
@end
