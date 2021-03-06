/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:16 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVLElement.h>

@class NSArray;

@interface TVLGridElement : TVLElement {

	int _columnCount;
	int _defaultSelection;
	NSArray* _gridItems;

}

@property (assign,nonatomic) int columnCount;                   //@synthesize columnCount=_columnCount - In the implementation block
@property (assign,nonatomic) int defaultSelection;              //@synthesize defaultSelection=_defaultSelection - In the implementation block
@property (nonatomic,copy) NSArray * gridItems;                 //@synthesize gridItems=_gridItems - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(int)columnCount;
-(void)setColumnCount:(int)arg1 ;
-(id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2 ;
-(NSArray *)gridItems;
-(void)setDefaultSelection:(int)arg1 ;
-(void)setGridItems:(NSArray *)arg1 ;
-(int)defaultSelection;
@end

