/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:58 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIImage;

@interface _MKMapInteractionControlAction : NSObject {

	NSString* _title;
	UIImage* _image;
	/*^block*/id _handler;

}

@property (nonatomic,retain) NSString * title;              //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIImage * image;               //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) id handler;                      //@synthesize handler=_handler - In the implementation block
+(id)actionWithTitle:(id)arg1 image:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(UIImage *)image;
-(id)handler;
-(void)setHandler:(id)arg1 ;
@end

