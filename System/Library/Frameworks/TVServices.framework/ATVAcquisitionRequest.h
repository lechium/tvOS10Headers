/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:55 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TVSAcquisitionProperties;

@interface ATVAcquisitionRequest : NSObject {

	BOOL _cancelled;
	TVSAcquisitionProperties* _properties;
	/*^block*/id _completionBlock;

}

@property (nonatomic,copy) TVSAcquisitionProperties * properties;              //@synthesize properties=_properties - In the implementation block
@property (nonatomic,copy) id completionBlock;                                 //@synthesize completionBlock=_completionBlock - In the implementation block
@property (getter=isCancelled) BOOL cancelled;                                 //@synthesize cancelled=_cancelled - In the implementation block
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(BOOL)isCancelled;
-(void)setCancelled:(BOOL)arg1 ;
-(void)setProperties:(TVSAcquisitionProperties *)arg1 ;
-(TVSAcquisitionProperties *)properties;
@end
