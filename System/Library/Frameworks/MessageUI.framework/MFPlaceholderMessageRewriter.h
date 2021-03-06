/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:36 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFComposeTypeFactoryDelegate.h>

@protocol MFMessageRewriterPlaceholderResolver;
@class NSMutableArray, MFOutgoingMessageContent, NSString;

@interface MFPlaceholderMessageRewriter : NSObject <MFComposeTypeFactoryDelegate> {

	NSMutableArray* _placeholders;
	MFOutgoingMessageContent* _originalMessageContent;
	MFOutgoingMessageContent* _rewrittenMessageContent;
	id<MFMessageRewriterPlaceholderResolver> _placeholderResolver;

}

@property (nonatomic,readonly) MFOutgoingMessageContent * originalMessageContent;                       //@synthesize originalMessageContent=_originalMessageContent - In the implementation block
@property (assign,nonatomic) id<MFMessageRewriterPlaceholderResolver> placeholderResolver;              //@synthesize placeholderResolver=_placeholderResolver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_deriveOutgoingMessageContentFromLibraryMessageContent:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)attachments;
-(void)setSubject:(id)arg1 ;
-(id)subject;
-(id)sendingEmailAddress;
-(id)sendingAccountProxy;
-(id)bodyField;
-(id)toRecipients;
-(id)ccRecipients;
-(id)savedHeaders;
-(void)setCcRecipients:(id)arg1 ;
-(void)setBccRecipients:(id)arg1 ;
-(void)setSendingEmailAddress:(id)arg1 addIfNotPresent:(BOOL)arg2 ;
-(BOOL)shouldCreateRichTextRepresentation;
-(id)bccRecipients;
-(id)accountProxyGenerator;
-(void)setSavedHeaders:(id)arg1 ;
-(BOOL)hasAnyHiddenTrailingEmptyQuote;
-(id)rewrittenMessageContent;
-(id)initWithOriginalMessageContent:(id)arg1 resolver:(id)arg2 ;
-(id<MFMessageRewriterPlaceholderResolver>)placeholderResolver;
-(MFOutgoingMessageContent *)originalMessageContent;
-(void)setPlaceholderResolver:(id<MFMessageRewriterPlaceholderResolver>)arg1 ;
-(void)setToRecipients:(id)arg1 ;
@end

