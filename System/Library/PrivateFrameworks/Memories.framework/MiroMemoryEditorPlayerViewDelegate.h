/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:29 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MiroMemoryEditorPlayerViewDelegate <NSObject>
@property (assign,nonatomic) BOOL isSeparatingOrCollapsing; 
@required
-(BOOL)playerViewShouldShowInChildViewControllers;
-(BOOL)isSeparatingOrCollapsing;
-(void)setMovieDisplayControllerParent:(id)arg1 andSuperview:(id)arg2;
-(id)placeSnapshotOfPlayerViewInContainerView:(id)arg1;
-(void)setIsSeparatingOrCollapsing:(BOOL)arg1;

@end
