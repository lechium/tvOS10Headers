/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:57 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol TVSStoreContentMetadataFetchOperationDelegate;
@class NSSet, NSString, NSValueTransformer, NSDictionary, NSOperationQueue, NSArray;

@interface TVSStoreContentMetadataFetchOperation : NSOperation {

	BOOL _executing;
	BOOL _finished;
	NSSet* _adamIDs;
	NSString* _keyProfile;
	long long _personalizationStyle;
	id<TVSStoreContentMetadataFetchOperationDelegate> _delegate;
	NSValueTransformer* _lookupItemValueTransformer;
	NSDictionary* _lookupItemsByAdamID;
	NSOperationQueue* _requestQueue;

}

@property (nonatomic,retain) NSDictionary * lookupItemsByAdamID;                                             //@synthesize lookupItemsByAdamID=_lookupItemsByAdamID - In the implementation block
@property (nonatomic,retain) NSOperationQueue * requestQueue;                                                //@synthesize requestQueue=_requestQueue - In the implementation block
@property (nonatomic,copy,readonly) NSSet * adamIDs;                                                         //@synthesize adamIDs=_adamIDs - In the implementation block
@property (nonatomic,copy,readonly) NSString * keyProfile;                                                   //@synthesize keyProfile=_keyProfile - In the implementation block
@property (nonatomic,readonly) long long personalizationStyle;                                               //@synthesize personalizationStyle=_personalizationStyle - In the implementation block
@property (assign,nonatomic,__weak) id<TVSStoreContentMetadataFetchOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * lookupItems; 
@property (nonatomic,retain) NSValueTransformer * lookupItemValueTransformer;                                //@synthesize lookupItemValueTransformer=_lookupItemValueTransformer - In the implementation block
-(void)cancel;
-(void)setDelegate:(id<TVSStoreContentMetadataFetchOperationDelegate>)arg1 ;
-(id)init;
-(id<TVSStoreContentMetadataFetchOperationDelegate>)delegate;
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(NSOperationQueue *)requestQueue;
-(void)setRequestQueue:(NSOperationQueue *)arg1 ;
-(BOOL)isConcurrent;
-(long long)personalizationStyle;
-(id)initWithAdamIDs:(id)arg1 keyProfile:(id)arg2 personalizationStyle:(long long)arg3 ;
-(NSArray *)lookupItems;
-(id)lookupItemForAdamID:(id)arg1 ;
-(void)setLookupItemValueTransformer:(NSValueTransformer *)arg1 ;
-(NSDictionary *)lookupItemsByAdamID;
-(void)setLookupItemsByAdamID:(NSDictionary *)arg1 ;
-(NSValueTransformer *)lookupItemValueTransformer;
-(NSSet *)adamIDs;
-(NSString *)keyProfile;
-(void)_obtainedLookupItems:(id)arg1 withExpirationDate:(id)arg2 ;
-(id)initWithAdamIDs:(id)arg1 ;
@end

