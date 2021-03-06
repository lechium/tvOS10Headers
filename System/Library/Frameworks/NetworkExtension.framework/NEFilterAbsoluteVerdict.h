/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:07 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEFilterVerdict.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NEFilterAbsoluteVerdict : NEFilterVerdict <NSSecureCoding, NSCopying> {

	unsigned long long _inboundPassOffset;
	unsigned long long _inboundPeekOffset;
	unsigned long long _outboundPassOffset;
	unsigned long long _outboundPeekOffset;

}

@property (assign) unsigned long long inboundPassOffset;               //@synthesize inboundPassOffset=_inboundPassOffset - In the implementation block
@property (assign) unsigned long long inboundPeekOffset;               //@synthesize inboundPeekOffset=_inboundPeekOffset - In the implementation block
@property (assign) unsigned long long outboundPassOffset;              //@synthesize outboundPassOffset=_outboundPassOffset - In the implementation block
@property (assign) unsigned long long outboundPeekOffset;              //@synthesize outboundPeekOffset=_outboundPeekOffset - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDrop:(BOOL)arg1 inboundPassOffset:(unsigned long long)arg2 inboundPeekOffset:(unsigned long long)arg3 outboundPassOffset:(unsigned long long)arg4 outboundPeekOffset:(unsigned long long)arg5 ;
-(unsigned long long)inboundPeekOffset;
-(unsigned long long)inboundPassOffset;
-(unsigned long long)outboundPeekOffset;
-(unsigned long long)outboundPassOffset;
-(void)setInboundPassOffset:(unsigned long long)arg1 ;
-(void)setInboundPeekOffset:(unsigned long long)arg1 ;
-(void)setOutboundPassOffset:(unsigned long long)arg1 ;
-(void)setOutboundPeekOffset:(unsigned long long)arg1 ;
@end

