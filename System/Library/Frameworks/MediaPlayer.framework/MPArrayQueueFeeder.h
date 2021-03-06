/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:25 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPQueueFeeder.h>

@class NSArray;

@interface MPArrayQueueFeeder : MPQueueFeeder {

	NSArray* _queueItems;

}

@property (nonatomic,readonly) NSArray * items; 
-(void)dealloc;
-(NSArray *)items;
-(id)initWithItems:(id)arg1 ;
-(long long)playbackMode;
-(unsigned long long)indexOfItemWithIdentifier:(id)arg1 ;
-(unsigned long long)itemCount;
-(id)copyRawItemAtIndex:(unsigned long long)arg1 ;
-(id)playbackInfoForIdentifier:(id)arg1 ;
-(id)pathAtIndex:(unsigned long long)arg1 ;
-(id)identifierAtIndex:(unsigned long long)arg1 ;
-(void)reloadWithPlaybackContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

