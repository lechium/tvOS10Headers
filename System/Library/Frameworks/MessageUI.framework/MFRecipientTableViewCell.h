/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:35 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKit/UITableViewCell.h>

@class MFRecipientTableViewCellTitleView, MFRecipientTableViewCellDetailView, MFComposeRecipient, UIImageView, UIColor;

@interface MFRecipientTableViewCell : UITableViewCell {

	MFRecipientTableViewCellTitleView* _titleView;
	MFRecipientTableViewCellDetailView* _detailView;
	MFComposeRecipient* _recipient;
	UIImageView* _cellImageView;
	UIColor* _tintColor;
	BOOL _shouldVerticallyCenterTitleLabel;
	BOOL _shouldHighlightCompleteMatches;
	BOOL _shouldDimIrrelevantInformation;

}

@property (assign,nonatomic) BOOL shouldHighlightCompleteMatches;              //@synthesize shouldHighlightCompleteMatches=_shouldHighlightCompleteMatches - In the implementation block
@property (assign,nonatomic) BOOL shouldDimIrrelevantInformation;              //@synthesize shouldDimIrrelevantInformation=_shouldDimIrrelevantInformation - In the implementation block
+(id)identifier;
+(double)height;
+(id)_defaultTintColor;
+(double)heightWithRecipient:(id)arg1 width:(double)arg2 ;
+(double)_deviceSpecificLayoutMargin;
+(double)_realDetailButtonAccessoryMargin;
+(double)_constrainedWidthForTitleViewWithAccessoryWidth:(double)arg1 containerWidth:(double)arg2 ;
+(double)_constrainedWidthForDetailViewWithAccessoryWidth:(double)arg1 containerWidth:(double)arg2 ;
+(id)_attributedStringRepresentationOfCompleteMatchesForRecipient:(id)arg1 constrainedToWidth:(double)arg2 overflowRecipients:(out id*)arg3 useHighlighting:(BOOL)arg4 ;
+(id)_tintedAttributedString:(id)arg1 toColor:(id)arg2 shouldDim:(BOOL)arg3 ;
+(id)_copyAttributedStringRepresentationOfGroupRecipient:(id)arg1 withSortedRecipientList:(id)arg2 ;
+(id)_attributedStringRepresentationOfPartialEmailMatchForSingleRecipient:(id)arg1 useHighlighting:(BOOL)arg2 ;
+(id)cellForRecipient:(id)arg1 ;
-(void)setOpaque:(BOOL)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)tintColor;
-(id)recipient;
-(void)setRecipient:(id)arg1 ;
-(void)setShouldHighlightCompleteMatches:(BOOL)arg1 ;
-(void)setShouldDimIrrelevantInformation:(BOOL)arg1 ;
-(CGRect)_frameForTitleView;
-(CGRect)_frameForDetailView;
-(BOOL)shouldHighlightCompleteMatches;
-(void)setTintColor:(id)arg1 animated:(BOOL)arg2 ;
-(void)setCellImage:(id)arg1 highlightedImage:(id)arg2 ;
-(BOOL)shouldDimIrrelevantInformation;
@end

