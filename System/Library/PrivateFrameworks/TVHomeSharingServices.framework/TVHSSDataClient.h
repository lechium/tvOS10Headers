/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:48 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingServices.framework/TVHomeSharingServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingServices/TVHomeSharingServices-Structs.h>
#import <TVServices/TVSDataClient.h>

@class TVHSSPhotoLibraryState, NSDate, NSString, NSMutableDictionary;

@interface TVHSSDataClient : TVSDataClient {

	BOOL _supportsDRMContent;
	unsigned _fairPlayContext;
	TVHSSPhotoLibraryState* _photoLibraryState;
	unsigned long long _machineID;
	NSDate* _lastRequestErrorDate;
	NSString* _keybagPath;
	NSMutableDictionary* _imageLoaderQueryMap;

}

@property (assign,nonatomic) unsigned long long machineID;                           //@synthesize machineID=_machineID - In the implementation block
@property (nonatomic,retain) NSDate * lastRequestErrorDate;                          //@synthesize lastRequestErrorDate=_lastRequestErrorDate - In the implementation block
@property (nonatomic,copy) NSString * keybagPath;                                    //@synthesize keybagPath=_keybagPath - In the implementation block
@property (assign,nonatomic) unsigned fairPlayContext;                               //@synthesize fairPlayContext=_fairPlayContext - In the implementation block
@property (assign,nonatomic) BOOL supportsDRMContent;                                //@synthesize supportsDRMContent=_supportsDRMContent - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * imageLoaderQueryMap;              //@synthesize imageLoaderQueryMap=_imageLoaderQueryMap - In the implementation block
@property (nonatomic,copy) TVHSSPhotoLibraryState * photoLibraryState;               //@synthesize photoLibraryState=_photoLibraryState - In the implementation block
+(BOOL)_isImageQuery:(id)arg1 ;
-(NSString *)keybagPath;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)machineID;
-(void)setMachineID:(unsigned long long)arg1 ;
-(void)setKeybagPath:(NSString *)arg1 ;
-(id)imageKeyForObject:(id)arg1 ;
-(id)loadImageForObject:(id)arg1 scaleToSize:(CGSize)arg2 cropToFit:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)cancelLoad:(id)arg1 ;
-(void)concreteDataClientConnect;
-(void)concreteDataClientDisconnect;
-(BOOL)canProcessQueryConcurrently:(id)arg1 ;
-(id)mediaItemForDataItem:(id)arg1 ;
-(BOOL)processQueryAsync:(id)arg1 ;
-(BOOL)supportsDRMContent;
-(unsigned)fairPlayContext;
-(TVHSSPhotoLibraryState *)photoLibraryState;
-(void)setPhotoLibraryState:(TVHSSPhotoLibraryState *)arg1 ;
-(id)initWithMachineID:(unsigned long long)arg1 clientName:(id)arg2 supportsDRMContent:(BOOL)arg3 clientType:(unsigned long long)arg4 ;
-(id)_dataItemsFromDMAPAssets:(id)arg1 ;
-(BOOL)isCropToFitAvailableForBaseItem:(id)arg1 ;
-(id)_decoratedImageIdentifierForObject:(id)arg1 scaleToSize:(CGSize)arg2 cropToFit:(BOOL)arg3 ;
-(id)_imageQueryWithAsset:(id)arg1 imageIdentifier:(id)arg2 scaleToSize:(CGSize)arg3 cropToFit:(BOOL)arg4 outQueryNeedsToBeSubmitted:(BOOL*)arg5 ;
-(void)_submitQuery:(id)arg1 imageIdentifier:(id)arg2 ;
-(NSMutableDictionary *)imageLoaderQueryMap;
-(id)_imageQueryWithAsset:(id)arg1 imageIdentifier:(id)arg2 scaleToSize:(CGSize)arg3 cropToFit:(BOOL)arg4 ;
-(void)_destroyFairPlayContext;
-(id)decryptDRMTokenData:(id)arg1 ;
-(void)setSupportsDRMContent:(BOOL)arg1 ;
-(NSDate *)lastRequestErrorDate;
-(void)setLastRequestErrorDate:(NSDate *)arg1 ;
-(void)setFairPlayContext:(unsigned)arg1 ;
-(void)setImageLoaderQueryMap:(NSMutableDictionary *)arg1 ;
@end

