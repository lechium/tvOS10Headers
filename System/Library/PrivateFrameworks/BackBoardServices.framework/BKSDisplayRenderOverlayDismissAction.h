/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:21 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class BKSDisplayRenderOverlayDescriptor;


@protocol BKSDisplayRenderOverlayDismissAction <NSObject>
@property (nonatomic,readonly) BKSDisplayRenderOverlayDescriptor * overlayDescriptor; 
@required
-(void)dismissWithAnimation:(id)arg1;
-(BKSDisplayRenderOverlayDescriptor *)overlayDescriptor;
-(void)dismiss;

@end

