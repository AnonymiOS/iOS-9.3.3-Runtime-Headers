/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:26 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PSSearchIndexOperationDelegate.h>
#import <libobjc.A.dylib/PSSearchOperationDelegate.h>
#import <libobjc.A.dylib/PSSpecifierObserver.h>

@protocol OS_dispatch_queue, PSSearchModelDataSource;
@class NSMutableSet, NSMapTable, NSMutableArray, PSSearchResults, NSString, NSObject, NSOperationQueue, PSSearchOperation, NSArray;

@interface PSSearchModel : NSObject <PSSearchIndexOperationDelegate, PSSearchOperationDelegate, PSSpecifierObserver> {

	NSMutableSet* _delegates;
	NSMapTable* _specifierDataSources;
	NSMutableArray* _rootEntries;
	NSMutableSet* _entriesBeingIndexed;
	NSMutableSet* _indexingEntriesWithLoadedDataSources;
	NSMutableSet* _removedEntriesStillIndexing;
	NSMutableArray* _deferredSpecifierUpdates;
	PSSearchResults* _currentResults;
	NSString* _queryForCurrentResults;
	NSMutableSet* _entriesPendingSearch;
	NSMutableSet* _removedEntriesStillSearching;
	NSObject*<OS_dispatch_queue> _searchStateAccessQueue;
	BOOL _hasLoadedRootEntries;
	BOOL _hasStartedIndexing;
	NSOperationQueue* _indexOperationQueue;
	NSOperationQueue* _searchOperationQueue;
	BOOL _indexing;
	BOOL _waitUntilFinished;
	BOOL _showSectionInDetailText;
	id<PSSearchModelDataSource> _dataSource;
	NSString* _currentQuery;
	PSSearchOperation* _activeSearchOperation;

}

@property (assign,nonatomic,__weak) id<PSSearchModelDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) PSSearchResults * currentResults; 
@property (copy) NSString * currentQuery;                                                //@synthesize currentQuery=_currentQuery - In the implementation block
@property (getter=isLoadingResults,nonatomic,readonly) BOOL loadingResults; 
@property (getter=isIndexing,nonatomic,readonly) BOOL indexing;                          //@synthesize indexing=_indexing - In the implementation block
@property (nonatomic,readonly) BOOL hasCompletedIndexing; 
@property (assign,nonatomic) BOOL waitUntilFinished;                                     //@synthesize waitUntilFinished=_waitUntilFinished - In the implementation block
@property (nonatomic,readonly) NSArray * rootEntries;                                    //@synthesize rootEntries=_rootEntries - In the implementation block
@property (retain) PSSearchOperation * activeSearchOperation;                            //@synthesize activeSearchOperation=_activeSearchOperation - In the implementation block
@property (assign,nonatomic) BOOL showSectionInDetailText;                               //@synthesize showSectionInDetailText=_showSectionInDetailText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long observerType; 
+(id)sharedInstance;
-(BOOL)waitUntilFinished;
-(void)setDataSource:(id<PSSearchModelDataSource>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<PSSearchModelDataSource>)dataSource;
-(id)recursiveDescription;
-(void)preheat;
-(void)dataSource:(id)arg1 performUpdates:(id)arg2 ;
-(void)invalidateSpecifiersForDataSource:(id)arg1 ;
-(long long)observerType;
-(id)_rootSpecifiers;
-(void)_beginIndexingIfNecessary;
-(void)_addSearchEntries:(id)arg1 parent:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)removeRootSpecifier:(id)arg1 ;
-(void)addRootSpecifier:(id)arg1 ;
-(void)_removeSearchEntries:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_beginSearchingEntriesForCurrentQuery:(id)arg1 newSearch:(BOOL)arg2 ;
-(void)_updatedEntry:(id)arg1 withChildren:(id)arg2 ;
-(void)_removeSearchEntries:(id)arg1 usingBlock:(/*^block*/id)arg2 forReload:(BOOL)arg3 ;
-(PSSearchResults *)currentResults;
-(void)_enumerateDelegatesUsingBlock:(/*^block*/id)arg1 ;
-(void)_loadChildrenForEntry:(id)arg1 ;
-(void)_reloadSearchEntries:(id)arg1 ;
-(void)_performSpecifierUpdates:(id)arg1 forSearchEntries:(id)arg2 ;
-(void)_performDeferredUpdatesForEntry:(id)arg1 ;
-(void)_addSpecifierDataSource:(id)arg1 forSearchEntry:(id)arg2 ;
-(void)_finishedIndexingEntry:(id)arg1 ;
-(PSSearchOperation *)activeSearchOperation;
-(void)setActiveSearchOperation:(PSSearchOperation *)arg1 ;
-(void)_cancelAllSearchOperations;
-(void)_updateWithNewSearchResults:(id)arg1 forQuery:(id)arg2 newSearch:(BOOL)arg3 ;
-(NSArray *)rootEntries;
-(/*^block*/id)_defaultSearchResultsSectionComparator;
-(id)_searchEntriesForSpecifierDataSource:(id)arg1 ;
-(void)searchIndexOperation:(id)arg1 didFindSpecifierDataSource:(id)arg2 ;
-(void)searchIndexOperationDidFinish:(id)arg1 searchEntries:(id)arg2 ;
-(void)searchIndexOperationDidCancel:(id)arg1 ;
-(void)searchOperationDidBegin:(id)arg1 ;
-(id)searchOperation:(id)arg1 filteredEntriesForEntries:(id)arg2 ;
-(void)searchOperation:(id)arg1 configureSearchResults:(id)arg2 ;
-(void)searchOperationDidFinish:(id)arg1 withResults:(id)arg2 ;
-(void)searchOperationDidCancel:(id)arg1 ;
-(void)reloadRootSpecifier:(id)arg1 ;
-(BOOL)hasCompletedIndexing;
-(BOOL)isLoadingResults;
-(void)searchForQuery:(id)arg1 ;
-(BOOL)isIndexing;
-(void)setWaitUntilFinished:(BOOL)arg1 ;
-(BOOL)showSectionInDetailText;
-(void)setShowSectionInDetailText:(BOOL)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(void)addDelegate:(id)arg1 ;
-(void)setCurrentQuery:(NSString *)arg1 ;
-(NSString *)currentQuery;
@end

