/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:05 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, BLTObjectCacheDelegate;
@class NSMutableSet, NSMutableDictionary, NSObject;

@interface BLTObjectCache : NSObject {

	NSMutableSet* _keys;
	NSMutableDictionary* _cachedObjects;
	NSObject*<OS_dispatch_queue> _queue;
	double _maxItemAge;
	long long _maxItemCount;
	id<BLTObjectCacheDelegate> _delegate;

}
-(id)init;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 withMaxItemCount:(long long)arg2 ;
-(id)initWithDelegate:(id)arg1 withMaxItemCount:(long long)arg2 andMaxItemAge:(double)arg3 ;
-(void)_updateCachedObjectIfNecessary:(id)arg1 withKey:(id)arg2 ;
-(void)_addKeyToSet:(id)arg1 ;
-(BOOL)_isObjectWithKeyCached:(id)arg1 ;
-(BOOL)_doesObjectWithKeyExist:(id)arg1 ;
-(id)_cachedObjectForKey:(id)arg1 ;
-(void)_addObjectToCache:(id)arg1 withKey:(id)arg2 ;
-(void)_pruneCache;
-(void)_deleteObjectFromCacheWithKey:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 withMaxItemAge:(double)arg2 ;
-(void)storeObject:(id)arg1 withKey:(id)arg2 ;
@end

