/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:07 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMMessageChatItem.h>
#import <IMCore/IMVisibleAssociatedMessageHost.h>

@class NSArray, NSAttributedString, NSString;

@interface IMMessagePartChatItem : IMMessageChatItem <IMVisibleAssociatedMessageHost> {

	NSAttributedString* _text;
	long long _index;
	NSRange _messagePartRange;
	NSArray* _visibleAssociatedMessageChatItems;
	NSArray* _messageEditChatItems;

}

@property (assign,nonatomic) long long index;                                                                                        //@synthesize index=_index - In the implementation block
@property (assign,nonatomic) NSRange messagePartRange;                                                                               //@synthesize messagePartRange=_messagePartRange - In the implementation block
@property (nonatomic,copy,readonly) NSAttributedString * text;                                                                       //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) NSArray * messageEditChatItems;                                                                       //@synthesize messageEditChatItems=_messageEditChatItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (setter=_setVisibleAssociatedMessageChatItems:,nonatomic,retain) NSArray * visibleAssociatedMessageChatItems;              //@synthesize visibleAssociatedMessageChatItems=_visibleAssociatedMessageChatItems - In the implementation block
+(id)_newMessagePartsForMessageItem:(id)arg1 ;
+(id)_newMessagePartsForMessageItem:(id)arg1 shouldDisplayLink:(BOOL)arg2 ;
+(BOOL)_testingSupportsURL:(id)arg1 ;
+(id)_guidForMessage:(id)arg1 url:(id)arg2 ;
+(id)_messageItemWithPartsDeleted:(id)arg1 fromMessageItem:(id)arg2 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSAttributedString *)text;
-(long long)index;
-(void)setIndex:(long long)arg1 ;
-(NSRange)messagePartRange;
-(NSArray *)visibleAssociatedMessageChatItems;
-(id)_initWithItem:(id)arg1 text:(id)arg2 index:(long long)arg3 messagePartRange:(NSRange)arg4 visibleAssociatedMessageChatItems:(id)arg5 ;
-(id)_initWithItem:(id)arg1 messagePartRange:(NSRange)arg2 ;
-(void)_setVisibleAssociatedMessageChatItems:(id)arg1 ;
-(BOOL)canDelete;
-(void)_setMessageEditChatItems:(id)arg1 ;
-(BOOL)canSendMessageAcknowledgment;
-(void)setMessagePartRange:(NSRange)arg1 ;
-(NSArray *)messageEditChatItems;
@end

