/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:57 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <libobjc.A.dylib/AVPlayerItemLegibleOutputPushDelegate.h>

@class NSString;

@interface WebCoreAVFMovieObserver : NSObject <AVPlayerItemLegibleOutputPushDelegate> {

	MediaPlayerPrivateAVFoundationObjC* m_callback;
	int m_delayCallbacks;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCallback:(MediaPlayerPrivateAVFoundationObjC*)arg1 ;
-(void)didEnd:(id)arg1 ;
-(void)metadataLoaded;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(int)arg4 ;
-(void)disconnect;
-(void)legibleOutput:(id)arg1 didOutputAttributedStrings:(id)arg2 nativeSampleBuffers:(id)arg3 forItemTime:(SCD_Struct_We17)arg4 ;
-(void)outputSequenceWasFlushed:(id)arg1 ;
@end
