/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:16 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVDigitEntryViewController.h>
#import <libobjc.A.dylib/TVDigitEntryViewControllerDelegate.h>

@class NSString;

@interface TVLJSPINEntryControl : TVDigitEntryViewController <TVDigitEntryViewControllerDelegate> {

	/*^block*/id _submitBlock;
	/*^block*/id _cancelBlock;

}

@property (nonatomic,copy) id submitBlock;                          //@synthesize submitBlock=_submitBlock - In the implementation block
@property (nonatomic,copy) id cancelBlock;                          //@synthesize cancelBlock=_cancelBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLoad;
-(void)digitEntryViewControllerDidCancel:(id)arg1 ;
-(void)digitEntryViewControllerDidFinish:(id)arg1 ;
-(id)submitBlock;
-(id)cancelBlock;
-(void)setSubmitBlock:(id)arg1 ;
-(id)initWithNumberOfDigits:(unsigned long long)arg1 userEditable:(BOOL)arg2 showsDigits:(BOOL)arg3 title:(id)arg4 prompt:(id)arg5 initialPINCode:(id)arg6 ;
-(void)setCancelBlock:(id)arg1 ;
@end

