/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:27 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSQLManyToMany;

@interface NSSQLCorrelationTableUpdateTracker : NSObject {

	NSSQLManyToMany* _relationship;
	id _inserts;
	id _deletes;
	id _masterUpdates;
	id _otherUpdates;

}

@property (readonly) NSSQLManyToMany * relationship;              //@synthesize relationship=_relationship - In the implementation block
-(NSSQLManyToMany *)relationship;
-(id)initForRelationship:(id)arg1 ;
-(void)trackInserts:(id)arg1 deletes:(id)arg2 reorders:(id)arg3 forObjectWithID:(id)arg4 ;
-(void)trackReorders:(id)arg1 forObjectWithID:(id)arg2 ;
-(void)enumerateInsertsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateDeletesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)hasMasterReorders;
-(void)enumerateMasterReordersUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateMasterReordersPart2UsingBlock:(/*^block*/id)arg1 ;
-(BOOL)hasReorders;
-(void)enumerateReordersUsingBlock:(/*^block*/id)arg1 ;
-(id)_organizeValues:(id)arg1 ;
-(void)dealloc;
-(BOOL)hasInserts;
-(BOOL)hasDeletes;
@end

