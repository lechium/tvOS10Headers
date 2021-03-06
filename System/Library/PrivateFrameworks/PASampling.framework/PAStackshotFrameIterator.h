/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:39 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PASampling/PASampling-Structs.h>
@interface PAStackshotFrameIterator : NSObject {

	const void* curFrame;
	const void* topFrame;
	thread_snapshot* snap;
	unsigned curIndex;
	BOOL currentFrameIsKernel;

}
-(const void*)firstValidUserFrame;
-(BOOL)is64bit;
-(id)initWithThreadSnapshot:(thread_snapshot*)arg1 frameStart:(const void*)arg2 ;
-(void)getCurrentFrame:(pa_stack_frame*)arg1 ;
-(BOOL)moveToNextFrame;
@end

