/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:59 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface UNSAttachmentsRepository : NSObject {

	NSURL* _directoryURL;

}
+(id)_sha1HashOfFileAtURL:(id)arg1 ;
-(id)initWithDirectoryURL:(id)arg1 ;
-(id)bundleIdentifiersClaimingAttachments;
-(void)ensureIntegrityUsingNotificationIdentifiersForBundleIdentifiers:(id)arg1 ;
-(BOOL)isRepositoryURL:(id)arg1 ;
-(void)removeReferenceToRepositoryURL:(id)arg1 forNotificationIdentifier:(id)arg2 bundleIdentifier:(id)arg3 ;
-(BOOL)isValidRepositoryURL:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(id)moveFileIntoRepositoryFromFileURL:(id)arg1 forNotificationIdentifier:(id)arg2 bundleIdentifier:(id)arg3 ;
-(void)deleteAllFilesForBundleIdentifier:(id)arg1 ;
-(id)_attachmentDirectoryForBundleIdentifier:(id)arg1 ;
-(id)_fileURLForDigestString:(id)arg1 extension:(id)arg2 bundleIdentifier:(id)arg3 ;
-(unsigned long long)_addReferencesToRepositoryURL:(id)arg1 forNotificationIdentifier:(id)arg2 bundleIdentifier:(id)arg3 ;
-(unsigned long long)_removeReferencesToRepositoryURL:(id)arg1 forNotificationIdentifier:(id)arg2 bundleIdentifier:(id)arg3 ;
-(void)_removeRepositoryURL:(id)arg1 ;
-(void)_removeAllReferencesForBundleIdentifier:(id)arg1 ;
-(unsigned long long)_transformNotificationIdentifiersForRepositoryURL:(id)arg1 bundleIdentifier:(id)arg2 usingTransformBlock:(/*^block*/id)arg3 ;
-(void)_transformAttachmentsForBundleIdentifier:(id)arg1 usingTransformBlock:(/*^block*/id)arg2 ;
-(id)_claimedRepositoryURLsForBundleIdentifier:(id)arg1 ;
@end

