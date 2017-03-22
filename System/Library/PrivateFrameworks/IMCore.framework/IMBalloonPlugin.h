/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:08 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSBundle, NSMutableDictionary, NSMutableArray;

@interface IMBalloonPlugin : NSObject {

	BOOL _showInBrowser;
	BOOL _pluginLoaded;
	NSString* _identifier;
	NSString* _browserDisplayName;
	NSString* _browserImageName;
	NSString* _browserImagePath;
	NSBundle* _bundle;
	long long _browserGroup;
	Class _bubbleClass;
	Class _browserClass;
	Class _datasourceClass;
	Class _customTypingIndicatorLayerClass;
	Class _entryClass;
	NSMutableDictionary* _messageToDatasourceMap;
	NSMutableDictionary* _messageToBalloonControllerMap;
	NSMutableArray* _balloonControllerPool;

}

@property (nonatomic,retain) Class bubbleClass;                                                //@synthesize bubbleClass=_bubbleClass - In the implementation block
@property (nonatomic,retain) Class browserClass;                                               //@synthesize browserClass=_browserClass - In the implementation block
@property (nonatomic,retain) Class datasourceClass;                                            //@synthesize datasourceClass=_datasourceClass - In the implementation block
@property (nonatomic,retain) Class customTypingIndicatorLayerClass;                            //@synthesize customTypingIndicatorLayerClass=_customTypingIndicatorLayerClass - In the implementation block
@property (nonatomic,retain) Class entryClass;                                                 //@synthesize entryClass=_entryClass - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * browserDisplayName;                                    //@synthesize browserDisplayName=_browserDisplayName - In the implementation block
@property (nonatomic,retain) NSString * browserImageName;                                      //@synthesize browserImageName=_browserImageName - In the implementation block
@property (nonatomic,retain) NSString * browserImagePath;                                      //@synthesize browserImagePath=_browserImagePath - In the implementation block
@property (nonatomic,retain) NSBundle * bundle;                                                //@synthesize bundle=_bundle - In the implementation block
@property (assign,nonatomic) long long browserGroup;                                           //@synthesize browserGroup=_browserGroup - In the implementation block
@property (assign,nonatomic) BOOL showInBrowser;                                               //@synthesize showInBrowser=_showInBrowser - In the implementation block
@property (assign,nonatomic) BOOL pluginLoaded;                                                //@synthesize pluginLoaded=_pluginLoaded - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * messageToDatasourceMap;                     //@synthesize messageToDatasourceMap=_messageToDatasourceMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * messageToBalloonControllerMap;              //@synthesize messageToBalloonControllerMap=_messageToBalloonControllerMap - In the implementation block
@property (nonatomic,retain) NSMutableArray * balloonControllerPool;                           //@synthesize balloonControllerPool=_balloonControllerPool - In the implementation block
@property (nonatomic,readonly) NSString * version; 
@property (getter=isBetaPlugin,nonatomic,readonly) BOOL betaPlugin; 
-(void)dealloc;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSBundle *)bundle;
-(void)setBundle:(NSBundle *)arg1 ;
-(id)initWithBundle:(id)arg1 ;
-(NSString *)version;
-(NSString *)browserDisplayName;
-(id)dataSourceForPluginPayload:(id)arg1 ;
-(void)setPluginLoaded:(BOOL)arg1 ;
-(void)setBrowserDisplayName:(NSString *)arg1 ;
-(void)setBrowserGroup:(long long)arg1 ;
-(void)setShowInBrowser:(BOOL)arg1 ;
-(void)setBrowserImageName:(NSString *)arg1 ;
-(void)setBrowserImagePath:(NSString *)arg1 ;
-(void)unloadBundle;
-(void)setBubbleClass:(Class)arg1 ;
-(void)setBrowserClass:(Class)arg1 ;
-(void)setDatasourceClass:(Class)arg1 ;
-(void)setCustomTypingIndicatorLayerClass:(Class)arg1 ;
-(void)setEntryClass:(Class)arg1 ;
-(id)existingBalloonControllerWithMessageGUID:(id)arg1 ;
-(BOOL)supportsControllerReuse;
-(id)_getControllerFromReusePoolForChatItem:(id)arg1 ;
-(Class)bubbleClass;
-(BOOL)pluginLoaded;
-(void)_loadBundle;
-(NSMutableDictionary *)messageToDatasourceMap;
-(id)balloonControllerForChatItem:(id)arg1 ;
-(void)moveController:(id)arg1 toReusePoolFromChatItem:(id)arg2 ;
-(Class)browserClass;
-(Class)datasourceClass;
-(Class)customTypingIndicatorLayerClass;
-(Class)entryClass;
-(id)existingDataSourceForMessageGUID:(id)arg1 ;
-(void)insertDataSource:(id)arg1 forGUID:(id)arg2 ;
-(BOOL)isBetaPlugin;
-(NSString *)browserImageName;
-(NSString *)browserImagePath;
-(long long)browserGroup;
-(BOOL)showInBrowser;
-(void)setMessageToDatasourceMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)messageToBalloonControllerMap;
-(void)setMessageToBalloonControllerMap:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)balloonControllerPool;
-(void)setBalloonControllerPool:(NSMutableArray *)arg1 ;
@end
