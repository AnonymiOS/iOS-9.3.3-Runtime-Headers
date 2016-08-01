/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:30 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
@class _ATXDataStore, NSMutableDictionary, NSDate, _ATXAppInstallMonitor;

@interface _ATXAppInfoManager : NSObject {

	_ATXDataStore* _dataStore;
	NSMutableDictionary* _appInfo;
	NSDate* _lastLaunch;
	long long _spotlightLaunchCount;
	long long _launchCount;
	NSMutableDictionary* _infoMap;
	_ATXAppInstallMonitor* _installMonitor;
	opaque_pthread_rwlock_t _rwlock;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(id)initWithDataStore:(id)arg1 ;
-(id)allAppsWithInstallDate;
-(void)addInstallForBundleId:(id)arg1 withDate:(id)arg2 ;
-(void)removeAppInfoForBundleId:(id)arg1 ;
-(void)registerForRestoreNotificationsFrom:(id)arg1 ;
-(void)unregisterFromRestoreNotificationsFrom:(id)arg1 ;
-(void)receivedDataStoreResetNotification:(id)arg1 ;
-(id)lastAppLaunch;
-(void)addLaunchForBundleId:(id)arg1 withDate:(id)arg2 ;
-(void)addSpotlightLaunchForBundleId:(id)arg1 withDate:(id)arg2 ;
-(id)appInfoForBundleId:(id)arg1 ;
-(long long)launchedAppCount;
-(void)setupInMemoryCache;
-(id)_getInfoOrCreateForBundleId:(id)arg1 ;
-(BOOL)_hasBeenLaunchedForBundleId:(id)arg1 ;
-(void)_addLaunchInfoForBundle:(id)arg1 withDate:(id)arg2 updateLaunchBlock:(/*^block*/id)arg3 ;
-(void)train;
-(id)installMonitor;
-(id)initWithInMemoryStore;
@end

