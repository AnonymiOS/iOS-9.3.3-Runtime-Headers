/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:33 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <MusicLibrary/ML3Query.h>

@class ML3Predicate, ML3Container, NSArray;

@interface ML3ContainerQuery : ML3Query {

	ML3Predicate* _containerPredicate;
	ML3Container* _container;
	NSArray* _limitedPersistentIDs;

}

@property (nonatomic,readonly) NSArray * limitedPersistentIDs;              //@synthesize limitedPersistentIDs=_limitedPersistentIDs - In the implementation block
@property (nonatomic,readonly) ML3Container * container;                    //@synthesize container=_container - In the implementation block
@property (nonatomic,readonly) BOOL requiresSmartLimiting; 
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(ML3Container *)container;
-(unsigned long long)countOfDistinctRowsForColumn:(id)arg1 ;
-(id)selectPersistentIDsSQLAndProperties:(id)arg1 ordered:(BOOL)arg2 ;
-(id)enumerationDatabaseResultForSQL:(id)arg1 onConnection:(id)arg2 withParameters:(id)arg3 ;
-(BOOL)requiresSmartLimiting;
-(id)initWithEntityClass:(Class)arg1 container:(id)arg2 predicate:(id)arg3 orderingTerms:(id)arg4 ;
-(id)selectPersistentIDsSQLAndPropertiesForResultSet:(id)arg1 ordered:(BOOL)arg2 ;
-(NSArray *)limitedPersistentIDs;
-(unsigned long long)countOfEntities;
-(id)valueForAggregateFunction:(id)arg1 onEntitiesForProperty:(id)arg2 ;
-(BOOL)hasEntities;
@end

