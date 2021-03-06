//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AEHelper.h"

@class AEAnnotationProvider, NSObject<AEInstanceDelegate>, NSString, NSURL;

@interface AEPluginDelegateInstance : NSObject <AEHelper>
{
    NSObject<AEInstanceDelegate> *_delegate;	// 8 = 0x8
    NSURL *_url;	// 16 = 0x10
}

@property(readonly, nonatomic) AEAnnotationProvider *annotationProvider;
- (void)helperViewControllerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001edd64
- (void)helperDeletePersistentCache;	// IMP=0x00000001001edd38
- (void)setMetadata:(id)arg1 forKey:(id)arg2;	// IMP=0x00000001001edca8
- (id)helperMetadataForKey:(id)arg1;	// IMP=0x00000001001edc74
- (id)helperCoverImage;	// IMP=0x00000001001edc48
- (id)url;	// IMP=0x00000001001edc38
- (void)dealloc;	// IMP=0x00000001001edbcc
- (id)initWithDelegate:(id)arg1 forURL:(id)arg2;	// IMP=0x00000001001eda68

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

