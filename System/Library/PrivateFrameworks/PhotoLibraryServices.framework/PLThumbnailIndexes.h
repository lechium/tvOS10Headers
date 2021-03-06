/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:25 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableIndexSet;

@interface PLThumbnailIndexes : NSObject {

	NSObject*<OS_dispatch_queue> isolation;
	NSMutableIndexSet* unusedIndexes;
	long long usedMax;
	unsigned long long _fetchTimestamp;

}
+(id)sharedInstance;
+(unsigned long long)nextAvailableThumbnailIndex;
+(void)recycleThumbnailIndexes:(id)arg1 ;
+(void)getAvailableThumbnailIndexesWithCount:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
+(void)getAvailableThumbnailIndexWithHandler:(/*^block*/id)arg1 ;
+(void)recycleThumbnailIndexes:(id)arg1 timestamp:(unsigned long long)arg2 ;
-(id)init;
-(void)getAvailableThumbnailIndexesWithCount:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(void)recycleThumbnailIndexes:(id)arg1 timestamp:(unsigned long long)arg2 ;
-(void)getAvailableThumbnailIndexesFromDatabase;
-(id)fetchOccupiedThumbnailIndexesWithLibrary:(id)arg1 ;
@end

