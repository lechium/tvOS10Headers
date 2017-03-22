/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:52 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface SFImage : NSObject <NSSecureCoding> {

	BOOL _isTemplate;
	BOOL _shouldCropToCircle;
	NSData* _imageData;
	double _cornerRadius;
	double _scale;
	NSString* _contentType;
	NSString* _keyColor;
	CGSize _size;

}

@property (retain) NSData * imageData;                             //@synthesize imageData=_imageData - In the implementation block
@property (assign,nonatomic) BOOL isTemplate;                      //@synthesize isTemplate=_isTemplate - In the implementation block
@property (assign,nonatomic) BOOL shouldCropToCircle;              //@synthesize shouldCropToCircle=_shouldCropToCircle - In the implementation block
@property (assign,nonatomic) double cornerRadius;                  //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) double scale;                         //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) CGSize size;                          //@synthesize size=_size - In the implementation block
@property (nonatomic,retain) NSString * contentType;               //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,retain) NSString * keyColor;                  //@synthesize keyColor=_keyColor - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)imageWithData:(id)arg1 ;
-(void)setContentType:(NSString *)arg1 ;
-(CGSize)size;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setScale:(double)arg1 ;
-(double)scale;
-(void)setSize:(CGSize)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(BOOL)isTemplate;
-(void)setIsTemplate:(BOOL)arg1 ;
-(void)setImageData:(NSData *)arg1 ;
-(NSString *)contentType;
-(void)setKeyColor:(NSString *)arg1 ;
-(void)setShouldCropToCircle:(BOOL)arg1 ;
-(void)loadImageDataWithCompletionAndErrorHandler:(/*^block*/id)arg1 ;
-(NSData *)imageData;
-(void)loadImageDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)shouldCropToCircle;
-(NSString *)keyColor;
@end
