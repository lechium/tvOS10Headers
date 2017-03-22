/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:53 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TVSAudioSession : NSObject {

	/*^block*/id _configurationBlock;

}

@property (nonatomic,copy) id configurationBlock;              //@synthesize configurationBlock=_configurationBlock - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(id)configurationBlock;
-(void)setConfigurationBlock:(id)arg1 ;
-(void)_updateIfNecessary;
-(void)_mediaServicesReset:(id)arg1 ;
@end
