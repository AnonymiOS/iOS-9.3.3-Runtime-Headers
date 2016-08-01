/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:45 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSceneMonitorDelegate <NSObject>
@optional
-(void)sceneMonitor:(id)arg1 sceneSettingsDidChangeWithDiff:(id)arg2 previousSettings:(id)arg3;
-(void)sceneMonitor:(id)arg1 effectiveSceneSettingsDidChangeWithDiff:(id)arg2 previousSettings:(id)arg3;
-(void)sceneMonitor:(id)arg1 pairingStatusDidChangeForExternalSceneIDs:(id)arg2;
-(void)sceneMonitor:(id)arg1 sceneClientSettingsDidChangeWithDiff:(id)arg2 transitionContext:(id)arg3;
-(void)sceneMonitor:(id)arg1 sceneWillCommitUpdateWithContext:(id)arg2;
-(void)sceneMonitor:(id)arg1 sceneDidCommitUpdateWithContext:(id)arg2;
-(void)sceneMonitor:(id)arg1 sceneWasCreated:(id)arg2;
-(void)sceneMonitor:(id)arg1 sceneWasDestroyed:(id)arg2;

@end

