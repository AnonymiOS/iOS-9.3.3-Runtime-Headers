/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:30 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _ATXAggregateLogger : NSObject
+(void)initialize;
+(id)keyForScoreInput:(unsigned long long)arg1 withOutcome:(unsigned long long)arg2 ;
+(id)keyForABGroup:(id)arg1 withSubkey:(id)arg2 ;
+(BOOL)yesWithProbability:(double)arg1 ;
+(void)logValue:(double)arg1 forScoreInput:(unsigned long long)arg2 withOutcome:(unsigned long long)arg3 ;
+(void)logPredictionEventWith:(unsigned long long)arg1 itemsAndOutcome:(unsigned long long)arg2 forABGroup:(id)arg3 ;
+(void)logPredictionOfAppWithBundleId:(id)arg1 outcome:(unsigned long long)arg2 rank:(int)arg3 score:(double)arg4 ;
@end

