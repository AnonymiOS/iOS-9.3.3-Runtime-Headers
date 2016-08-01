/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:58 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MusicEntityProviding.h>

@protocol OS_dispatch_queue;
@class NSArray, NSOperationQueue, MusicLibrarySearchResultsEntityProviderConfiguration, NSObject, NSString;

@interface MusicLibrarySearchResultsEntityProvider : NSObject <MusicEntityProviding> {

	NSArray* _searchDataSources;
	NSOperationQueue* _searchOperationQueue;
	MusicLibrarySearchResultsEntityProviderConfiguration* _searchEntityProviderConfiguration;
	NSObject*<OS_dispatch_queue> _invalidationQueue;
	NSArray* _invalidationBlocks;
	unsigned long long _maximumNumberOfSectionResults;
	NSString* _searchTerm;

}

@property (nonatomic,readonly) BOOL hasResults; 
@property (assign,nonatomic) unsigned long long maximumNumberOfSectionResults;              //@synthesize maximumNumberOfSectionResults=_maximumNumberOfSectionResults - In the implementation block
@property (nonatomic,copy) NSString * searchTerm;                                           //@synthesize searchTerm=_searchTerm - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(unsigned long long)numberOfSections;
-(id)entityValueProviderAtIndexPath:(id)arg1 ;
-(unsigned long long)numberOfEntitiesInSection:(unsigned long long)arg1 ;
-(unsigned long long)numberOfIndexBarEntries;
-(unsigned long long)sectionForSectionIndexBarEntryAtIndex:(unsigned long long)arg1 ;
-(void)setSearchTerm:(NSString *)arg1 ;
-(NSString *)searchTerm;
-(void)configureEntityValueContextOutputForAnyIndexPath:(id)arg1 ;
-(id)indexBarEntryAtIndex:(unsigned long long)arg1 ;
-(void)configureEntityValueContextOutput:(id)arg1 forIndexPath:(id)arg2 ;
-(BOOL)hasEntities;
-(void)configureSectionEntityValueContextOutput:(id)arg1 forIndex:(unsigned long long)arg2 ;
-(id)indexPathForEntityValueContext:(id)arg1 ;
-(BOOL)hasEntitiesNotInLibrary;
-(void)setMaximumNumberOfSectionResults:(unsigned long long)arg1 ;
-(BOOL)hasMoreResultsForSection:(long long)arg1 ;
-(id)moreSearchResultsEntityProviderConfigurationForSectionIndex:(long long)arg1 ;
-(BOOL)hasResults;
-(id)browseTableViewConfigurationForSection:(long long)arg1 ;
-(id)initWithSearchEntityProviderConfiguration:(id)arg1 ;
-(unsigned long long)maximumNumberOfSectionResults;
-(void)_filterResults;
-(void)_sendInvalidationNotification;
@end

