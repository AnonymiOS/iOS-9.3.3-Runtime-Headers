/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:40 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FUChartDataSetDataSource <NSObject>
@optional
-(id)dataPointsForSet:(id)arg1;
-(id)labelsForSet:(id)arg1;

@required
-(unsigned long long)numberOfDataPointsForDataSet:(id)arg1;
-(id)dataSet:(id)arg1 chartPointForIndex:(unsigned long long)arg2;

@end

