/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:41 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLocale, NSIndexSet;

@interface HDAchievementDefinitions : NSObject {

	NSLocale* _locale;
	NSIndexSet* _stepCountMilestones;
	NSIndexSet* _lifetimeCompleteDayMilestones;

}

@property (nonatomic,retain) NSLocale * locale;                                       //@synthesize locale=_locale - In the implementation block
@property (nonatomic,retain) NSIndexSet * stepCountMilestones;                        //@synthesize stepCountMilestones=_stepCountMilestones - In the implementation block
@property (nonatomic,retain) NSIndexSet * lifetimeCompleteDayMilestones;              //@synthesize lifetimeCompleteDayMilestones=_lifetimeCompleteDayMilestones - In the implementation block
-(void)setLocale:(NSLocale *)arg1 ;
-(id)_locale;
-(NSLocale *)locale;
-(NSIndexSet *)stepCountMilestones;
-(double)_goalRatioWithDailyGoalAchievementType:(unsigned long long)arg1 ;
-(unsigned long long)totalSessionCountRequiredForBestSessionAchievements;
-(double)minimumDurationForFirstSessionOfTypeAchievement;
-(double)minimumDurationFor7SessionsInWeekAchievement;
-(BOOL)canHaveMultipleAchievementsForStepCount:(unsigned long long)arg1 ;
-(double)calorieBurnForExceededDailyGoalAchievementType:(unsigned long long)arg1 goal:(double)arg2 ;
-(NSIndexSet *)lifetimeCompleteDayMilestones;
-(unsigned long long)minimumDaysOfHistoryForBestDailyCaloriesAchievement;
-(unsigned long long)minimumDaysOfHistoryForBestBriskMinutesAchievement;
-(void)setStepCountMilestones:(NSIndexSet *)arg1 ;
-(void)setLifetimeCompleteDayMilestones:(NSIndexSet *)arg1 ;
@end

