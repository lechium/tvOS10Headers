/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:40 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>
#import <libobjc.A.dylib/CoreDAVPropFindTaskDelegate.h>

@class NSSet, NSURL, NSString;

@interface CalDAVRetrieveSharedCalendarShareesTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate> {

	NSSet* _sharees;
	NSURL* _url;

}

@property (nonatomic,retain) NSURL * url;                           //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSSet * sharees;                       //@synthesize sharees=_sharees - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(NSSet *)sharees;
-(void)setSharees:(NSSet *)arg1 ;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 ;
-(void)startTaskGroup;
-(id)initWithCalendarURL:(id)arg1 accountInfoProvider:(id)arg2 taskManager:(id)arg3 ;
@end

