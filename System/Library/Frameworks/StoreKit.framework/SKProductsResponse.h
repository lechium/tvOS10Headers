/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:49 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface SKProductsResponse : NSObject {

	id _internal;

}

@property (nonatomic,readonly) NSArray * products; 
@property (nonatomic,readonly) NSArray * invalidProductIdentifiers; 
-(void)dealloc;
-(id)init;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(void)_setInvalidIdentifiers:(id)arg1 ;
-(void)_setProducts:(id)arg1 ;
-(NSArray *)products;
-(NSArray *)invalidProductIdentifiers;
@end
