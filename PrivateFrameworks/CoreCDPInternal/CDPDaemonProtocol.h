/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:38 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CDPDaemonProtocol
@required
-(void)setUserVisibleKeychainSyncEnabled:(BOOL)arg1 withCompletion:(/*^block*/id)arg2;
-(void)removeNonViewAwarePeersFromCircleWithContext:(id)arg1 completion:(/*^block*/id)arg2;
-(void)handleCloudDataProtectionStateWithContext:(id)arg1 uiProvider:(id)arg2 completion:(/*^block*/id)arg3;
-(void)repairCloudDataProtectionStateWithContext:(id)arg1 uiProvider:(id)arg2 completion:(/*^block*/id)arg3;
-(void)localSecretChangedTo:(id)arg1 secretType:(unsigned long long)arg2 context:(id)arg3 completion:(/*^block*/id)arg4;
-(void)finishOfflineLocalSecretChangeWithContext:(id)arg1 uiProvider:(id)arg2 completion:(/*^block*/id)arg3;
-(void)isICDPEnabledForDSID:(id)arg1 checkWithServer:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)hasLocalSecretWithCompletion:(/*^block*/id)arg1;
-(void)isUserVisibleKeychainSyncEnabledWithCompletion:(/*^block*/id)arg1;

@end

