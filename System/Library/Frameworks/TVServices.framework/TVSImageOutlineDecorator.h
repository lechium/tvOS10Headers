/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:57 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVServices/TVServices-Structs.h>
#import <TVServices/TVSImageScaleDecorator.h>

@class UIColor;

@interface TVSImageOutlineDecorator : TVSImageScaleDecorator {

	UIColor* _outlineColor;
	UIEdgeInsets _outlineWidths;

}

@property (nonatomic,copy,readonly) UIColor * outlineColor;              //@synthesize outlineColor=_outlineColor - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets outlineWidths;               //@synthesize outlineWidths=_outlineWidths - In the implementation block
+(id)decoratorWithOutlineColor:(id)arg1 outlineWidths:(UIEdgeInsets)arg2 ;
-(id)decoratorIdentifier;
-(id)initWithOutlineColor:(id)arg1 outlineWidths:(UIEdgeInsets)arg2 ;
-(UIEdgeInsets)outlineWidths;
-(void)_drawInScaledContext:(CGContextRef)arg1 ;
-(UIColor *)outlineColor;
@end

