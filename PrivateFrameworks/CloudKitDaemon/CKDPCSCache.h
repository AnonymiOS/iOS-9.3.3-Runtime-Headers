/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:37 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface CKDPCSCache : NSObject {

	/*^block*/id _fetchPCSItemForCacheBlock;
	NSMutableDictionary* _itemIDToPCSCacheItem;
	NSObject*<OS_dispatch_queue> _itemPCSFetchQueue;

}

@property (nonatomic,copy) id fetchPCSItemForCacheBlock;                                  //@synthesize fetchPCSItemForCacheBlock=_fetchPCSItemForCacheBlock - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * itemIDToPCSCacheItem;                  //@synthesize itemIDToPCSCacheItem=_itemIDToPCSCacheItem - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> itemPCSFetchQueue;              //@synthesize itemPCSFetchQueue=_itemPCSFetchQueue - In the implementation block
-(id)init;
-(void)clearCache;
-(void)setFetchPCSItemForCacheBlock:(id)arg1 ;
-(void)pcsDataFetched:(id)arg1 forItemWithID:(id)arg2 error:(id)arg3 ;
-(void)fetchPCSForItemWithID:(id)arg1 operation:(id)arg2 options:(unsigned long long)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)setPCSData:(id)arg1 forItemsPassingTest:(/*^block*/id)arg2 ;
-(void)setPCSData:(id)arg1 forItemWithID:(id)arg2 ;
-(void)_initCache;
-(NSMutableDictionary *)itemIDToPCSCacheItem;
-(NSObject*<OS_dispatch_queue>)itemPCSFetchQueue;
-(void)_lockedSetPCSData:(id)arg1 forItemWithID:(id)arg2 ;
-(id)fetchPCSItemForCacheBlock;
-(void)setItemIDToPCSCacheItem:(NSMutableDictionary *)arg1 ;
-(void)setItemPCSFetchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end
