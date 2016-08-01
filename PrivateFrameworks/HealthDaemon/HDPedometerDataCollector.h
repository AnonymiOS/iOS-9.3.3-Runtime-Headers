/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:42 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDAggregateDataCollector.h>

@class CMPedometer;

@interface HDPedometerDataCollector : HDAggregateDataCollector {

	CMPedometer* _pedometer;

}
+(id)createCollectorsForCurrentHardware:(id)arg1 ;
+(Class)sensorDatumClass;
-(id)initWithHealthDaemon:(id)arg1 ;
-(id)_queue_pedometer;
-(id)quantitySampleFromPedometerData:(id)arg1 toPedometerData:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 ;
-(void)beginUpdatesFromDatum:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)fetchHistoricalSensorDataSinceDatum:(id)arg1 databaseIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)hkObjectsFromSensorData:(id)arg1 baseSensorDatum:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 ;
-(void)stopPerformingUpdatesWithErrorEncountered:(BOOL)arg1 ;
-(void)setPedometer:(id)arg1 ;
-(id)pedometer;
@end

