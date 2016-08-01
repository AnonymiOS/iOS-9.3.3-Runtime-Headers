/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:14 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSArray, SUClientInterface, NSObject, SSDownloadManager, NSMutableDictionary;

@interface SUDownloadManager : NSObject {

	NSArray* _cachedDownloads;
	SUClientInterface* _clientInterface;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	SSDownloadManager* _downloadManager;
	NSMutableDictionary* _downloadsByID;

}

@property (nonatomic,readonly) SSDownloadManager * downloadManager; 
@property (nonatomic,readonly) NSArray * downloads; 
-(void)dealloc;
-(SSDownloadManager *)downloadManager;
-(void)reloadDownloadManager;
-(id)initWithDownloadManager:(id)arg1 clientInterface:(id)arg2 ;
-(void)preflightWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_removeObject:(id)arg1 fromArray:(id*)arg2 ;
-(void)_finishPreflightWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithDownloadManager:(id)arg1 ;
-(BOOL)deleteDownload:(id)arg1 ;
-(id)downloadForDownloadIdentifier:(long long)arg1 ;
-(void)_reloadDownloadManager;
-(NSArray *)downloads;
@end

