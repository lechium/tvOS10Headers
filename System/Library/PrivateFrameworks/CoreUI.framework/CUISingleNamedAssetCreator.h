/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:00 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@class NSString, NSMutableArray, CUIMutableCommonAssetStorage;

@interface CUISingleNamedAssetCreator : NSObject {

	NSString* _primaryName;
	unsigned long long _primaryIndex;
	NSMutableArray* _names;
	NSMutableArray* _generators;
	CUIMutableCommonAssetStorage* _store;
	double _radiosityCompressionQuaility;
	double _flattenedCompressionQuality;
	double _layersCompressionQuality;
	long long _compressionType;

}

@property (retain) CUIMutableCommonAssetStorage * store;              //@synthesize store=_store - In the implementation block
@property (retain) NSString * primaryName;                            //@synthesize primaryName=_primaryName - In the implementation block
@property (assign) unsigned long long primaryIndex;                   //@synthesize primaryIndex=_primaryIndex - In the implementation block
@property (retain) NSMutableArray * names;                            //@synthesize names=_names - In the implementation block
@property (retain) NSMutableArray * generators;                       //@synthesize generators=_generators - In the implementation block
-(void)setCompressionType:(long long)arg1 ;
-(long long)compressionType;
-(double)compressionQuality;
-(void)setCompressionQuality:(double)arg1 ;
-(const renditionkeyfmt*)_keyFormat;
-(void)setFlattenedLossyCompressionQuality:(double)arg1 ;
-(void)setLayersLossyCompressionQuality:(double)arg1 ;
-(double)radiosityLossyCompressionQuality;
-(void)setGenerators:(NSMutableArray *)arg1 ;
-(NSMutableArray *)generators;
-(double)layersLossyCompressionQuality;
-(id)_defaultBaseKey;
-(id)_addImage:(CGImageRef)arg1 withBaseKey:(id)arg2 name:(id)arg3 ;
-(void)_addImageAsJPEG:(CGImageRef)arg1 withBaseKey:(id)arg2 withName:(id)arg3 ;
-(void)setPrimaryName:(NSString *)arg1 ;
-(void)setPrimaryIndex:(unsigned long long)arg1 ;
-(unsigned long long)primaryIndex;
-(id)_generatorForName:(id)arg1 ;
-(id)_flattenedImageBaseKey;
-(id)_radiosityImageBaseKey;
-(id)_keyDataFromKey:(const renditionkeytoken*)arg1 ;
-(void)_configureDefaultStorageParameters;
-(void)_finalizeNameIdentifiers;
-(BOOL)_extractFlattenedImages:(id*)arg1 ;
-(BOOL)_distillNameEntries:(id*)arg1 ;
-(BOOL)_distillRenditions:(id*)arg1 ;
-(void)setRadiosityLossyCompressionQuality:(double)arg1 ;
-(double)flattenedLossyCompressionQuality;
-(id)initWithOutputURL:(id)arg1 versionString:(id)arg2 ;
-(void)addImage:(CGImageRef)arg1 withName:(id)arg2 ;
-(void)addImageAsJPEG:(CGImageRef)arg1 withName:(id)arg2 ;
-(void)addLayerStackWithSize:(CGSize)arg1 stackData:(id)arg2 name:(id)arg3 ;
-(void)addLayerReference:(id)arg1 forImage:(CGImageRef)arg2 toLayerStackWithName:(id)arg3 ;
-(void)addFlattenedImage:(CGImageRef)arg1 forLayerStackWithName:(id)arg2 ;
-(BOOL)distillAndSave:(id*)arg1 ;
-(void)dealloc;
-(id)path;
-(NSMutableArray *)names;
-(void)setNames:(NSMutableArray *)arg1 ;
-(void)setStore:(CUIMutableCommonAssetStorage *)arg1 ;
-(NSString *)primaryName;
-(CUIMutableCommonAssetStorage *)store;
@end

