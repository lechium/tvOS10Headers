/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:05 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CFNetwork/CFNetwork-Structs.h>
@class NSURLAuthenticationChallenge, NSOperationQueue;

@interface NSURLDownloadInternal : NSObject {

	CFURLDownloadRef cfDownload;
	CFURLAuthChallengeRef currCFChallenge;
	NSURLAuthenticationChallenge* currNSChallenge;
	id delegate;
	BOOL downloadActive;
	NSOperationQueue* _targetQueue;

}
-(void)dealloc;
@end
