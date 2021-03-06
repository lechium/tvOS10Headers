/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:32 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpriteKit/SpriteKit-Structs.h>
@interface SKSoundContext : NSObject {

	ALCdevice_structRef _device;
	ALCcontext_structRef _context;
	BOOL _suspended;

}

@property (assign,nonatomic) double gain; 
@property (assign,nonatomic) CGPoint listenerPosition; 
@property (assign,nonatomic) BOOL suspended; 
+(id)context;
+(id)currentContext;
-(BOOL)suspended;
-(void)dealloc;
-(id)init;
-(double)gain;
-(void)setGain:(double)arg1 ;
-(void)setSuspended:(BOOL)arg1 ;
-(void)setListenerPosition:(CGPoint)arg1 ;
-(void)makeCurrentContext;
-(CGPoint)listenerPosition;
@end

