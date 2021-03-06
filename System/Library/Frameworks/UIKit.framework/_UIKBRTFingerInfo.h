/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:42 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _UIKBRTFingerInfo : NSObject <NSCopying> {

	BOOL _unknownSeen;
	double _radius;
	double _lastSeenTimestamp;
	unsigned long long _identity;
	CGPoint _location;

}

@property (assign,nonatomic) CGPoint location;                         //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) double radius;                            //@synthesize radius=_radius - In the implementation block
@property (assign,nonatomic) double lastSeenTimestamp;                 //@synthesize lastSeenTimestamp=_lastSeenTimestamp - In the implementation block
@property (assign,nonatomic) unsigned long long identity;              //@synthesize identity=_identity - In the implementation block
@property (assign,nonatomic) BOOL unknownSeen;                         //@synthesize unknownSeen=_unknownSeen - In the implementation block
@property (nonatomic,readonly) double feedbackAlpha; 
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGPoint)location;
-(void)setLocation:(CGPoint)arg1 ;
-(void)setRadius:(double)arg1 ;
-(void)setLastSeenTimestamp:(double)arg1 ;
-(unsigned long long)identity;
-(void)setIdentity:(unsigned long long)arg1 ;
-(void)setUnknownSeen:(BOOL)arg1 ;
-(double)radius;
-(double)lastSeenTimestamp;
-(BOOL)unknownSeen;
-(double)feedbackAlpha;
@end

