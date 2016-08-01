/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:52 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMDaemonCore/IMSystemMonitorListener.h>

@class NSBundle, NSString, NSDictionary;

@interface IMDService : NSObject <IMSystemMonitorListener> {

	NSBundle* _bundle;
	Class _sessionClass;
	NSString* _internalName;
	NSDictionary* _accountDefaults;
	NSDictionary* _serviceDefaults;
	NSDictionary* _serviceProperties;
	NSDictionary* _cachedServiceDefaults;
	NSDictionary* _cachedSetupServiceDefaults;
	BOOL _blockPrefWriting;

}

@property (nonatomic,readonly) Class sessionClass; 
@property (nonatomic,readonly) Class accountClass; 
@property (nonatomic,retain,readonly) NSDictionary * serviceProperties;                    //@synthesize serviceProperties=_serviceProperties - In the implementation block
@property (nonatomic,retain,readonly) NSBundle * bundle;                                   //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,retain,readonly) NSString * internalName; 
@property (nonatomic,retain,readonly) NSString * serviceDomain; 
@property (nonatomic,readonly) BOOL isIDSBased; 
@property (nonatomic,retain,readonly) NSDictionary * serviceDefaults; 
@property (nonatomic,retain,readonly) NSDictionary * serviceDefaultsForSetup; 
@property (nonatomic,retain,readonly) NSDictionary * defaultAccountSettings; 
@property (nonatomic,readonly) BOOL serviceRequiresSingleAccount; 
@property (nonatomic,readonly) BOOL shouldCreateActiveAccounts; 
@property (nonatomic,readonly) BOOL serviceWantsNullHostReachability; 
@property (nonatomic,readonly) BOOL serviceIgnoresNetworkConnectivity; 
@property (nonatomic,readonly) BOOL shouldForceAccountsActive; 
@property (nonatomic,readonly) BOOL shouldForceAccountsConnected; 
@property (nonatomic,readonly) BOOL serviceNeedsLogin; 
@property (nonatomic,readonly) BOOL serviceNeedsPassword; 
@property (nonatomic,readonly) BOOL serviceShouldBeAlwaysLoggedIn; 
@property (nonatomic,readonly) BOOL serviceRequiresHost; 
@property (nonatomic,readonly) BOOL serviceSupportsRegistration; 
@property (nonatomic,readonly) BOOL serviceChatsIgnoreLoginStatus; 
@property (nonatomic,readonly) BOOL serviceSupportsPresence; 
@property (nonatomic,readonly) BOOL serviceSupportsOneSessionForAllAccounts; 
@property (nonatomic,readonly) BOOL supportsDatabase; 
@property (nonatomic,readonly) BOOL disallowDeactivation; 
@property (nonatomic,readonly) long long serviceProtocolVersion; 
-(void)saveSettings;
-(void)dealloc;
-(id)description;
-(NSBundle *)bundle;
-(id)initWithBundle:(id)arg1 ;
-(NSString *)internalName;
-(Class)accountClass;
-(NSDictionary *)serviceProperties;
-(NSDictionary *)serviceDefaults;
-(NSDictionary *)defaultAccountSettings;
-(void)accountRemoved:(id)arg1 ;
-(void)disableAccount:(id)arg1 ;
-(void)accountAdded:(id)arg1 ;
-(void)systemDidEnterMemoryPressure;
-(void)systemDidStartBackup;
-(void)delayedSaveSettings;
-(Class)sessionClass;
-(BOOL)shouldForceAccountsConnected;
-(BOOL)isIDSBased;
-(BOOL)serviceRequiresSingleAccount;
-(BOOL)shouldCreateActiveAccounts;
-(BOOL)disallowDeactivation;
-(BOOL)shouldForceAccountsActive;
-(BOOL)serviceSupportsOneSessionForAllAccounts;
-(void)enableAccount:(id)arg1 ;
-(id)_copyServicePropertiesFromIMServiceBundle:(id)arg1 ;
-(void)synchronizeServiceDefaults;
-(void)unloadServiceBundle;
-(void)_reallyUnloadServiceBundle;
-(long long)serviceProtocolVersion;
-(id)_serviceDomain;
-(id)oldInternalName;
-(void)loadServiceBundle;
-(id)_defaultDefaults;
-(NSString *)serviceDomain;
-(id)_serviceDefaultsForDomain:(id)arg1 ;
-(id)_oldServiceDomain;
-(void)purgeMemoryCaches;
-(NSDictionary *)serviceDefaultsForSetup;
-(BOOL)clearOneTimeImportAccounts;
-(id)newAccountWithAccountDefaults:(id)arg1 accountID:(id)arg2 ;
-(BOOL)supportsDatabase;
-(BOOL)serviceSupportsRegistration;
-(BOOL)serviceIgnoresNetworkConnectivity;
-(BOOL)serviceWantsNullHostReachability;
-(BOOL)serviceNeedsLogin;
-(BOOL)serviceNeedsPassword;
-(BOOL)serviceShouldBeAlwaysLoggedIn;
-(BOOL)serviceRequiresHost;
-(BOOL)serviceChatsIgnoreLoginStatus;
-(BOOL)serviceSupportsPresence;
@end

