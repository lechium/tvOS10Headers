/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:28 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/BBRemoteDataProvider.h>

@class BBDataProviderProxy, NSMutableDictionary, HMDHomeManager, NSString;

@interface HMDBulletinProvider : NSObject <NSSecureCoding, BBRemoteDataProvider> {

	BBDataProviderProxy* _proxy;
	NSMutableDictionary* _bulletins;
	HMDHomeManager* _homeManager;

}

@property (assign,nonatomic) BBDataProviderProxy * proxy;                      //@synthesize proxy=_proxy - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * bulletins;                  //@synthesize bulletins=_bulletins - In the implementation block
@property (assign,nonatomic,__weak) HMDHomeManager * homeManager;              //@synthesize homeManager=_homeManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)sortDescriptors;
-(BBDataProviderProxy *)proxy;
-(HMDHomeManager *)homeManager;
-(void)setHomeManager:(HMDHomeManager *)arg1 ;
-(void)configureHomeManager:(id)arg1 ;
-(void)setProxy:(BBDataProviderProxy *)arg1 ;
-(void)reloadDefaultSectionInfo;
-(NSMutableDictionary *)bulletins;
-(id)sectionIdentifier;
-(id)sortedBulletinsByDate;
-(void)removeBulletin:(id)arg1 ;
-(void)removeBulletinWithRecordID:(id)arg1 ;
-(id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 ;
-(id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 ;
-(id)sectionParameters;
-(id)attachmentPNGDataForRecordID:(id)arg1 sizeConstraints:(id)arg2 ;
-(void)handleBulletinActionResponse:(id)arg1 ;
-(BOOL)syncsBulletinDismissal;
-(id)defaultSectionInfo;
-(id)sectionDisplayName;
-(void)configure:(id)arg1 ;
-(id)insertBulletinWithTitle:(id)arg1 snapshotData:(id)arg2 message:(id)arg3 recordID:(id)arg4 bulletinType:(unsigned long long)arg5 actionURL:(id)arg6 bulletinContext:(NSDictionary*)arg7 actionContext:(NSDictionary*)arg8 ;
-(void)updateBulletin:(id)arg1 ;
-(void)cullBulletinsToCount:(unsigned long long)arg1 ;
-(void)setBulletins:(NSMutableDictionary *)arg1 ;
@end

