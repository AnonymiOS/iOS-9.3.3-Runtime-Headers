/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:42 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, MMCSEngineDelegate;
#import <CoreMediaStream/CoreMediaStream-Structs.h>
@class NSURL, NSString, NSDictionary, NSMutableDictionary, NSObject, NSMutableArray, NSThread, NSTimer;

@interface MMCSEngine : NSObject {

	NSURL* _workPathURL;
	NSString* _appIDHeader;
	NSString* _dataClass;
	NSDictionary* _options;
	mmcs_engineRef _engine;
	SCD_Struct_MM14* _engineClientContext;
	NSMutableDictionary* _itemIDToAssetMap;
	NSObject*<OS_dispatch_queue> _itemIDToAssetMapQueue;
	NSMutableArray* _requestorContexts;
	NSObject*<OS_dispatch_queue> _reqestorContextQueue;
	NSMutableDictionary* _autoItemIDDictionary;
	NSURL* _autoItemIDPersistenceURL;
	NSObject*<OS_dispatch_queue> _autoItemIDDictionaryQueue;
	BOOL _autoGenerateItemID;
	BOOL _isMetricsGatheringEnabled;
	BOOL _isDone;
	id<MMCSEngineDelegate> _delegate;
	NSThread* _workThread;
	NSTimer* _threadKeepAliveTimer;

}

@property (assign,nonatomic,__weak) id<MMCSEngineDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL hasOutstandingActivity; 
@property (assign,nonatomic) BOOL autoGenerateItemID;                             //@synthesize autoGenerateItemID=_autoGenerateItemID - In the implementation block
@property (assign,nonatomic) BOOL isMetricsGatheringEnabled;                      //@synthesize isMetricsGatheringEnabled=_isMetricsGatheringEnabled - In the implementation block
@property (nonatomic,retain) NSThread * workThread;                               //@synthesize workThread=_workThread - In the implementation block
@property (nonatomic,retain) NSTimer * threadKeepAliveTimer;                      //@synthesize threadKeepAliveTimer=_threadKeepAliveTimer - In the implementation block
@property (assign,nonatomic) BOOL isDone;                                         //@synthesize isDone=_isDone - In the implementation block
+(id)logStringForGetItemState:(int)arg1 ;
+(id)logStringForPutItemState:(int)arg1 ;
-(void)setDelegate:(id<MMCSEngineDelegate>)arg1 ;
-(id<MMCSEngineDelegate>)delegate;
-(BOOL)isActive;
-(void)cancelAllOperations;
-(void)performBlock:(/*^block*/id)arg1 ;
-(BOOL)hasOutstandingActivity;
-(void)_registerAsset:(id)arg1 ;
-(void)shutDownCompletionBlock:(/*^block*/id)arg1 ;
-(void)unregisterAssets:(id)arg1 ;
-(void)threadMain:(id)arg1 ;
-(id)initWithWorkPath:(id)arg1 appIDHeader:(id)arg2 dataClass:(id)arg3 options:(id)arg4 modes:(id)arg5 ;
-(void)performBlockOnWorkThread:(/*^block*/id)arg1 waitUntilDone:(BOOL)arg2 ;
-(void)_doNothingTimerHandler:(id)arg1 ;
-(BOOL)isDone;
-(void)setIsDone:(BOOL)arg1 ;
-(void)_logLevel:(int)arg1 message:(id)arg2 ;
-(void)performBlockOnWorkThread:(/*^block*/id)arg1 ;
-(id)_assetWithItemID:(unsigned long long)arg1 ;
-(BOOL)isMetricsGatheringEnabled;
-(void)_removeRequestorContext:(id)arg1 ;
-(NSTimer *)threadKeepAliveTimer;
-(void)setThreadKeepAliveTimer:(NSTimer *)arg1 ;
-(unsigned long long)_nextItemID;
-(void)_removeAssetForItemID:(unsigned long long)arg1 ;
-(void)_registerRequestorContext:(id)arg1 ;
-(void)_initItemIDPersistence;
-(id)initWithWorkPath:(id)arg1 appIDHeader:(id)arg2 dataClass:(id)arg3 options:(id)arg4 ;
-(void)setIsMetricsGatheringEnabled:(BOOL)arg1 ;
-(BOOL)_getFileDescriptorAndContentTypeFromItemID:(unsigned long long)arg1 outFD:(int*)arg2 outItemType:(id*)arg3 outError:(id*)arg4 ;
-(void)_getItemProgressItemID:(unsigned long long)arg1 state:(int)arg2 progress:(double)arg3 requestorContext:(id)arg4 error:(id)arg5 ;
-(void)_getItemDoneItemID:(unsigned long long)arg1 path:(id)arg2 requestorContext:(id)arg3 error:(id)arg4 ;
-(void)_putItemProgressItemID:(unsigned long long)arg1 state:(int)arg2 progress:(double)arg3 requestorContext:(id)arg4 error:(id)arg5 ;
-(void)_putItemDoneItemID:(unsigned long long)arg1 requestorContext:(id)arg2 putReceipt:(id)arg3 error:(id)arg4 ;
-(void)_requestCompletedRequestorContext:(id)arg1 ;
-(void)cancelOperationsWithContext:(id)arg1 ;
-(void)registerAssetForUpload:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)reregisterAssetForUpload:(id)arg1 ;
-(void)reregisterAssetForDownload:(id)arg1 ;
-(void)registerAssets:(id)arg1 forDownloadCompletionBlock:(/*^block*/id)arg2 ;
-(void)unregisterAsset:(id)arg1 ;
-(void)getAssets:(id)arg1 requestURL:(id)arg2 DSID:(id)arg3 options:(id)arg4 ;
-(void)putAssets:(id)arg1 requestURL:(id)arg2 DSID:(id)arg3 options:(id)arg4 ;
-(BOOL)autoGenerateItemID;
-(void)setAutoGenerateItemID:(BOOL)arg1 ;
-(NSThread *)workThread;
-(void)setWorkThread:(NSThread *)arg1 ;
@end

