/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:55 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVServices/TVServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, TVContentIdentifier, NSURL, NSString, NSDate, NSNumber, NSItemProvider, NSAttributedString;

@interface TVContentItem : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _flattenedIdentifier;
	TVContentIdentifier* _contentIdentifier;
	NSURL* _imageURL;
	long long _imageShape;
	NSString* _title;
	NSDate* _lastAccessedDate;
	NSDate* _expirationDate;
	NSDate* _creationDate;
	NSNumber* _badgeCount;
	NSNumber* _duration;
	NSNumber* _currentPosition;
	NSNumber* _hasPlayedToEnd;
	NSURL* _playURL;
	NSURL* _displayURL;
	NSArray* _topShelfItems;
	NSString* _itemID;
	NSItemProvider* _imageProvider;
	NSURL* _videoURL;
	NSAttributedString* _attributedText;
	NSString* _contentUTI;
	NSString* _topRightText;
	NSURL* _topRightImageURL;
	NSNumber* _playbackPercentage;
	NSString* _playbackTitle;
	NSString* _playbackSubtitle;
	NSNumber* _alwaysShowTitle;
	NSNumber* _wantsPlaybackShroud;

}

@property (nonatomic,readonly) NSArray * _flattenedContentIdentifier; 
@property (nonatomic,copy) TVContentIdentifier * contentIdentifier;                //@synthesize contentIdentifier=_contentIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * itemID;                             //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,retain) NSItemProvider * imageProvider;                       //@synthesize imageProvider=_imageProvider - In the implementation block
@property (nonatomic,copy) NSURL * videoURL;                                       //@synthesize videoURL=_videoURL - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedText;                    //@synthesize attributedText=_attributedText - In the implementation block
@property (nonatomic,copy) NSString * contentUTI;                                  //@synthesize contentUTI=_contentUTI - In the implementation block
@property (nonatomic,copy) NSString * topRightText;                                //@synthesize topRightText=_topRightText - In the implementation block
@property (nonatomic,copy) NSURL * topRightImageURL;                               //@synthesize topRightImageURL=_topRightImageURL - In the implementation block
@property (nonatomic,copy) NSNumber * playbackPercentage;                          //@synthesize playbackPercentage=_playbackPercentage - In the implementation block
@property (nonatomic,copy) NSString * playbackTitle;                               //@synthesize playbackTitle=_playbackTitle - In the implementation block
@property (nonatomic,copy) NSString * playbackSubtitle;                            //@synthesize playbackSubtitle=_playbackSubtitle - In the implementation block
@property (nonatomic,copy) NSNumber * alwaysShowTitle;                             //@synthesize alwaysShowTitle=_alwaysShowTitle - In the implementation block
@property (nonatomic,copy) NSNumber * wantsPlaybackShroud;                         //@synthesize wantsPlaybackShroud=_wantsPlaybackShroud - In the implementation block
@property (nonatomic,copy) NSURL * imageURL;                                       //@synthesize imageURL=_imageURL - In the implementation block
@property (assign,nonatomic) long long imageShape;                                 //@synthesize imageShape=_imageShape - In the implementation block
@property (nonatomic,copy) NSString * title;                                       //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSDate * lastAccessedDate;                              //@synthesize lastAccessedDate=_lastAccessedDate - In the implementation block
@property (nonatomic,copy) NSDate * expirationDate;                                //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,copy) NSDate * creationDate;                                  //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,copy) NSNumber * badgeCount;                                  //@synthesize badgeCount=_badgeCount - In the implementation block
@property (nonatomic,copy) NSNumber * duration;                                    //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy) NSNumber * currentPosition;                             //@synthesize currentPosition=_currentPosition - In the implementation block
@property (nonatomic,copy) NSNumber * hasPlayedToEnd;                              //@synthesize hasPlayedToEnd=_hasPlayedToEnd - In the implementation block
@property (nonatomic,copy) NSURL * playURL;                                        //@synthesize playURL=_playURL - In the implementation block
@property (nonatomic,copy) NSURL * displayURL;                                     //@synthesize displayURL=_displayURL - In the implementation block
@property (nonatomic,copy) NSArray * topShelfItems;                                //@synthesize topShelfItems=_topShelfItems - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_arrayOfDictionariesFromItems:(id)arg1 ;
+(id)_itemsFromArrayOfDictionaries:(id)arg1 ;
+(id)_dictionaryFromItem:(id)arg1 ;
+(id)_itemFromDictionary:(id)arg1 ;
+(id)contentItemWithContentItem:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSNumber *)duration;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(NSString *)title;
-(void)setDuration:(NSNumber *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSAttributedString *)attributedText;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSDate *)expirationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(NSDate *)creationDate;
-(NSString *)itemID;
-(id)initWithContentIdentifier:(id)arg1 ;
-(void)setImageShape:(long long)arg1 ;
-(void)setDisplayURL:(NSURL *)arg1 ;
-(TVContentIdentifier *)contentIdentifier;
-(void)setBadgeCount:(NSNumber *)arg1 ;
-(NSNumber *)badgeCount;
-(long long)imageShape;
-(NSString *)contentUTI;
-(NSDate *)lastAccessedDate;
-(NSNumber *)currentPosition;
-(NSNumber *)hasPlayedToEnd;
-(NSURL *)displayURL;
-(NSURL *)playURL;
-(NSURL *)videoURL;
-(NSNumber *)playbackPercentage;
-(NSString *)topRightText;
-(NSString *)playbackTitle;
-(NSString *)playbackSubtitle;
-(NSURL *)topRightImageURL;
-(NSNumber *)alwaysShowTitle;
-(NSNumber *)wantsPlaybackShroud;
-(NSArray *)topShelfItems;
-(void)setContentUTI:(NSString *)arg1 ;
-(void)setLastAccessedDate:(NSDate *)arg1 ;
-(void)setCurrentPosition:(NSNumber *)arg1 ;
-(void)setHasPlayedToEnd:(NSNumber *)arg1 ;
-(void)setPlayURL:(NSURL *)arg1 ;
-(void)setVideoURL:(NSURL *)arg1 ;
-(void)setTopShelfItems:(NSArray *)arg1 ;
-(void)setPlaybackPercentage:(NSNumber *)arg1 ;
-(void)setTopRightText:(NSString *)arg1 ;
-(void)setTopRightImageURL:(NSURL *)arg1 ;
-(void)setPlaybackTitle:(NSString *)arg1 ;
-(void)setPlaybackSubtitle:(NSString *)arg1 ;
-(void)setAlwaysShowTitle:(NSNumber *)arg1 ;
-(void)setWantsPlaybackShroud:(NSNumber *)arg1 ;
-(BOOL)isTVContentItem__;
-(id)initWithItemID:(id)arg1 shape:(long long)arg2 ;
-(NSArray *)_flattenedContentIdentifier;
-(void)setContentIdentifier:(TVContentIdentifier *)arg1 ;
-(NSItemProvider *)imageProvider;
-(void)setImageProvider:(NSItemProvider *)arg1 ;
-(void)setImageURL:(NSURL *)arg1 ;
-(NSURL *)imageURL;
@end
