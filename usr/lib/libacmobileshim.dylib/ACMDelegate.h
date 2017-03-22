/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:52 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libacmobileshim.dylib/libacmobileshim.dylib-Structs.h>
#import <libobjc.A.dylib/ACMExternalAppleConnectDelegate.h>

@class NSString;

@interface ACMDelegate : NSObject <ACMExternalAppleConnectDelegate> {

	unsigned char _finished;
	/*^block*/id copyTicketCompletion;

}

@property (assign) unsigned char finished;                          //@synthesize finished=_finished - In the implementation block
@property (copy) id copyTicketCompletion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(unsigned char)finished;
-(void)setFinished:(unsigned char)arg1 ;
-(void)setCopyTicketCompletion:(id)arg1 ;
-(id)copyTicketCompletion;
-(void)appleConnect:(id)arg1 authenticationDidEndWithResponse:(id)arg2 ;
-(id)appleConnectParentViewController:(id)arg1 ;
@end
