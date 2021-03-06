/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:55 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKProducerBundle.h>

@class NSArray, OKProducerContent;

@interface OKProducerPlugin : OKProducerBundle {

	Class _producerClass;
	long long _loadCounter;
	NSArray* _loadedClasses;
	OKProducerContent* _content;

}

@property (nonatomic,retain) OKProducerContent * content;              //@synthesize content=_content - In the implementation block
-(id)backgroundColor;
-(void)dealloc;
-(id)init;
-(id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 ;
-(OKProducerContent *)content;
-(id)initWithURL:(id)arg1 ;
-(id)localizedName;
-(BOOL)isLoaded;
-(BOOL)_load;
-(void)setContent:(OKProducerContent *)arg1 ;
-(id)contentIdentifier;
-(id)URLForResource:(id)arg1 withExtension:(id)arg2 ;
-(void)_unload;
-(void)setupJavascriptContext:(id)arg1 ;
-(unsigned long long)family;
-(id)audioURLs;
-(id)exportedClassNames;
-(BOOL)hasLoadedClass:(Class)arg1 ;
-(double)minimumContentVersion;
-(id)producerWithPresentation:(id)arg1 ;
-(BOOL)loadRetain;
-(void)unloadRelease;
-(id)guidelinesFromLegacyData:(id)arg1 withMediaURLs:(id)arg2 andMediaLookupDelegate:(id)arg3 ;
-(void)_bundleDidLoad:(id)arg1 ;
-(id)supportedResolutions;
-(BOOL)hasExportedClass:(Class)arg1 ;
@end

