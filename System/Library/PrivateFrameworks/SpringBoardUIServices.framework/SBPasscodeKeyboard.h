/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:39 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKit/UIKeyboard.h>

@class SBUIPasscodeLockViewWithKeyboard;

@interface SBPasscodeKeyboard : UIKeyboard {

	SBUIPasscodeLockViewWithKeyboard* _lockView;

}
-(BOOL)isActive;
-(BOOL)shouldSaveMinimizationState;
-(void)minimize;
-(void)maximize;
-(BOOL)canDismiss;
-(id)initWithFrame:(CGRect)arg1 lockView:(id)arg2 ;
@end

