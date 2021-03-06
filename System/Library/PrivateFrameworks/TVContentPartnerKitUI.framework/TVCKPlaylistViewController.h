/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:48 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVPlaybackViewController.h>

@class IKPlaylistElement, TVSPlaybackReportingEventCollection;

@interface TVCKPlaylistViewController : TVPlaybackViewController {

	IKPlaylistElement* _playlistElement;
	BOOL _wasPlayingBackgroundAudio;
	TVSPlaybackReportingEventCollection* _eventCollection;

}
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)initWithPlayer:(id)arg1 invalidateWhenDone:(BOOL)arg2 initialPlaybackType:(long long)arg3 ;
-(void)updateWithViewElement:(id)arg1 ;
-(void)_findExtrasMainVideoBackgroundFromNavigationController:(id)arg1 andStop:(BOOL)arg2 ;
-(void)_playMediaItemForVideoElement:(id)arg1 actionParams:(id)arg2 rentalAdamID:(id)arg3 launchPlaybackURL:(id)arg4 hlsPlaylistURL:(id)arg5 contentRatingRank:(id)arg6 dataType:(id)arg7 resumeTime:(id)arg8 disableResumeMenu:(BOOL)arg9 ;
-(void)_populateMediaItem:(id)arg1 withMetadatafromVideoElement:(id)arg2 ;
-(void)_populateMediaItem:(id)arg1 withMetadatafromTimelineEventElement:(id)arg2 ;
-(void)_populateMediaItem:(id)arg1 withMetadatafromRelatedContentElement:(id)arg2 ;
@end

