/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:37 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class CKDProtocolTranslator, NSArray, NSDictionary, NSMutableDictionary, NSData, CKDRecordCache;

@interface CKDModifyRecordsOperation : CKDDatabaseOperation {

	CKDProtocolTranslator* _translator;
	BOOL _retryPCSFailures;
	BOOL _canSetPreviousProtectionEtag;
	BOOL _retriedRecords;
	BOOL _shouldOnlySaveAssetContent;
	BOOL _haveOutstandingMetadatas;
	BOOL _atomic;
	BOOL _shouldReportRecordsInFlight;
	int _numPCSRetries;
	/*^block*/id _saveProgressBlock;
	/*^block*/id _saveCompletionBlock;
	/*^block*/id _deleteCompletionBlock;
	/*^block*/id _uploadCompletionBlock;
	/*^block*/id _recordsInFlightBlock;
	NSArray* _recordsToSave;
	NSArray* _recordIDsToDelete;
	NSDictionary* _recordIDsToDeleteToEtags;
	NSDictionary* _conflictLosersToResolveByRecordID;
	NSDictionary* _metadatasByRecordID;
	NSMutableDictionary* _modifyMetadatasByZoneID;
	long long _savePolicy;
	NSData* _clientChangeTokenData;
	NSMutableDictionary* _recordsByServerID;
	CKDRecordCache* _cache;

}

