/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:43 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class HDDaemon, _HDWorkoutData, NSObject, NSMutableSet, NSHashTable;

@interface HDWorkoutManager : NSObject {

	HDDaemon* _daemon;
	_HDWorkoutData* _currentWorkout;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _currentObservedTypes;
	NSHashTable* _observerTable;
	NSObject*<OS_dispatch_source> _suppressActivityKeepaliveTimer;

}
-(void)stopWorkoutSessionWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithDaemon:(id)arg1 ;
-(BOOL)hasAnyActiveWorkouts;
-(void)startWorkoutSession:(id)arg1 clientIdentifier:(id)arg2 server:(id)arg3 isFirstParty:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)_queue_stopCurrentSession;
-(void)_queue_setViewOnWake:(BOOL)arg1 forWorkout:(id)arg2 ;
-(void)_queue_setDataCollectionForWorkoutSession:(id)arg1 ;
-(void)_queue_setSuppressActivityAlerts:(BOOL)arg1 forWorkout:(id)arg2 ;
-(void)_queue_startDataCollection;
-(void)_queue_setCurrentSessionState:(long long)arg1 ;
-(void)_queue_stopDataCollection;
-(void)_queue_resetDataCollectionForWorkoutSession:(id)arg1 ;
-(void)_queue_didUpdateCurrentWorkoutSession;
-(void)_queue_notifySession:(id)arg1 stateDidChange:(long long)arg2 ;
-(void)_queue_setDataCollectionForSessionUUID:(id)arg1 activityType:(unsigned long long)arg2 isIndoor:(BOOL)arg3 ;
-(void)_queue_doSuppressActivityAlertsForWorkout:(id)arg1 ;
-(void)clientInvalidated:(id)arg1 ;
-(unsigned long long)currentWorkoutActivityType;
-(id)currentWorkoutClientIdentifier;
-(void)addWorkoutSessionObserver:(id)arg1 ;
-(void)removeWorkoutSessionObserver:(id)arg1 ;
@end

