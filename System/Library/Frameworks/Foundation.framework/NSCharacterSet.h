/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:06 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface NSCharacterSet : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (copy,readonly) NSData * bitmapRepresentation; 
@property (copy,readonly) NSCharacterSet * invertedSet; 
+(id)nonBaseCharacterSet;
+(id)decomposableCharacterSet;
+(id)capitalizedLetterCharacterSet;
+(id)illegalCharacterSet;
+(id)characterSetWithContentsOfFile:(id)arg1 ;
+(id)characterSetWithRange:(NSRange)arg1 ;
+(id)characterSetWithBitmapRepresentation:(id)arg1 ;
+(id)URLUserAllowedCharacterSet;
+(id)URLPasswordAllowedCharacterSet;
+(id)URLHostAllowedCharacterSet;
+(id)URLFragmentAllowedCharacterSet;
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)whitespaceAndNewlineCharacterSet;
+(id)controlCharacterSet;
+(id)newlineCharacterSet;
+(id)punctuationCharacterSet;
+(id)symbolCharacterSet;
+(id)uppercaseLetterCharacterSet;
+(id)whitespaceCharacterSet;
+(id)characterSetWithCharactersInString:(id)arg1 ;
+(id)URLQueryAllowedCharacterSet;
+(id)lowercaseLetterCharacterSet;
+(id)decimalDigitCharacterSet;
+(id)URLPathAllowedCharacterSet;
+(id)alphanumericCharacterSet;
+(id)letterCharacterSet;
-(unsigned long long)_cfTypeID;
-(NSData *)bitmapRepresentation;
-(CFCharacterSetRef)_expandedCFCharacterSet;
-(BOOL)isMutable;
-(void)makeImmutable;
-(BOOL)longCharacterIsMember:(unsigned)arg1 ;
-(BOOL)isSupersetOfSet:(id)arg1 ;
-(BOOL)hasMemberInPlane:(unsigned char)arg1 ;
-(id)_retainedBitmapRepresentation;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(BOOL)characterIsMember:(unsigned short)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSCharacterSet *)invertedSet;
@end
