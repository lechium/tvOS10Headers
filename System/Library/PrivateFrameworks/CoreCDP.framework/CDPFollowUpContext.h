/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:16 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CDPFollowUpContext : NSObject <NSSecureCoding> {

	BOOL _shouldNotify;
	BOOL _force;
	NSString* _followUpType;

}

@property (nonatomic,copy) NSString * followUpType;              //@synthesize followUpType=_followUpType - In the implementation block
@property (assign,nonatomic) BOOL shouldNotify;                  //@synthesize shouldNotify=_shouldNotify - In the implementation block
@property (assign,nonatomic) BOOL force;                         //@synthesize force=_force - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)contextWithType:(id)arg1 ;
+(id)contextForStateRepair;
+(id)contextForOfflinePasscodeChange;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setForce:(BOOL)arg1 ;
-(BOOL)force;
-(void)setFollowUpType:(NSString *)arg1 ;
-(NSString *)followUpType;
-(void)setShouldNotify:(BOOL)arg1 ;
-(BOOL)shouldNotify;
@end
