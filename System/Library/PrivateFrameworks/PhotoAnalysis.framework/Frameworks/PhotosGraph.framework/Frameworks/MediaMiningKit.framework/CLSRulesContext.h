/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:42 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class JSContext;

@interface CLSRulesContext : NSObject {

	JSContext* _jsContext;

}
-(id)init;
-(BOOL)evaluateRuleQuery:(id)arg1 withInvestigation:(id)arg2 andContextDictionary:(id)arg3 error:(id*)arg4 ;
-(id)_newJSContext;
@end

