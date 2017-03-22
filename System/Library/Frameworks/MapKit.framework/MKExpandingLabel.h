/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:55 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class NSTextContainer, NSTextStorage, NSLayoutManager, _MKUILabel, UITapGestureRecognizer, UITextView, UIFont, UIColor, NSString, NSAttributedString;

@interface MKExpandingLabel : UIView <UIGestureRecognizerDelegate> {

	unsigned long long _expansionMode;
	NSTextContainer* _textContainer;
	NSTextStorage* _textStorage;
	NSLayoutManager* _textLayoutManager;
	_MKUILabel* _showMoreLabel;
	UITapGestureRecognizer* _showMoreTapRecognizer;
	BOOL _constraintsAdded;
	BOOL _useAttributedText;
	BOOL _isPerformingLayout;
	UITextView* _textView;
	UIFont* _font;
	UIColor* _textColor;
	UIColor* _showMoreTextColor;
	long long _textAlignment;
	unsigned long long _numberOfLinesWhenCollapsed;
	/*^block*/id _labelResizedBlock;

}

@property (nonatomic,retain) UITextView * textView;                                      //@synthesize textView=_textView - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,retain) UIFont * font;                                              //@synthesize font=_font - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                                        //@synthesize textColor=_textColor - In the implementation block
@property (assign,nonatomic) long long textAlignment;                                    //@synthesize textAlignment=_textAlignment - In the implementation block
@property (assign,nonatomic) long long lineBreakMode; 
@property (nonatomic,copy) NSAttributedString * attributedText; 
@property (nonatomic,copy) NSString * showMoreText; 
@property (nonatomic,retain) UIFont * showMoreFont; 
@property (nonatomic,retain) UIColor * showMoreTextColor;                                //@synthesize showMoreTextColor=_showMoreTextColor - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfLinesWhenCollapsed;              //@synthesize numberOfLinesWhenCollapsed=_numberOfLinesWhenCollapsed - In the implementation block
@property (assign,getter=isExpanded,nonatomic) BOOL expanded; 
@property (nonatomic,copy) id labelResizedBlock;                                         //@synthesize labelResizedBlock=_labelResizedBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setLineBreakMode:(long long)arg1 ;
-(void)updateConstraints;
-(UIFont *)font;
-(UIColor *)textColor;
-(NSAttributedString *)attributedText;
-(void)setTextView:(UITextView *)arg1 ;
-(long long)textAlignment;
-(BOOL)isExpanded;
-(id)viewForLastBaselineLayout;
-(long long)lineBreakMode;
-(void)setExpanded:(BOOL)arg1 ;
-(UITextView *)textView;
-(id)viewForFirstBaselineLayout;
-(void)infoCardThemeChanged:(id)arg1 ;
-(void)_mkExpandingLabelComonInit;
-(void)setNumberOfLinesWhenCollapsed:(unsigned long long)arg1 ;
-(void)_updateTextAttributes;
-(void)setShowMoreText:(NSString *)arg1 ;
-(NSString *)showMoreText;
-(void)setShowMoreFont:(UIFont *)arg1 ;
-(UIFont *)showMoreFont;
-(void)setShowMoreTextColor:(UIColor *)arg1 ;
-(UIColor *)showMoreTextColor;
-(void)_setTextExclusionPath;
-(void)_expand;
-(void)_setExpansionMode:(unsigned long long)arg1 ;
-(BOOL)isShowingExpanded;
-(BOOL)_canShowAllText;
-(unsigned long long)numberOfLinesWhenCollapsed;
-(id)labelResizedBlock;
-(void)setLabelResizedBlock:(id)arg1 ;
@end
