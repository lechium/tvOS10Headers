/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:35 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionViewLayoutInvalidationContext.h>

@class NSIndexPath;

@interface TVShelfViewLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext {

	BOOL _invalidateLayout;
	BOOL _invalidateVerticalBumps;
	NSIndexPath* _focusedItemIndexPath;

}

@property (assign,nonatomic) BOOL invalidateLayout;                           //@synthesize invalidateLayout=_invalidateLayout - In the implementation block
@property (assign,nonatomic) BOOL invalidateVerticalBumps;                    //@synthesize invalidateVerticalBumps=_invalidateVerticalBumps - In the implementation block
@property (nonatomic,retain) NSIndexPath * focusedItemIndexPath;              //@synthesize focusedItemIndexPath=_focusedItemIndexPath - In the implementation block
-(BOOL)invalidateLayout;
-(void)setInvalidateVerticalBumps:(BOOL)arg1 ;
-(void)setFocusedItemIndexPath:(NSIndexPath *)arg1 ;
-(void)setInvalidateLayout:(BOOL)arg1 ;
-(BOOL)invalidateVerticalBumps;
-(NSIndexPath *)focusedItemIndexPath;
@end

