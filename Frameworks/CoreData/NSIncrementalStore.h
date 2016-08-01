/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:27 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSPersistentStore.h>

@class NSDictionary;

@interface NSIncrementalStore : NSPersistentStore {

	NSDictionary* _storeMetadata;
	unsigned long long _lastIdentifier;
	void* _reserveda;
	void* _reservedb;

}
+(id)metadataForPersistentStoreWithURL:(id)arg1 error:(id*)arg2 ;
+(BOOL)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 error:(id*)arg3 ;
+(id)identifierForNewStoreAtURL:(id)arg1 ;
-(id)_rawMetadata__;
-(void)_preflightCrossCheck;
-(id)_newObjectIDForEntityDescription:(id)arg1 pk:(long long)arg2 ;
-(void)_setMetadata:(id)arg1 includeVersioning:(BOOL)arg2 ;
-(BOOL)load:(id*)arg1 ;
-(id)referenceObjectForObjectID:(id)arg1 ;
-(id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4 ;
-(void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1 ;
-(void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1 ;
-(BOOL)_prepareForExecuteRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(id)newObjectIDForEntity:(id)arg1 referenceObject:(id)arg2 ;
-(void)dealloc;
-(id)metadata;
-(void)setMetadata:(id)arg1 ;
-(id)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2 ;
-(BOOL)loadMetadata:(id*)arg1 ;
@end

