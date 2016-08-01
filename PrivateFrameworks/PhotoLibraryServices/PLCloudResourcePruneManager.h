/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:48 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class PLPhotoLibrary, PLCloudPhotoLibraryManager, NSObject;

@interface PLCloudResourcePruneManager : NSObject {

	PLPhotoLibrary* _photoLibrary;
	PLCloudPhotoLibraryManager* _cplManager;
	NSObject*<OS_dispatch_queue> _workQueue;

}
+(id)_orderedPruneConditionStringsOnAssets;
+(id)_originalResourceTypes;
+(id)_nonOriginalResourceTypes;
-(void)dealloc;
-(id)init;
-(id)initWithCPLManager:(id)arg1 ;
-(id)_identifierForResource:(id)arg1 ;
-(void)_runOnWorkQueueWithTransaction:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_handleCacheDeleteRegistration;
-(long long)diskSpaceToPrune;
-(long long)startAutomaticPruneWithBudget:(long long)arg1 ;
-(long long)_purgeableAmount;
-(long long)pruneResources:(id)arg1 inPhotoLibrary:(id)arg2 ;
-(long long)_fetchResourcesForPruningWithBatchHandler:(/*^block*/id)arg1 budget:(long long)arg2 ;
-(id)_predicatesForPrune;
-(long long)_localResourcesSize;
-(id)_notOnDemandDownloadPredicate;
-(id)_predicateForCPLResourceType:(unsigned long long)arg1 additionalAssetConditions:(id)arg2 additionalResourcePredicates:(id)arg3 ;
-(id)_onDemandDownloadPredicate;
-(void)_updateLocalStateForPrunedResource:(id)arg1 inPhotoLibrary:(id)arg2 ;
-(id)pruneStatusForDebug:(BOOL)arg1 ;
@end

