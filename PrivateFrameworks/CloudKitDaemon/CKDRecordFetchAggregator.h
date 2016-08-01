/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:36 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@protocol OS_dispatch_source, OS_dispatch_queue, OS_dispatch_group;
@class CKDRecordCache, NSSet, NSObject, NSMutableDictionary;

@interface CKDRecordFetchAggregator : CKDDatabaseOperation {

	CKDRecordCache* _recordCache;
	BOOL _fetchAssetContents;
	BOOL _preserveOrdering;
	BOOL _started;
	BOOL _markedToFinishByParent;
	/*^block*/id _fetchAggregatorCompletionBlock;
	NSSet* _desiredKeys;
	NSObject*<OS_dispatch_source> _recordReadySource;
	NSObject*<OS_dispatch_queue> _fetchQueue;
	NSObject*<OS_dispatch_source> _fetchSource;
	NSObject*<OS_dispatch_group> _fetchGroup;
	NSObject*<OS_dispatch_source> _timerSource;
	NSMutableDictionary* _fetchInfosByOrder;
	unsigned long long _curFetchOrder;
	unsigned long long _highestReturnedOrder;

}

@property (nonatomic,copy) id fetchAggregatorCompletionBlock;                              //@synthesize fetchAggregatorCompletionBlock=_fetchAggregatorCompletionBlock - In the implementation block
@property (assign,nonatomic) BOOL fetchAssetContents;                                      //@synthesize fetchAssetContents=_fetchAssetContents - In the implementation block
@property (assign,nonatomic) BOOL preserveOrdering;                                        //@synthesize preserveOrdering=_preserveOrdering - In the implementation block
@property (nonatomic,retain) NSSet * desiredKeys;                                          //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> recordReadySource;              //@synthesize recordReadySource=_recordReadySource - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> fetchQueue;                      //@synthesize fetchQueue=_fetchQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> fetchSource;                    //@synthesize fetchSource=_fetchSource - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> fetchGroup;                      //@synthesize fetchGroup=_fetchGroup - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timerSource;                    //@synthesize timerSource=_timerSource - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * fetchInfosByOrder;                      //@synthesize fetchInfosByOrder=_fetchInfosByOrder - In the implementation block
@property (assign) unsigned long long curFetchOrder;                                       //@synthesize curFetchOrder=_curFetchOrder - In the implementation block
@property (assign) unsigned long long highestReturnedOrder;                                //@synthesize highestReturnedOrder=_highestReturnedOrder - In the implementation block
@property (nonatomic,readonly) CKDRecordCache * recordCache; 
@property (assign) BOOL started;                                                           //@synthesize started=_started - In the implementation block
@property (getter=isMarkedToFinishByParent) BOOL markedToFinishByParent;                   //@synthesize markedToFinishByParent=_markedToFinishByParent - In the implementation block
-(void)dealloc;
-(id)description;
-(void)main;
-(void)setStarted:(BOOL)arg1 ;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(id)CKPropertiesDescription;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(NSSet *)desiredKeys;
-(void)fetchRecordFromResponse:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setFetchAssetContents:(BOOL)arg1 ;
-(void)setPreserveOrdering:(BOOL)arg1 ;
-(void)setDesiredKeys:(NSSet *)arg1 ;
-(void)setFetchAggregatorCompletionBlock:(id)arg1 ;
-(void)finishIfAppropriate;
-(NSObject*<OS_dispatch_source>)recordReadySource;
-(void)setRecordReadySource:(NSObject*<OS_dispatch_source>)arg1 ;
-(BOOL)fetchAssetContents;
-(BOOL)preserveOrdering;
-(NSObject*<OS_dispatch_queue>)fetchQueue;
-(void)_recordFetchesAvailable;
-(void)_flushFetchedRecordsToConsumerLocked;
-(NSMutableDictionary *)fetchInfosByOrder;
-(unsigned long long)highestReturnedOrder;
-(void)setHighestReturnedOrder:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_group>)fetchGroup;
-(void)_performCallbackForFetchInfoLocked:(id)arg1 ;
-(void)_flushFetchedRecordsToConsumerOrderedLocked;
-(void)_flushFetchedRecordsToConsumerNoOrderingLocked;
-(void)_lockedSendFetchRequest;
-(void)_lockedRescheduleQueuedFetchesTimer;
-(NSObject*<OS_dispatch_source>)fetchSource;
-(BOOL)isMarkedToFinishByParent;
-(void)_finishRecordFetchAggregator;
-(unsigned long long)curFetchOrder;
-(void)setCurFetchOrder:(unsigned long long)arg1 ;
-(CKDRecordCache *)recordCache;
-(void)_addRecordFetchInfo:(id)arg1 ;
-(BOOL)started;
-(void)setMarkedToFinishByParent:(BOOL)arg1 ;
-(id)fetchAggregatorCompletionBlock;
-(void)setFetchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setFetchSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setFetchGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)setFetchInfosByOrder:(NSMutableDictionary *)arg1 ;
-(NSObject*<OS_dispatch_source>)timerSource;
-(void)setTimerSource:(NSObject*<OS_dispatch_source>)arg1 ;
@end

