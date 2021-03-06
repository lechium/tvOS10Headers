/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:35 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/TVImageDecorator.h>

@class NSString, IKColor;

@interface _TVMusicRadioStationDecorator : TVImageDecorator {

	NSString* _decorationStyle;
	double _upscaleAdjustment;
	IKColor* _tintColor;
	CGSize _scaleToSize;
	UIEdgeInsets _padding;
	TVCornerRadii _cornerRadii;

}

@property (nonatomic,copy) NSString * decorationStyle;               //@synthesize decorationStyle=_decorationStyle - In the implementation block
@property (assign,nonatomic) CGSize scaleToSize;                     //@synthesize scaleToSize=_scaleToSize - In the implementation block
@property (assign,nonatomic) double upscaleAdjustment;               //@synthesize upscaleAdjustment=_upscaleAdjustment - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                   //@synthesize padding=_padding - In the implementation block
@property (assign,nonatomic) TVCornerRadii cornerRadii;              //@synthesize cornerRadii=_cornerRadii - In the implementation block
@property (nonatomic,retain) IKColor * tintColor;                    //@synthesize tintColor=_tintColor - In the implementation block
-(IKColor *)tintColor;
-(void)setTintColor:(IKColor *)arg1 ;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)padding;
-(void)setCornerRadii:(TVCornerRadii)arg1 ;
-(void)setScaleToSize:(CGSize)arg1 ;
-(id)decorate:(id)arg1 scaledWithSize:(CGSize)arg2 croppedToFit:(BOOL)arg3 ;
-(CGSize)loaderScaleToSize;
-(CGSize)expectedSize;
-(id)decoratorIdentifier;
-(double)_upscalingFactor;
-(TVCornerRadii)cornerRadii;
-(CGSize)_scaleToSizeAdjustedForUpscaling;
-(CGSize)scaleToSize;
-(double)upscaleAdjustment;
-(void)setUpscaleAdjustment:(double)arg1 ;
-(NSString *)decorationStyle;
-(void)setDecorationStyle:(NSString *)arg1 ;
@end

