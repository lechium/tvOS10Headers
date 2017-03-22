/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:27 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSKeyedArchiver, NSString;

@interface HMDKeyedRemoteArchiver : NSObject {

	NSKeyedArchiver* _archiver;
	NSString* _transportType;

}

@property (nonatomic,retain) NSKeyedArchiver * archiver;              //@synthesize archiver=_archiver - In the implementation block
@property (nonatomic,retain) NSString * transportType;                //@synthesize transportType=_transportType - In the implementation block
-(void)encodeObject:(id)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(void)finishEncoding;
-(NSString *)transportType;
-(void)setTransportType:(NSString *)arg1 ;
-(NSKeyedArchiver *)archiver;
-(id)initForWritingWithMutableData:(id)arg1 remoteDeviceIsOnSameAccount:(BOOL)arg2 remoteGateway:(BOOL)arg3 remoteUserIsAdministrator:(BOOL)arg4 ;
-(void)setArchiver:(NSKeyedArchiver *)arg1 ;
@end
