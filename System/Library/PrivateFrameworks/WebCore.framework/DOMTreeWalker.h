/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:57 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/DOMObject.h>

@class DOMNode;

@interface DOMTreeWalker : DOMObject

@property (readonly) DOMNode * root; 
@property (readonly) unsigned whatToShow; 
@property (readonly) id<DOMNodeFilter> filter; 
@property (readonly) BOOL expandEntityReferences; 
@property (retain) DOMNode * currentNode; 
-(unsigned)whatToShow;
-(BOOL)expandEntityReferences;
-(id)previousNode;
-(void)setCurrentNode:(DOMNode *)arg1 ;
-(DOMNode *)currentNode;
-(void)dealloc;
-(id)lastChild;
-(id)firstChild;
-(id)parentNode;
-(id)previousSibling;
-(id)nextSibling;
-(id)nextNode;
-(id<DOMNodeFilter>)filter;
-(DOMNode *)root;
@end
