/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:42 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HKAchievement.h>

@interface HKSessionAchievement : HKAchievement {

	unsigned long long _activityType;

}

@property (nonatomic,readonly) unsigned long long activityType;              //@synthesize activityType=_activityType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)activityType;
-(BOOL)_validateConfiguration;
-(BOOL)_hasExtraData;
-(void)_encodeExtraDataWithCoder:(id)arg1 ;
-(void)_decodeExtraDataWithCoder:(id)arg1 ;
-(id)initWithAchievementType:(unsigned long long)arg1 completedDate:(id)arg2 value:(id)arg3 activityType:(unsigned long long)arg4 ;
@end

