/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:51 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <vCard/CNVCardNameComponents.h>

@class NSString;

@interface CNVCardMutableNameComponents : CNVCardNameComponents

@property (copy) NSString * formattedName; 
@property (copy) NSString * firstName; 
@property (copy) NSString * lastName; 
@property (copy) NSString * middleName; 
@property (copy) NSString * title; 
@property (copy) NSString * suffix; 
@property (copy) NSString * companyName; 
@property (assign) BOOL isCompany; 
-(void)setMiddleName:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setFormattedName:(NSString *)arg1 ;
-(void)setIsCompany:(BOOL)arg1 ;
-(void)setCompanyName:(NSString *)arg1 ;
-(void)setSuffix:(NSString *)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
@end

