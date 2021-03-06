/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:50 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSString, NSURL;

@interface SSItemArtworkImage : NSObject <SSXPCCoding, NSCopying> {

	NSMutableDictionary* _dictionary;
	NSString* _imageKind;

}

@property (nonatomic,readonly) CGSize imageSize; 
@property (nonatomic,copy) NSString * imageKind;                                   //@synthesize imageKind=_imageKind - In the implementation block
@property (nonatomic,retain) NSURL * URL; 
@property (nonatomic,readonly) NSString * URLString; 
@property (nonatomic,readonly) long long height; 
@property (nonatomic,readonly) long long width; 
@property (nonatomic,readonly) long long imageOrientation; 
@property (nonatomic,readonly) double imageScale; 
@property (getter=isPrerendered,nonatomic,readonly) BOOL prerendered; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setImageKind:(NSString *)arg1 ;
-(NSString *)imageKind;
-(void)_setValue:(id)arg1 forKey:(id)arg2 ;
-(void)setImageKindWithTypeName:(id)arg1 variantName:(id)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)imageOrientation;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(CGSize)imageSize;
-(long long)width;
-(long long)height;
-(id)valueForProperty:(id)arg1 ;
-(NSString *)URLString;
-(double)imageScale;
-(BOOL)isPrerendered;
-(void)setValue:(id)arg1 forProperty:(id)arg2 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)initWithArtworkDictionary:(id)arg1 ;
@end

