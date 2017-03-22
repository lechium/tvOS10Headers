/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:26 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKObject.h>

@class EKSource, NSString;

@interface EKCalendar : EKObject {

	CGColorRef _color;
	BOOL _isMain;
	unsigned _loadFlags;

}

@property (assign,nonatomic) unsigned loadFlags;                                             //@synthesize loadFlags=_loadFlags - In the implementation block
@property (assign,nonatomic) BOOL isMainCalendarForSource;                                   //@synthesize isMain=_isMain - In the implementation block
@property (assign,nonatomic) BOOL isDefaultSchedulingCalendar; 
@property (nonatomic,retain) EKSource * source; 
@property (nonatomic,readonly) NSString * calendarIdentifier; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) BOOL allowsContentModifications; 
@property (getter=isSubscribed,nonatomic,readonly) BOOL subscribed; 
@property (getter=isImmutable,nonatomic,readonly) BOOL immutable; 
@property (assign,nonatomic) CGColorRef CGColor; 
@property (nonatomic,readonly) unsigned long long supportedEventAvailabilities; 
@property (nonatomic,readonly) unsigned long long allowedEntityTypes; 
+(id)calendarForEntityType:(unsigned long long)arg1 eventStore:(id)arg2 ;
+(id)typeDescription:(long long)arg1 ;
+(id)calendarWithEventStore:(id)arg1 ;
-(CGColorRef)CGColor;
-(void)dealloc;
-(BOOL)isHidden;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(NSString *)title;
-(long long)type;
-(void)setSource:(EKSource *)arg1 ;
-(void)reset;
-(NSString *)calendarIdentifier;
-(BOOL)hasTasks;
-(EKSource *)source;
-(BOOL)refresh;
-(void)_setSource:(id)arg1 ;
-(id)alarms;
-(void)setAlarms:(id)arg1 ;
-(id)lazyLoadRelationForKey:(id)arg1 ;
-(void)setDisplayOrder:(int)arg1 ;
-(BOOL)isFacebookBirthdayCalendar;
-(BOOL)allowsContentModifications;
-(id)colorString;
-(id)sharees;
-(BOOL)isSuggestionsCalendar;
-(unsigned long long)allowedEntityTypes;
-(id)externalModificationTag;
-(void)setExternalModificationTag:(id)arg1 ;
-(id)symbolicColorName;
-(void)setSymbolicColorName:(id)arg1 ;
-(void)setColorString:(id)arg1 ;
-(int)displayOrder;
-(BOOL)prohibitsScheduling;
-(BOOL)isSharingInvitation;
-(BOOL)canBePublished;
-(BOOL)canBeShared;
-(BOOL)isHolidaySubscribedCalendar;
-(BOOL)isFamilyCalendar;
-(BOOL)isMarkedUndeletable;
-(BOOL)isMarkedImmutableSharees;
-(BOOL)isMutableSuggestionsCalendar;
-(BOOL)isIgnoringSharedCalendarNotifications;
-(void)setIsIgnoringSharedCalendarNotifications:(BOOL)arg1 ;
-(BOOL)isIgnoringEventAlerts;
-(void)setIsIgnoringEventAlerts:(BOOL)arg1 ;
-(unsigned long long)sharingStatus;
-(void)setSharingStatus:(unsigned long long)arg1 ;
-(id)sharedOwnerName;
-(void)setSharedOwnerName:(id)arg1 ;
-(id)sharedOwnerAddress;
-(void)setSharedOwnerAddress:(id)arg1 ;
-(unsigned long long)sharingInvitationResponse;
-(void)setSharingInvitationResponse:(unsigned long long)arg1 ;
-(void)setIsPublished:(BOOL)arg1 ;
-(BOOL)isPublished;
-(void)setSharees:(id)arg1 ;
-(void)addSharee:(id)arg1 ;
-(void)removeSharee:(id)arg1 ;
-(unsigned long long)invitationStatus;
-(void)setInvitationStatus:(unsigned long long)arg1 ;
-(id)selfIdentityDisplayName;
-(void)setSelfIdentityDisplayName:(id)arg1 ;
-(id)selfIdentityEmail;
-(void)setSelfIdentityEmail:(id)arg1 ;
-(id)selfIdentityAddress;
-(void)setSelfIdentityAddress:(id)arg1 ;
-(id)selfIdentityFirstName;
-(void)setSelfIdentityFirstName:(id)arg1 ;
-(id)selfIdentityLastName;
-(void)setSelfIdentityLastName:(id)arg1 ;
-(id)ownerIdentityDisplayName;
-(void)setOwnerIdentityDisplayName:(id)arg1 ;
-(id)ownerIdentityEmail;
-(void)setOwnerIdentityEmail:(id)arg1 ;
-(id)ownerIdentityAddress;
-(void)setOwnerIdentityAddress:(id)arg1 ;
-(id)ownerIdentityFirstName;
-(void)setOwnerIdentityFirstName:(id)arg1 ;
-(id)ownerIdentityLastName;
-(void)setOwnerIdentityLastName:(id)arg1 ;
-(id)bulkRequests;
-(void)setBulkRequests:(id)arg1 ;
-(id)subcalAccountID;
-(void)setSubcalAccountID:(id)arg1 ;
-(id)pushKey;
-(void)setPushKey:(id)arg1 ;
-(id)digest;
-(void)setDigest:(id)arg1 ;
-(BOOL)validate:(id*)arg1 ;
-(id)sharedOwnerEmail;
-(id)externalURI;
-(id)sharedOwnerURL;
-(id)_alarmsRelation;
-(id)findOriginalAlarmStartingWith:(id)arg1 ;
-(id)allAlarms;
-(BOOL)isSuggestedEventCalendar;
-(void)setAllAlarms:(id)arg1 ;
-(void)snoozeAlarm:(id)arg1 withTimeIntervalFromNow:(double)arg2 ;
-(void)snoozeAlarm:(id)arg1 withLocation:(id)arg2 proximity:(long long)arg3 ;
-(BOOL)isAlarmAcknowledgedPropertyDirty;
-(void)removeAcknowledgedSnoozedAlarms;
-(void)removeAllSnoozedAlarms;
-(BOOL)allowReminders;
-(BOOL)commit:(id*)arg1 ;
-(unsigned long long)supportedEventAvailabilities;
-(BOOL)allowsScheduling;
-(BOOL)isDefaultSchedulingCalendar;
-(BOOL)isSubscribedHolidayCalendar;
-(BOOL)allowEvents;
-(BOOL)automaticEventLocationGeocodingAllowed;
-(void)clearInvitationStatus;
-(BOOL)getColorRed:(int*)arg1 green:(int*)arg2 blue:(int*)arg3 ;
-(id)_sourceRelation;
-(id)_shareesRelation;
-(void)addAlarms:(id)arg1 ;
-(void)removeAlarms:(id)arg1 ;
-(void)setCGColor:(CGColorRef)arg1 ;
-(void)setIsDefaultSchedulingCalendar:(BOOL)arg1 ;
-(id)publishURL;
-(void)setPublishURL:(id)arg1 ;
-(BOOL)allowsIgnoringSharedEventChangeNotifications;
-(id)syncHash;
-(BOOL)hasEvents;
-(void)setAllowsEvents:(BOOL)arg1 ;
-(void)setAllowReminders:(BOOL)arg1 ;
-(unsigned)loadFlags;
-(void)setLoadFlags:(unsigned)arg1 ;
-(BOOL)isMainCalendarForSource;
-(void)setIsMainCalendarForSource:(BOOL)arg1 ;
-(void)setExternalID:(id)arg1 ;
-(id)externalID;
-(int)entityType;
-(BOOL)isSubscribed;
-(BOOL)remove:(id*)arg1 ;
-(BOOL)isImmutable;
@end
