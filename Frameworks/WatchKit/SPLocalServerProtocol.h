/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:33 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SPLocalServerProtocol <NSObject>
@required
-(void)setLogLevel:(id)arg1;
-(void)fetchInstalledApplicationsWithCompletion:(/*^block*/id)arg1;
-(void)fetchInstalledGlancesWithCompletion:(/*^block*/id)arg1;
-(void)fetchInstalledComplicationsWithCompletion:(/*^block*/id)arg1;
-(void)activeComplicationsWithCompletion:(/*^block*/id)arg1;
-(void)installAllApplicationsForProcessWithIdentifier:(id)arg1;
-(void)cancelPendingInstallations;
-(void)installApplicationWithIdentifier:(id)arg1 installer:(id)arg2 installerIsTestFlight:(BOOL)arg3 completion:(/*^block*/id)arg4;
-(void)installApplicationWithIdentifier:(id)arg1 installer:(id)arg2 withProvisioningProfiles:(id)arg3 profileNames:(id)arg4 completion:(/*^block*/id)arg5;
-(void)removeApplicationWithIdentifier:(id)arg1 installer:(id)arg2 completion:(/*^block*/id)arg3;
-(void)fetchApplicationWithContainingApplicationBundleID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)fetchInfoForApplicationWithBundleID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)fetchInfoForApplicationWithContainingApplicationBundleID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)fetchWatchAppBundleURLWithinCompanionAppWithWatchAppIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)fetchWatchAppBundleIDForCompanionAppBundleID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)launchSockPuppetAppForCompanionAppWithIdentifier:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3;
-(void)terminateSockPuppetAppForCompanionAppWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)getSockPuppetAppRunningStatusForCompanionAppWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)getCompanionExtensionPIDForCompanionAppWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)xcodeWillInstallSockPuppetAppWithCompanionAppIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)showUserNotification:(long long)arg1 applicationName:(id)arg2;
-(void)hideUserNotification;
-(void)wakeExtensionForWatchApp:(id)arg1;
-(void)installProvisioningProfileWithName:(id)arg1 profileData:(id)arg2 completion:(/*^block*/id)arg3;
-(void)removeProvisioningProfileWithID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)fetchProvisioningProfilesWithCompletion:(/*^block*/id)arg1;
-(void)fetchProvisioningProfilesForApplicationWithBundleID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)updatePreferencesForApplicationWithIdentifier:(id)arg1 preferences:(id)arg2 completion:(/*^block*/id)arg3;
-(void)setAlwaysInstall:(id)arg1;
-(void)getAlwaysInstallWithCompletion:(/*^block*/id)arg1;

@end

