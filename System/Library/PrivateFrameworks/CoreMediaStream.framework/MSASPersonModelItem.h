/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:23 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMediaStream/CoreMediaStream-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NSObject;
@class MSASAlbum, NSString;

@interface MSASPersonModelItem : NSObject <NSCopying> {

	int _errorCount;
	MSASAlbum* _album;
	NSString* _albumGUID;
	id<NSObject> _object;

}

@property (assign,nonatomic) int errorCount;                    //@synthesize errorCount=_errorCount - In the implementation block
@property (nonatomic,retain) MSASAlbum * album;                 //@synthesize album=_album - In the implementation block
@property (nonatomic,retain) NSString * albumGUID;              //@synthesize albumGUID=_albumGUID - In the implementation block
@property (nonatomic,retain) id<NSObject> object;               //@synthesize object=_object - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<NSObject>)object;
-(void)setObject:(id<NSObject>)arg1 ;
-(int)errorCount;
-(void)setErrorCount:(int)arg1 ;
-(MSASAlbum *)album;
-(void)setAlbum:(MSASAlbum *)arg1 ;
-(NSString *)albumGUID;
-(void)setAlbumGUID:(NSString *)arg1 ;
@end

