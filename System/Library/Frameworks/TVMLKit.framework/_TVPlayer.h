/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:36 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IKAppPlayer.h>
#import <TVMLKit/TVSASyncPlaybackDelegate.h>

@class IKAppPlayerBridge, NSNumber, NSDate, IKAppDocument, TVSPlayer, _TVPlaylist, UINavigationController, NSArray, NSMutableSet, NSMutableDictionary, NSString;

@interface _TVPlayer : NSObject <IKAppPlayer, TVSASyncPlaybackDelegate> {

	TVSPlayer* _player;
	_TVPlaylist* _playlist;
	IKAppDocument* _overlayDocument;
	IKAppDocument* _interactiveOverlayDocument;
	BOOL _interactiveOverlayDismissable;
	id _elapsedTimeObserverToken;
	BOOL _presentsImplicitlyOnPlay;
	IKAppPlayerBridge* _bridge;
	UINavigationController* _navigationController;
	NSArray* _timedMetadataKeysToObserve;
	NSMutableSet* _timeIntervals;
	NSMutableDictionary* _timeIntervalLastObservedTimes;
	NSMutableDictionary* _timeBoundaryObservers;
	NSMutableSet* _timeBoundariesToObserveWhenPlayerAvailable;

}

@property (nonatomic,retain) NSArray * timedMetadataKeysToObserve;                                //@synthesize timedMetadataKeysToObserve=_timedMetadataKeysToObserve - In the implementation block
@property (nonatomic,retain) NSMutableSet * timeIntervals;                                        //@synthesize timeIntervals=_timeIntervals - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * timeIntervalLastObservedTimes;                 //@synthesize timeIntervalLastObservedTimes=_timeIntervalLastObservedTimes - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * timeBoundaryObservers;                         //@synthesize timeBoundaryObservers=_timeBoundaryObservers - In the implementation block
@property (retain) NSMutableSet * timeBoundariesToObserveWhenPlayerAvailable;                     //@synthesize timeBoundariesToObserveWhenPlayerAvailable=_timeBoundariesToObserveWhenPlayerAvailable - In the implementation block
@property (assign,nonatomic) BOOL presentsImplicitlyOnPlay;                                       //@synthesize presentsImplicitlyOnPlay=_presentsImplicitlyOnPlay - In the implementation block
@property (nonatomic,retain) IKAppPlayerBridge * bridge;                                          //@synthesize bridge=_bridge - In the implementation block
@property (nonatomic,__weak,readonly) UINavigationController * navigationController;              //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,retain) _TVPlaylist * playlist; 
@property (nonatomic,readonly) TVSPlayer * player; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSNumber * currentMediaItemDuration; 
@property (nonatomic,readonly) NSDate * currentMediaItemDate; 
@property (nonatomic,readonly) id<IKAppMediaItem> currentMediaItem; 
@property (nonatomic,readonly) double scanRate; 
@property (nonatomic,readonly) id<IKAppMediaItem> nextMediaItem; 
@property (nonatomic,readonly) id<IKAppMediaItem> previousMediaItem; 
@property (nonatomic,retain) IKAppDocument * overlayDocument; 
@property (nonatomic,retain) IKAppDocument * interactiveOverlayDocument; 
@property (assign,nonatomic) BOOL interactiveOverlayDismissable; 
+(long long)_ikStateFromTVSState:(id)arg1 ;
+(long long)_ikMediaItemChangeReasonFromReason:(id)arg1 ;
-(void)next;
-(void)previous;
-(void)dealloc;
-(void)stop;
-(UINavigationController *)navigationController;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)present;
-(void)cleanup;
-(void)pause;
-(TVSPlayer *)player;
-(void)play;
-(void)setPlaylist:(_TVPlaylist *)arg1 ;
-(id<IKAppMediaItem>)currentMediaItem;
-(_TVPlaylist *)playlist;
-(void)_playbackError:(id)arg1 ;
-(void)_playerStateWillChange:(id)arg1 ;
-(void)_playerStateDidChange:(id)arg1 ;
-(NSNumber *)currentMediaItemDuration;
-(void)player:(id)arg1 shouldChangeMediaInDirection:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)player:(id)arg1 shouldChangeToMediaAtIndex:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(id<IKAppMediaItem>)nextMediaItem;
-(void)player:(id)arg1 shouldSeekToTime:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)player:(id)arg1 shouldSeekToDate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)player:(id)arg1 shouldScanAtRate:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)player:(id)arg1 shouldPauseWithCompletion:(/*^block*/id)arg2 ;
-(void)player:(id)arg1 shouldPlayFromTime:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)changeToMediaAtIndex:(unsigned long long)arg1 reason:(id)arg2 ;
-(void)setElapsedTime:(double)arg1 precise:(BOOL)arg2 ;
-(id<IKAppMediaItem>)previousMediaItem;
-(void)setInteractiveOverlayDismissable:(BOOL)arg1 ;
-(void)_initPlayerIfRequired;
-(void)_present:(BOOL)arg1 ;
-(BOOL)presentsImplicitlyOnPlay;
-(NSMutableSet *)timeIntervals;
-(NSMutableDictionary *)timeIntervalLastObservedTimes;
-(void)_mediaItemWillChange:(id)arg1 ;
-(void)_mediaItemDidChange:(id)arg1 ;
-(void)_playbackDidStall:(id)arg1 ;
-(void)_transportBarVisiblityChanged:(id)arg1 ;
-(void)addTimeIntervalObserver:(unsigned long long)arg1 ;
-(void)observeTimeBoundary:(double)arg1 ;
-(void)scan:(double)arg1 ;
-(void)setTimedMetadataKeysToObserve:(NSArray *)arg1 ;
-(void)removeTimeIntervalObserver:(unsigned long long)arg1 ;
-(void)stopObservingTimeBoundary:(double)arg1 ;
-(NSDate *)currentMediaItemDate;
-(double)scanRate;
-(IKAppDocument *)overlayDocument;
-(void)setOverlayDocument:(IKAppDocument *)arg1 ;
-(IKAppDocument *)interactiveOverlayDocument;
-(void)setInteractiveOverlayDocument:(IKAppDocument *)arg1 ;
-(BOOL)interactiveOverlayDismissable;
-(id)initWithIKAppPlayer:(id)arg1 navigationController:(id)arg2 ;
-(void)setPresentsImplicitlyOnPlay:(BOOL)arg1 ;
-(NSArray *)timedMetadataKeysToObserve;
-(void)setTimeIntervals:(NSMutableSet *)arg1 ;
-(void)setTimeIntervalLastObservedTimes:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)timeBoundaryObservers;
-(void)setTimeBoundaryObservers:(NSMutableDictionary *)arg1 ;
-(NSMutableSet *)timeBoundariesToObserveWhenPlayerAvailable;
-(void)setTimeBoundariesToObserveWhenPlayerAvailable:(NSMutableSet *)arg1 ;
-(IKAppPlayerBridge *)bridge;
-(void)setBridge:(IKAppPlayerBridge *)arg1 ;
@end

