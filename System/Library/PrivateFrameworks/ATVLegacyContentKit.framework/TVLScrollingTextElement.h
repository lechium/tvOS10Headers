/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:14 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVLRootElement.h>

@class NSString, NSArray;

@interface TVLScrollingTextElement : TVLRootElement {

	int _initialSelection;
	NSString* _title;
	NSString* _text;
	NSArray* _buttons;

}

@property (nonatomic,retain) NSString * title;                  //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * text;                   //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) NSArray * buttons;                 //@synthesize buttons=_buttons - In the implementation block
@property (assign,nonatomic) int initialSelection;              //@synthesize initialSelection=_initialSelection - In the implementation block
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)title;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setInitialSelection:(int)arg1 ;
-(int)initialSelection;
-(NSArray *)buttons;
-(void)setButtons:(NSArray *)arg1 ;
-(id)initWithXMLElement:(id)arg1 feedDocument:(id)arg2 ;
@end

