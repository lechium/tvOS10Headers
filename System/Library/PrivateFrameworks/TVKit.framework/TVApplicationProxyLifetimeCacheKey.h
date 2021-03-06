/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:42 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface TVApplicationProxyLifetimeCacheKey : NSObject <NSCopying> {

	NSString* _applicationIdentifier;
	NSString* _bundlePathHash;
	double _lastModifiedDate;

}

@property (nonatomic,copy,readonly) NSString * bundlePathHash;                     //@synthesize bundlePathHash=_bundlePathHash - In the implementation block
@property (nonatomic,readonly) double lastModifiedDate;                            //@synthesize lastModifiedDate=_lastModifiedDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * applicationIdentifier;              //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * filesystemSafeKeyName; 
+(id)cacheKeyForProxy:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)_init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)applicationIdentifier;
-(double)lastModifiedDate;
-(NSString *)bundlePathHash;
-(NSString *)filesystemSafeKeyName;
@end

