/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:53 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSURLRequest, SSURLRequestProperties, NSHTTPURLResponse, NSString;

@interface SSVSAPSignatureDataSource : NSObject {

	NSData* _bodyData;
	NSURLRequest* _request;
	SSURLRequestProperties* _requestProperties;
	NSHTTPURLResponse* _response;

}

@property (nonatomic,readonly) NSData * HTTPBody; 
@property (nonatomic,readonly) NSString * HTTPMethod; 
-(id)initWithURLResponse:(id)arg1 bodyData:(id)arg2 ;
-(NSData *)HTTPBody;
-(NSString *)HTTPMethod;
-(id)valueForHTTPHeader:(id)arg1 ;
-(id)valueForQueryParameter:(id)arg1 ;
-(id)initWithURLRequestProperties:(id)arg1 ;
-(id)initWithURLRequest:(id)arg1 ;
@end

