/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:48 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingServices.framework/TVHomeSharingServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString, NSDictionary;

@interface TVHSSDMAPAssetData : NSObject <NSSecureCoding> {

	BOOL _isCollection;
	NSData* _responseData;
	unsigned long long _assetDataOffset;
	unsigned long long _assetDataSize;
	NSData* _assetData;
	NSString* _assetString;
	NSDictionary* _metadata;

}

@property (nonatomic,retain) NSData * responseData;                           //@synthesize responseData=_responseData - In the implementation block
@property (assign,nonatomic) unsigned long long assetDataOffset;              //@synthesize assetDataOffset=_assetDataOffset - In the implementation block
@property (assign,nonatomic) unsigned long long assetDataSize;                //@synthesize assetDataSize=_assetDataSize - In the implementation block
@property (nonatomic,retain) NSData * assetData;                              //@synthesize assetData=_assetData - In the implementation block
@property (nonatomic,copy) NSString * assetString;                            //@synthesize assetString=_assetString - In the implementation block
@property (nonatomic,retain) NSDictionary * metadata;                         //@synthesize metadata=_metadata - In the implementation block
@property (assign,nonatomic) BOOL isCollection;                               //@synthesize isCollection=_isCollection - In the implementation block
@property (nonatomic,readonly) BOOL isItem; 
+(BOOL)supportsSecureCoding;
-(void)setResponseData:(NSData *)arg1 ;
-(void)setAssetData:(NSData *)arg1 ;
-(NSData *)assetData;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(id)valueForProperty:(id)arg1 ;
-(NSDictionary *)metadata;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSData *)responseData;
-(id)_valueForCode:(unsigned)arg1 data:(char*)arg2 length:(unsigned)arg3 ;
-(unsigned)_codeForProperty:(id)arg1 ;
-(BOOL)isItem;
-(unsigned long long)assetDataOffset;
-(unsigned long long)assetDataSize;
-(NSString *)assetString;
-(id)_valueForCode:(unsigned)arg1 ;
-(id)initWithResponseData:(id)arg1 assetDataOffset:(unsigned long long)arg2 assetDataSize:(unsigned long long)arg3 ;
-(BOOL)isCollection;
-(void)setIsCollection:(BOOL)arg1 ;
-(void)setAssetDataOffset:(unsigned long long)arg1 ;
-(void)setAssetDataSize:(unsigned long long)arg1 ;
-(void)setAssetString:(NSString *)arg1 ;
@end
