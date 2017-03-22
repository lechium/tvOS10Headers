/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:01 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardUIServices.framework/FrontBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardUIServices/FrontBoardUIServices-Structs.h>
#import <libobjc.A.dylib/FBUISceneIdentity.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBSDisplay;

@interface FBUISceneIdentity : NSObject <FBUISceneIdentity, NSCopying> {

	NSString* _identifier;
	FBSDisplay* _display;

}

@property (nonatomic,copy,readonly) NSString * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain,readonly) FBSDisplay * display;                  //@synthesize display=_display - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * sceneIdentifier; 
+(id)identityWithIdentifier:(id)arg1 display:(id)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)identifier;
-(FBSDisplay *)display;
-(BOOL)isValid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqualToIdentity:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 display:(id)arg2 ;
-(NSString *)sceneIdentifier;
@end
