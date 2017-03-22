/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:16 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class BKSAnimationFenceHandle;

@interface _UIKeyboardChangedInformation : NSObject <NSCopying, NSSecureCoding> {

	BOOL _keyboardOnScreen;
	BKSAnimationFenceHandle* _animationFence;
	CGRect _keyboardPosition;
	CGRect _keyboardPositionWithIAV;

}

@property (copy,readonly) BKSAnimationFenceHandle * animationFence;              //@synthesize animationFence=_animationFence - In the implementation block
@property (readonly) CGRect keyboardPosition;                                    //@synthesize keyboardPosition=_keyboardPosition - In the implementation block
@property (readonly) CGRect keyboardPositionWithIAV;                             //@synthesize keyboardPositionWithIAV=_keyboardPositionWithIAV - In the implementation block
@property (readonly) BOOL keyboardOnScreen;                                      //@synthesize keyboardOnScreen=_keyboardOnScreen - In the implementation block
+(id)animationFence;
+(BOOL)supportsSecureCoding;
+(id)informationForKeyboardDown;
+(id)informationForKeyboardUp:(CGRect)arg1 withIAV:(CGRect)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(BKSAnimationFenceHandle *)animationFence;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithKeyboardRect:(CGRect)arg1 iavPosition:(CGRect)arg2 onScreen:(BOOL)arg3 fence:(id)arg4 ;
-(CGRect)keyboardPosition;
-(CGRect)keyboardPositionWithIAV;
-(BOOL)keyboardOnScreen;
-(void)resetAnimationFencing;
-(id)copyWithoutIAV;
@end
