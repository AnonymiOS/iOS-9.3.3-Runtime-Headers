/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:49 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLCloudScenarioProducer.h>

@protocol OS_dispatch_queue;
@class NSObject, PLPhotoLibrary, PLCloudPhotoLibraryManager;

@interface PLCloudLegacyPruneAgent : PLCloudScenarioProducer {

	long long _lastPruneRequest;
	NSObject*<OS_dispatch_queue> _agentQueue;
	SCD_Struct_PL27 _walkStatus[7];
	PLPhotoLibrary* _localLibrary;
	PLCloudPhotoLibraryManager* _remoteLibrary;

}

@property (retain) PLPhotoLibrary * localLibrary;                           //@synthesize localLibrary=_localLibrary - In the implementation block
@property (retain) PLCloudPhotoLibraryManager * remoteLibrary;              //@synthesize remoteLibrary=_remoteLibrary - In the implementation block
-(void)dealloc;
-(id)init;
-(void)activate;
-(BOOL)spaceAvailable:(long long*)arg1 totalSpace:(long long*)arg2 ;
-(void)_runOnAgentQueueWithTransaction:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)pruningEnabled;
-(int)typeToIndex:(unsigned long long)arg1 ;
-(void)_beginPruningResourcesOfType:(unsigned long long)arg1 withFetchRequest:(id)arg2 startingAtOffset:(unsigned long long)arg3 then:(/*^block*/id)arg4 ;
-(void)pruneResources:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)beginPruningResourcesOfType:(unsigned long long)arg1 withFetchRequest:(id)arg2 then:(/*^block*/id)arg3 ;
-(void)_runOnAgentQueueWithTransaction:(id)arg1 delay:(double)arg2 block:(/*^block*/id)arg3 ;
-(void)cplResourcesForFetchRequest:(id)arg1 ofType:(unsigned long long)arg2 startingAtOffset:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(PLCloudPhotoLibraryManager *)remoteLibrary;
-(void)pruneOlderMediums;
-(void)pruneResourcesOfType:(unsigned long long)arg1 createdBeforeDate:(id)arg2 then:(/*^block*/id)arg3 ;
-(void)pruneResourcesOfType:(unsigned long long)arg1 then:(/*^block*/id)arg2 ;
-(void)pruneOlderOriginals;
-(void)systemStarted:(id)arg1 ;
-(void)settingsChanged:(id)arg1 ;
-(void)runningCloudMaintenance:(id)arg1 ;
-(void)cacheDeleteRequestReceived:(id)arg1 ;
-(void)setLocalLibrary:(PLPhotoLibrary *)arg1 ;
-(void)setRemoteLibrary:(PLCloudPhotoLibraryManager *)arg1 ;
-(void)resetWalkStatus;
-(void)pruneResources;
-(void)emergencyPrune;
-(PLPhotoLibrary *)localLibrary;
-(unsigned long long)batchSize;
@end

