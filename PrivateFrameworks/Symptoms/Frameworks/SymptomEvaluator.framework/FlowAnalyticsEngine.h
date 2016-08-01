/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:13:00 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <SymptomEvaluator/AnalyticsEngineCore.h>

@protocol OS_dispatch_source;
@class UsageAnalytics, ProcessAnalytics, AppAnalytics, ObjectAnalytics, NSMutableDictionary, ImpoExpoService, NSMutableSet, NSDate, BKSApplicationStateMonitor, FBSDisplayLayoutMonitor, NSObject;

@interface FlowAnalyticsEngine : AnalyticsEngineCore {

	UsageAnalytics* uspace;
	ProcessAnalytics* pspace;
	AppAnalytics* aspace;
	ObjectAnalytics* calspace;
	NSMutableDictionary* processCache;
	NSMutableDictionary* appState;
	NSMutableDictionary* appCompactState;
	NSMutableDictionary* appUUIDState;
	ImpoExpoService* ieService;
	BOOL foregroundActivity;
	BOOL trackingRequiredForBaseband;
	NSMutableDictionary* uuidProcessNameMap;
	NSMutableDictionary* pluginToBundleCache;
	NSMutableDictionary* uuidToBundleIDMap;
	NSMutableSet* pendingUnregisteredAppBundleIDs;
	NSMutableSet* pendingRegisteredAppBundleIDs;
	NStatManagerRef nstatManager;
	unsigned nstatManagerFlags;
	NStatManagerRef nstatInterfaceManager;
	NStatSourceRef nstatWifiSource;
	NStatSourceRef nstatCellSource;
	/*^block*/id nstatEventBlock;
	int cellularInterface;
	unsigned pdpBitmap;
	/*^block*/id dataUsageRefreshCompletionBlock;
	int dataUsageRefreshCompletionNumWaiting;
	NSDate* lastRefreshTimes[2];
	id tetherObserver;
	BOOL isTetherActive;
	id cellTCCapabilityObserver;
	BOOL rollingLiveUsageSupported;
	BKSApplicationStateMonitor* appStateMonitor;
	FBSDisplayLayoutMonitor* displayLayoutMonitor;
	NSMutableDictionary* flowCache;
	NSMutableDictionary* flowInstant;
	id flowObserver;
	id relayReadyObserver;
	ObjectAnalytics* fspace;
	ObjectAnalytics* lfpspace;
	NSObject*<OS_dispatch_source> flushOldFlowRecordsTimer;
	int screenStateToken;
	BOOL isScreenDark;
	unsigned long long usageCoalescingSpanSecs;
	unsigned long long usageWindowUnitsCount;
	BOOL _haveCalendar;
	BOOL _haveTypicalUsage;
	NSMutableDictionary* _flowWatchers;

}

