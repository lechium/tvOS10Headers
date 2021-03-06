/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:10 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAAceView.h>

@class NSString, SAUIImageResource;

@interface SAVCSContentDetailPage : SAAceView

@property (nonatomic,copy) NSString * contentType; 
@property (nonatomic,retain) SAUIImageResource * image; 
@property (nonatomic,copy) NSString * imagesJsonContentPayload; 
@property (nonatomic,copy) NSString * loadingText; 
@property (nonatomic,copy) NSString * seasonId; 
@property (nonatomic,copy) NSString * showId; 
@property (assign,nonatomic) BOOL userDriven; 
@property (nonatomic,copy) NSString * utsId; 
+(id)contentDetailPage;
+(id)contentDetailPageWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setContentType:(NSString *)arg1 ;
-(void)setImage:(SAUIImageResource *)arg1 ;
-(SAUIImageResource *)image;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)utsId;
-(void)setUtsId:(NSString *)arg1 ;
-(NSString *)imagesJsonContentPayload;
-(void)setImagesJsonContentPayload:(NSString *)arg1 ;
-(NSString *)loadingText;
-(void)setLoadingText:(NSString *)arg1 ;
-(NSString *)seasonId;
-(void)setSeasonId:(NSString *)arg1 ;
-(NSString *)showId;
-(void)setShowId:(NSString *)arg1 ;
-(BOOL)userDriven;
-(void)setUserDriven:(BOOL)arg1 ;
-(NSString *)contentType;
@end

