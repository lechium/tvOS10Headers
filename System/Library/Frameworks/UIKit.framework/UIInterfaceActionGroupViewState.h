/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:16 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIInterfaceActionVisualStyleViewState.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface UIInterfaceActionGroupViewState : UIInterfaceActionVisualStyleViewState <NSCopying> {

	BOOL _isVerticalLayoutAxis;
	long long _resolvedPresentationStyle;

}

@property (nonatomic,readonly) BOOL isVerticalLayoutAxis;                        //@synthesize isVerticalLayoutAxis=_isVerticalLayoutAxis - In the implementation block
@property (nonatomic,readonly) long long resolvedPresentationStyle;              //@synthesize resolvedPresentationStyle=_resolvedPresentationStyle - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_collectStateFromGroupViewState:(id)arg1 ;
-(BOOL)_stateEqualToGroupViewState:(id)arg1 ;
-(BOOL)isVerticalLayoutAxis;
-(long long)resolvedPresentationStyle;
-(id)copyWithVerticalLayoutAxis:(BOOL)arg1 ;
-(id)copyWithResolvedPresentationStyle:(long long)arg1 ;
@end
