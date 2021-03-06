/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:34 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MFComposeRecipient.h>

@class NSArray;

@interface MFComposeRecipientGroup : MFComposeRecipient {

	NSArray* _children;

}
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)displayString;
-(id)label;
-(BOOL)isGroup;
-(id)address;
-(id)children;
-(int)property;
-(id)initWithChildren:(id)arg1 displayString:(id)arg2 ;
-(void*)record;
-(BOOL)isRemovableFromSearchResults;
-(id)compositeName;
-(id)unlocalizedLabel;
-(id)placeholderName;
-(id)sortedChildren;
-(id)childrenWithCompleteMatches;
-(BOOL)wasCompleteMatch;
-(id)completelyMatchedAttributedStrings;
-(id)commentedAddress;
-(void)_populateSortedChildren;
-(int)recordID;
@end

