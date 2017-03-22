/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:18 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, NSDate;

@interface AFAnalyticsEventRecord : NSObject <NSSecureCoding> {

	NSString* _streamUID;
	long long _type;
	unsigned long long _timestamp;
	NSData* _contextData;
	long long _contextDataType;
	NSDate* _dateCreated;

}

@property (nonatomic,copy,readonly) NSString * streamUID;                 //@synthesize streamUID=_streamUID - In the implementation block
@property (nonatomic,readonly) long long type;                            //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy,readonly) NSData * contextData;                 //@synthesize contextData=_contextData - In the implementation block
@property (nonatomic,readonly) long long contextDataType;                 //@synthesize contextDataType=_contextDataType - In the implementation block
@property (nonatomic,copy,readonly) NSDate * dateCreated;                 //@synthesize dateCreated=_dateCreated - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)timestamp;
-(long long)type;
-(NSData *)contextData;
-(id)initWithStreamUID:(id)arg1 type:(long long)arg2 timestamp:(unsigned long long)arg3 contextData:(id)arg4 contextDataType:(long long)arg5 dateCreated:(id)arg6 noCopy:(BOOL)arg7 ;
-(NSString *)streamUID;
-(long long)contextDataType;
-(NSDate *)dateCreated;
@end
