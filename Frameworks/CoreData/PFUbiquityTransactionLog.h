/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:27 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, PFUbiquityLocation, NSString, PFUbiquityKnowledgeVector, PFUbiquitySaveSnapshot, NSRecursiveLock, NSNumber;

@interface PFUbiquityTransactionLog : NSObject {

	NSMutableDictionary* _contents;
	int _transactionLogType;
	BOOL _useTemporaryLogLocation;
	PFUbiquityLocation* _transactionLogLocation;
	PFUbiquityLocation* _temporaryTransactionLogLocation;
	PFUbiquityLocation* _stagingTransactionLogLocation;
	NSString* _fileProtectionOption;
	BOOL _inTemporaryLocation;
	BOOL _inStagingLocation;
	BOOL _inPermanentLocation;
	PFUbiquityKnowledgeVector* _knowledgeVector;
	PFUbiquitySaveSnapshot* _saveSnapshot;
	NSString* _localPeerID;
	BOOL _loadUsingRetry;
	BOOL _loadedComparisonMetadata;
	BOOL _loadedImportMetadata;
	BOOL _loadedInsertedObjectData;
	BOOL _loadedUpdatedObjectData;
	BOOL _loadedDeletedObjectData;
	BOOL _loadedContents;
	NSRecursiveLock* _contentsLock;

}

