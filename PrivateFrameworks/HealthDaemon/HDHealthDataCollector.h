/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:42 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDHealthDataCollector <NSObject>
@property (assign) BOOL disabled; 
@required
-(BOOL)disabled;
-(void)setDisabled:(BOOL)arg1;
-(void)collectionStartedForType:(id)arg1 collectionInterval:(double)arg2;
-(void)updateCollectionInterval:(double)arg1 forType:(id)arg2;
-(void)collectionStoppedForType:(id)arg1;
-(void)updateHistoricalData;
-(id)dataCollectorDiagnosticDescription;

@end

