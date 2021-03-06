/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:41 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet;

@interface CalDAVPrincipalSearchPropertySet : NSObject {

	NSSet* _stringProperties;

}

@property (nonatomic,retain) NSSet * stringProperties;                   //@synthesize stringProperties=_stringProperties - In the implementation block
@property (nonatomic,readonly) BOOL supportsPropertySearch; 
+(id)searchSetWithProperties:(id)arg1 ;
-(BOOL)supportsPropertyTypeWithNameSpace:(id)arg1 andName:(id)arg2 ;
-(void)setStringProperties:(NSSet *)arg1 ;
-(id)initWithSearchProperties:(id)arg1 ;
-(NSSet *)stringProperties;
-(id)initWithStringProperties:(id)arg1 ;
-(BOOL)supportsWellKnownType:(int)arg1 ;
-(BOOL)supportsPropertySearch;
-(BOOL)isEqualToPropertySet:(id)arg1 ;
@end

