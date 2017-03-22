/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:33 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@protocol TVFocusDirectionCollectionViewCellDelegate;
@class UIMotionEffectGroup;

@interface _TVFocusDirectionCollectionViewCell : UICollectionViewCell {

	UIMotionEffectGroup* _motionEffectGroup;
	BOOL _selectSubviews;
	id<TVFocusDirectionCollectionViewCellDelegate> _delegate;
	CGPoint _focusDirection;

}

@property (assign,nonatomic,__weak) id<TVFocusDirectionCollectionViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CGPoint focusDirection;                                                      //@synthesize focusDirection=_focusDirection - In the implementation block
@property (assign,nonatomic) BOOL selectSubviews;                                                         //@synthesize selectSubviews=_selectSubviews - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<TVFocusDirectionCollectionViewCellDelegate>)arg1 ;
-(id<TVFocusDirectionCollectionViewCellDelegate>)delegate;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)focusedViewDidChange;
-(BOOL)_applyKeyPathsAndRelativeValues:(id)arg1 forMotionEffect:(id)arg2 ;
-(BOOL)_unapplyMotionEffect:(id)arg1 ;
-(id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2 ;
-(void)setFocusDirection:(CGPoint)arg1 ;
-(CGPoint)focusDirection;
-(void)_attachMotionEffects;
-(void)_detachMotionEffects;
-(id)layeredImageContainerLayer;
-(BOOL)selectSubviews;
-(void)setSelectSubviews:(BOOL)arg1 ;
@end
