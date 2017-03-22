/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:20 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRoutine/CoreRoutine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID;

@interface RTMicroLocation : NSObject <NSCopying> {

	NSUUID* _identifier;
	double _probability;

}

@property (nonatomic,retain) NSUUID * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) double probability;               //@synthesize probability=_probability - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSUUID *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(double)probability;
-(void)setProbability:(double)arg1 ;
-(id)initWithIdentifier:(id)arg1 probability:(double)arg2 ;
-(id)initWithMicroLocationResult:(id)arg1 ;
@end
