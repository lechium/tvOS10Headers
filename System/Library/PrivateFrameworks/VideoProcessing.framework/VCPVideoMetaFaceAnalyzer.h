/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:48 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPVideoMetaAnalyzer.h>

@class NSMutableDictionary, NSMutableArray;

@interface VCPVideoMetaFaceAnalyzer : VCPVideoMetaAnalyzer {

	NSMutableDictionary* _activeFaces;
	CGAffineTransform _transform;
	NSMutableArray* _faceResults;

}
-(id)initWithTransform:(CGAffineTransform)arg1 ;
-(id)results;
-(int)processMetadataGroup:(id)arg1 flags:(unsigned long long*)arg2 ;
-(CGAffineTransform)flipTransform:(CGAffineTransform)arg1 ;
@end

