/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:58 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TXRBufferAllocator <NSObject>
@optional
-(id)newBufferWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 deallocNotification:(/*^block*/id)arg3 error:(id*)arg4;

@required
-(id)newBufferWithLength:(unsigned long long)arg1;

@end

