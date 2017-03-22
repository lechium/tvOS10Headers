/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:48 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@class UITableViewHeaderFooterView, UICollectionViewTableLayout, UICollectionViewTableLayoutAttributes, UIColor, UILabel, UIView;

@interface UICollectionViewTableHeaderFooterView : UICollectionReusableView {

	BOOL _floating;
	UITableViewHeaderFooterView* _tableViewHeaderFooterView;

}

@property (nonatomic,retain) UITableViewHeaderFooterView * tableViewHeaderFooterView;                                        //@synthesize tableViewHeaderFooterView=_tableViewHeaderFooterView - In the implementation block
@property (getter=_tableLayout,nonatomic,readonly) UICollectionViewTableLayout * tableLayout; 
@property (getter=_tableAttributes,nonatomic,readonly) UICollectionViewTableLayoutAttributes * tableAttributes; 
@property (nonatomic,retain) UIColor * tintColor; 
@property (nonatomic,readonly) UILabel * textLabel; 
@property (nonatomic,readonly) UILabel * detailTextLabel; 
@property (nonatomic,readonly) UIView * contentView; 
@property (nonatomic,retain) UIView * backgroundView; 
@property (assign,nonatomic) BOOL floating;                                                                                  //@synthesize floating=_floating - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(void)_commonInit;
-(UIView *)contentView;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)setFloating:(BOOL)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(void)prepareForReuse;
-(UILabel *)textLabel;
-(UILabel *)detailTextLabel;
-(UIView *)backgroundView;
-(BOOL)floating;
-(id)_tableLayout;
-(void)applyLayoutAttributes:(id)arg1 ;
-(id)_tableAttributes;
-(void)setTableViewHeaderFooterView:(UITableViewHeaderFooterView *)arg1 ;
-(UITableViewHeaderFooterView *)tableViewHeaderFooterView;
@end
