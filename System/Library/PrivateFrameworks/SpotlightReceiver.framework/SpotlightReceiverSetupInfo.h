/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:46 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SpotlightReceiver.framework/SpotlightReceiver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface SpotlightReceiverSetupInfo : NSObject <NSSecureCoding> {

	BOOL _wantsIndexUpdates;
	BOOL _wantsUAs;
	BOOL _wantsInteractions;
	NSArray* _bundleIDs;
	NSArray* _contentTypes;
	NSArray* _INIntentClassNames;

}

@property (assign,nonatomic) BOOL wantsIndexUpdates;                    //@synthesize wantsIndexUpdates=_wantsIndexUpdates - In the implementation block
@property (assign,nonatomic) BOOL wantsUAs;                             //@synthesize wantsUAs=_wantsUAs - In the implementation block
@property (assign,nonatomic) BOOL wantsInteractions;                    //@synthesize wantsInteractions=_wantsInteractions - In the implementation block
@property (nonatomic,retain) NSArray * bundleIDs;                       //@synthesize bundleIDs=_bundleIDs - In the implementation block
@property (nonatomic,retain) NSArray * contentTypes;                    //@synthesize contentTypes=_contentTypes - In the implementation block
@property (nonatomic,retain) NSArray * INIntentClassNames;              //@synthesize INIntentClassNames=_INIntentClassNames - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)bundleIDs;
-(void)setBundleIDs:(NSArray *)arg1 ;
-(NSArray *)contentTypes;
-(void)setContentTypes:(NSArray *)arg1 ;
-(BOOL)wantsIndexUpdates;
-(BOOL)wantsUAs;
-(BOOL)wantsInteractions;
-(NSArray *)INIntentClassNames;
-(void)setWantsUAs:(BOOL)arg1 ;
-(void)setWantsIndexUpdates:(BOOL)arg1 ;
-(void)setWantsInteractions:(BOOL)arg1 ;
-(void)setINIntentClassNames:(NSArray *)arg1 ;
@end

