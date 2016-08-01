/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:10 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogLiteOperators/PLAWDAuxMetrics.h>

@class PLEntryNotificationOperatorComposition, NSDate;

@interface PLAWDAudio : PLAWDAuxMetrics {

	PLEntryNotificationOperatorComposition* _audioRailCallback;
	NSDate* _startTime;

}

@property (retain) PLEntryNotificationOperatorComposition * audioRailCallback;              //@synthesize audioRailCallback=_audioRailCallback - In the implementation block
@property (retain) NSDate * startTime;                                                      //@synthesize startTime=_startTime - In the implementation block
+(id)entryAggregateDefinitions;
+(id)entryAggregateDefinitionAwdAudio;
+(id)getSharedObjWithOperator:(id)arg1 ;
-(void)setStartTime:(NSDate *)arg1 ;
-(NSDate *)startTime;
-(void)resetAudioTable;
-(void)setAudioRailCallback:(PLEntryNotificationOperatorComposition *)arg1 ;
-(void)finalizeAudioTable;
-(void)startMetricCollection:(id)arg1 ;
-(void)stopMetricCollection:(id)arg1 ;
-(BOOL)submitDataToAWDServer:(id)arg1 withAwdConn:(id)arg2 ;
-(void)handleAudioRailCallback:(id)arg1 ;
-(PLEntryNotificationOperatorComposition *)audioRailCallback;
@end

