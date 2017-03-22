/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:47 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SoftwareUpdateServices/SoftwareUpdateServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SUDocumentation, NSString, NSDictionary, NSData;

@interface SUDescriptor : NSObject <NSSecureCoding, NSCopying> {

	SUDocumentation* _documentation;
	NSString* _publisher;
	NSString* _humanReadableUpdateName;
	NSString* _productSystemName;
	NSString* _productVersion;
	NSString* _productBuildVersion;
	NSString* _releaseType;
	unsigned long long _downloadSize;
	unsigned long long _unarchiveSize;
	unsigned long long _msuPrepareSize;
	unsigned long long _installationSize;
	unsigned long long _minimumSystemPartitionSize;
	int _updateType;
	BOOL _autoDownloadAllowableForCellular;
	BOOL _downloadAllowableForCellular;
	BOOL _downloadable;
	BOOL _disableSiriVoiceDeletion;
	BOOL _disableCDLevel4;
	BOOL _disableAppDemotion;
	BOOL _disableIntallTonight;
	BOOL _rampEnabled;
	NSDictionary* _systemPartitionPadding;
	NSData* _sepDigest;
	NSData* _rsepDigest;
	BOOL _downloadableOverCellular;
	BOOL _streamingZipCapable;

}

@property (nonatomic,retain) SUDocumentation * documentation;                                                                                  //@synthesize documentation=_documentation - In the implementation block
@property (nonatomic,retain) NSString * publisher;                                                                                             //@synthesize publisher=_publisher - In the implementation block
@property (nonatomic,retain) NSString * productSystemName;                                                                                     //@synthesize productSystemName=_productSystemName - In the implementation block
@property (nonatomic,retain) NSString * productVersion;                                                                                        //@synthesize productVersion=_productVersion - In the implementation block
@property (nonatomic,retain) NSString * productBuildVersion;                                                                                   //@synthesize productBuildVersion=_productBuildVersion - In the implementation block
@property (nonatomic,retain) NSString * releaseType;                                                                                           //@synthesize releaseType=_releaseType - In the implementation block
@property (assign,nonatomic) unsigned long long downloadSize;                                                                                  //@synthesize downloadSize=_downloadSize - In the implementation block
@property (assign,nonatomic) unsigned long long installationSize;                                                                              //@synthesize installationSize=_installationSize - In the implementation block
@property (assign,nonatomic) unsigned long long minimumSystemPartitionSize;                                                                    //@synthesize minimumSystemPartitionSize=_minimumSystemPartitionSize - In the implementation block
@property (assign,nonatomic) int updateType;                                                                                                   //@synthesize updateType=_updateType - In the implementation block
@property (assign,nonatomic) BOOL autoDownloadAllowableForCellular;                                                                            //@synthesize autoDownloadAllowableForCellular=_autoDownloadAllowableForCellular - In the implementation block
@property (assign,getter=isDownloadable,nonatomic) BOOL downloadable;                                                                          //@synthesize downloadable=_downloadable - In the implementation block
@property (assign,getter=isDownloadableOverCellular,nonatomic) BOOL downloadableOverCellular;                                                  //@synthesize downloadableOverCellular=_downloadableOverCellular - In the implementation block
@property (assign,setter=_setDisableSiriVoiceDeletion:,getter=siriVoiceDeletionDisabled,nonatomic) BOOL disableSiriVoiceDeletion;              //@synthesize disableSiriVoiceDeletion=_disableSiriVoiceDeletion - In the implementation block
@property (assign,setter=_setDisableCDLevel4:,getter=cdLevel4Disabled,nonatomic) BOOL disableCDLevel4;                                         //@synthesize disableCDLevel4=_disableCDLevel4 - In the implementation block
@property (assign,setter=_setDisableAppDemotion:,getter=appDemotionDisabled,nonatomic) BOOL disableAppDemotion;                                //@synthesize disableAppDemotion=_disableAppDemotion - In the implementation block
@property (assign,setter=_setDisableInstallTonight:,getter=installTonightDisabled,nonatomic) BOOL disableInstallTonight;                       //@synthesize disableIntallTonight=_disableIntallTonight - In the implementation block
@property (assign,nonatomic) BOOL rampEnabled;                                                                                                 //@synthesize rampEnabled=_rampEnabled - In the implementation block
@property (nonatomic,retain) NSDictionary * systemPartitionPadding;                                                                            //@synthesize systemPartitionPadding=_systemPartitionPadding - In the implementation block
@property (setter=setSEPDigest:,nonatomic,retain) NSData * sepDigest;                                                                          //@synthesize sepDigest=_sepDigest - In the implementation block
@property (setter=setRSEPDigest:,nonatomic,retain) NSData * rsepDigest;                                                                        //@synthesize rsepDigest=_rsepDigest - In the implementation block
@property (assign,setter=_setUnarchiveSize:,getter=_unarchiveSize,nonatomic) unsigned long long unarchiveSize;                                 //@synthesize unarchiveSize=_unarchiveSize - In the implementation block
@property (assign,setter=_setMsuPrepareSize:,getter=_msuPrepareSize,nonatomic) unsigned long long msuPrepareSize;                              //@synthesize msuPrepareSize=_msuPrepareSize - In the implementation block
@property (assign,setter=_setStreamingZipCapable:,getter=_isStreamingZipCapable,nonatomic) BOOL streamingZipCapable;                           //@synthesize streamingZipCapable=_streamingZipCapable - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)productVersion;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setProductVersion:(NSString *)arg1 ;
-(SUDocumentation *)documentation;
-(NSString *)productBuildVersion;
-(BOOL)isDownloadable;
-(unsigned long long)downloadSize;
-(int)updateType;
-(void)setReleaseType:(NSString *)arg1 ;
-(void)setPublisher:(NSString *)arg1 ;
-(void)setDownloadable:(BOOL)arg1 ;
-(void)setAutoDownloadAllowableForCellular:(BOOL)arg1 ;
-(void)setDownloadableOverCellular:(BOOL)arg1 ;
-(void)_setUnarchiveSize:(unsigned long long)arg1 ;
-(void)setMinimumSystemPartitionSize:(unsigned long long)arg1 ;
-(void)_setStreamingZipCapable:(BOOL)arg1 ;
-(void)_setDisableSiriVoiceDeletion:(BOOL)arg1 ;
-(void)_setDisableCDLevel4:(BOOL)arg1 ;
-(void)_setDisableAppDemotion:(BOOL)arg1 ;
-(void)_setDisableInstallTonight:(BOOL)arg1 ;
-(void)setRampEnabled:(BOOL)arg1 ;
-(void)setSystemPartitionPadding:(NSDictionary *)arg1 ;
-(void)setSEPDigest:(id)arg1 ;
-(void)setRSEPDigest:(id)arg1 ;
-(void)_setMsuPrepareSize:(unsigned long long)arg1 ;
-(void)setDocumentation:(SUDocumentation *)arg1 ;
-(unsigned long long)preparationSize;
-(NSString *)publisher;
-(NSString *)releaseType;
-(unsigned long long)_unarchiveSize;
-(unsigned long long)_msuPrepareSize;
-(unsigned long long)minimumSystemPartitionSize;
-(BOOL)autoDownloadAllowableForCellular;
-(BOOL)isDownloadableOverCellular;
-(BOOL)_isStreamingZipCapable;
-(BOOL)siriVoiceDeletionDisabled;
-(BOOL)cdLevel4Disabled;
-(BOOL)appDemotionDisabled;
-(BOOL)installTonightDisabled;
-(BOOL)rampEnabled;
-(NSDictionary *)systemPartitionPadding;
-(NSData *)sepDigest;
-(NSData *)rsepDigest;
-(BOOL)_hasValue:(id)arg1 ;
-(id)_buildCompareKey;
-(BOOL)isValidDescriptor;
-(void)setUpdateType:(int)arg1 ;
-(id)humanReadableUpdateName;
-(NSString *)productSystemName;
-(void)setProductSystemName:(NSString *)arg1 ;
-(void)setDownloadSize:(unsigned long long)arg1 ;
-(unsigned long long)installationSize;
-(void)setInstallationSize:(unsigned long long)arg1 ;
-(unsigned long long)totalRequiredFreeSpace;
-(void)setProductBuildVersion:(NSString *)arg1 ;
@end
