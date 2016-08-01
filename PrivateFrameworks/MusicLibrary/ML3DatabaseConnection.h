/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:34 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ML3DatabaseConnectionDelegate;
#import <MusicLibrary/MusicLibrary-Structs.h>
@class ML3DatabaseStatementCache, NSMutableArray, ML3DatabaseConnectionPool, NSString, NSUUID;

@interface ML3DatabaseConnection : NSObject {

	sqlite3Ref _sqlitedb;
	BOOL _isOpen;
	ML3DatabaseStatementCache* _statementCache;
	unsigned long long _statementsSinceLastCheckpoint;
	unsigned _transactionLevel;
	BOOL _nestedTransactionWantsToRollback;
	NSMutableArray* _enqueuedTransactionCommitBlocks;
	ML3DatabaseConnectionPool* _owningPool;
	NSMutableArray* _registeredFunctions;
	NSMutableArray* _registeredModules;
	int _profilingLevel;
	NSString* _lastTracedStatement;
	int _willDeleteDatabaseNotifyToken;
	BOOL _isHandlingIOError;
	BOOL _isReadOnly;
	BOOL _automaticCheckpointingEnabled;
	BOOL _logQueryPlans;
	id<ML3DatabaseConnectionDelegate> _connectionDelegate;
	NSString* _databasePath;
	unsigned long long _journalingMode;
	unsigned long long _protectionLevel;
	NSUUID* _currentTransactionID;
	NSUUID* _uniqueIdentifier;
	const void* _iTunesExtensions;
	unsigned long long _checkpointStatementThreshold;

}

