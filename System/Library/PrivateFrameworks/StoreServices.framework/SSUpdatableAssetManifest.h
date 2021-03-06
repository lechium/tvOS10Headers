/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:50 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSCache, NSArray, SSUpdatableAsset, NSURL, NSString;

@interface SSUpdatableAssetManifest : NSObject {

	NSDictionary* _assetsByName;
	NSCache* _imageCache;
	NSArray* _assets;
	SSUpdatableAsset* _bootstrapAsset;
	NSURL* _cacheURL;
	NSDictionary* _extraInfo;
	double _lastModifiedTimestamp;
	NSString* _name;
	double _pollInterval;
	long long _reloadUrgencyType;
	NSURL* _serverURL;
	NSString* _version;

}

@property (setter=_setAssets:,nonatomic,copy) NSArray * assets;                                           //@synthesize assets=_assets - In the implementation block
@property (setter=_setBootstrapAsset:,nonatomic,retain) SSUpdatableAsset * bootstrapAsset;                //@synthesize bootstrapAsset=_bootstrapAsset - In the implementation block
@property (setter=_setCacheURL:,nonatomic,retain) NSURL * cacheURL;                                       //@synthesize cacheURL=_cacheURL - In the implementation block
@property (setter=_setExtraInfo:,nonatomic,copy) NSDictionary * extraInfo;                                //@synthesize extraInfo=_extraInfo - In the implementation block
@property (assign,setter=_setLastModifiedTimestamp:,nonatomic) double lastModifiedTimestamp;              //@synthesize lastModifiedTimestamp=_lastModifiedTimestamp - In the implementation block
@property (setter=_setName:,nonatomic,copy) NSString * name;                                              //@synthesize name=_name - In the implementation block
@property (assign,setter=_setPollInterval:,nonatomic) double pollInterval;                                //@synthesize pollInterval=_pollInterval - In the implementation block
@property (assign,setter=_setReloadUrgencyType:,nonatomic) long long reloadUrgencyType;                   //@synthesize reloadUrgencyType=_reloadUrgencyType - In the implementation block
@property (setter=_setServerURL:,nonatomic,retain) NSURL * serverURL;                                     //@synthesize serverURL=_serverURL - In the implementation block
@property (setter=_setVersion:,nonatomic,copy) NSString * version;                                        //@synthesize version=_version - In the implementation block
+(id)_osVersionString;
-(void)_setName:(id)arg1 ;
-(id)assetWithName:(id)arg1 ;
-(SSUpdatableAsset *)bootstrapAsset;
-(void)_setBootstrapAsset:(id)arg1 ;
-(void)_setCacheURL:(id)arg1 ;
-(NSDictionary *)extraInfo;
-(void)_setExtraInfo:(id)arg1 ;
-(double)lastModifiedTimestamp;
-(void)_setLastModifiedTimestamp:(double)arg1 ;
-(double)pollInterval;
-(void)_setPollInterval:(double)arg1 ;
-(long long)reloadUrgencyType;
-(void)_setReloadUrgencyType:(long long)arg1 ;
-(NSURL *)serverURL;
-(void)_setServerURL:(id)arg1 ;
-(void)_setVersion:(id)arg1 ;
-(NSString *)name;
-(NSString *)version;
-(NSURL *)cacheURL;
-(NSArray *)assets;
-(void)_setAssets:(id)arg1 ;
@end

