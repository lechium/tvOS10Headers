/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:44 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIInputViewSetPlacement, UIInputViewSet, UIView;


@protocol UIInputViewSetPlacementOwner <NSObject>
@property (readonly) BOOL keyboardController; 
@property (retain,readonly) UIInputViewSetPlacement * placement; 
@property (nonatomic,retain,readonly) id<UIInputViewSetPlacementApplicator> applicator; 
@property (retain,readonly) UIInputViewSet * inputViewSet; 
@property (retain,readonly) UIView * hostView; 
@property (retain,readonly) UIView * containerView; 
@property (assign) BOOL hideInputViewBackdrops; 
@property (readonly) long long inputViewBackdropStyle; 
@required
-(UIView *)containerView;
-(id<UIInputViewSetPlacementApplicator>)applicator;
-(UIInputViewSet *)inputViewSet;
-(UIInputViewSetPlacement *)placement;
-(UIView *)hostView;
-(BOOL)keyboardController;
-(void)setHideInputViewBackdrops:(BOOL)arg1;
-(long long)inputViewBackdropStyle;
-(BOOL)hideInputViewBackdrops;

@end

