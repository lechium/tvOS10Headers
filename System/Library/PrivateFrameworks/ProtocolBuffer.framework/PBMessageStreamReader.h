/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:37 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSInputStream;

@interface PBMessageStreamReader : NSObject {

	NSInputStream* _stream;
	Class _classOfNextMessage;
	unsigned long long _position;

}

@property (assign) Class classOfNextMessage;                   //@synthesize classOfNextMessage=_classOfNextMessage - In the implementation block
@property (readonly) unsigned long long position;              //@synthesize position=_position - In the implementation block
-(Class)classOfNextMessage;
-(void)setClassOfNextMessage:(Class)arg1 ;
-(void)dealloc;
-(unsigned long long)position;
-(id)nextMessage;
-(id)initWithStream:(id)arg1 ;
@end
