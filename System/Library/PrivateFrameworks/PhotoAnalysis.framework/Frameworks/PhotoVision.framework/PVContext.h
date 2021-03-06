/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:40 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotoVision.framework/PhotoVision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoVision/PhotoVision-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PVContext : NSObject <NSSecureCoding, NSCopying> {

	BOOL _faceAutonamingEnabled;
	BOOL _faceClusteringLogEnabled;
	BOOL _faceClusteringPerfLogEnabled;
	float _faceClusteringThreshold;
	float _faceAutonamingThreshold;
	float _faceRecallThreshold;
	float _faceMergeFaceprintDistanceThreshold;
	float _faceMergeFaceOverlapThreshold;
	float _facePrimarySuggestionsThreshold;
	long long _faceClusteringDelay;
	long long _minFaceCountToTriggerClustering;
	long long _maxFaceCountForClustering;
	long long _faceCountToEnableFacesNamingFlow;
	long long _faceGroupCountToEnableFacesNamingFlow;

}

@property (assign) long long faceClusteringDelay;                                //@synthesize faceClusteringDelay=_faceClusteringDelay - In the implementation block
@property (assign) float faceClusteringThreshold;                                //@synthesize faceClusteringThreshold=_faceClusteringThreshold - In the implementation block
@property (assign) float faceAutonamingThreshold;                                //@synthesize faceAutonamingThreshold=_faceAutonamingThreshold - In the implementation block
@property (assign) float faceRecallThreshold;                                    //@synthesize faceRecallThreshold=_faceRecallThreshold - In the implementation block
@property (assign) float faceMergeFaceprintDistanceThreshold;                    //@synthesize faceMergeFaceprintDistanceThreshold=_faceMergeFaceprintDistanceThreshold - In the implementation block
@property (assign) float faceMergeFaceOverlapThreshold;                          //@synthesize faceMergeFaceOverlapThreshold=_faceMergeFaceOverlapThreshold - In the implementation block
@property (assign) float facePrimarySuggestionsThreshold;                        //@synthesize facePrimarySuggestionsThreshold=_facePrimarySuggestionsThreshold - In the implementation block
@property (assign) BOOL faceAutonamingEnabled;                                   //@synthesize faceAutonamingEnabled=_faceAutonamingEnabled - In the implementation block
@property (assign) long long minFaceCountToTriggerClustering;                    //@synthesize minFaceCountToTriggerClustering=_minFaceCountToTriggerClustering - In the implementation block
@property (assign) long long maxFaceCountForClustering;                          //@synthesize maxFaceCountForClustering=_maxFaceCountForClustering - In the implementation block
@property (assign) long long faceCountToEnableFacesNamingFlow;                   //@synthesize faceCountToEnableFacesNamingFlow=_faceCountToEnableFacesNamingFlow - In the implementation block
@property (assign) long long faceGroupCountToEnableFacesNamingFlow;              //@synthesize faceGroupCountToEnableFacesNamingFlow=_faceGroupCountToEnableFacesNamingFlow - In the implementation block
@property (assign) BOOL faceClusteringLogEnabled;                                //@synthesize faceClusteringLogEnabled=_faceClusteringLogEnabled - In the implementation block
@property (assign) BOOL faceClusteringPerfLogEnabled;                            //@synthesize faceClusteringPerfLogEnabled=_faceClusteringPerfLogEnabled - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFaceClusteringThreshold:(float)arg1 ;
-(void)setFaceClusteringDelay:(long long)arg1 ;
-(void)setFaceAutonamingThreshold:(float)arg1 ;
-(void)setFaceRecallThreshold:(float)arg1 ;
-(void)setFaceMergeFaceprintDistanceThreshold:(float)arg1 ;
-(void)setFaceMergeFaceOverlapThreshold:(float)arg1 ;
-(void)setFacePrimarySuggestionsThreshold:(float)arg1 ;
-(void)setFaceAutonamingEnabled:(BOOL)arg1 ;
-(void)setMinFaceCountToTriggerClustering:(long long)arg1 ;
-(void)setMaxFaceCountForClustering:(long long)arg1 ;
-(void)setFaceCountToEnableFacesNamingFlow:(long long)arg1 ;
-(void)setFaceGroupCountToEnableFacesNamingFlow:(long long)arg1 ;
-(void)setFaceClusteringLogEnabled:(BOOL)arg1 ;
-(void)setFaceClusteringPerfLogEnabled:(BOOL)arg1 ;
-(long long)faceClusteringDelay;
-(float)faceClusteringThreshold;
-(float)faceAutonamingThreshold;
-(float)faceRecallThreshold;
-(float)faceMergeFaceprintDistanceThreshold;
-(float)faceMergeFaceOverlapThreshold;
-(float)facePrimarySuggestionsThreshold;
-(long long)minFaceCountToTriggerClustering;
-(long long)maxFaceCountForClustering;
-(long long)faceCountToEnableFacesNamingFlow;
-(long long)faceGroupCountToEnableFacesNamingFlow;
-(BOOL)faceClusteringLogEnabled;
-(BOOL)faceClusteringPerfLogEnabled;
-(BOOL)faceAutonamingEnabled;
@end

