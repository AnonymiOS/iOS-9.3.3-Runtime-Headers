/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:03 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AssistantUIDelegate
@optional
-(void)showUIConfigPromptPreHook;
-(void)showUIConfigPromptPostHook;

@required
-(void)doneWithAssistantResult:(int)arg1;
-(void)assistantUpdateProgress:(id)arg1 forState:(int)arg2;
-(void)assistantWaitingForResourcesStart;
-(void)assistantWaitingForResourcesComplete;
-(void)presentUIForRecommendationStatus;
-(void)presentUIForRecommmendationTargetInfo:(id)arg1;
-(void)presentUIForRecommendationResult:(int)arg1 paramDict:(id)arg2;
-(void)presentUIForStepByStepStart;
-(void)presentUIForStepByStepNextStep:(int)arg1 paramDict:(id)arg2;
-(void)presentUIForStepByStepResult:(int)arg1;
-(void)presentUIForSetupStatusWithRecommendationDict:(id)arg1;
-(void)presentUIForSetupResult:(int)arg1 baseStationInfo:(id)arg2 withPrompt:(id)arg3;
-(void)showTellUserToPlugInEthernetForStatus:(int)arg1 paramDict:(id)arg2;
-(void)showTellUserToResetBroadbandDeviceForStatus:(int)arg1 paramDict:(id)arg2;
-(void)showAskUserForPPPoECredentialsForStatus:(int)arg1 paramDict:(id)arg2;
-(void)showAskUserSwapCablingForStatus:(int)arg1 paramDict:(id)arg2;
-(void)connectionVerificationSucceededForSelector:(int)arg1;
-(void)showUIConfigPromptToSendDiagsUsageStatsWithParamDict:(id)arg1;
-(void)showUIConfigPromptForGuestNetConfigWithParamDict:(id)arg1;

@end