@property (assign,nonatomic,__weak) id<ML3DatabaseConnectionDelegate> connectionDelegate;              //@synthesize connectionDelegate=_connectionDelegate - In the implementation block
@property (nonatomic,readonly) NSString * databasePath;                                                //@synthesize databasePath=_databasePath - In the implementation block
@property (nonatomic,readonly) BOOL isOpen; 
@property (assign,setter=setReadOnly:,nonatomic) BOOL isReadOnly;                                      //@synthesize isReadOnly=_isReadOnly - In the implementation block
@property (assign,nonatomic) unsigned long long journalingMode;                                        //@synthesize journalingMode=_journalingMode - In the implementation block
@property (assign,nonatomic) unsigned long long protectionLevel;                                       //@synthesize protectionLevel=_protectionLevel - In the implementation block
@property (nonatomic,readonly) BOOL isInTransaction; 
@property (nonatomic,readonly) BOOL transactionMarkedForRollBack; 
@property (nonatomic,readonly) NSUUID * currentTransactionID;                                          //@synthesize currentTransactionID=_currentTransactionID - In the implementation block
@property (assign,nonatomic) int profilingLevel; 
@property (nonatomic,readonly) NSUUID * uniqueIdentifier;                                              //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (assign,nonatomic) const void* iTunesExtensions;                                             //@synthesize iTunesExtensions=_iTunesExtensions - In the implementation block
@property (assign,nonatomic) BOOL automaticCheckpointingEnabled;                                       //@synthesize automaticCheckpointingEnabled=_automaticCheckpointingEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long checkpointStatementThreshold;                          //@synthesize checkpointStatementThreshold=_checkpointStatementThreshold - In the implementation block
@property (assign,nonatomic) BOOL logQueryPlans;                                                       //@synthesize logQueryPlans=_logQueryPlans - In the implementation block
-(BOOL)schemaDeleteColumns:(id)arg1 inTable:(id)arg2 ;
-(BOOL)schemaDeleteColumn:(id)arg1 inTable:(id)arg2 ;
-(BOOL)schemaRenameColumn:(id)arg1 inTable:(id)arg2 toNewColumnName:(id)arg3 ;
-(BOOL)schemaAddColumnDefinition:(id)arg1 toTable:(id)arg2 ;
-(BOOL)schemaInsertColumnDefinitions:(id)arg1 intoTable:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)_enumerateTableColumnNamesAndDefinitionsFromTable:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)_alterTableNamed:(id)arg1 withNewColumnDefinitions:(id)arg2 newColumnNames:(id)arg3 oldColumnNames:(id)arg4 ;
-(BOOL)schemaInsertColumnDefinition:(id)arg1 intoTable:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setReadOnly:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)flush;
-(BOOL)close;
-(NSUUID *)uniqueIdentifier;
-(BOOL)open;
-(id)_prepareStatement:(id)arg1 error:(id*)arg2 ;
-(BOOL)_executeStatement:(id)arg1 withError:(id*)arg2 ;
-(sqlite3Ref)_sqliteHandle;
-(id)sqliteError;
-(BOOL)executeUpdate:(id)arg1 withParameters:(id)arg2 error:(id*)arg3 ;
-(void)enqueueBlockForTransactionCommit:(/*^block*/id)arg1 ;
-(id)executeQuery:(id)arg1 withParameters:(id)arg2 ;
-(BOOL)pushTransaction;
-(BOOL)popTransactionAndCommit:(BOOL)arg1 ;
-(NSUUID *)currentTransactionID;
-(BOOL)executeUpdate:(id)arg1 ;
-(void)setConnectionDelegate:(id<ML3DatabaseConnectionDelegate>)arg1 ;
-(BOOL)pushTransactionUsingBehaviorType:(unsigned long long)arg1 ;
-(id)initWithDatabasePath:(id)arg1 ;
-(BOOL)databasePathExists;
-(BOOL)tableExists:(id)arg1 ;
-(BOOL)registerFunctionName:(id)arg1 argumentCount:(int)arg2 functionPointer:(/*function pointer*/void*)arg3 ;
-(BOOL)registerFunctionName:(id)arg1 argumentCount:(int)arg2 block:(/*^block*/id)arg3 ;
-(void)setITunesExtensions:(const void*)arg1 ;
-(const void*)iTunesExtensions;
-(BOOL)deleteDatabase;
-(id)executeQuery:(id)arg1 withParameters:(id)arg2 limitProperty:(id)arg3 limitValue:(long long)arg4 ;
-(id)openBlobInTable:(id)arg1 column:(id)arg2 row:(long long)arg3 readOnly:(BOOL)arg4 ;
-(long long)lastInsertionRowID;
-(BOOL)registerModule:(id)arg1 ;
-(BOOL)removeModuleNamed:(id)arg1 ;
-(unsigned long long)journalingMode;
-(void)_ensureConnectionIsOpen;
-(BOOL)_handleBusyLockWithNumberOfRetries:(int)arg1 ;
-(void)_handleDatabaseCorruption;
-(BOOL)_handleDiskIOError;
-(void)_setOwningPool:(id)arg1 ;
-(void)setProfilingLevel:(int)arg1 ;
-(void)setJournalingMode:(unsigned long long)arg1 ;
-(BOOL)_isSharedMediaLibraryDatabase;
-(void)_updateProfilingLevel;
-(BOOL)_openWithFlags:(int)arg1 ;
-(BOOL)_databaseFilesAreWritable;
-(void)_createDatabaseDirectoryIfNonexistent;
-(BOOL)_handleConnectionErrorWhileOpening:(int)arg1 ;
-(BOOL)_closeAndFlushTransactionState:(BOOL)arg1 ;
-(void)_finalizeAllStatements;
-(BOOL)_handleZombieSQLiteConnection:(sqlite3Ref)arg1 ;
-(void)_logCurrentError;
-(BOOL)popToRootTransactionAndCommit:(BOOL)arg1 ;
-(void)_resetUnfinalizedStatements;
-(id)_internalExecuteQuery:(id)arg1 withParameters:(id)arg2 limitProperty:(id)arg3 limitValue:(long long)arg4 ;
-(BOOL)_internalExecuteUpdate:(id)arg1 withParameters:(id)arg2 error:(id*)arg3 ;
-(BOOL)_internalBeginTransactionWithBehaviorType:(unsigned long long)arg1 ;
-(BOOL)_internalEndTransactionAndCommit:(BOOL)arg1 ;
-(void)_executeTransactionCommitBlocks:(BOOL)arg1 ;
-(BOOL)performTransactionWithBlock:(/*^block*/id)arg1 usingBehaviorType:(unsigned long long)arg2 ;
-(BOOL)registerFunctionName:(id)arg1 argumentCount:(int)arg2 functionPointer:(/*function pointer*/void*)arg3 userData:(void*)arg4 ;
-(id)_registeredModuleNamed:(id)arg1 ;
-(BOOL)_validatePreparedStatement:(id)arg1 error:(id*)arg2 ;
-(BOOL)logQueryPlans;
-(void)setLogQueryPlans:(BOOL)arg1 ;
-(void)_internalLogQuery:(id)arg1 withParameters:(id)arg2 limitProperty:(id)arg3 limitValue:(long long)arg4 ;
-(int)checkpointDatabase;
-(BOOL)_databaseFileExists;
-(int)profilingLevel;
-(void)setCurrentTransactionID:(NSUUID *)arg1 ;
-(BOOL)transactionMarkedForRollBack;
-(BOOL)registerModuleName:(id)arg1 moduleMethods:(sqlite3_module*)arg2 ;
-(id)_owningPool;
-(unsigned long long)_transactionLevel;
-(void)_setTransactionLevel:(unsigned long long)arg1 ;
-(id)_shortDescription;
-(void)_createDatabaseFileIfNonexistent;
-(void)_logCurrentErrorWhilePerformingStatementOperation:(id)arg1 statementSQL:(id)arg2 ;
-(void)_logCurrentErrorWhilePerformingStatementOperation:(id)arg1 statement:(id)arg2 ;
-(void)_handleDatabaseTraceStatement:(const char*)arg1 ;
-(void)_handleDatabaseProfileStatement:(const char*)arg1 executionTimeNS:(unsigned long long)arg2 ;
-(id<ML3DatabaseConnectionDelegate>)connectionDelegate;
-(unsigned long long)protectionLevel;
-(void)setProtectionLevel:(unsigned long long)arg1 ;
-(BOOL)automaticCheckpointingEnabled;
-(void)setAutomaticCheckpointingEnabled:(BOOL)arg1 ;
-(unsigned long long)checkpointStatementThreshold;
-(void)setCheckpointStatementThreshold:(unsigned long long)arg1 ;
-(id)_databaseFilePaths;
-(id)executeQuery:(id)arg1 ;
-(BOOL)isReadOnly;
-(NSString *)databasePath;
-(BOOL)performTransactionWithBlock:(/*^block*/id)arg1 ;
-(BOOL)isInTransaction;
-(BOOL)isOpen;
@end

