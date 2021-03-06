/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:25 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSObject, CIContext, EAGLContext, CIFilter, CIImage, PLPhotoEditModel, NSDictionary;

@interface PLPhotoEditRenderer : NSObject {

	NSObject*<OS_dispatch_queue> __renderingQueue;
	CIContext* _generatingCIContext;
	CIContext* _drawingCIContext;
	EAGLContext* _lastUsedEAGLContext;
	CIFilter* _effectFilter;
	CIFilter* _smartToneFilter;
	CIFilter* _localLightFilter;
	CIFilter* _smartColorFilter;
	CIFilter* _smartBWFilter;
	CIFilter* _faceBalanceFilter;
	CIFilter* _redEyeFilter;
	CIImage* _cachedEditedImage;
	PLPhotoEditModel* _photoEditModelInCachedEditedImage;
	NSDictionary* __smartToneAdjustments;
	double _smartToneLevelInCachedAdjustments;
	NSDictionary* _smartToneStatisticsInCachedAdjustments;
	NSDictionary* __smartColorAdjustments;
	double _smartColorLevelInCachedAdjustments;
	NSDictionary* _smartColorStatisticsInCachedAdjustments;
	NSDictionary* __smartBWAdjustments;
	double _smartBWLevelInCachedAdjustments;
	NSDictionary* _smartBWStatisticsInCachedAdjustments;
	CIImage* _originalImage;
	PLPhotoEditModel* _photoEditModel;
	unsigned long long _renderMode;
	long long _smartFiltersCubeSize;

}

@property (nonatomic,retain) CIImage * originalImage;                        //@synthesize originalImage=_originalImage - In the implementation block
@property (nonatomic,retain) PLPhotoEditModel * photoEditModel;              //@synthesize photoEditModel=_photoEditModel - In the implementation block
@property (assign,nonatomic) unsigned long long renderMode;                  //@synthesize renderMode=_renderMode - In the implementation block
@property (assign,nonatomic) long long smartFiltersCubeSize;                 //@synthesize smartFiltersCubeSize=_smartFiltersCubeSize - In the implementation block
@property (nonatomic,retain,readonly) CIImage * outputImage; 
@property (nonatomic,readonly) CGSize outputImageSize; 
@property (nonatomic,readonly) double smartToneBaseBrightness; 
@property (nonatomic,readonly) double smartToneBaseContrast; 
@property (nonatomic,readonly) double smartToneBaseExposure; 
@property (nonatomic,readonly) double smartToneBaseHighlights; 
@property (nonatomic,readonly) double smartToneBaseShadows; 
@property (nonatomic,readonly) double smartToneBaseBlackPoint; 
@property (nonatomic,readonly) double smartToneBaseLocalLight; 
@property (nonatomic,readonly) double smartColorBaseContrast; 
@property (nonatomic,readonly) double smartColorBaseVibrancy; 
@property (nonatomic,readonly) double smartColorBaseCast; 
@property (nonatomic,readonly) double smartBWBaseStrength; 
@property (nonatomic,readonly) double smartBWBaseNeutralGamma; 
@property (nonatomic,readonly) double smartBWBaseTone; 
@property (nonatomic,readonly) double smartBWBaseHue; 
@property (nonatomic,readonly) double smartBWBaseGrain; 
+(id)newImageDataFromCGImage:(CGImageRef)arg1 withCompressionQuality:(double)arg2 metadataSourceImageURL:(id)arg3 preserveRegionsInMetadata:(BOOL)arg4 ;
+(BOOL)currentDeviceShouldAllowLocalLight;
+(id)_editedImagePropertiesFromOriginalImageProperties:(id)arg1 preserveRegions:(BOOL)arg2 ;
-(void)dealloc;
-(id)init;
-(CIImage *)outputImage;
-(void)setPhotoEditModel:(PLPhotoEditModel *)arg1 ;
-(void)setOriginalImage:(CIImage *)arg1 ;
-(void)generateEditedImageDataWithCompressionQuality:(double)arg1 metadataSourceImageURL:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_invalidateCachedFilters;
-(id)_imageByApplyingEditsToImage:(id)arg1 ;
-(void)_handleAssetDidLoadForVideoComposition:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)_videoEditModel;
-(CGColorSpaceRef)_newOutputColorSpace;
-(id)_imageByApplyingEdits:(id)arg1 toImage:(id)arg2 randomSeed:(unsigned long long)arg3 isVideoFrame:(BOOL)arg4 ;
-(id)_editedGeometryImageWithBaseImage:(id)arg1 ;
-(id)_smartToneAdjustments;
-(id)_smartColorAdjustments;
-(id)_smartBWAdjustments;
-(BOOL)_isOrientationMirrored;
-(id)_editedImage;
-(CGImageRef)_newCGImageFromEditedCIImage:(id)arg1 ;
-(id)_renderingQueue;
-(void)createEditedImageWithCompletion:(/*^block*/id)arg1 ;
-(double)_smartBWBaseValueForKey:(id)arg1 defaultValue:(double)arg2 ;
-(void)prepareVideoCompositionForAsset:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(CGImageRef)newEditedImage;
-(void)drawEditedImageInContext:(id)arg1 inRect:(CGRect)arg2 viewportWidth:(int)arg3 viewportHeight:(int)arg4 ;
-(void)setRenderMode:(unsigned long long)arg1 ;
-(void)setSmartFiltersCubeSize:(long long)arg1 ;
-(CGSize)outputImageSize;
-(double)smartToneBaseBrightness;
-(double)smartToneBaseContrast;
-(double)smartToneBaseExposure;
-(double)smartToneBaseHighlights;
-(double)smartToneBaseShadows;
-(double)smartToneBaseBlackPoint;
-(double)smartToneBaseLocalLight;
-(double)smartColorBaseContrast;
-(double)smartColorBaseVibrancy;
-(double)smartColorBaseCast;
-(double)smartBWBaseStrength;
-(double)smartBWBaseNeutralGamma;
-(double)smartBWBaseTone;
-(double)smartBWBaseHue;
-(double)smartBWBaseGrain;
-(CIImage *)originalImage;
-(PLPhotoEditModel *)photoEditModel;
-(unsigned long long)renderMode;
-(long long)smartFiltersCubeSize;
@end

