/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:30 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSDictionary;

@interface MCRestrictionManager : NSObject {

	NSMutableDictionary* _memberQueueRestrictions;
	NSMutableDictionary* _memberQueueSystemClientRestrictions;
	NSMutableDictionary* _memberQueueSystemUserSettings;
	NSMutableDictionary* _memberQueueUserClientRestrictions;
	NSMutableDictionary* _memberQueueUserUserSettings;
	NSMutableDictionary* _memberQueueEffectiveUserSettings;
	NSObject*<OS_dispatch_queue> _memberQueue;
	NSMutableDictionary* _memberQueueSystemProfileRestrictions;
	NSMutableDictionary* _memberQueueUserProfileRestrictions;

}

@property (nonatomic,readonly) NSDictionary * currentRestrictions; 
@property (nonatomic,readonly) NSDictionary * defaultRestrictions; 
@property (nonatomic,readonly) NSDictionary * defaultSettings; 
@property (nonatomic,copy,readonly) NSDictionary * userSettings; 
@property (nonatomic,copy,readonly) NSDictionary * effectiveUserSettings; 
@property (nonatomic,copy,readonly) NSDictionary * systemUserSettings; 
@property (nonatomic,copy,readonly) NSDictionary * userUserSettings; 
@property (nonatomic,copy,readonly) NSDictionary * systemProfileRestrictions; 
@property (nonatomic,copy,readonly) NSDictionary * userProfileRestrictions; 
@property (nonatomic,copy,readonly) NSDictionary * combinedProfileRestrictions; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> memberQueue;                                    //@synthesize memberQueue=_memberQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * memberQueueRestrictions;                               //@synthesize memberQueueRestrictions=_memberQueueRestrictions - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * memberQueueSystemProfileRestrictions;                  //@synthesize memberQueueSystemProfileRestrictions=_memberQueueSystemProfileRestrictions - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * memberQueueUserProfileRestrictions;                    //@synthesize memberQueueUserProfileRestrictions=_memberQueueUserProfileRestrictions - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * memberQueueSystemClientRestrictions;                   //@synthesize memberQueueSystemClientRestrictions=_memberQueueSystemClientRestrictions - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * memberQueueUserClientRestrictions;                     //@synthesize memberQueueUserClientRestrictions=_memberQueueUserClientRestrictions - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * memberQueueSystemUserSettings;                         //@synthesize memberQueueSystemUserSettings=_memberQueueSystemUserSettings - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * memberQueueUserUserSettings;                           //@synthesize memberQueueUserUserSettings=_memberQueueUserUserSettings - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * memberQueueEffectiveUserSettings;                      //@synthesize memberQueueEffectiveUserSettings=_memberQueueEffectiveUserSettings - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * memberQueueCombinedProfileRestrictions; 
+(BOOL)isInSingleAppModeWithSettingsDictionary:(id)arg1 ;
+(id)unionValuesForFeature:(id)arg1 withRestrictionsDictionary:(id)arg2 ;
+(id)intersectedValuesForFeature:(id)arg1 withRestrictionsDictionary:(id)arg2 ;
+(id)filterRestrictionDictionary:(id)arg1 toIncludeOnlyRestrictionsThatDifferFromRestrictions:(id)arg2 ;
+(int)restrictedBoolForFeature:(id)arg1 withRestrictionsDictionary:(id)arg2 ;
+(id)valueForFeature:(id)arg1 withRestrictionsDictionary:(id)arg2 ;
+(id)defaultValueForSetting:(id)arg1 ;
+(int)boolSettingForFeature:(id)arg1 withUserSettingDictionary:(id)arg2 ;
+(int)appWhitelistStateWithSettingsDictionary:(id)arg1 ;
+(int)defaultBoolValueForSetting:(id)arg1 ;
+(id)defaultIntersectedValuesForSetting:(id)arg1 ;
+(id)defaultUnionValuesForSetting:(id)arg1 ;
+(id)defaultParametersForIntersectedValuesSetting:(id)arg1 ;
+(id)defaultParametersForUnionValuesSetting:(id)arg1 ;
+(id)valueSettingForFeature:(id)arg1 withUserSettingDictionary:(id)arg2 ;
+(BOOL)isWebContentFilterUIActiveWithRestrictionDictionary:(id)arg1 ;
+(id)unionValuesSettingForFeature:(id)arg1 withUserSettingDictionary:(id)arg2 ;
+(id)restrictionsAfterApplyingRestrictionsDictionary:(id)arg1 toRestrictionsDictionary:(id)arg2 outChangeDetected:(BOOL*)arg3 outError:(id*)arg4 ;
+(int)appWhitelistStateWithSettingsDictionary:(id)arg1 restrictionsDictionary:(id)arg2 ;
+(BOOL)isPasscodeRequiredToAccessWhitelistedAppsWithSettingsDictionary:(id)arg1 ;
+(BOOL)mayEnterPasscodeToAccessNonWhitelistedAppsWithSettingsDictionary:(id)arg1 ;
+(id)defaultRestrictionFilePath;
+(id)restrictionsWithCurrentRestrictions:(id)arg1 defaultRestrictions:(id)arg2 systemProfileRestrictions:(id)arg3 userProfileRestrictions:(id)arg4 systemClientRestrictions:(id)arg5 userClientRestrictions:(id)arg6 outRestrictionsChanged:(BOOL*)arg7 outError:(id*)arg8 ;
+(id)filterRestrictionDictionary:(id)arg1 acceptedKeysDict:(id)arg2 ;
+(id)objectForFeature:(id)arg1 withRestrictionsDictionary:(id)arg2 ;
+(id)intersectedValuesSettingForFeature:(id)arg1 withUserSettingDectionary:(id)arg2 ;
+(int)defaultBoolValueForSetting:(id)arg1 outAsk:(BOOL*)arg2 ;
+(int)boolSettingForFeature:(id)arg1 outAsk:(BOOL*)arg2 withUserSettingDictionary:(id)arg3 ;
+(BOOL)isWhitelistedAppsRestrictionEnforcedWithRestrictionsDictionary:(id)arg1 ;
+(id)restrictionsWithCurrentRestrictions:(id)arg1 defaultRestrictions:(id)arg2 profileRestrictions:(id)arg3 clientRestrictions:(id)arg4 outRestrictionsChanged:(BOOL*)arg5 outError:(id*)arg6 ;
+(id)filterRestrictionDictionaryForPublicUse:(id)arg1 ;
+(id)filterUserSettingsForPublicUse:(id)arg1 ;
+(BOOL)restrictedBool:(id)arg1 changedBetweenOldRestrictions:(id)arg2 andNewRestrictions:(id)arg3 ;
+(BOOL)restrictedValue:(id)arg1 changedBetweenOldRestrictions:(id)arg2 andNewRestrictions:(id)arg3 ;
+(BOOL)intersectedValuesForFeature:(id)arg1 changedBetweenOldRestrictions:(id)arg2 andNewRestrictions:(id)arg3 ;
+(BOOL)unionValuesForFeature:(id)arg1 changedBetweenOldRestrictions:(id)arg2 andNewRestrictions:(id)arg3 ;
+(id)newEffectiveSettingsByApplyingRestrictions:(id)arg1 toSettings:(id)arg2 ;
+(BOOL)boolSetting:(id)arg1 valueChangedBetweenOldSettings:(id)arg2 andNewSettings:(id)arg3 ;
+(BOOL)valueSetting:(id)arg1 valueChangedBetweenOldSettings:(id)arg2 andNewSettings:(id)arg3 ;
+(BOOL)intersectedValuesSetting:(id)arg1 valueChangedBetweenOldSettings:(id)arg2 andNewSettings:(id)arg3 ;
+(BOOL)unionValuesSetting:(id)arg1 valueChangedBetweenOldSettings:(id)arg2 andNewSettings:(id)arg3 ;
+(id)allowedOpenInAppBundleIDsWithOriginalAppBundleIDs:(id)arg1 managedAppBundleIDs:(id)arg2 localAppBundleID:(id)arg3 localAccountIsManaged:(BOOL)arg4 mayOpenFromUnmanagedToManaged:(BOOL)arg5 mayOpenFromManagedToUnmanaged:(BOOL)arg6 isAppBundleIDExemptBlock:(/*^block*/id)arg7 isAppBundleIDAccountBasedBlock:(/*^block*/id)arg8 ;
+(id)allowedImportFromAppBundleIDsWithOriginalAppBundleIDs:(id)arg1 managedAppBundleIDs:(id)arg2 localAppBundleID:(id)arg3 localAccountIsManaged:(BOOL)arg4 mayOpenFromUnmanagedToManaged:(BOOL)arg5 mayOpenFromManagedToUnmanaged:(BOOL)arg6 isAppBundleIDExemptBlock:(/*^block*/id)arg7 isAppBundleIDAccountBasedBlock:(/*^block*/id)arg8 ;
+(id)allowedKeyboardBundleIDsAfterApplyingFilterToBundleIDs:(id)arg1 managedAppBundleIDs:(id)arg2 hostAppIsManaged:(BOOL)arg3 mayOpenFromUnmanagedToManaged:(BOOL)arg4 mayOpenFromManagedToUnmanaged:(BOOL)arg5 ;
+(id)defaultSettings;
+(id)defaultParametersForBoolSetting:(id)arg1 ;
+(id)defaultParametersForValueSetting:(id)arg1 ;
+(id)sharedManager;
-(BOOL)isInSingleAppMode;
-(id)effectiveWhitelistedAppsAndOptions;
-(id)restrictedAppBundleIDs;
-(id)restrictionEnforcedBlacklistedAppBundleIDs;
-(id)parentalControlsBlacklistedAppBundleIDs;
-(id)restrictionEnforcedWhitelistedAppBundleIDs;
-(id)parentalControlsWhitelistedAppBundleIDs;
-(id)singleAppModeBundleID;
-(BOOL)allowedToRunAppWithBundleID:(id)arg1 ;
-(id)effectiveBlacklistedAppBundleIDs;
-(id)effectiveWhitelistedAppBundleIDs;
-(NSDictionary *)defaultRestrictions;
-(void)invalidateRestrictions;
-(void)invalidateSettings;
-(id)effectiveUnionValuesForSetting:(id)arg1 ;
-(int)effectiveRestrictedBoolForSetting:(id)arg1 ;
-(id)unionValuesForFeature:(id)arg1 ;
-(id)unionValuesSettingForFeature:(id)arg1 ;
-(id)effectiveIntersectedValuesForSetting:(id)arg1 ;
-(id)intersectedValuesForFeature:(id)arg1 ;
-(id)intersectedValuesSettingForFeature:(id)arg1 ;
-(NSDictionary *)effectiveUserSettings;
-(int)restrictedBoolForFeature:(id)arg1 ;
-(id)objectForFeature:(id)arg1 ;
-(NSDictionary *)currentRestrictions;
-(id)systemClientRestrictions;
-(id)allClientUUIDsForClientType:(id)arg1 ;
-(id)clientRestrictionsForClientUUID:(id)arg1 ;
-(id)userInfoForClientUUID:(id)arg1 ;
-(NSDictionary *)systemUserSettings;
-(NSDictionary *)userUserSettings;
-(id)effectiveParametersForBoolSetting:(id)arg1 ;
-(id)effectiveParametersForIntersectedSetting:(id)arg1 ;
-(id)effectiveParametersForUnionSetting:(id)arg1 ;
-(id)effectiveParametersForValueSetting:(id)arg1 ;
-(id)profileIdentifiersRestrictingSettings:(id)arg1 ;
-(id)exchangeUUIDsRestrictingSettings:(id)arg1 ;
-(BOOL)isValueSettingLockedDownByRestrictions:(id)arg1 ;
-(BOOL)isIntersectionSettingLockedDownByRestrictions:(id)arg1 ;
-(BOOL)isUnionSettingLockedDownByRestrictions:(id)arg1 ;
-(int)boolSettingForFeature:(id)arg1 ;
-(id)valueSettingForFeature:(id)arg1 ;
-(NSDictionary *)systemProfileRestrictions;
-(NSDictionary *)combinedProfileRestrictions;
-(void)setMemberQueueRestrictions:(NSMutableDictionary *)arg1 ;
-(void)setMemberQueueSystemProfileRestrictions:(NSMutableDictionary *)arg1 ;
-(void)setMemberQueueUserProfileRestrictions:(NSMutableDictionary *)arg1 ;
-(void)setMemberQueueSystemClientRestrictions:(NSMutableDictionary *)arg1 ;
-(void)setMemberQueueUserClientRestrictions:(NSMutableDictionary *)arg1 ;
-(void)setMemberQueueSystemUserSettings:(NSMutableDictionary *)arg1 ;
-(void)setMemberQueueUserUserSettings:(NSMutableDictionary *)arg1 ;
-(void)setMemberQueueEffectiveUserSettings:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)memberQueueRestrictions;
-(NSMutableDictionary *)memberQueueSystemProfileRestrictions;
-(NSMutableDictionary *)memberQueueUserProfileRestrictions;
-(NSMutableDictionary *)memberQueueCombinedProfileRestrictions;
-(NSMutableDictionary *)memberQueueSystemClientRestrictions;
-(NSMutableDictionary *)memberQueueUserClientRestrictions;
-(id)memberQueueClientRestrictionsDictionaryForClientUUID:(id)arg1 ;
-(id)memberQueueClientRestrictionsForClientUUID:(id)arg1 ;
-(id)memberQueueUserInfoForClientUUID:(id)arg1 ;
-(BOOL)_isBoolSettingLockedDown:(id)arg1 ;
-(BOOL)_isValueSettingLockedDown:(id)arg1 effectiveSetting:(id)arg2 ;
-(id)_effectiveIntersectedValuesForSetting:(id)arg1 effectiveUserSettings:(id)arg2 ;
-(id)_effectiveUnionValuesForSetting:(id)arg1 effectiveUserSettings:(id)arg2 ;
-(id)userClientRestrictions;
-(NSMutableDictionary *)memberQueueSystemUserSettings;
-(NSMutableDictionary *)memberQueueUserUserSettings;
-(NSMutableDictionary *)memberQueueEffectiveUserSettings;
-(NSDictionary *)userProfileRestrictions;
-(id)potentialRestrictionsAfterApplyingRestrictionsDictionary:(id)arg1 outChangeDetected:(BOOL*)arg2 outError:(id*)arg3 ;
-(id)memberQueueClientTypeForClientUUID:(id)arg1 ;
-(void)memberQueueCommitUserSettingsToDisk;
-(BOOL)isSettingLockedDownByRestrictions:(id)arg1 ;
-(id)init;
-(id)description;
-(NSObject*<OS_dispatch_queue>)memberQueue;
-(void)setMemberQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSDictionary *)defaultSettings;
-(id)valueForFeature:(id)arg1 ;
-(int)appWhitelistState;
-(id)effectiveValueForSetting:(id)arg1 ;
-(NSDictionary *)userSettings;
-(BOOL)isBoolSettingLockedDownByRestrictions:(id)arg1 ;
@end

