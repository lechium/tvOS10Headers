/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:23 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Symbolication/Symbolication-Structs.h>
#import <Symbolication/VMUObjectGraph.h>
#import <libobjc.A.dylib/VMUCommonGraphInterface.h>

@class VMUClassInfoMap, NSArray, NSString, VMURangeToStringMap, NSDictionary, VMUNodeToStringMap;

@interface VMUProcessObjectGraph : VMUObjectGraph <VMUCommonGraphInterface> {

	int _pid;
	unsigned _kernPageSize;
	unsigned long long _machAbsolute;
	NSArray* _regions;
	unsigned _regionCount;
	NSArray* _zoneNames;
	NSString* _procDescription;
	NSString* _procName;
	VMURangeToStringMap* _threadNameRanges;
	VMURangeToStringMap* _binarySectionNameRanges;
	VMURangeToStringMap* _regionSymbolNameRanges;
	BOOL _hasDerivedObjcClassStructureRanges;
	NSDictionary* _pthreadOffsets;
	VMUNodeToStringMap* _nodeLabels;
	void* _userMarked;

}

@property (assign,nonatomic) unsigned long long snapshotMachTime;              //@synthesize machAbsolute=_machAbsolute - In the implementation block
@property (nonatomic,copy) NSString * toolHeaderDescription; 
@property (nonatomic,copy) NSString * processName; 
@property (nonatomic,readonly) BOOL is64bit; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int pid;                                        //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) unsigned vmPageSize;                            //@synthesize kernPageSize=_kernPageSize - In the implementation block
@property (nonatomic,readonly) VMUClassInfoMap * realizedClasses; 
@property (nonatomic,readonly) unsigned zoneCount; 
@property (nonatomic,readonly) unsigned regionCount;                           //@synthesize regionCount=_regionCount - In the implementation block
@property (nonatomic,readonly) unsigned nodeCount; 
@property (nonatomic,readonly) unsigned nodeNamespaceSize; 
-(void)setProcessName:(NSString *)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)processName;
-(VMUClassInfoMap *)realizedClasses;
-(unsigned)zoneCount;
-(id)zoneNameForIndex:(unsigned)arg1 ;
-(unsigned)vmPageSize;
-(unsigned)enumerateRegionsWithBlock:(/*^block*/id)arg1 ;
-(id)initWithArchived:(id)arg1 version:(long long)arg2 options:(unsigned long long)arg3 ;
-(void)archiveDictionaryRepresentation:(id)arg1 options:(unsigned long long)arg2 ;
-(id)labelForNode:(unsigned)arg1 ;
-(void)_renameWithNodeMap:(unsigned*)arg1 nodeNamespace:(unsigned)arg2 edgeMap:(unsigned*)arg3 edgeNamespace:(unsigned)arg4 ;
-(void)_deriveObjcClassStructureRanges;
-(id)binarySectionNameForAddress:(unsigned long long)arg1 ;
-(VMURange)binarySectionRangeContainingAddress:(unsigned long long)arg1 ;
-(id)regionSymbolNameForAddress:(unsigned long long)arg1 ;
-(VMURange)regionSymbolRangeContainingAddress:(unsigned long long)arg1 ;
-(id)vmuVMRegionForNode:(unsigned)arg1 ;
-(id)threadNameForAddress:(unsigned long long)arg1 ;
-(id)nodeDescription:(unsigned)arg1 withOffset:(unsigned long long)arg2 ;
-(id)shortLabelForMallocNode:(unsigned)arg1 ;
-(id)nodeDescription:(unsigned)arg1 ;
-(id)_detailedNodeOffsetDescription:(SCD_Struct_VM10)arg1 withSourceNode:(unsigned)arg2 destinationNode:(unsigned)arg3 alignmentSpacing:(unsigned)arg4 ;
-(id)_descriptionForRegionAddress:(unsigned long long)arg1 withOffset:(unsigned long long)arg2 showSegment:(BOOL)arg3 ;
-(void)markReachableNodesFromRoots:(void*)arg1 inMap:(void*)arg2 ;
-(void*)copyUserMarked;
-(void)refineTypesWithOverlay:(id)arg1 ;
-(void*)contentForNode:(unsigned)arg1 ;
-(unsigned)regionCount;
-(id)initWithPid:(int)arg1 nodes:(VMUBlockNode*)arg2 nodeCount:(unsigned)arg3 zoneNames:(id)arg4 classInfoMap:(id)arg5 regions:(id)arg6 pthreadOffsets:(id)arg7 userMarked:(void*)arg8 ;
-(void)setThreadName:(id)arg1 forRange:(VMURange)arg2 ;
-(void)setBinarySectionName:(id)arg1 forRange:(VMURange)arg2 ;
-(void)setRegionSymbolName:(id)arg1 forRange:(VMURange)arg2 ;
-(void)setLabel:(id)arg1 forNode:(unsigned)arg2 ;
-(NSString *)toolHeaderDescription;
-(void)setToolHeaderDescription:(NSString *)arg1 ;
-(id)shortNodeDescription:(unsigned)arg1 ;
-(id)nodeDescription:(unsigned)arg1 withDestinationNode:(unsigned)arg2 referenceInfo:(SCD_Struct_VM10)arg3 ;
-(id)nodeOffsetDescription:(SCD_Struct_VM10)arg1 withSourceNode:(unsigned)arg2 destinationNode:(unsigned)arg3 ;
-(id)referenceDescription:(SCD_Struct_VM10)arg1 withSourceNode:(unsigned)arg2 destinationNode:(unsigned)arg3 alignmentSpacing:(unsigned)arg4 ;
-(void)refineEdges:(unsigned)arg1 withOptions:(unsigned)arg2 markingInvalid:(void*)arg3 ;
-(unsigned long long)snapshotMachTime;
-(void)setSnapshotMachTime:(unsigned long long)arg1 ;
-(int)pid;
-(BOOL)is64bit;
@end
