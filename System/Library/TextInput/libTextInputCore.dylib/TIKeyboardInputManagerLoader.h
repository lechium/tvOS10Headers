/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:05 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, TIKeyboardInputManagerBase;

@interface TIKeyboardInputManagerLoader : NSObject {

	NSMutableDictionary* _availableInputManagers;
	NSMutableDictionary* _lastUsedDate;
	NSMutableDictionary* _activeInputManagers;
	TIKeyboardInputManagerBase* _mostRecentlyRequested;

}

@property (nonatomic,retain) TIKeyboardInputManagerBase * mostRecentlyRequested;              //@synthesize mostRecentlyRequested=_mostRecentlyRequested - In the implementation block
+(id)sharedLoader;
-(void)dealloc;
-(id)init;
-(id)activeInputModeIdentifiers;
-(id)resourceInputModes;
-(id)inputManagerForInputMode:(id)arg1 withClass:(Class)arg2 ;
-(void)cacheInputManager:(id)arg1 ;
-(void)reduceCacheToSize:(unsigned long long)arg1 ;
-(BOOL)hasActiveInputManagers;
-(TIKeyboardInputManagerBase *)mostRecentlyRequested;
-(void)setMostRecentlyRequested:(TIKeyboardInputManagerBase *)arg1 ;
@end

