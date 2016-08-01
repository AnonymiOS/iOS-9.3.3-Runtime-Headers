/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:30 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Symbolication/Symbolication-Structs.h>
#import <Symbolication/VMUDirectedGraph.h>

@class VMUClassInfoMap;

@interface VMUObjectGraph : VMUDirectedGraph {

	VMUObjectGraphEdge* _referenceTable;
	unsigned _referenceTableCapacity;
	VMUObjectGraphEdgeLarge* _referenceTableLarge;
	unsigned _referenceTableLargeCount;
	unsigned _referenceTableLargeCapacity;
	VMUBlockNode* _internalizedNodes;
	unsigned _internalizedCount;
	id* _classInfos;
	VMUClassInfoMap* _knownClassInfos;
	unsigned _classInfosCount;
	/*^block*/id _nodeProvider;
	VMUObjectGraph* _referenceGraph;
	unsigned _referenceGraphNodeNamespaceSize;
	unsigned _referenceGraphEdgeNamespaceSize;
	int _referencingCount;

}

@property (nonatomic,readonly) VMUClassInfoMap * indexedClassInfos;              //@synthesize knownClassInfos=_knownClassInfos - In the implementation block
+(void)initialize;
-(void)withRootNodeMarkingMap:(/*^block*/id)arg1 ;
-(unsigned)enumerateObjectsWithBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCD_Struct_VM10)nodeDetails:(unsigned)arg1 ;
-(id)initWithNodes:(unsigned)arg1 nodeProvider:(/*^block*/id)arg2 ;
-(VMUClassInfoMap *)indexedClassInfos;
-(void)internalizeNodes;
-(id)initWithArchived:(id)arg1 options:(unsigned long long)arg2 ;
-(void)archiveDictionaryRepresentation:(id)arg1 options:(unsigned long long)arg2 ;
-(unsigned)enumerateReferencesWithBlock:(/*^block*/id)arg1 ;
-(unsigned)addEdgeFromNode:(unsigned)arg1 sourceOffset:(unsigned long long)arg2 withScanType:(int)arg3 toNode:(unsigned)arg4 destinationOffset:(unsigned long long)arg5 ;
-(void)_renameWithNodeMap:(unsigned*)arg1 nodeNamespace:(unsigned)arg2 edgeMap:(unsigned*)arg3 edgeNamespace:(unsigned)arg4 ;
-(unsigned)addEdgeFromNode:(unsigned)arg1 toNode:(unsigned)arg2 ;
-(void)_modifyDerivativeGraphCount:(int)arg1 ;
-(unsigned)enumerateObjectsOfGroupNode:(unsigned)arg1 withBlock:(/*^block*/id)arg2 ;
-(unsigned)enumerateMarkedObjects:(void*)arg1 withBlock:(/*^block*/id)arg2 ;
-(unsigned)enumerateReferencesOfNode:(unsigned)arg1 withBlock:(/*^block*/id)arg2 ;
-(SCD_Struct_VM11)referenceInfoWithName:(unsigned)arg1 ;
@end

