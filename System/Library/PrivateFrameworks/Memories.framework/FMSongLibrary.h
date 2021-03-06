/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:34 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray, NSMutableDictionary, NSMutableSet, FlexCloudManager, FlexReachability;

@interface FMSongLibrary : NSObject {

	BOOL _contactedCloud;
	NSString* _tokenForInitializationLock;
	NSMutableArray* _songs;
	NSMutableDictionary* _songsByUID;
	NSMutableSet* _assetsInFlight;
	FlexCloudManager* _cloudManager;
	FlexReachability* _flexReachability;
	long long _networkStatus;

}

@property (nonatomic,retain) NSString * tokenForInitializationLock;              //@synthesize tokenForInitializationLock=_tokenForInitializationLock - In the implementation block
@property (nonatomic,retain) NSMutableArray * songs;                             //@synthesize songs=_songs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * songsByUID;                   //@synthesize songsByUID=_songsByUID - In the implementation block
@property (nonatomic,retain) NSMutableSet * assetsInFlight;                      //@synthesize assetsInFlight=_assetsInFlight - In the implementation block
@property (nonatomic,retain) FlexCloudManager * cloudManager;                    //@synthesize cloudManager=_cloudManager - In the implementation block
@property (nonatomic,retain) FlexReachability * flexReachability;                //@synthesize flexReachability=_flexReachability - In the implementation block
@property (assign,nonatomic) long long networkStatus;                            //@synthesize networkStatus=_networkStatus - In the implementation block
@property (assign,nonatomic) BOOL contactedCloud;                                //@synthesize contactedCloud=_contactedCloud - In the implementation block
+(id)sharedInstance;
+(void)callMeBeforeSharedInstanceToPreventNetworkAccess;
-(void)dealloc;
-(id)init;
-(id)fetchSongsWithOptions:(id)arg1 ;
-(void)requestDownloadOfAllAssetsWithIDs:(id)arg1 ;
-(void)clearAllMemoryAndCachesForPregenerate;
-(void)purgeAllLocalCachedAssetsWithIDs:(id)arg1 ;
-(id)fetchSongWithUID:(id)arg1 ;
-(void)networkStatusChanged:(id)arg1 ;
-(long long)networkStatus;
-(void)initializeInternalProperties;
-(NSString *)tokenForInitializationLock;
-(void)setSongs:(NSMutableArray *)arg1 ;
-(void)setSongsByUID:(NSMutableDictionary *)arg1 ;
-(void)setAssetsInFlight:(NSMutableSet *)arg1 ;
-(void)setCloudManager:(FlexCloudManager *)arg1 ;
-(void)_demandCloudManager;
-(void)_loadBundledSongs;
-(void)_loadCachedSongs;
-(void)_updateFromCloud;
-(void)_setupReachability;
-(NSMutableDictionary *)songsByUID;
-(NSMutableArray *)songs;
-(id)_registerSongs:(id)arg1 ;
-(FlexCloudManager *)cloudManager;
-(void)_notifySongsChanged:(id)arg1 ;
-(void)_downloadProgressChanged:(id)arg1 ;
-(NSMutableSet *)assetsInFlight;
-(void)_notifySongDownloadInProgressChanged:(BOOL)arg1 ;
-(void)setFlexReachability:(FlexReachability *)arg1 ;
-(FlexReachability *)flexReachability;
-(void)setNetworkStatus:(long long)arg1 ;
-(BOOL)contactedCloud;
-(void)setContactedCloud:(BOOL)arg1 ;
-(id)registerSongBundleAtPath:(id)arg1 ;
-(void)unregisterSongWithD:(id)arg1 ;
-(void)updateFromCloud;
-(BOOL)supportForCloud;
-(void)setTokenForInitializationLock:(NSString *)arg1 ;
@end

