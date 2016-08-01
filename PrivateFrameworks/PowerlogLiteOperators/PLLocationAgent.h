/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:10 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogCore/PLAgent.h>

@class PLCFNotificationOperatorComposition, NSMutableSet;

@interface PLLocationAgent : PLAgent {

	PLCFNotificationOperatorComposition* _appStatusChangedNotification;
	PLCFNotificationOperatorComposition* _techStatusChangedNotification;
	NSMutableSet* _processes;

}

@property (retain) PLCFNotificationOperatorComposition * appStatusChangedNotification;               //@synthesize appStatusChangedNotification=_appStatusChangedNotification - In the implementation block
@property (retain) PLCFNotificationOperatorComposition * techStatusChangedNotification;              //@synthesize techStatusChangedNotification=_techStatusChangedNotification - In the implementation block
@property (retain) NSMutableSet * processes;                                                         //@synthesize processes=_processes - In the implementation block
+(void)load;
+(id)entryAggregateDefinitions;
+(id)entryEventPointDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventIntervalDefinitions;
+(id)entryEventNoneDefinitions;
+(id)entryEventPointDefinitionClientStatus;
+(id)entryEventForwardDefinitionTechStatus;
+(id)entryEventForwardDefinitionClientStatus;
+(id)entryEventNoneDefinitionClientStatusDebug;
+(id)defaults;
-(id)init;
-(void)log;
-(void)initOperatorDependancies;
-(void)processesOfInterest:(id)arg1 ;
-(void)setProcesses:(NSMutableSet *)arg1 ;
-(void)logEventForwardClientStatus;
-(void)logEventForwardTechStatus;
-(id)humanReadableNameForTechnology:(id)arg1 ;
-(void)modelGPSICEPower:(id)arg1 ;
-(void)updateLocalCacheWithClient:(id)arg1 withType:(id)arg2 withEntry:(id)arg3 ;
-(void)logEventNoneClientStatusDebugWithClients:(id)arg1 ;
-(id)lastEntryWithClient:(id)arg1 withType:(id)arg2 withEntryKey:(id)arg3 ;
-(void)createLocationDistributionEventsWithClientToOpenEntry:(id)arg1 ;
-(void)logEventPointClientStatus;
-(void)logEventNoneClientStatus;
-(PLCFNotificationOperatorComposition *)appStatusChangedNotification;
-(void)setAppStatusChangedNotification:(PLCFNotificationOperatorComposition *)arg1 ;
-(PLCFNotificationOperatorComposition *)techStatusChangedNotification;
-(void)setTechStatusChangedNotification:(PLCFNotificationOperatorComposition *)arg1 ;
-(NSMutableSet *)processes;
@end

