/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:11 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSData;

@interface SAGetSessionCertificateResponse : SABaseClientBoundCommand

@property (nonatomic,copy) NSData * certificate; 
+(id)getSessionCertificateResponse;
+(id)getSessionCertificateResponseWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSData *)certificate;
-(void)setCertificate:(NSData *)arg1 ;
@end

