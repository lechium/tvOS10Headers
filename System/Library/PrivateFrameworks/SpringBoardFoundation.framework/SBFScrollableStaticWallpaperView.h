/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:19 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <SpringBoardFoundation/SBFStaticWallpaperView.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol SBFCancelable;
@class UIImageView, UIScrollView, SBFLockScreenWallpaperParallaxSettings, SBFSubject, UIColor, NSString;

@interface SBFScrollableStaticWallpaperView : SBFStaticWallpaperView <UIScrollViewDelegate> {

	UIImageView* _imageView;
	UIImageView* _gradientView;
	UIScrollView* _scrollView;
	SBFLockScreenWallpaperParallaxSettings* _parallaxSettings;
	SBFSubject* _scrollViewObserver;
	id<SBFCancelable> _colorBoxCancelToken;
	id<SBFCancelable> _parallaxCancelToken;
	double _minimumZoomScaleForParallax;
	double _minimumZoomScale;
	BOOL _parallaxCanBeEnabledAutomatically;
	UIColor* _averageColor;

}

@property (__weak,readonly) UIColor * averageColor;                 //@synthesize averageColor=_averageColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_shouldScaleForParallax;
+(BOOL)_canCacheImages;
+(BOOL)_canDownscaleSampleImage;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3 ;
-(id)_scrollView;
-(CGRect)cropRect;
-(double)parallaxFactor;
-(BOOL)supportsCropping;
-(CGRect)_cropRect;
-(void)legibilitySettingsDidChange;
-(void)setCropRect:(CGRect)arg1 zoomScale:(double)arg2 ;
-(double)cropZoomScale;
-(id)initWithFrame:(CGRect)arg1 wallpaperImage:(id)arg2 variant:(long long)arg3 ;
-(CGPoint)_boundedContentOffsetForOverhang;
-(double)_parallaxFactorWithZoomScale:(double)arg1 contentOffset:(CGPoint)arg2 ;
-(double)_scrollViewParallaxFactor;
-(CGPoint)_minimumContentOffsetForOverhang;
-(CGPoint)_maximumContentOffsetForOverhang;
-(id)_newImageView;
-(void)_setupScrollView;
-(void)_setupScrollViewObserver;
-(void)_setupColorBoxObserver;
-(void)_setupParallaxObserver;
-(double)_throttleDuration;
-(void)_updateParallaxForScroll;
-(void)_updateScrollViewZoomScales;
-(void)_setupContentView;
-(id)_wallpaperImageForAnalysis;
-(UIColor *)averageColor;
-(void)setParallaxEnabled:(BOOL)arg1 ;
-(CGSize)_imageSize;
@end
