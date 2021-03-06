/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:34 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UIDocument;

@interface UIDocumentErrorRecoveryAttempter : NSObject {

	UIDocument* _document;
	id _wrappedRecoveryAttempter;
	/*^block*/id _continuerOrNil;
	long long _silentRecoveryOptionIndex;
	/*^block*/id _appModalRecoveryAttempter;
	/*^block*/id _recoveryCancelerOrNil;
	struct {
		unsigned attemptedRecovery : 1;
	}  _errorRecoveryAttempterFlags;

}
-(void)dealloc;
-(BOOL)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 ;
-(BOOL)attemptSilentRecoveryFromError:(id)arg1 error:(id*)arg2 ;
-(void)cancelRecovery;
-(id)initWithDocument:(id)arg1 wrappedRecoveryAttempter:(id)arg2 ;
-(id)initWithDocument:(id)arg1 silentRecoveryOptionIndex:(unsigned long long)arg2 appModalRecoveryAttempter:(/*^block*/id)arg3 recoveryCanceler:(/*^block*/id)arg4 ;
@end

