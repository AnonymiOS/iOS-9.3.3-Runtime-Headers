/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:43 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDSQLiteQueryDescriptor.h>

@protocol HDHealthDaemon;
@class HKObjectType, _HKFilter, NSNumber, NSArray;

@interface HDDataEntityEnumerator : HDSQLiteQueryDescriptor {

	BOOL _useLeftJoin;
	HKObjectType* _objectType;
	_HKFilter* _filter;
	NSNumber* _sourceIdentifier;
	/*^block*/id _authorizationFilter;
	NSNumber* _anchor;
	NSNumber* _deletedObjectsAnchor;
	NSArray* _sortDescriptors;
	id<HDHealthDaemon> _healthDaemon;

}

@property (nonatomic,readonly) HKObjectType * objectType;                    //@synthesize objectType=_objectType - In the implementation block
@property (nonatomic,retain) _HKFilter * filter;                             //@synthesize filter=_filter - In the implementation block
@property (nonatomic,retain) NSNumber * sourceIdentifier;                    //@synthesize sourceIdentifier=_sourceIdentifier - In the implementation block
@property (nonatomic,copy) id authorizationFilter;                           //@synthesize authorizationFilter=_authorizationFilter - In the implementation block
@property (nonatomic,retain) NSNumber * anchor;                              //@synthesize anchor=_anchor - In the implementation block
@property (nonatomic,retain) NSNumber * deletedObjectsAnchor;                //@synthesize deletedObjectsAnchor=_deletedObjectsAnchor - In the implementation block
@property (nonatomic,retain) NSArray * sortDescriptors;                      //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (nonatomic,readonly) id<HDHealthDaemon> healthDaemon;              //@synthesize healthDaemon=_healthDaemon - In the implementation block
@property (assign,nonatomic) BOOL useLeftJoin;                               //@synthesize useLeftJoin=_useLeftJoin - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFilter:(_HKFilter *)arg1 ;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(NSArray *)sortDescriptors;
-(NSNumber *)anchor;
-(void)setAnchor:(NSNumber *)arg1 ;
-(NSNumber *)sourceIdentifier;
-(void)setSourceIdentifier:(NSNumber *)arg1 ;
-(_HKFilter *)filter;
-(id<HDHealthDaemon>)healthDaemon;
-(BOOL)enumerateWithError:(id*)arg1 handler:(/*^block*/id)arg2 ;
-(id)initWithObjectType:(id)arg1 entityClass:(Class)arg2 healthDaemon:(id)arg3 ;
-(id)initWithEntityClass:(Class)arg1 healthDaemon:(id)arg2 ;
-(BOOL)enumerateIncludingDeletedObjects:(BOOL)arg1 error:(id*)arg2 handler:(/*^block*/id)arg3 ;
-(HKObjectType *)objectType;
-(id)authorizationFilter;
-(void)setAuthorizationFilter:(id)arg1 ;
-(void)setDeletedObjectsAnchor:(NSNumber *)arg1 ;
-(BOOL)_enumerateObjectsOnDatabase:(id)arg1 error:(id*)arg2 handler:(/*^block*/id)arg3 ;
-(void)setUseLeftJoin:(BOOL)arg1 ;
-(BOOL)_prepareDeletedObjectsAndSamplesDescriptor:(id)arg1 error:(id*)arg2 ;
-(BOOL)_setColumnNamesAndSortOrderingsOnDescriptor:(id)arg1 error:(id*)arg2 ;
-(BOOL)_prepareDescriptor:(id)arg1 error:(id*)arg2 ;
-(id)_joinClauseForProperties:(id)arg1 ;
-(NSNumber *)deletedObjectsAnchor;
-(BOOL)useLeftJoin;
@end

