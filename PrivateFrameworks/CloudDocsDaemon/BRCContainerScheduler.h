/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:34 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/APSConnectionDelegate.h>
#import <libobjc.A.dylib/BRCLocalContainerDelegate.h>

@protocol OS_dispatch_source, OS_dispatch_queue, OS_dispatch_group;
@class BRCAccountSession, BRCDeadlineToken, NSObject, NSString, NSData, APSConnection, BRCContainerMetadataSyncPersistedState, NSDate, BRCSyncBudgetThrottle, BRCDeadlineScheduler;

@interface BRCContainerScheduler : NSObject <APSConnectionDelegate, BRCLocalContainerDelegate> {

	BRCAccountSession* _session;
	BRCDeadlineToken* _containerMetadataSyncToken;
	BRCDeadlineToken* _sharedDatabaseSyncToken;
	NSObject*<OS_dispatch_source> _pushSource;
	NSString* _environmentName;
	NSData* _pushToken;
	APSConnection* _pushConnection;
	NSObject*<OS_dispatch_queue> _pushQueue;
	BRCContainerMetadataSyncPersistedState* _containerMetadataPersistedState;
	unsigned _containerMetadataSyncState;
	BRCOperation* _containerMetadataSyncOperation;
	unsigned _sharedDBSyncState;
	BRCOperation* _sharedDatabaseSyncOperation;
	BRCOperation* _periodicSyncOperation;
	NSDate* _lastPeriodicSyncDate;
	BOOL _isInSyncBubble;
	NSObject*<OS_dispatch_group> _initialSyncDownGroup;
	NSObject*<OS_dispatch_group> _syncGroup;
	BRCSyncBudgetThrottle* _syncUpBudget;
	BRCDeadlineScheduler* _syncScheduler;

}

@property (nonatomic,readonly) BRCAccountSession * session;                                    //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_group> initialSyncDownGroup;              //@synthesize initialSyncDownGroup=_initialSyncDownGroup - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_group> syncGroup;                         //@synthesize syncGroup=_syncGroup - In the implementation block
@property (nonatomic,readonly) BRCSyncBudgetThrottle * syncUpBudget;                           //@synthesize syncUpBudget=_syncUpBudget - In the implementation block
@property (nonatomic,readonly) BRCDeadlineScheduler * syncScheduler;                           //@synthesize syncScheduler=_syncScheduler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)close;
-(BRCAccountSession *)session;
-(void)dumpToContext:(id)arg1 ;
-(id)initWithAccountSession:(id)arg1 ;
-(void)willInitialSyncDownForContainer:(id)arg1 ;
-(void)_syncScheduleForContainersMetadata;
-(void)_syncScheduleForSharedDatabase;
-(void)_updatePushTopicsRegistration;
-(void)schedulePeriodicSyncIfNecessary;
-(void)_unscheduleContainer:(id)arg1 ;
-(void)_scheduleUpdatePushTopicsRegistration;
-(void)scheduleSyncDownForSharedDatabaseImmediately:(BOOL)arg1 ;
-(void)scheduleSyncDownForContainerMetadata;
-(void)didChangeSyncStatusForContainerMetadataForContainer:(id)arg1 ;
-(void)didInitialSyncDownForContainer:(id)arg1 ;
-(void)containerDidBecomeForeground:(id)arg1 ;
-(void)containerDidBecomeBackground:(id)arg1 ;
-(void)closeContainers:(id)arg1 ;
-(void)setupWithRoot:(id)arg1 ;
-(void)syncSuspend;
-(void)syncResume;
-(void)refreshPushRegistrationAfterAppsListChanged;
-(NSObject*<OS_dispatch_group>)initialSyncDownGroup;
-(NSObject*<OS_dispatch_group>)syncGroup;
-(BRCSyncBudgetThrottle *)syncUpBudget;
-(BRCDeadlineScheduler *)syncScheduler;
-(void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4 ;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2 ;
@end
