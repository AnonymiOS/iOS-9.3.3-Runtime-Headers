/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:48 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PLMomentGenerationDataManagement_Private.h>

@class PLXPCTransaction, PLMomentGeneration, PLMomentAnalyzer, NSDictionary, NSManagedObjectContext, PLPhotoLibrary, NSString;

@interface PLMomentGenerationDataManager : NSObject <PLMomentGenerationDataManagement_Private> {

	PLXPCTransaction* _keepAliveTransaction;
	/*^block*/id _reachabilityBlock;
	void* _addressBook;
	PLMomentGeneration* _generator;
	PLMomentAnalyzer* _analyzer;
	NSDictionary* _generationOptions;
	BOOL _observingReachability;
	BOOL _isLightweightMigrationManager;
	NSManagedObjectContext* _managedObjectContext;
	PLPhotoLibrary* _momentGenerationLibrary;

}

@property (nonatomic,retain) NSManagedObjectContext * managedObjectContext;              //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (nonatomic,readonly) void* _addressBook; 
@property (nonatomic,retain) PLPhotoLibrary * momentGenerationLibrary;                   //@synthesize momentGenerationLibrary=_momentGenerationLibrary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedMomentGenerationDataManager;
+(void)setManagerMomentarilyBlessed:(id)arg1 ;
+(void)_setManagedObjectContextMomentarilyBlessed:(id)arg1 ;
+(BOOL)isManagedObjectContextMomentarilyBlessed:(id)arg1 ;
+(BOOL)isManagerMomentarilyBlessed:(id)arg1 ;
-(void)dealloc;
-(NSManagedObjectContext *)managedObjectContext;
-(BOOL)save:(id*)arg1 ;
-(void)refreshObject:(id)arg1 mergeChanges:(BOOL)arg2 ;
-(id)analyzer;
-(void)setManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(void)setMomentAnalysisNeeded:(BOOL)arg1 ;
-(BOOL)isMomentAnalysisNeeded;
-(void)refreshAllObjects;
-(id)generator;
-(id)initWithManagedObjectContextForLightweightMigration:(id)arg1 ;
-(id)orphanedAssetIDsWithError:(id*)arg1 ;
-(void)setMomentGenerationLibrary:(PLPhotoLibrary *)arg1 ;
-(void)stopObservingNetworkReachabilityChanges;
-(void)reloadGenerationOptions;
-(void)_finalizeInit;
-(void)setupPhotoLibrary;
-(PLPhotoLibrary *)momentGenerationLibrary;
-(id)insertedObjects;
-(id)updatedObjects;
-(id)deletedObjects;
-(id)_serverVersionInfoFilePath;
-(id)_metadataPath;
-(void)_updateKeepAlive;
-(void)_removeKeepAlive;
-(void)_networkReachabilityDidChange:(id)arg1 ;
-(id)_addressDictionaryForABRecord:(void*)arg1 identifier:(int)arg2 ;
-(id)_currentHomeAddressDictionary;
-(void)performBlock:(/*^block*/id)arg1 synchronously:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)allMomentsInLibrary;
-(void)removeMomentFromAllMoments:(id)arg1 ;
-(void)insertMomentIntoAllMoments:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)invalidateLocationDataForAssetsInMoment:(id)arg1 ;
-(id)generationOptions;
-(BOOL)isMomentsSupportedOnPlatform;
-(void)performDataTransaction:(/*^block*/id)arg1 synchronously:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)enumerateAssetsWithIDs:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)serverVersionInfo;
-(BOOL)saveServerVersionInfo:(id)arg1 ;
-(id)analysisMetadata;
-(BOOL)saveAnalysisMetadata:(id)arg1 ;
-(id)assetWithUniqueID:(id)arg1 error:(id*)arg2 ;
-(id)assetsWithUniqueIDs:(id)arg1 error:(id*)arg2 ;
-(id)momentWithUniqueID:(id)arg1 error:(id*)arg2 ;
-(id)momentListWithUniqueID:(id)arg1 forLevel:(short)arg2 error:(id*)arg3 ;
-(id)momentsSinceDate:(id)arg1 ;
-(id)momentsBetweenDate:(id)arg1 andDate:(id)arg2 sorted:(BOOL)arg3 ;
-(id)momentsBetweenDateRanges:(id)arg1 ;
-(id)momentListContainingDate:(id)arg1 forLevel:(short)arg2 wantsEarliest:(BOOL)arg3 ;
-(id)yearMomentListForYear:(long long)arg1 wantsEarliest:(BOOL)arg2 ;
-(id)findOrCreateYearMomentListForYear:(long long)arg1 ;
-(Class)momentListDataClassForGranularityLevel:(short)arg1 ;
-(Class)momentDataClass;
-(Class)momentAssetDataClass;
-(id)insertNewMomentListForGranularityLevel:(short)arg1 ;
-(id)insertNewMoment;
-(void)resetOnFailure;
-(id)allMomentsWithError:(id*)arg1 ;
-(id)allMomentsWithInvalidReverseLocationData;
-(id)allMomentListsForLevel:(short)arg1 ;
-(id)allMomentListsWithInvalidReverseLocationDataForLevel:(short)arg1 ;
-(id)allAssetsToBeIncludedInMomentsWithError:(id*)arg1 ;
-(id)allAssetIDsToBeIncludedInMomentsWithError:(id*)arg1 ;
-(void)beginObservingNetworkReachabilityChangesWithBlock:(/*^block*/id)arg1 ;
-(id)homeAddressDictionary;
-(id)locationCoordinatesForAssetIDs:(id)arg1 ;
-(void)invalidateShiftedLocationForAllAssetsInMoments;
-(id)allAssetIDsNeedingLocationShiftWithError:(id*)arg1 ;
-(void)pendingChangesUpdated:(unsigned long long)arg1 ;
-(id)momentAnalysisTransactionWithName:(const char*)arg1 ;
-(unsigned long long)hardGenerationBatchSizeLimit;
-(BOOL)wantsMomentReplayLogging;
-(id)replayLogPath;
-(void)verifyAndRepairOrphanedAssets:(id)arg1 ;
-(BOOL)hasChanges;
-(BOOL)isNetworkReachable;
-(void*)_addressBook;
@end

