/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:45 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVMusicTableViewController.h>

@class TVSDataCollection;

@interface TVMusicArtistsTableViewController : TVMusicTableViewController {

	TVSDataCollection* _genre;

}

@property (nonatomic,retain) TVSDataCollection * genre;              //@synthesize genre=_genre - In the implementation block
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(TVSDataCollection *)genre;
-(void)setGenre:(TVSDataCollection *)arg1 ;
-(id)initWithDataClient:(id)arg1 ;
-(id)_previewViewControllerForIndexPath:(id)arg1 ;
-(id)_playbackViewController;
-(id)_focusedDataBaseItem;
-(id)mediaItemsQueryForDataCollection:(id)arg1 ;
-(id)initWithDataClient:(id)arg1 genre:(id)arg2 ;
@end

