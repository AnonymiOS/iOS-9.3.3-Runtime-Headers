/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:33 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <MusicLibrary/ML3QueryResultSet.h>

@class ML3QueryResultSet_BackingStore;

@interface ML3ContainerQueryResultSet : ML3QueryResultSet {

	BOOL _needsSorting;
	BOOL _needsReversing;
	ML3QueryResultSet_BackingStore* _sortedBackingStore;
	long long _containerPID;
	unsigned long long _entityLimit;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)_updateToLibraryCurrentRevision;
-(void)_loadCurrentFullResults;
-(id)sortedBackingStoreForDisplayOrdering;
-(long long)persistentIDAtIndex:(unsigned long long)arg1 ;
-(void)enumeratePersistentIDsUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithQuery:(id)arg1 ;
-(unsigned long long)entityLimit;
-(void)enumerateSectionsUsingBlock:(/*^block*/id)arg1 ;
@end