@property (assign,nonatomic) BOOL useTemporaryLogLocation;                                        //@synthesize useTemporaryLogLocation=_useTemporaryLogLocation - In the implementation block
@property (nonatomic,readonly) BOOL inTemporaryLocation;                                          //@synthesize inTemporaryLocation=_inTemporaryLocation - In the implementation block
@property (nonatomic,readonly) BOOL inStagingLocation;                                            //@synthesize inStagingLocation=_inStagingLocation - In the implementation block
@property (nonatomic,readonly) BOOL inPermanentLocation;                                          //@synthesize inPermanentLocation=_inPermanentLocation - In the implementation block
@property (nonatomic,readonly) NSString * storeName; 
@property (nonatomic,readonly) NSString * exportingPeerID; 
@property (nonatomic,readonly) NSString * modelVersionHash; 
@property (nonatomic,readonly) NSString * fileProtectionOption;                                   //@synthesize fileProtectionOption=_fileProtectionOption - In the implementation block
@property (nonatomic,readonly) NSNumber * transactionNumber; 
@property (nonatomic,readonly) NSString * transactionLogFilename; 
@property (nonatomic,readonly) int transactionLogType;                                            //@synthesize transactionLogType=_transactionLogType - In the implementation block
@property (nonatomic,readonly) PFUbiquityLocation * transactionLogLocation;                       //@synthesize transactionLogLocation=_transactionLogLocation - In the implementation block
@property (nonatomic,readonly) PFUbiquityLocation * temporaryTransactionLogLocation;              //@synthesize temporaryTransactionLogLocation=_temporaryTransactionLogLocation - In the implementation block
@property (nonatomic,readonly) PFUbiquityLocation * stagingTransactionLogLocation;                //@synthesize stagingTransactionLogLocation=_stagingTransactionLogLocation - In the implementation block
@property (nonatomic,readonly) PFUbiquitySaveSnapshot * saveSnapshot;                             //@synthesize saveSnapshot=_saveSnapshot - In the implementation block
@property (nonatomic,readonly) PFUbiquityLocation * currentLocation; 
@property (nonatomic,readonly) PFUbiquityKnowledgeVector * knowledgeVector;                       //@synthesize knowledgeVector=_knowledgeVector - In the implementation block
@property (nonatomic,readonly) NSString * localPeerID;                                            //@synthesize localPeerID=_localPeerID - In the implementation block
@property (assign,nonatomic) BOOL loadUsingRetry;                                                 //@synthesize loadUsingRetry=_loadUsingRetry - In the implementation block
@property (nonatomic,readonly) BOOL loadedComparisonMetadata;                                     //@synthesize loadedComparisonMetadata=_loadedComparisonMetadata - In the implementation block
@property (nonatomic,readonly) BOOL loadedImportMetadata;                                         //@synthesize loadedImportMetadata=_loadedImportMetadata - In the implementation block
@property (nonatomic,readonly) BOOL loadedInsertedObjectData;                                     //@synthesize loadedInsertedObjectData=_loadedInsertedObjectData - In the implementation block
@property (nonatomic,readonly) BOOL loadedUpdatedObjectData;                                      //@synthesize loadedUpdatedObjectData=_loadedUpdatedObjectData - In the implementation block
@property (nonatomic,readonly) BOOL loadedDeletedObjectData;                                      //@synthesize loadedDeletedObjectData=_loadedDeletedObjectData - In the implementation block
+(BOOL)pruneTemporaryLogDirectoryForPeerRootLocation:(id)arg1 error:(id*)arg2 ;
+(int)transactionLogTypeFromLocation:(id)arg1 ;
+(id)createTransactionLogFilenameForLogType:(int)arg1 ;
+(id)createDataFromExtendedAttrsForLog:(id)arg1 error:(id*)arg2 ;
+(void)updateModificationTimesForLocation:(id)arg1 ;
+(void)truncateLogFilesForPeerID:(id)arg1 storeName:(id)arg2 modelVersionHash:(id)arg3 beforeKnowledgeVector:(id)arg4 withLocalPeerID:(id)arg5 andUbiquityRootLocation:(id)arg6 ;
+(id)transactionLogFilenameUUID;
+(void)truncateLogFilesBeforeBaselineMetadata:(id)arg1 withLocalPeerID:(id)arg2 andUbiquityRootLocation:(id)arg3 ;
+(id)generateTransactionLogFilename;
-(NSString *)modelVersionHash;
-(NSString *)localPeerID;
-(NSString *)storeName;
-(PFUbiquityLocation *)transactionLogLocation;
-(BOOL)loadInsertedObjectsDataWithError:(id*)arg1 ;
-(BOOL)loadUpdatedObjectsDataWithError:(id*)arg1 ;
-(BOOL)loadDeletedObjectsDataWithError:(id*)arg1 ;
-(BOOL)releaseContents:(id*)arg1 ;
-(BOOL)loadComparisonMetadataWithError:(id*)arg1 ;
-(NSString *)exportingPeerID;
-(PFUbiquitySaveSnapshot *)saveSnapshot;
-(BOOL)loadImportMetadataWithError:(id*)arg1 ;
-(PFUbiquityKnowledgeVector *)knowledgeVector;
-(NSNumber *)transactionNumber;
-(NSString *)transactionLogFilename;
-(BOOL)moveFileToPermanentLocationWithError:(id*)arg1 ;
-(id)initWithStoreName:(id)arg1 andSaveSnapshot:(id)arg2 andRootLocation:(id)arg3 ;
-(void)setUseTemporaryLogLocation:(BOOL)arg1 ;
-(BOOL)writeToDiskWithError:(id*)arg1 andUpdateFilenameInTransactionEntries:(id)arg2 ;
-(int)transactionLogType;
-(id)initWithTransactionLogLocation:(id)arg1 andLocalPeerID:(id)arg2 ;
-(PFUbiquityLocation *)temporaryTransactionLogLocation;
-(PFUbiquityLocation *)stagingTransactionLogLocation;
-(BOOL)inPermanentLocation;
-(BOOL)inTemporaryLocation;
-(BOOL)inStagingLocation;
-(void)releaseInsertedObjects;
-(void)releaseUpdatedObjects;
-(void)releaseDeletedObjects;
-(id)loadPlistAtLocation:(id)arg1 withError:(id*)arg2 ;
-(BOOL)loadContents:(id*)arg1 ;
-(BOOL)useTemporaryLogLocation;
-(void)populateContents;
-(BOOL)writeContentsOfZipArchive:(id)arg1 intoExtendedAttributesForFile:(id)arg2 error:(id*)arg3 ;
-(void)cleanupExternalDataReferences;
-(BOOL)deleteLogFileWithError:(id*)arg1 ;
-(id)initWithTransactionLogURL:(id)arg1 ubiquityRootLocation:(id)arg2 andLocalPeerID:(id)arg3 ;
-(BOOL)rewriteToDiskWithError:(id*)arg1 ;
-(id)generatePeerCodeKnowledgeVectorWithManagedObjectContext:(id)arg1 ;
-(NSString *)fileProtectionOption;
-(BOOL)loadUsingRetry;
-(void)setLoadUsingRetry:(BOOL)arg1 ;
-(BOOL)loadedComparisonMetadata;
-(BOOL)loadedImportMetadata;
-(BOOL)loadedInsertedObjectData;
-(BOOL)loadedUpdatedObjectData;
-(BOOL)loadedDeletedObjectData;
-(void)dealloc;
-(id)init;
-(id)description;
-(PFUbiquityLocation *)currentLocation;
@end

