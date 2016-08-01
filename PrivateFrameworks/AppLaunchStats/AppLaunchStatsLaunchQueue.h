/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:30 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AppLaunchStats.framework/AppLaunchStats
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppLaunchStats/AppLaunchStats-Structs.h>
#import <libobjc.A.dylib/DuetLoggerProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, NSDate, NSMutableArray;

@interface AppLaunchStatsLaunchQueue : NSObject <DuetLoggerProtocol> {

	BOOL pushHigh;
	BOOL inBatterySaverMode;
	NSObject*<OS_dispatch_queue> launchQueue;
	long long allowedAppLaunchCap;
	long long wifiChargerDuration;
	unsigned long long scheduleLaunchQueue;
	/*^block*/id highPriorityBlock;
	/*^block*/id lowPriorityBlock;
	NSDate* lastRetryTrigTime;
	NSMutableArray* whatToLaunchQueue;
	NSMutableArray* trendingQueue;
	NSMutableArray* highPriorityPushQueue;
	NSMutableArray* highPriorityRetryList;
	NSMutableArray* lowPriorityPushQueue;
	NSMutableArray* lowPriorityRetryList;
	NSMutableArray* wifiChargerQueue;
	NSMutableArray* reservationStationList;
	/*^block*/id wifiChargerCheck;
	NSDate* ageWifiChargerQueue;

}
-(id)init;
-(void)logAll:(asl_object_sRef)arg1 withMsg:(asl_object_sRef)arg2 withLevel:(int)arg3 ;
-(void)logLight:(asl_object_sRef)arg1 withMsg:(asl_object_sRef)arg2 withLevel:(int)arg3 ;
-(void)addToLaunchQueue:(id)arg1 withQueueType:(int)arg2 withItem:(/*^block*/id)arg3 ;
-(BOOL)acquireReservationStation:(id)arg1 ;
-(int)reservationStationsFree;
-(int)launchObject:(id)arg1 ;
-(BOOL)wifiChargeQueueAllowedToProceed;
-(void)addToHighPriorityQueue:(id)arg1 withLaunchBlock:(/*^block*/id)arg2 ;
-(void)addToLowPriorityQueue:(id)arg1 withLaunchBlock:(/*^block*/id)arg2 ;
-(BOOL)confirmReservationStation:(id)arg1 seqNum:(long long)arg2 type:(int)arg3 release:(/*^block*/id)arg4 ;
-(void)doDispatchQueuedLaunches;
-(void)doDispatchQueuedLPLaunches;
-(void)releaseReservationStation:(id)arg1 seqNum:(long long)arg2 ;
-(BOOL)refillWifiChargerQueue;
-(void)enableWifiChargerQueue:(/*^block*/id)arg1 ;
-(void)updateWifiChargerDate;
-(void)setBatterySaverMode:(BOOL)arg1 ;
-(void)setLaunchCapacity:(unsigned long long)arg1 ;
@end

