/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:11 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIBlendingHighlightView.h>
#import <UIKit/UIInterfaceActionVisualSeparatorDisplaying.h>
#import <UIKit/UIInterfaceActionVisualSectionSeparatorDisplaying.h>

@class _UIInterfaceActionSeparatorConstraintController, NSString;

@interface _UIInterfaceActionBlendingSeparatorView : _UIBlendingHighlightView <UIInterfaceActionVisualSeparatorDisplaying, UIInterfaceActionVisualSectionSeparatorDisplaying> {

	_UIInterfaceActionSeparatorConstraintController* _separatorViewConstraints;

}

@property (nonatomic,retain,readonly) _UIInterfaceActionSeparatorConstraintController * separatorViewConstraints;              //@synthesize separatorViewConstraints=_separatorViewConstraints - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double constantAxisDimension; 
+(id)colorBurnColor;
+(id)plusDColor;
-(id)init;
-(void)updateConstraints;
-(double)constantAxisDimension;
-(void)setConstantSizedAxis:(long long)arg1 ;
-(void)setConstantAxisDimension:(double)arg1 ;
-(id)initWithTopLevelFilters:(id)arg1 compositingColors:(id)arg2 compositingFilterModes:(id)arg3 ;
-(_UIInterfaceActionSeparatorConstraintController *)separatorViewConstraints;
@end
