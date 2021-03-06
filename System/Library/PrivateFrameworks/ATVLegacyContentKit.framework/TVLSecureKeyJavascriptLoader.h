/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:13 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVServices/TVSSecureKeyLoader.h>

@class TVLJavaScriptContext;

@interface TVLSecureKeyJavascriptLoader : TVSSecureKeyLoader {

	TVLJavaScriptContext* _javaScriptContext;

}

@property (nonatomic,retain) TVLJavaScriptContext * javaScriptContext;              //@synthesize javaScriptContext=_javaScriptContext - In the implementation block
-(void)startLoadingCertificateDataForRequest:(id)arg1 ;
-(void)startLoadingContentIdentifierDataForRequest:(id)arg1 ;
-(void)startLoadingKeyResponseDataForRequest:(id)arg1 ;
-(TVLJavaScriptContext *)javaScriptContext;
-(long long)_errorCodeForFailureOfFunctionWithName:(id)arg1 ;
-(unsigned long long)_numberOfArgumentsForSuccessCallbackForFunctionWithName:(id)arg1 ;
-(void)_callFunctionWithName:(id)arg1 withData:(id)arg2 request:(id)arg3 successHandler:(/*^block*/id)arg4 ;
-(id)initWithJavaScriptContext:(id)arg1 ;
-(void)setJavaScriptContext:(TVLJavaScriptContext *)arg1 ;
@end

