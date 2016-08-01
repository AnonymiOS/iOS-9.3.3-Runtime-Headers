/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:37 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSData, CKRecordZoneID, NSArray;

@interface CKDFetchRecordChangesURLRequest : CKDURLRequest {

	BOOL _shouldFetchAssetContent;
	unsigned long long _resultsLimit;
	long long _changeTypes;
	/*^block*/id _recordChangedBlock;
	/*^block*/id _recordDeletedBlock;
	/*^block*/id _shareChangedBlock;
	/*^block*/id _shareDeletedBlock;
	NSData* _resultServerChangeTokenData;
	NSData* _resultClientChangeTokenData;
	long long _status;
	CKRecordZoneID* _recordZoneID;
	NSData* _serverChangeTokenData;
	NSArray* _requestedFields;

}

@property (assign,nonatomic) unsigned long long resultsLimit;                   //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (assign,nonatomic) long long changeTypes;                             //@synthesize changeTypes=_changeTypes - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchAssetContent;                      //@synthesize shouldFetchAssetContent=_shouldFetchAssetContent - In the implementation block
@property (nonatomic,copy) id recordChangedBlock;                               //@synthesize recordChangedBlock=_recordChangedBlock - In the implementation block
@property (nonatomic,copy) id recordDeletedBlock;                               //@synthesize recordDeletedBlock=_recordDeletedBlock - In the implementation block
@property (nonatomic,copy) id shareChangedBlock;                                //@synthesize shareChangedBlock=_shareChangedBlock - In the implementation block
@property (nonatomic,copy) id shareDeletedBlock;                                //@synthesize shareDeletedBlock=_shareDeletedBlock - In the implementation block
@property (nonatomic,retain) NSData * resultServerChangeTokenData;              //@synthesize resultServerChangeTokenData=_resultServerChangeTokenData - In the implementation block
@property (nonatomic,retain) NSData * resultClientChangeTokenData;              //@synthesize resultClientChangeTokenData=_resultClientChangeTokenData - In the implementation block
@property (assign,nonatomic) long long status;                                  //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) CKRecordZoneID * recordZoneID;                     //@synthesize recordZoneID=_recordZoneID - In the implementation block
@property (nonatomic,retain) NSData * serverChangeTokenData;                    //@synthesize serverChangeTokenData=_serverChangeTokenData - In the implementation block
@property (nonatomic,retain) NSArray * requestedFields;                         //@synthesize requestedFields=_requestedFields - In the implementation block
-(long long)status;
-(void)setStatus:(long long)arg1 ;
-(int)operationType;
-(void)setRequestedFields:(NSArray *)arg1 ;
-(NSArray *)requestedFields;
-(void)setRecordChangedBlock:(id)arg1 ;
-(void)setShareChangedBlock:(id)arg1 ;
-(unsigned long long)resultsLimit;
-(BOOL)shouldFetchAssetContent;
-(void)setShouldFetchAssetContent:(BOOL)arg1 ;
-(id)requestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(id)requestOperationClasses;
-(id)zoneIDsToLock;
-(NSData *)serverChangeTokenData;
-(void)setResultsLimit:(unsigned long long)arg1 ;
-(NSData *)resultServerChangeTokenData;
-(void)setServerChangeTokenData:(NSData *)arg1 ;
-(CKRecordZoneID *)recordZoneID;
-(void)setRecordZoneID:(CKRecordZoneID *)arg1 ;
-(void)setResultServerChangeTokenData:(NSData *)arg1 ;
-(long long)changeTypes;
-(id)recordDeletedBlock;
-(id)recordChangedBlock;
-(id)shareDeletedBlock;
-(id)shareChangedBlock;
-(id)_handleRecordChanges:(id)arg1 ;
-(id)_handleShareChanges:(id)arg1 ;
-(void)setResultClientChangeTokenData:(NSData *)arg1 ;
-(id)initWithRecordZoneID:(id)arg1 serverChangeTokenData:(id)arg2 requestedFields:(id)arg3 ;
-(void)setChangeTypes:(long long)arg1 ;
-(void)setRecordDeletedBlock:(id)arg1 ;
-(void)setShareDeletedBlock:(id)arg1 ;
-(NSData *)resultClientChangeTokenData;
@end

