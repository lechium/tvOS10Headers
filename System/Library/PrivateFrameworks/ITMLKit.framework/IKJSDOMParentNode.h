/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:45 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class IKDOMHTMLCollection, IKDOMElement;


@protocol IKJSDOMParentNode <JSExport>
@property (nonatomic,readonly) IKDOMHTMLCollection * children; 
@property (nonatomic,readonly) IKDOMElement * firstElementChild; 
@property (nonatomic,readonly) IKDOMElement * lastElementChild; 
@property (nonatomic,readonly) unsigned long long childElementCount; 
@required
-(IKDOMElement *)firstElementChild;
-(IKDOMHTMLCollection *)children;
-(IKDOMElement *)lastElementChild;
-(unsigned long long)childElementCount;

@end
