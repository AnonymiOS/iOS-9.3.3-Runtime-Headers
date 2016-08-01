/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:13:06 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKHealthQueryChartCacheDataSource.h>

@class HKSampleType, NSPredicate;

@interface HKTimePeriodSeriesDataSource : HKHealthQueryChartCacheDataSource {

	HKSampleType* _sampleType;
	NSPredicate* _queryPredicate;
	/*^block*/id _userInfoCreationBlock;

}

@property (nonatomic,retain) HKSampleType * sampleType;                 //@synthesize sampleType=_sampleType - In the implementation block
@property (nonatomic,retain) NSPredicate * queryPredicate;              //@synthesize queryPredicate=_queryPredicate - In the implementation block
@property (nonatomic,copy) id userInfoCreationBlock;                    //@synthesize userInfoCreationBlock=_userInfoCreationBlock - In the implementation block
-(void)setQueryPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)queryPredicate;
-(HKSampleType *)sampleType;
-(id)userInfoCreationBlock;
-(id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setUserInfoCreationBlock:(id)arg1 ;
-(void)setSampleType:(HKSampleType *)arg1 ;
-(void)_handleSamples:(id)arg1 blockStart:(id)arg2 blockEnd:(id)arg3 intervalComponents:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)_calculateTotalDurationFromSamples:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 interval:(id)arg4 ;
@end

