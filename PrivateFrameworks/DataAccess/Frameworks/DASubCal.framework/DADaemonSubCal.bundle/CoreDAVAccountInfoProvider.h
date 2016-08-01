/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:40 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DASubCal.framework/DADaemonSubCal.bundle/DADaemonSubCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CoreDAVAccountInfoProvider <NSObject>
@optional
-(void)noteHomeSetOnDifferentHost:(id)arg1;
-(void)clientTokenRequestedByServer;
-(id)clientCertificateInfoProvider;
-(id)oauthInfoProvider;
-(BOOL)handleTrustChallenge:(id)arg1 withConnection:(id)arg2;
-(BOOL)shouldRetryUnauthorizedConnection:(id)arg1;
-(BOOL)handleAuthenticateAgainstProtectionSpace:(id)arg1;
-(BOOL)handleAuthenticateAgainstProtectionSpace:(id)arg1 withConnection:(id)arg2;
-(BOOL)handleShouldUseCredentialStorage;
-(BOOL)shouldHandleHTTPCookiesForURL:(id)arg1;
-(BOOL)shouldSendClientInfoHeaderForURL:(id)arg1;
-(BOOL)shouldTurnModalOnBadPassword;
-(BOOL)shouldTryRenewingCredential;
-(BOOL)renewCredential;
-(void)noteSuccessfulRequestWithNumDownloadedElements:(long long)arg1 forTask:(id)arg2;
-(void)noteFailedNetworkRequestForTask:(id)arg1;
-(void)noteFailedProtocolRequestForTask:(id)arg1;
-(void)noteTimeSpentInNetworking:(double)arg1 forTask:(id)arg2;
-(BOOL)shouldCompressRequests;
-(void)webLoginRequestedAtURL:(id)arg1 reasonString:(id)arg2 completionBlock:(/*^block*/id)arg3;
-(id)getAppleIDSession;
-(id)clientToken;
-(CFURLStorageSessionRef)copyStorageSession;
-(id)customConnectionProperties;
-(BOOL)shouldUseOpportunisticSockets;
-(BOOL)handleTrustChallenge:(id)arg1;
-(id)additionalHeaderValues;
-(void)noteTimeSpentInNetworking:(double)arg1;
-(void)noteSuccessfulRequestWithNumDownloadedElements:(long long)arg1;
-(void)noteFailedNetworkRequest;
-(void)noteFailedProtocolRequest;

@required
-(id)user;
-(id)password;
-(id)principalURL;
-(id)scheme;
-(id)host;
-(long long)port;
-(id)serverRoot;
-(id)userAgentHeader;
-(id)serverComplianceClasses;
-(BOOL)handleCertificateError:(id)arg1;
-(void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(/*^block*/id)arg1;
-(id)identityPersist;
-(BOOL)shouldFailAllTasks;
-(id)accountID;

@end

