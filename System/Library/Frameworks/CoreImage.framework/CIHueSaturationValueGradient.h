/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:43 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class NSNumber;

@interface CIHueSaturationValueGradient : CIFilter {

	NSNumber* inputValue;
	NSNumber* inputRadius;
	NSNumber* inputSoftness;
	NSNumber* inputDither;
	id inputColorSpace;

}

@property (nonatomic,retain) NSNumber * inputValue; 
@property (nonatomic,retain) NSNumber * inputRadius; 
@property (nonatomic,retain) NSNumber * inputSoftness; 
@property (nonatomic,retain) NSNumber * inputDither; 
@property (nonatomic,retain) id inputColorSpace; 
+(id)customAttributes;
-(id)_kernel;
-(id)inputColorSpace;
-(void)setInputColorSpace:(id)arg1 ;
-(id)_kernelD;
-(NSNumber *)inputSoftness;
-(void)setInputSoftness:(NSNumber *)arg1 ;
-(NSNumber *)inputDither;
-(void)setInputDither:(NSNumber *)arg1 ;
-(id)outputImage;
-(NSNumber *)inputValue;
-(void)setInputValue:(NSNumber *)arg1 ;
-(void)setInputRadius:(NSNumber *)arg1 ;
-(NSNumber *)inputRadius;
@end

