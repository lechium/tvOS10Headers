/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:02 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface BBObserverGatewayAddBulletinRequest : NSObject {

	NSString* _bulletinID;
	NSString* _sectionID;
	NSDate* _timeout;
	/*^block*/id _timeoutHandler;

}

@property (nonatomic,copy) NSString * bulletinID;              //@synthesize bulletinID=_bulletinID - In the implementation block
@property (nonatomic,copy) NSString * sectionID;               //@synthesize sectionID=_sectionID - In the implementation block
@property (nonatomic,retain) NSDate * timeout;                 //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,copy) id timeoutHandler;                  //@synthesize timeoutHandler=_timeoutHandler - In the implementation block
-(NSString *)sectionID;
-(void)setSectionID:(NSString *)arg1 ;
-(NSDate *)timeout;
-(void)setTimeout:(NSDate *)arg1 ;
-(NSString *)bulletinID;
-(void)setBulletinID:(NSString *)arg1 ;
-(id)timeoutHandler;
-(void)setTimeoutHandler:(id)arg1 ;
@end
