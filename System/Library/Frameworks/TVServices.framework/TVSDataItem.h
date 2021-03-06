/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:53 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVServices/TVSDataBaseItem.h>

@class NSMutableDictionary, TVSDataClient, NSString;

@interface TVSDataItem : NSObject <TVSDataBaseItem> {

	NSMutableDictionary* _metadataDict;
	NSMutableDictionary* _mutatedDict;
	NSMutableDictionary* _transactionDict;
	TVSDataClient* _dataClient;
	NSMutableDictionary* _playbackMetadataDict;

}

@property (retain) NSMutableDictionary * playbackMetadataDict;                   //@synthesize playbackMetadataDict=_playbackMetadataDict - In the implementation block
@property (retain) NSMutableDictionary * metadataDict;                           //@synthesize metadataDict=_metadataDict - In the implementation block
@property (retain) NSMutableDictionary * mutatedDict;                            //@synthesize mutatedDict=_mutatedDict - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * transactionDict;              //@synthesize transactionDict=_transactionDict - In the implementation block
@property (__weak) TVSDataClient * dataClient;                                   //@synthesize dataClient=_dataClient - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)valueForProperty:(id)arg1 ;
-(void)setValue:(id)arg1 forProperty:(id)arg2 ;
-(void)setDataClient:(TVSDataClient *)arg1 ;
-(NSMutableDictionary *)mutatedDict;
-(id)concreteValueForProperty:(id)arg1 ;
-(NSMutableDictionary *)metadataDict;
-(void)setMetadataDict:(NSMutableDictionary *)arg1 ;
-(void)beginUpdateTransaction;
-(void)commitUpdateTransactionWithOptions:(id)arg1 ;
-(void)setTransactionDict:(NSMutableDictionary *)arg1 ;
-(void)setMutatedDict:(NSMutableDictionary *)arg1 ;
-(TVSDataClient *)dataClient;
-(BOOL)isDataItem;
-(id)initWithDataClient:(id)arg1 ;
-(void)setValueWithoutTransaction:(id)arg1 forProperty:(id)arg2 ;
-(NSMutableDictionary *)transactionDict;
-(NSMutableDictionary *)playbackMetadataDict;
-(void)setPlaybackMetadataDict:(NSMutableDictionary *)arg1 ;
@end

