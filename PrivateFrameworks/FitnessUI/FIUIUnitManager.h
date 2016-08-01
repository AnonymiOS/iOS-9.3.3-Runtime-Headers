/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:40 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HKHealthStore, NSMutableDictionary;

@interface FIUIUnitManager : NSObject {

	HKHealthStore* _healthStore;
	NSMutableDictionary* _preferredUnits;

}
+(id)sharedManager;
-(void)dealloc;
-(id)init;
-(void)_localeDidChange:(id)arg1 ;
-(id)userActiveEnergyBurnedUnit;
-(id)userDistanceHKUnitForDistanceType:(long long)arg1 ;
-(long long)userDistanceUnitForDistanceType:(long long)arg1 ;
-(id)_loadPreferredUnitsFromDefaults;
-(void)_updatePreferredUnits;
-(void)_storePreferredUnitsInDefaults:(id)arg1 ;
-(void)_notifyUnitPreferencesChanged;
-(id)_preferredHKUnitForQuantityType:(id)arg1 ;
-(id)userDistanceCyclingHKUnit;
-(id)userDistanceWalkingRunningHKUnit;
-(void)setUserDistanceCyclingUnit:(long long)arg1 ;
-(void)setUserDistanceWalkingRunningUnit:(long long)arg1 ;
-(void)_setPreferredHKUnit:(id)arg1 forQuantityType:(id)arg2 ;
-(void)setUserDistanceUnit:(long long)arg1 forDistanceType:(long long)arg2 ;
-(long long)userDistanceWalkingRunningUnit;
-(long long)userDistanceCyclingUnit;
-(void)setUserActiveEnergyBurnedUnit:(id)arg1 ;
-(id)userBasalEnergyBurnedUnit;
-(void)setUserBasalEnergyBurnedUnit:(id)arg1 ;
-(void)setPreferredUnitsForTesting:(id)arg1 ;
-(void)_userPreferencesDidChange:(id)arg1 ;
@end

