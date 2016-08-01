/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:35 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKDAccountInfoProvider <NSObject>
@property (nonatomic,readonly) BOOL isAnonymousAccount; 
@property (nonatomic,readonly) BOOL isUnitTestingAccount; 
@property (nonatomic,readonly) BOOL accountWantsPushRegistration; 
@property (nonatomic,readonly) BOOL canAccessAccount; 
@optional
-(id)additionalHeaderValues;
-(void)noteTimeSpentInNetworking:(double)arg1;
-(void)noteSuccessfulRequestWithNumDownloadedElements:(long long)arg1;
-(void)noteFailedNetworkRequest;
-(void)noteFailedProtocolRequest;

@required
-(id)config;
-(id)languageCode;
-(id)bundleID;
-(id)mescalSession;
-(id)dsid;
-(id)containerID;
-(BOOL)isAnonymousAccount;
-(BOOL)canAccessAccount;
-(void)fetchContainerScopedUserIDUsingBackgroundSession:(BOOL)arg1 allowsCellularAccess:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3;
-(BOOL)isUnitTestingAccount;
-(id)serverPreferredPushEnvironment;
-(BOOL)accountWantsPushRegistration;
-(id)containerScopedUserID;
-(id)applicationBundle;
-(id)trafficContainerIdentifier;
-(id)hardwareID;
-(id)regionCode;
-(id)enabledKeyboards;
-(void)renewAuthTokenWithReason:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)fetchConfigurationUsingBackgroundSession:(BOOL)arg1 allowsCellularAccess:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3;
-(void)resetMescalSession;
-(void)renewMescalSessionForRequest:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(id)baseURLForServerType:(long long)arg1 partitionType:(long long)arg2;
-(void)fetchPublicURLUsingBackgroundSession:(BOOL)arg1 allowsCellularAccess:(BOOL)arg2 serverType:(long long)arg3 completionHandler:(/*^block*/id)arg4;
-(void)fetchDeviceIDUsingBackgroundSession:(BOOL)arg1 allowsCellularAccess:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3;
-(BOOL)shouldFailAllTasks;
-(id)cloudKitAuthToken;
-(id)iCloudAuthToken;
-(id)deviceName;

@end

