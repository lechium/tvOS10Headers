/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:38 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CAStateRecorder.h>

@class CAState, NSMutableArray, NSString;

@interface CAStateControllerUndo : NSObject <CAStateRecorder> {

	CAStateControllerUndo* _next;
	CAState* _state;
	NSMutableArray* _elements;
	NSMutableArray* _transitions;

}

@property (readonly) CAStateControllerUndo * next;                      //@synthesize next=_next - In the implementation block
@property (nonatomic,retain) CAState * state;                           //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSMutableArray * elements;                 //@synthesize elements=_elements - In the implementation block
@property (nonatomic,retain) NSMutableArray * transitions;              //@synthesize transitions=_transitions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)willAddLayer:(id)arg1 ;
-(void)addTransition:(id)arg1 ;
-(CAStateControllerUndo *)next;
-(void)dealloc;
-(CAState *)state;
-(void)setState:(CAState *)arg1 ;
-(NSMutableArray *)elements;
-(void)setElements:(NSMutableArray *)arg1 ;
-(void)addElement:(id)arg1 ;
-(void)setTransitions:(NSMutableArray *)arg1 ;
-(NSMutableArray *)transitions;
@end

