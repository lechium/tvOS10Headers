/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:48 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TVIdleScreenServices.framework/TVIdleScreenServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDownloadDelegate.h>

@protocol OS_dispatch_source;
@class NSObject, NSString, NSMutableDictionary, NSMutableArray, NSURLSession, NSArray, TVIEntry;

@interface TVIEntryManager : NSObject <NSURLSessionDownloadDelegate> {

	BOOL _bypassStoreDemoMode;
	BOOL _shouldDownloadAssetCollection;
	NSObject*<OS_dispatch_source> _bypassStoreDemoModeTimer;
	NSString* _cachingIdleScreenIdentifier;
	NSMutableDictionary* _mutableDownloadTaskIdentifiersToAssets;
	NSMutableArray* _mutableDownloadTasks;
	id _preferencesObserver;
	NSObject*<OS_dispatch_source> _refreshTimer;
	double _lastRefreshTime;
	id _setupPreferencesObserver;
	NSURLSession* _urlSession;
	BOOL _allowCachingAssets;
	NSArray* _availableEntries;

}

@property (assign,nonatomic) BOOL allowCachingAssets;                        //@synthesize allowCachingAssets=_allowCachingAssets - In the implementation block
@property (nonatomic,copy,readonly) NSArray * availableEntries;              //@synthesize availableEntries=_availableEntries - In the implementation block
@property (nonatomic,readonly) TVIEntry * entryForRefresh; 
@property (nonatomic,readonly) long long entryRefreshInterval; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_entriesCachePath;
+(double)_timeIntervalForEntryRefreshInterval:(long long)arg1 ;
+(id)sharedEntryManager;
-(void)dealloc;
-(id)init;
-(id)_init;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3 ;
-(void)refreshAvailableEntries;
-(void)_updateCachesForSelectedEntry;
-(void)_internetAvailableDidChangeNotification:(id)arg1 ;
-(void)_invalidateURLSession;
-(id)_cachedAssetsNotMarkedAsPurgeable;
-(void)_resumeNextDownloadTaskFromQueue;
-(void)_processAvailableEntriesWithDocument:(id)arg1 storeDemoModeEnabled:(BOOL)arg2 ;
-(NSArray *)availableEntries;
-(id)entryWithIdentifier:(id)arg1 ;
-(long long)entryRefreshInterval;
-(void)_removeCachedAssets;
-(BOOL)_hasCachedAssets;
-(void)_updateCachesWithCollectionOfAssets;
-(BOOL)_purgeOldestAsset;
-(TVIEntry *)entryForRefresh;
-(void)beginBypassingStoreDemoModeWithTimeout:(double)arg1 ;
-(void)endBypassingStoreDemoMode;
-(id)selectedEntry;
-(void)setAllowCachingAssets:(BOOL)arg1 ;
-(id)previouslySelectedEntry;
-(BOOL)allowCachingAssets;
-(void)setEntryRefreshInterval:(long long)arg1 ;
@end
