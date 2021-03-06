/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:02 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSURL, NSString;

@interface NSSubstituteWebResource : NSObject {

	NSData* _data;
	NSURL* _url;
	NSString* _mimeType;
	NSString* _textEncodingName;
	NSString* _frameName;

}
-(id)initWithData:(id)arg1 URL:(id)arg2 MIMEType:(id)arg3 textEncodingName:(id)arg4 frameName:(id)arg5 ;
-(id)frameName;
-(Class)_webResourceClass;
-(id)webResource;
-(void)dealloc;
-(id)data;
-(id)URL;
-(id)MIMEType;
-(id)textEncodingName;
@end

