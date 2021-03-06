/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:35 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSMutableSet;

@interface TVStoreApplicationSetupHelper : NSObject {

	BOOL _loadingStoreBag;
	NSURL* _defaultBootURL;
	NSMutableSet* _completions;

}

@property (nonatomic,copy) NSURL * defaultBootURL;                                       //@synthesize defaultBootURL=_defaultBootURL - In the implementation block
@property (assign,getter=isLoadingStoreBag,nonatomic) BOOL loadingStoreBag;              //@synthesize loadingStoreBag=_loadingStoreBag - In the implementation block
@property (nonatomic,retain) NSMutableSet * completions;                                 //@synthesize completions=_completions - In the implementation block
+(id)launchContextWithLaunchOptions:(id)arg1 bootURL:(id)arg2 appLocalBootURL:(id)arg3 ;
+(id)_parsedQueryParametersForURL:(id)arg1 ;
+(void)_performCompletion:(/*^block*/id)arg1 withBootURL:(id)arg2 ;
+(id)launchContextWithLaunchOptions:(id)arg1 bootURL:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)setCompletions:(NSMutableSet *)arg1 ;
-(NSMutableSet *)completions;
-(id)initWithDefaultBootURL:(id)arg1 ;
-(id)_bootURLWithBagBootURL:(id)arg1 ;
-(BOOL)isLoadingStoreBag;
-(void)_URLBagDidLoad:(id)arg1 ;
-(void)setLoadingStoreBag:(BOOL)arg1 ;
-(NSURL *)defaultBootURL;
-(void)obtainBootURLWithCompletion:(/*^block*/id)arg1 ;
-(void)setDefaultBootURL:(NSURL *)arg1 ;
@end