@property (assign,nonatomic) BOOL retryPCSFailures;                                         //@synthesize retryPCSFailures=_retryPCSFailures - In the implementation block
@property (assign,nonatomic) BOOL canSetPreviousProtectionEtag;                             //@synthesize canSetPreviousProtectionEtag=_canSetPreviousProtectionEtag - In the implementation block
@property (nonatomic,copy) id saveProgressBlock;                                            //@synthesize saveProgressBlock=_saveProgressBlock - In the implementation block
@property (nonatomic,copy) id saveCompletionBlock;                                          //@synthesize saveCompletionBlock=_saveCompletionBlock - In the implementation block
@property (nonatomic,copy) id deleteCompletionBlock;                                        //@synthesize deleteCompletionBlock=_deleteCompletionBlock - In the implementation block
@property (nonatomic,copy) id uploadCompletionBlock;                                        //@synthesize uploadCompletionBlock=_uploadCompletionBlock - In the implementation block
@property (nonatomic,copy) id recordsInFlightBlock;                                         //@synthesize recordsInFlightBlock=_recordsInFlightBlock - In the implementation block
@property (nonatomic,retain) NSArray * recordsToSave;                                       //@synthesize recordsToSave=_recordsToSave - In the implementation block
@property (nonatomic,retain) NSArray * recordIDsToDelete;                                   //@synthesize recordIDsToDelete=_recordIDsToDelete - In the implementation block
@property (nonatomic,retain) NSDictionary * recordIDsToDeleteToEtags;                       //@synthesize recordIDsToDeleteToEtags=_recordIDsToDeleteToEtags - In the implementation block
@property (nonatomic,retain) NSDictionary * conflictLosersToResolveByRecordID;              //@synthesize conflictLosersToResolveByRecordID=_conflictLosersToResolveByRecordID - In the implementation block
@property (nonatomic,retain) NSDictionary * metadatasByRecordID;                            //@synthesize metadatasByRecordID=_metadatasByRecordID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * modifyMetadatasByZoneID;                 //@synthesize modifyMetadatasByZoneID=_modifyMetadatasByZoneID - In the implementation block
@property (assign,nonatomic) int numPCSRetries;                                             //@synthesize numPCSRetries=_numPCSRetries - In the implementation block
@property (assign,nonatomic) long long savePolicy;                                          //@synthesize savePolicy=_savePolicy - In the implementation block
@property (nonatomic,copy) NSData * clientChangeTokenData;                                  //@synthesize clientChangeTokenData=_clientChangeTokenData - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordsByServerID;                       //@synthesize recordsByServerID=_recordsByServerID - In the implementation block
@property (nonatomic,retain) CKDRecordCache * cache;                                        //@synthesize cache=_cache - In the implementation block
@property (assign,nonatomic) BOOL retriedRecords;                                           //@synthesize retriedRecords=_retriedRecords - In the implementation block
@property (assign,nonatomic) BOOL shouldOnlySaveAssetContent;                               //@synthesize shouldOnlySaveAssetContent=_shouldOnlySaveAssetContent - In the implementation block
@property (assign,nonatomic) BOOL haveOutstandingMetadatas;                                 //@synthesize haveOutstandingMetadatas=_haveOutstandingMetadatas - In the implementation block
@property (assign,nonatomic) BOOL atomic;                                                   //@synthesize atomic=_atomic - In the implementation block
@property (nonatomic,readonly) CKDProtocolTranslator * translator; 
@property (assign,nonatomic) BOOL shouldReportRecordsInFlight;                              //@synthesize shouldReportRecordsInFlight=_shouldReportRecordsInFlight - In the implementation block
-(CKDRecordCache *)cache;
-(void)main;
-(void)setCache:(CKDRecordCache *)arg1 ;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)setSaveCompletionBlock:(id)arg1 ;
-(void)setDeleteCompletionBlock:(id)arg1 ;
-(void)setSaveProgressBlock:(id)arg1 ;
-(void)setRecordsInFlightBlock:(id)arg1 ;
-(void)setUploadCompletionBlock:(id)arg1 ;
-(id)nameForState:(unsigned long long)arg1 ;
-(unsigned long long)activityStart;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(BOOL)makeStateTransition;
-(CKDProtocolTranslator *)translator;
-(void)setRecordsToSave:(NSArray *)arg1 ;
-(void)setSavePolicy:(long long)arg1 ;
-(void)setRetryPCSFailures:(BOOL)arg1 ;
-(void)setCanSetPreviousProtectionEtag:(BOOL)arg1 ;
-(id)saveCompletionBlock;
-(id)deleteCompletionBlock;
-(id)uploadCompletionBlock;
-(void)_performMetadataCallbacks;
-(void)_handlePCSData:(id)arg1 forMetadata:(id)arg2 withError:(id)arg3 ;
-(void)_fetchPCSDataForMetadata:(id)arg1 ;
-(BOOL)haveOutstandingMetadatas;
-(void)setHaveOutstandingMetadatas:(BOOL)arg1 ;
-(NSArray *)recordsToSave;
-(NSArray *)recordIDsToDelete;
-(NSDictionary *)recordIDsToDeleteToEtags;
-(NSDictionary *)conflictLosersToResolveByRecordID;
-(long long)savePolicy;
-(NSData *)clientChangeTokenData;
-(BOOL)shouldOnlySaveAssetContent;
-(BOOL)atomic;
-(BOOL)shouldReportRecordsInFlight;
-(BOOL)_topoSortRecords;
-(void)_fetchRecordPCSData;
-(void)_uploadAssets;
-(void)_markRecordMetadatasAsUploaded;
-(BOOL)_prepareRecordsForSave;
-(void)_verifyRecordEncryption;
-(void)_reportRecordsInFlight;
-(void)_continueRecordsModify;
-(int)numPCSRetries;
-(NSMutableDictionary *)modifyMetadatasByZoneID;
-(void)setNumPCSRetries:(int)arg1 ;
-(id)saveProgressBlock;
-(void)_performCallbacksForNonAtomicZoneMetadatas:(id)arg1 ;
-(void)_performCallbacksForAtomicZoneMetadatas:(id)arg1 ;
-(NSMutableDictionary *)recordsByServerID;
-(BOOL)retryPCSFailures;
-(void)_clearProtectionDataForRecord:(id)arg1 ;
-(void)setAtomic:(BOOL)arg1 ;
-(void)_handleRecordSaved:(id)arg1 metadata:(id)arg2 etag:(id)arg3 dateStatistics:(id)arg4 responseCode:(id)arg5 keysAssociatedWithETag:(id)arg6 recordForOplockFailure:(id)arg7 serverRecord:(id)arg8 ;
-(void)_handleRecordDeleted:(id)arg1 metadata:(id)arg2 responseCode:(id)arg3 ;
-(void)setRecordIDsToDeleteToEtags:(NSDictionary *)arg1 ;
-(void)setConflictLosersToResolveByRecordID:(NSDictionary *)arg1 ;
-(id)recordsInFlightBlock;
-(void)setShouldReportRecordsInFlight:(BOOL)arg1 ;
-(NSDictionary *)metadatasByRecordID;
-(id)_createModifyRequestWithRecordsToSave:(id)arg1 recordsToDelete:(id)arg2 recordsToDeleteToEtags:(id)arg3 metadatasByRecordID:(id)arg4 ;
-(void)setRecordIDsToDelete:(NSArray *)arg1 ;
-(void)setMetadatasByRecordID:(NSDictionary *)arg1 ;
-(void)_handleDecryptionFailure:(id)arg1 forRecordID:(id)arg2 ;
-(BOOL)_wrapEncryptedData:(id)arg1 withPCS:(OpaquePCSShareProtectionRef)arg2 forField:(id)arg3 ;
-(BOOL)_wrapEncryptedDataOnRecord:(id)arg1 ;
-(id)_wrapAssetKey:(id)arg1 forRecord:(id)arg2 withError:(id*)arg3 ;
-(BOOL)_prepareAsset:(id)arg1 recordKey:(id)arg2 record:(id)arg3 error:(id*)arg4 ;
-(id)_prepareAssetsForUpload;
-(BOOL)canSetPreviousProtectionEtag;
-(BOOL)_canSetPreviousProtectionEtag;
-(void)_addShareToPCSData:(id)arg1 forMetadata:(id)arg2 withError:(id)arg3 ;
-(void)_continueCreateAndSavePCSForMetadata:(id)arg1 zonePCS:(id)arg2 sharePCS:(id)arg3 ;
-(void)_createAndSavePCSForMetadata:(id)arg1 ;
-(void)_fetchExistingPCSForProvidedPCSData:(id)arg1 metadata:(id)arg2 ;
-(void)_unwrapRecordPCSForZone:(id)arg1 ;
-(void)_unwrapRecordPCSForShare:(id)arg1 ;
-(void)_loadPCSDataForMetadata:(id)arg1 ;
-(void)_clearProtectionDataIfNotEntitled;
-(void)setModifyMetadatasByZoneID:(NSMutableDictionary *)arg1 ;
-(void)setClientChangeTokenData:(NSData *)arg1 ;
-(void)setRecordsByServerID:(NSMutableDictionary *)arg1 ;
-(BOOL)retriedRecords;
-(void)setRetriedRecords:(BOOL)arg1 ;
-(void)setShouldOnlySaveAssetContent:(BOOL)arg1 ;
@end

