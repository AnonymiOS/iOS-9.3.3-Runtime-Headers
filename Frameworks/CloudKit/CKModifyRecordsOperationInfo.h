/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:39 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSData, NSDictionary;

@interface CKModifyRecordsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {

	BOOL _atomic;
	BOOL _shouldOnlySaveAssetContent;
	BOOL _shouldReportRecordsInFlight;
	NSArray* _recordsToSave;
	NSArray* _recordIDsToDelete;
	NSData* _clientChangeTokenData;
	long long _savePolicy;
	NSDictionary* _recordIDsToDeleteToEtags;
	NSDictionary* _conflictLosersToResolveByRecordID;

}

@property (nonatomic,retain) NSArray * recordsToSave;                                       //@synthesize recordsToSave=_recordsToSave - In the implementation block
@property (nonatomic,retain) NSArray * recordIDsToDelete;                                   //@synthesize recordIDsToDelete=_recordIDsToDelete - In the implementation block
@property (nonatomic,retain) NSData * clientChangeTokenData;                                //@synthesize clientChangeTokenData=_clientChangeTokenData - In the implementation block
@property (assign,nonatomic) BOOL atomic;                                                   //@synthesize atomic=_atomic - In the implementation block
@property (assign,nonatomic) long long savePolicy;                                          //@synthesize savePolicy=_savePolicy - In the implementation block
@property (assign,nonatomic) BOOL shouldOnlySaveAssetContent;                               //@synthesize shouldOnlySaveAssetContent=_shouldOnlySaveAssetContent - In the implementation block
@property (nonatomic,copy) NSDictionary * recordIDsToDeleteToEtags;                         //@synthesize recordIDsToDeleteToEtags=_recordIDsToDeleteToEtags - In the implementation block
@property (nonatomic,retain) NSDictionary * conflictLosersToResolveByRecordID;              //@synthesize conflictLosersToResolveByRecordID=_conflictLosersToResolveByRecordID - In the implementation block
@property (assign,nonatomic) BOOL shouldReportRecordsInFlight;                              //@synthesize shouldReportRecordsInFlight=_shouldReportRecordsInFlight - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setRecordsToSave:(NSArray *)arg1 ;
-(void)setSavePolicy:(long long)arg1 ;
-(NSArray *)recordsToSave;
-(NSArray *)recordIDsToDelete;
-(NSDictionary *)recordIDsToDeleteToEtags;
-(NSDictionary *)conflictLosersToResolveByRecordID;
-(long long)savePolicy;
-(NSData *)clientChangeTokenData;
-(BOOL)shouldOnlySaveAssetContent;
-(BOOL)atomic;
-(BOOL)shouldReportRecordsInFlight;
-(void)setAtomic:(BOOL)arg1 ;
-(void)setRecordIDsToDeleteToEtags:(NSDictionary *)arg1 ;
-(void)setConflictLosersToResolveByRecordID:(NSDictionary *)arg1 ;
-(void)setShouldReportRecordsInFlight:(BOOL)arg1 ;
-(void)setRecordIDsToDelete:(NSArray *)arg1 ;
-(void)setClientChangeTokenData:(NSData *)arg1 ;
-(void)setShouldOnlySaveAssetContent:(BOOL)arg1 ;
@end

