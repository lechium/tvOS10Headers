/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:49 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSVLoadDownloadQueueOperation.h>

@class NSString, NSNumber;

@interface SSVRefreshStoreQueueDownloadOperation : SSVLoadDownloadQueueOperation {

	NSString* _downloadTrasactionID;
	NSNumber* _accountID;
	NSString* _downloadTransactionID;

}

@property (readonly) NSNumber * accountID; 
@property (readonly) NSString * downloadTransactionID;              //@synthesize downloadTransactionID=_downloadTransactionID - In the implementation block
-(BOOL)_refreshDownloadWithTransactionID:(id)arg1 accountID:(id)arg2 bagKey:(id)arg3 error:(id*)arg4 ;
-(id)initWithDownloadTransactionIdentifier:(id)arg1 accountID:(id)arg2 ;
-(id)isDownloadTransactionID;
-(NSString *)downloadTransactionID;
-(void)main;
-(NSNumber *)accountID;
@end

