/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:29 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class CSSearchableIndex, NSArray, NSError;

@interface ICIndexItemsOperation : NSOperation {

	CSSearchableIndex* _searchableIndex;
	NSArray* _dataSources;
	NSError* _error;

}

@property (nonatomic,retain) CSSearchableIndex * searchableIndex;              //@synthesize searchableIndex=_searchableIndex - In the implementation block
@property (nonatomic,copy) NSArray * dataSources;                              //@synthesize dataSources=_dataSources - In the implementation block
@property (nonatomic,retain) NSError * error;                                  //@synthesize error=_error - In the implementation block
-(id)init;
-(void)deleteItems;
-(void)main;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(BOOL)shouldDeleteAllItemsBeforeIndexing;
-(id)searchableItemsToIndexFromDataSource:(id)arg1 ;
-(id)searchableItemIdentifiersToDeleteFromDataSource:(id)arg1 ;
-(id)initWithSearchableIndex:(id)arg1 dataSources:(id)arg2 ;
-(void)setDataSources:(NSArray *)arg1 ;
-(void)deleteAllItems;
-(void)indexItems;
-(CSSearchableIndex *)searchableIndex;
-(void)setSearchableIndex:(CSSearchableIndex *)arg1 ;
-(NSArray *)dataSources;
@end
