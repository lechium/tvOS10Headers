/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:56 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSControlTableCell.h>

@class NSArray, NSDictionary;

@interface PSSegmentTableCell : PSControlTableCell {

	NSArray* _values;
	NSDictionary* _titleDict;

}
-(void)layoutSubviews;
-(void)setValue:(id)arg1 ;
-(id)titleLabel;
-(void)setBackgroundView:(id)arg1 ;
-(void)prepareForReuse;
-(BOOL)canReload;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(id)newControl;
-(id)controlValue;
-(void)setValues:(id)arg1 titleDictionary:(id)arg2 ;
@end
