/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:30 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class _ATXAppInfoManager, _ATXAppLaunchHistogramManager, NSMutableDictionary, NSObject, _ATXDuetHelper, CDContextStore;

@interface _ATXAppLaunchMonitor : NSObject {

	_ATXAppInfoManager* _appInfoManager;
	_ATXAppLaunchHistogramManager* _appLaunchHistogramManager;
	NSMutableDictionary* _launchedBundleIds;
	NSObject*<OS_dispatch_queue> _appLaunchHistoryQueue;
	_ATXDuetHelper* _duetHelper;
	CDContextStore* _ctxStore;
	NSObject*<OS_dispatch_queue> _registrationQueue;

}
-(void)dealloc;
-(id)init;
-(void)stop;
-(void)start;
-(id)initWithAppInfoManager:(id)arg1 andAppLaunchHistogramManager:(id)arg2 ;
-(void)updateLaunchHistoryFromDuet:(double)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)updateLaunchHistoryFromDuet;
-(void)registerForAppChange;
-(void)handleAppLaunchNotification:(id)arg1 reason:(id)arg2 ;
-(id)appInfoManager;
-(id)appLaunchHistogramManager;
-(void)swapDuetHelper:(id)arg1 ;
-(id)initWithInMemoryStore;
@end
