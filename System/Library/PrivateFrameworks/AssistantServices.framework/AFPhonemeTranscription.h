/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:16 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFTranscriptionType.h>

@class NSString, NSArray;

@interface AFPhonemeTranscription : NSObject <AFTranscriptionType> {

	NSString* _orthography;
	NSString* _language;
	NSArray* _phonemeSuggestions;

}

@property (nonatomic,retain) NSString * orthography;                    //@synthesize orthography=_orthography - In the implementation block
@property (nonatomic,retain) NSString * language;                       //@synthesize language=_language - In the implementation block
@property (nonatomic,retain) NSArray * phonemeSuggestions;              //@synthesize phonemeSuggestions=_phonemeSuggestions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)orthography;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(void)setOrthography:(NSString *)arg1 ;
-(NSArray *)phonemeSuggestions;
-(void)setPhonemeSuggestions:(NSArray *)arg1 ;
@end

