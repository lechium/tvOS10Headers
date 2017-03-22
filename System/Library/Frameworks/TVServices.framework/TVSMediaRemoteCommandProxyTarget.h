/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:58 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVServices/TVSMediaRemoteCommandHandling.h>

@protocol TVSMediaRemoteCommandHandling;
@class NSString;

@interface TVSMediaRemoteCommandProxyTarget : NSObject <TVSMediaRemoteCommandHandling> {

	id<TVSMediaRemoteCommandHandling> _defaultHandler;

}

@property (assign,nonatomic,__weak) id<TVSMediaRemoteCommandHandling> defaultHandler;              //@synthesize defaultHandler=_defaultHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDefaultHandler:(id<TVSMediaRemoteCommandHandling>)arg1 ;
-(long long)_handlePauseCommand:(id)arg1 ;
-(long long)_handlePlayCommand:(id)arg1 ;
-(long long)_handleStopCommand:(id)arg1 ;
-(long long)_handleTogglePlayPauseCommand:(id)arg1 ;
-(long long)_handleNextTrackCommand:(id)arg1 ;
-(long long)_handlePreviousTrackCommand:(id)arg1 ;
-(long long)_handleSeekForwardCommand:(id)arg1 ;
-(long long)_handleSeekBackwardCommand:(id)arg1 ;
-(long long)_handleSkipForwardCommand:(id)arg1 ;
-(long long)_handleSkipBackwardCommand:(id)arg1 ;
-(long long)_handleChangePlaybackRateCommand:(id)arg1 ;
-(id<TVSMediaRemoteCommandHandling>)defaultHandler;
-(long long)_handleAction:(SEL)arg1 withDefaultSelector:(SEL)arg2 forRemoteCommandEvent:(id)arg3 ;
@end