@property (assign) BOOL haveCalendar;                                         //@synthesize haveCalendar=_haveCalendar - In the implementation block
@property (assign) BOOL haveTypicalUsage;                                     //@synthesize haveTypicalUsage=_haveTypicalUsage - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * flowWatchers;              //@synthesize flowWatchers=_flowWatchers - In the implementation block
+(id)queue;
+(void)workspaceSaveWithCallback:(/*^block*/id)arg1 ;
+(void)prepareForHelperSyncWithLaunchServices;
+(void)cleanupAfterHelperSyncWithLaunchServices;
+(void)syncUpWithLaunchServices;
+(BOOL)hasAnyForegroundApp;
+(id)foregroundAppKeys;
+(BOOL)refreshDataUsageWithCallback:(/*^block*/id)arg1 ;
+(void)recentUsageForApps:(id)arg1 replyQueue:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)dealloc;
-(int)performQueryOnEntityFromCache:(id)arg1 pred:(id)arg2 altpred:(id*)arg3 actions:(id)arg4 found:(id*)arg5 ;
-(void)performQueryPostProcessing:(id)arg1 actions:(id)arg2 processOutcome:(id)arg3 ;
-(id)initWithWorkspace:(id)arg1 params:(id)arg2 queue:(id)arg3 ;
-(BOOL)handlesEntity:(id)arg1 ;
-(void)performQueryOnEntity:(id)arg1 pred:(id)arg2 sort:(id)arg3 actions:(id)arg4 service:(id)arg5 connection:(id)arg6 reply:(/*^block*/id)arg7 ;
-(void)createSnapshotFor:(id)arg1 pred:(id)arg2 actions:(id)arg3 reply:(/*^block*/id)arg4 ;
-(id)setOption:(id)arg1 ;
-(void)resetDataFor:(id)arg1 nameKind:(id)arg2 ;
-(BOOL)_initializeLocalCache;
-(void)_applicationStateMonitorInit;
-(void)startObservingLaunchServices;
-(void)_handleNetworkStatisticsData:(NStatSourceRef)arg1 socketClosed:(BOOL)arg2 ;
-(BOOL)_shouldAcceptNStatSource:(NStatSourceRef)arg1 withDescription:(id)arg2 ;
-(void)_uuidBundleIDMapCleanup;
-(void)_startFlowMonitoring:(BOOL)arg1 ;
-(void)_updateTetheringUsage:(BOOL)arg1 ;
-(void)_newFlowData:(id)arg1 ;
-(void)_removeOldFlowRecords;
-(void)_trimForegroundAppState;
-(void)stopObservingLaunchServices;
-(void)_refreshDataUsageWithTriggerType:(int)arg1 ;
-(void)_refreshDataUsageWithCallbackOnQueue:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_refreshDataUsageComplete;
-(BOOL)_properties:(id)arg1 toBundleID:(id*)arg2 procName:(id*)arg3 delegateName:(id*)arg4 ;
-(id)_fetchFromProcCacheWithName:(id)arg1 ;
-(id)_processFetchForName:(id)arg1 bundle:(id)arg2 shouldFillMiss:(BOOL)arg3 ;
-(id)_liveUsageFetchForProcess:(id)arg1 ;
-(void)_updateLiveUsage:(id)arg1 wifiIn:(long long)arg2 wifiOut:(long long)arg3 cellIn:(long long)arg4 cellOut:(long long)arg5 wiredIn:(long long)arg6 wiredOut:(long long)arg7 xIn:(long long)arg8 xOut:(long long)arg9 isJumboFlow:(BOOL)arg10 closing:(BOOL)arg11 ;
-(void)_stopMonitoringNetworkInterfaceSource:(NStatSourceRef)arg1 ;
-(NStatSourceRef)_startMonitoringNetworkInterface:(int)arg1 usingThreshold:(unsigned long long)arg2 ;
-(double)_usageFingerprintForBundleName:(id)arg1 ;
-(void)_saveAndUnloadSelectState;
-(BOOL)haveCalendar;
-(void)_calendarUsageForApp:(id)arg1 givenLastRun:(id)arg2 ;
-(void)_compactUsageForApp:(id)arg1 intervalType:(int)arg2 givenLastRun:(id)arg3 ;
-(void)_handleApplicationNotificationStateChangedForDisplayName:(id)arg1 UUID:(id)arg2 pid:(int)arg3 edgeMode:(BOOL)arg4 ;
-(id)_uuidBundleIDMapLookup:(id)arg1 ;
-(BOOL)_appUUIDStateContainsBundleName:(id)arg1 ;
-(void)_handleApplicationNotificationStateChangedForBundleName:(id)arg1 edgeMode:(BOOL)arg2 intervalType:(int)arg3 ;
-(void)_handleApplicationNotificationCompactForBundleName:(id)arg1 edgeMode:(BOOL)arg2 ;
-(void)_removeInfoFromWorkspaceForProcess:(id)arg1 ;
-(void)_removeFromProcCache:(id)arg1 ;
-(void)_uuidProcessNameMapRemove:(id)arg1 ;
-(void)_insertProcCache:(id)arg1 underName:(id)arg2 ;
-(BOOL)_processNameIsValid:(id)arg1 ;
-(id)_uuidProcessNameMapLookup:(id)arg1 timestamp:(id)arg2 ;
-(id)_has1stPartyImpliedBundleNameBehavior:(id)arg1 ;
-(void)_uuidProcessNameMapAddUUID:(id)arg1 processName:(id)arg2 ;
-(BOOL)_isLiveUsageinScope:(id)arg1 forTime:(id)arg2 ;
-(void)_liveUsagePackForProcess:(id)arg1 ;
-(BOOL)_isLiveUsageInRollingWindow:(id)arg1 forTime:(id)arg2 ;
-(void)_applyCountsTo:(id)arg1 fromLiveUsage:(id)arg2 mustReset:(BOOL)arg3 ;
-(void)_uuidProcessNameMapPrune;
-(void)_uuidBundleIDMapAddUUIDsForBundleID:(id)arg1 ;
-(BOOL)_persistUuidBundleIDMap:(id)arg1 ;
-(void)_removeAllInfoForProcess:(id)arg1 withUUID:(id)arg2 ;
-(id)_fetchUuidBundleIDMap;
-(void)_foregroundAppStateInit;
-(void)_uuidBundleIDMapInit;
-(void)_fetchBundleIDMapAndRestartObservingLaunchServices;
-(void)enumerateInstalledApps;
-(void)workspaceSaveWithCallback:(/*^block*/id)arg1 ;
-(BOOL)_hasAnyForegroundApp;
-(id)_foregroundAppKeys;
-(BOOL)_refreshDataUsageWithCallback:(/*^block*/id)arg1 ;
-(void)_recentUsageForApps:(id)arg1 replyQueue:(id)arg2 reply:(/*^block*/id)arg3 ;
-(id)_trafficEnvelopeToTier:(double)arg1 ;
-(id)_flowFetchForName:(id)arg1 ;
-(BOOL)_isLiveFlowPerfinScope:(id)arg1 forTime:(id)arg2 andTag:(id)arg3 ;
-(id)_parseEvent:(id)arg1 withGeneration:(id*)arg2 ;
-(void)_pruneFlowHistory;
-(NSMutableDictionary *)flowWatchers;
-(void)_archiveRecord:(id)arg1 ;
-(BOOL)_handlesProcEntity:(id)arg1 ;
-(BOOL)_handlesFlowEntity:(id)arg1 ;
-(void)performThresholdingOn:(id)arg1 forKey:(id)arg2 andValue:(id)arg3 connection:(id)arg4 createdBlock:(/*^block*/id*)arg5 hitBlock:(/*^block*/id)arg6 errorBlock:(/*^block*/id)arg7 ;
-(id)_safePredFrom:(id)arg1 forEntity:(id)arg2 ;
-(int)_performQueryOnEntityFromProcCache:(id)arg1 target:(id)arg2 pred:(id)arg3 found:(id*)arg4 ;
-(id)_attemptConvertingPluginNameToContainingAppName:(id)arg1 ;
-(int)_performQueryOnEntityFromInstantFlowCache:(id)arg1 target:(id)arg2 pred:(id)arg3 found:(id*)arg4 ;
-(void)setHaveCalendar:(BOOL)arg1 ;
-(BOOL)haveTypicalUsage;
-(void)setHaveTypicalUsage:(BOOL)arg1 ;
-(void)_handleNetworkStatisticsSourceAdd:(NStatSourceRef)arg1 ;
-(void)handleLaunchServicesApplicationRegistration:(id)arg1 ;
-(void)handleLaunchServicesApplicationUnregistration:(id)arg1 ;
-(id)_fetchFromFlowCacheWithName:(id)arg1 ;
-(void)identifierForUUID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setFlowWatchers:(NSMutableDictionary *)arg1 ;
@end

