/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:47 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSSet, NSString;

@interface TIInputContextHistory : NSObject <NSCopying, NSSecureCoding> {

	NSMutableArray* _entries;
	NSMutableArray* _pendingEntries;
	NSSet* _recipientIdentifiers;

}

@property (nonatomic,readonly) NSSet * recipientIdentifiers;              //@synthesize recipientIdentifiers=_recipientIdentifiers - In the implementation block
@property (nonatomic,readonly) NSString * aggregateText; 
@property (nonatomic,readonly) NSString * lastInputContext; 
+(BOOL)supportsSecureCoding;
-(void)enumerateAllEntries:(/*^block*/id)arg1 ;
-(NSString *)aggregateText;
-(NSString *)lastInputContext;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithRecipientIdentifiers:(id)arg1 ;
-(NSSet *)recipientIdentifiers;
-(void)addTextEntry:(id)arg1 timestamp:(id)arg2 ;
-(void)assertCheckpointForCoding;
-(void)enumeratePendingEntries:(/*^block*/id)arg1 ;
@end
