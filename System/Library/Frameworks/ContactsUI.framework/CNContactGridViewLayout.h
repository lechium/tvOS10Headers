/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:37 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKit/UICollectionViewFlowLayout.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSIndexPath;

@interface CNContactGridViewLayout : UICollectionViewFlowLayout <NSCopying> {

	BOOL _needsUpdateLayout;
	long long _numberOfColumns;
	NSIndexPath* _selectedIndexPath;
	double _offsetBefore;
	double _offsetAfter;
	double _selectedItemWidthOffset;

}

@property (assign,nonatomic) BOOL needsUpdateLayout;                       //@synthesize needsUpdateLayout=_needsUpdateLayout - In the implementation block
@property (assign,nonatomic) double offsetBefore;                          //@synthesize offsetBefore=_offsetBefore - In the implementation block
@property (assign,nonatomic) double offsetAfter;                           //@synthesize offsetAfter=_offsetAfter - In the implementation block
@property (assign,nonatomic) double selectedItemWidthOffset;               //@synthesize selectedItemWidthOffset=_selectedItemWidthOffset - In the implementation block
@property (assign,nonatomic) long long numberOfColumns;                    //@synthesize numberOfColumns=_numberOfColumns - In the implementation block
@property (nonatomic,retain) NSIndexPath * selectedIndexPath;              //@synthesize selectedIndexPath=_selectedIndexPath - In the implementation block
-(long long)numberOfColumns;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(/*^block*/id)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 type:(unsigned long long)arg3 ;
-(void)prepareForCollectionViewUpdates:(id)arg1 ;
-(BOOL)needsUpdateLayout;
-(void)_updateLayoutMetrics;
-(void)setNeedsUpdateLayout:(BOOL)arg1 ;
-(double)offsetBefore;
-(double)selectedItemWidthOffset;
-(double)offsetAfter;
-(void)setSelectedItemWidthOffset:(double)arg1 ;
-(void)setOffsetBefore:(double)arg1 ;
-(void)setOffsetAfter:(double)arg1 ;
-(void)setNumberOfColumns:(long long)arg1 ;
-(void)setSelectedIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)selectedIndexPath;
@end
