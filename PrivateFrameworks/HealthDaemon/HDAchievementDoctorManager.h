/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:42 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDDiagnosticObject.h>
#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>
#import <libobjc.A.dylib/HDDatabaseProtectedDataObserver.h>

@protocol HDHealthDaemon, OS_dispatch_queue;
@class HDAchievementDoctor, NSObject, NSNumber, NSString;

@interface HDAchievementDoctorManager : NSObject <HDDiagnosticObject, HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver> {

	id<HDHealthDaemon> _healthDaemon;
	HDAchievementDoctor* _achievementDoctor;
	NSObject*<OS_dispatch_queue> _fixupWaitQueue;
	NSNumber* _waitingToRun;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_achievementTypesModifiedPerFixupVersion;
-(void)dealloc;
-(id)diagnosticDescription;
-(void)daemonReady:(id)arg1 ;
-(void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2 ;
-(id)initWithHealthDaemon:(id)arg1 ;
-(void)_registerActivity;
-(void)_performAchievementsFixupIfWaiting;
-(BOOL)_multipleWatchesArePaired;
-(long long)_activityInterval;
-(void)_performAchievementsFixupActivity:(id)arg1 ;
-(void)_setNeedsFixupWithCompletion:(/*^block*/id)arg1 ;
-(void)_queue_setWaitingToRun:(BOOL)arg1 ;
-(BOOL)_queue_isWaitingToRun;
-(void)_setLastSuccessfulFixupDate:(id)arg1 ;
-(void)_setLastSuccessfulFixupVersion:(long long)arg1 ;
-(void)_queue_performAchievementsFixupWithCompletion:(/*^block*/id)arg1 ;
-(void)_generateCrashReportForMissingAchievements:(id)arg1 ;
-(id)_lastSuccessfulFixupDate;
-(long long)_lastSuccessfulFixupVersion;
@end

