/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:42 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _HKActiveWorkoutClient <NSObject>
@required
-(void)serverPausedWithDate:(id)arg1 completion:(/*^block*/id)arg2;
-(void)updateTotalsWithQuantities:(id)arg1 resumeData:(id)arg2 UUIDs:(id)arg3;
-(void)serverStoppedWithDate:(id)arg1;
-(void)serverFailedWithError:(id)arg1;

@end

