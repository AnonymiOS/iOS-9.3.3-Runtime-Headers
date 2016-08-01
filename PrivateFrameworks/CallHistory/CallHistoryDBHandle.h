/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:48 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallHistory/CHLogger.h>

@class NSManagedObjectContext, CallDBManager, NSString;

@interface CallHistoryDBHandle : CHLogger {

	NSManagedObjectContext* fCallRecordContext;
	NSManagedObjectContext* fCallDBPropertiesContext;
	CallDBManager* callDBManager;
	NSString* objectId;
	id _observerCallRecordRef;
	id _observerCallDBPropRef;
	id _moveCallRecordsFromTempStoreRef;
	id _dataStoreAddedRef;

}

@property (nonatomic,readonly) NSString * objectId; 
@property (nonatomic,readonly) CallDBManager * callDBManager; 
+(id)createWithDBManager:(id)arg1 ;
+(id)createForClient;
+(id)createForServer;
-(void)dealloc;
-(BOOL)save:(id*)arg1 ;
-(void)deleteAll;
-(id)fetchObjectsWithPredicate:(id)arg1 ;
-(id)fetchWithPredicate:(id)arg1 forEntity:(id)arg2 ;
-(id)initWithDBManager:(id)arg1 ;
-(void)handleCallRecordContextDidSaveNotification:(id)arg1 ;
-(void)handleCallDBPropContextDidSaveNotification:(id)arg1 ;
-(CallDBManager *)callDBManager;
-(BOOL)moveCallRecordsFromDatabaseAtURL:(id)arg1 withVersion:(long long)arg2 ;
-(void)handlePersistentStoreChangedNotification:(id)arg1 ;
-(id)createCallRecord;
-(BOOL)handleSaveForCallRecordContext:(id)arg1 error:(id*)arg2 ;
-(void)postTimersChangedNotification;
-(id)callDBProperties;
-(id)fetchWithPredicate:(id)arg1 forEntity:(id)arg2 withLimit:(BOOL)arg3 ;
-(id)getArrayForCallTypeMask:(unsigned)arg1 ;
-(id)fetchAllObjectsWithUniqueId:(id)arg1 ;
-(id)fetchObjectWithUniqueId:(id)arg1 ;
-(id)fetchObjectsWithUniqueIds:(id)arg1 ;
-(id)fetchAllNoLimit;
-(void)updateCallDBProperties;
-(BOOL)saveTimers:(/*^block*/id)arg1 ;
-(BOOL)performSaveWithBackgroundTaskAssertion:(id)arg1 error:(id*)arg2 ;
-(void)resetTimers;
-(BOOL)resetAllTimers;
-(void)unRegisterForNotifications;
-(id)callRecordContext;
-(void)registerForNotifications:(id)arg1 ;
-(void)mergeCallRecordChangesFromRemoteAppSave;
-(void)mergeCallDBPropChangesFromRemoteAppSave;
-(id)fetchAll;
-(id)fetchWithCallTypes:(unsigned)arg1 ;
-(void)deleteObjectWithUniqueId:(id)arg1 ;
-(void)deleteObjectsWithUniqueIds:(id)arg1 ;
-(id)timerIncoming;
-(id)timerOutgoing;
-(id)timerLifetime;
-(id)timerLastReset;
-(NSString *)objectId;
@end

