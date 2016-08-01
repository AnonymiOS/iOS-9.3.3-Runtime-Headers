/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:39 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardUIServices.framework/FrontBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardUIServices/FBUISceneEvent.h>

@class FBSSceneClientSettings, FBSSceneClientSettingsDiff;

@interface FBUISceneUpdateClientSettingsEvent : FBUISceneEvent {

	FBSSceneClientSettings* _settings;
	FBSSceneClientSettingsDiff* _diff;

}

@property (nonatomic,copy) FBSSceneClientSettings * settings;                        //@synthesize settings=_settings - In the implementation block
@property (nonatomic,retain) FBSSceneClientSettingsDiff * settingsDiff;              //@synthesize diff=_diff - In the implementation block
-(void)dealloc;
-(FBSSceneClientSettings *)settings;
-(void)setSettings:(FBSSceneClientSettings *)arg1 ;
-(void)setSettingsDiff:(FBSSceneClientSettingsDiff *)arg1 ;
-(FBSSceneClientSettingsDiff *)settingsDiff;
@end

