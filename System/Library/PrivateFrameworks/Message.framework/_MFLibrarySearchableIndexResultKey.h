/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:08 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MFMessageCriterion, NSIndexSet;

@interface _MFLibrarySearchableIndexResultKey : NSObject {

	MFMessageCriterion* _criterion;
	NSIndexSet* _mailboxIDs;

}

@property (nonatomic,retain) MFMessageCriterion * criterion;              //@synthesize criterion=_criterion - In the implementation block
@property (nonatomic,copy) NSIndexSet * mailboxIDs;                       //@synthesize mailboxIDs=_mailboxIDs - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(MFMessageCriterion *)criterion;
-(void)setCriterion:(MFMessageCriterion *)arg1 ;
-(NSIndexSet *)mailboxIDs;
-(void)setMailboxIDs:(NSIndexSet *)arg1 ;
@end
