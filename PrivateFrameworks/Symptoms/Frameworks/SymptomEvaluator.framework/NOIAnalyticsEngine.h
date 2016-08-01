/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:13:00 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <SymptomEvaluator/AnalyticsEngineCore.h>

@class NSMutableDictionary, NSMutableSet, AWDSymptomsNetworkAnalyticsRRCConnectedPeriod;

@interface NOIAnalyticsEngine : AnalyticsEngineCore {

	NSMutableDictionary* liveClients;
	NSMutableSet* managedNOIs;
	id _cellEpochObserver;
	id _wifiEpochObserver;
	id _modelTurndownObserver;
	id _cellStateChangeObserver;
	id _cellStateCapabilityObserver;
	id _cellFallbackObserver;
	NSMutableSet* _predictionQueryClients;
	unsigned long long _predictionQueryCount;
	unsigned long long _startConnectionTimestamp;
	double _lastDisconnectTimestamp;
	unsigned _ingressLQM;
	unsigned long long _ingressUploadThroughput;
	unsigned long long _ingressDownloadThroughput;
	unsigned long long _ingressBytesIn;
	unsigned long long _ingressBytesOut;
	unsigned long long _ingressPacketsIn;
	unsigned long long _ingressPacketsOut;
	unsigned long long _lastDisconnectedSecs;
	BOOL _ingressInstantMetricAvailable;
	BOOL _ingressThroughputMetricAvailable;
	AWDSymptomsNetworkAnalyticsRRCConnectedPeriod* _rrcConnectionMetric;

}
+(id)queue;
+(void)resetQueryStatistics;
+(void)getQueryStatistics:(SCD_Struct_NO0*)arg1 ;
-(void)dealloc;
-(id)initWithWorkspace:(id)arg1 params:(id)arg2 queue:(id)arg3 ;
-(void)subscribeToNOIsFor:(id)arg1 orPredicate:(id)arg2 options:(id)arg3 connection:(id)arg4 ;
-(void)inquireNOIFor:(id)arg1 orPredicate:(id)arg2 requestedKeys:(id)arg3 options:(id)arg4 connection:(id)arg5 reply:(/*^block*/id)arg6 ;
-(void)unsubscribeToNOIs:(id)arg1 connection:(id)arg2 ;
-(void)clientEvent:(id)arg1 isAddEvent:(BOOL)arg2 ;
-(void)_bottomUpNOIEvent:(id)arg1 withInfo:(id)arg2 ;
-(BOOL)_initializeAllManagedNOIs;
-(void)_dumpClientStructure;
-(void)_resetRRCMetricCounters;
-(void)l2ThroughputMetrics:(id)arg1 options:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)_clientNOIEvent:(id)arg1 forNOIs:(id)arg2 isAddEvent:(BOOL)arg3 ;
-(id)_validatedNOIs:(id)arg1 orPredicate:(id)arg2 ;
-(void)_coreNOIMembershipChangeOn:(id)arg1 forNOIs:(id)arg2 isAddEvent:(BOOL)arg3 ;
-(void)_resetQueryStatistics;
-(void)_getQueryStatistics:(SCD_Struct_NO0*)arg1 ;
-(void)canUseOnAlternate:(id)arg1 options:(id)arg2 reply:(/*^block*/id)arg3 ;
@end

