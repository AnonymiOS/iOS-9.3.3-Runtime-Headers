/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:42 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDHealthPlugin <NSObject>
@optional
-(BOOL)daemonDidReceiveNotification:(const char*)arg1;
-(void)setDataCollectionOptions:(id)arg1 forKey:(id)arg2 type:(id)arg3 clientUUID:(id)arg4;
-(id)dataCollectors;
-(void)suppressActivityAlertsForIdentifier:(id)arg1 suppressionReason:(long long)arg2 timeoutUntilDate:(id)arg3;
-(void)invalidateActivityAlertSuppressionForIdentifier:(id)arg1;
-(void)setCurrentActivityCacheOverrideDate:(id)arg1 timeZone:(id)arg2 completion:(/*^block*/id)arg3;
-(id)queryServerForUUID:(id)arg1 serverDataObject:(id)arg2 queryClass:(Class)arg3 clientProxy:(id)arg4 client:(id)arg5 healthDaemon:(id)arg6 queryDelegate:(id)arg7;
-(void)_setPluginCatherineFeeder:(id)arg1;
-(void)_setPluginHeartRateEnable:(BOOL)arg1;

@required
-(void)activate;
-(id)initWithHealthDaemon:(id)arg1;

@end

