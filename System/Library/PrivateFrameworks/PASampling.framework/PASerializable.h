/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:39 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PASerializable <NSObject>
@required
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1;
-(void)addSelfToSerializationDictionary:(NSMutableDictionary*)arg1;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(BOOL)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(NSMutableDictionary*)arg2;
-(void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(NSMutableDictionary*)arg2 andDataBufferDictionary:(NSMutableDictionary*)arg3;

@end
