/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:36 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKRecord, CKRecordID, NSString, NSError, CKDProgressTracker;

@interface CKDModifyRecordMetadata : NSObject {

	BOOL _isDelete;
	int _saveAttempts;
	CKRecord* _record;
	CKRecordID* _recordID;
	CKRecord* _serverRecord;
	NSString* _etag;
	unsigned long long _uploadState;
	NSError* _error;
	CKDProgressTracker* _progressTracker;
	long long _batchRank;

}

@property (nonatomic,retain) CKRecord * record;                                 //@synthesize record=_record - In the implementation block
@property (nonatomic,retain) CKRecordID * recordID;                             //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,retain) CKRecord * serverRecord;                           //@synthesize serverRecord=_serverRecord - In the implementation block
@property (assign,nonatomic) BOOL isDelete;                                     //@synthesize isDelete=_isDelete - In the implementation block
@property (nonatomic,retain) NSString * etag;                                   //@synthesize etag=_etag - In the implementation block
@property (assign,nonatomic) unsigned long long uploadState;                    //@synthesize uploadState=_uploadState - In the implementation block
@property (nonatomic,retain) NSError * error;                                   //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) CKDProgressTracker * progressTracker;              //@synthesize progressTracker=_progressTracker - In the implementation block
@property (assign,nonatomic) long long batchRank;                               //@synthesize batchRank=_batchRank - In the implementation block
@property (assign,nonatomic) int saveAttempts;                                  //@synthesize saveAttempts=_saveAttempts - In the implementation block
+(id)_stringForUploadState:(unsigned long long)arg1 ;
+(id)modifyMetadataWithRecord:(id)arg1 ;
+(id)modifyMetadataForDeleteWithRecordID:(id)arg1 ;
-(id)description;
-(NSString *)etag;
-(void)setEtag:(NSString *)arg1 ;
-(void)setRecordID:(CKRecordID *)arg1 ;
-(CKRecordID *)recordID;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(CKRecord *)record;
-(void)setRecord:(CKRecord *)arg1 ;
-(CKDProgressTracker *)progressTracker;
-(void)setProgressTracker:(CKDProgressTracker *)arg1 ;
-(BOOL)isDelete;
-(void)setIsDelete:(BOOL)arg1 ;
-(void)setUploadState:(unsigned long long)arg1 ;
-(unsigned long long)uploadState;
-(CKRecord *)serverRecord;
-(void)setServerRecord:(CKRecord *)arg1 ;
-(long long)batchRank;
-(void)setBatchRank:(long long)arg1 ;
-(int)saveAttempts;
-(void)setSaveAttempts:(int)arg1 ;
@end

