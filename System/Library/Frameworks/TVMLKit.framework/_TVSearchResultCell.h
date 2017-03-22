/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:36 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionViewCell.h>

@class UIViewController;

@interface _TVSearchResultCell : UICollectionViewCell {

	UIViewController* _viewController;
	/*^block*/id _didFocusBlock;

}

@property (nonatomic,retain) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,copy) id didFocusBlock;                                 //@synthesize didFocusBlock=_didFocusBlock - In the implementation block
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(BOOL)canBecomeFocused;
-(void)prepareForReuse;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(id)didFocusBlock;
-(void)setDidFocusBlock:(id)arg1 ;
@end
