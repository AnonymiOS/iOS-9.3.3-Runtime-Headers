/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:42 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDCodableSample;

@interface HDCodableActivityCache : PBCodable <NSCopying> {

	long long _activeEnergyBurnedAnchor;
	double _activeHours;
	long long _activeHoursAnchor;
	double _briskMinutes;
	long long _briskMinutesAnchor;
	long long _cacheIndex;
	long long _calorieGoalAnchor;
	double _energyBurned;
	double _energyBurnedGoal;
	long long _energyBurnedGoalAnchor;
	double _energyBurnedGoalDate;
	long long _stepCount;
	long long _stepCountAnchor;
	double _walkingAndRunningDistance;
	long long _walkingAndRunningDistanceAnchor;
	long long _workoutAnchor;
	HDCodableSample* _sample;
	SCD_Struct_HD39 _has;

}

@property (nonatomic,readonly) BOOL hasSample; 
@property (nonatomic,retain) HDCodableSample * sample;                               //@synthesize sample=_sample - In the implementation block
@property (assign,nonatomic) BOOL hasCacheIndex; 
@property (assign,nonatomic) long long cacheIndex;                                   //@synthesize cacheIndex=_cacheIndex - In the implementation block
@property (assign,nonatomic) BOOL hasEnergyBurned; 
@property (assign,nonatomic) double energyBurned;                                    //@synthesize energyBurned=_energyBurned - In the implementation block
@property (assign,nonatomic) BOOL hasBriskMinutes; 
@property (assign,nonatomic) double briskMinutes;                                    //@synthesize briskMinutes=_briskMinutes - In the implementation block
@property (assign,nonatomic) BOOL hasActiveHours; 
@property (assign,nonatomic) double activeHours;                                     //@synthesize activeHours=_activeHours - In the implementation block
@property (assign,nonatomic) BOOL hasStepCount; 
@property (assign,nonatomic) long long stepCount;                                    //@synthesize stepCount=_stepCount - In the implementation block
@property (assign,nonatomic) BOOL hasEnergyBurnedGoal; 
@property (assign,nonatomic) double energyBurnedGoal;                                //@synthesize energyBurnedGoal=_energyBurnedGoal - In the implementation block
@property (assign,nonatomic) BOOL hasWalkingAndRunningDistance; 
@property (assign,nonatomic) double walkingAndRunningDistance;                       //@synthesize walkingAndRunningDistance=_walkingAndRunningDistance - In the implementation block
@property (assign,nonatomic) BOOL hasEnergyBurnedGoalDate; 
@property (assign,nonatomic) double energyBurnedGoalDate;                            //@synthesize energyBurnedGoalDate=_energyBurnedGoalDate - In the implementation block
@property (assign,nonatomic) BOOL hasActiveEnergyBurnedAnchor; 
@property (assign,nonatomic) long long activeEnergyBurnedAnchor;                     //@synthesize activeEnergyBurnedAnchor=_activeEnergyBurnedAnchor - In the implementation block
@property (assign,nonatomic) BOOL hasActiveHoursAnchor; 
@property (assign,nonatomic) long long activeHoursAnchor;                            //@synthesize activeHoursAnchor=_activeHoursAnchor - In the implementation block
@property (assign,nonatomic) BOOL hasBriskMinutesAnchor; 
@property (assign,nonatomic) long long briskMinutesAnchor;                           //@synthesize briskMinutesAnchor=_briskMinutesAnchor - In the implementation block
@property (assign,nonatomic) BOOL hasCalorieGoalAnchor; 
@property (assign,nonatomic) long long calorieGoalAnchor;                            //@synthesize calorieGoalAnchor=_calorieGoalAnchor - In the implementation block
@property (assign,nonatomic) BOOL hasStepCountAnchor; 
@property (assign,nonatomic) long long stepCountAnchor;                              //@synthesize stepCountAnchor=_stepCountAnchor - In the implementation block
@property (assign,nonatomic) BOOL hasWalkingAndRunningDistanceAnchor; 
@property (assign,nonatomic) long long walkingAndRunningDistanceAnchor;              //@synthesize walkingAndRunningDistanceAnchor=_walkingAndRunningDistanceAnchor - In the implementation block
@property (assign,nonatomic) BOOL hasWorkoutAnchor; 
@property (assign,nonatomic) long long workoutAnchor;                                //@synthesize workoutAnchor=_workoutAnchor - In the implementation block
@property (assign,nonatomic) BOOL hasEnergyBurnedGoalAnchor; 
@property (assign,nonatomic) long long energyBurnedGoalAnchor;                       //@synthesize energyBurnedGoalAnchor=_energyBurnedGoalAnchor - In the implementation block
-(id)decodedEnergyBurnedQuantity;
-(id)decodedWalkingAndRunningDistanceQuantity;
-(id)decodedEnergyBurnedGoalQuantity;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(long long)stepCount;
-(void)setCacheIndex:(long long)arg1 ;
-(void)setHasCacheIndex:(BOOL)arg1 ;
-(BOOL)hasCacheIndex;
-(void)setEnergyBurned:(double)arg1 ;
-(void)setHasEnergyBurned:(BOOL)arg1 ;
-(BOOL)hasEnergyBurned;
-(void)setBriskMinutes:(double)arg1 ;
-(void)setHasBriskMinutes:(BOOL)arg1 ;
-(BOOL)hasBriskMinutes;
-(void)setActiveHours:(double)arg1 ;
-(void)setHasActiveHours:(BOOL)arg1 ;
-(BOOL)hasActiveHours;
-(void)setStepCount:(long long)arg1 ;
-(void)setHasStepCount:(BOOL)arg1 ;
-(BOOL)hasStepCount;
-(void)setEnergyBurnedGoal:(double)arg1 ;
-(void)setHasEnergyBurnedGoal:(BOOL)arg1 ;
-(BOOL)hasEnergyBurnedGoal;
-(void)setWalkingAndRunningDistance:(double)arg1 ;
-(void)setHasWalkingAndRunningDistance:(BOOL)arg1 ;
-(BOOL)hasWalkingAndRunningDistance;
-(void)setEnergyBurnedGoalDate:(double)arg1 ;
-(void)setHasEnergyBurnedGoalDate:(BOOL)arg1 ;
-(BOOL)hasEnergyBurnedGoalDate;
-(long long)cacheIndex;
-(double)energyBurned;
-(double)briskMinutes;
-(double)activeHours;
-(double)energyBurnedGoal;
-(double)walkingAndRunningDistance;
-(double)energyBurnedGoalDate;
-(void)setSample:(HDCodableSample *)arg1 ;
-(long long)activeEnergyBurnedAnchor;
-(void)setActiveEnergyBurnedAnchor:(long long)arg1 ;
-(long long)activeHoursAnchor;
-(void)setActiveHoursAnchor:(long long)arg1 ;
-(long long)briskMinutesAnchor;
-(void)setBriskMinutesAnchor:(long long)arg1 ;
-(long long)energyBurnedGoalAnchor;
-(void)setEnergyBurnedGoalAnchor:(long long)arg1 ;
-(long long)stepCountAnchor;
-(void)setStepCountAnchor:(long long)arg1 ;
-(long long)walkingAndRunningDistanceAnchor;
-(void)setWalkingAndRunningDistanceAnchor:(long long)arg1 ;
-(HDCodableSample *)sample;
-(BOOL)hasSample;
-(void)setHasActiveEnergyBurnedAnchor:(BOOL)arg1 ;
-(BOOL)hasActiveEnergyBurnedAnchor;
-(void)setHasActiveHoursAnchor:(BOOL)arg1 ;
-(BOOL)hasActiveHoursAnchor;
-(void)setHasBriskMinutesAnchor:(BOOL)arg1 ;
-(BOOL)hasBriskMinutesAnchor;
-(void)setCalorieGoalAnchor:(long long)arg1 ;
-(void)setHasCalorieGoalAnchor:(BOOL)arg1 ;
-(BOOL)hasCalorieGoalAnchor;
-(void)setHasStepCountAnchor:(BOOL)arg1 ;
-(BOOL)hasStepCountAnchor;
-(void)setHasWalkingAndRunningDistanceAnchor:(BOOL)arg1 ;
-(BOOL)hasWalkingAndRunningDistanceAnchor;
-(void)setWorkoutAnchor:(long long)arg1 ;
-(void)setHasWorkoutAnchor:(BOOL)arg1 ;
-(BOOL)hasWorkoutAnchor;
-(void)setHasEnergyBurnedGoalAnchor:(BOOL)arg1 ;
-(BOOL)hasEnergyBurnedGoalAnchor;
-(long long)calorieGoalAnchor;
-(long long)workoutAnchor;
@end

