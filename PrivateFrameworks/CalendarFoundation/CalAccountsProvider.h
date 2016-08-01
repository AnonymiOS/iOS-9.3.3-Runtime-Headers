/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:25 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, ACAccountStore, NSArray;

@interface CalAccountsProvider : NSObject {

	BOOL _runningUnitTests;
	NSMutableArray* _accountsWhenRunningUnitTests;
	ACAccountStore* _accountStore;

}

@property (nonatomic,retain) NSMutableArray * accountsWhenRunningUnitTests;              //@synthesize accountsWhenRunningUnitTests=_accountsWhenRunningUnitTests - In the implementation block
@property (nonatomic,readonly) NSArray * allAccounts; 
@property (nonatomic,readonly) NSArray * enabledAccounts; 
@property (assign,nonatomic) BOOL runningUnitTests;                                      //@synthesize runningUnitTests=_runningUnitTests - In the implementation block
@property (nonatomic,retain) ACAccountStore * accountStore;                              //@synthesize accountStore=_accountStore - In the implementation block
+(id)uniqueStringsForHostname:(id)arg1 ;
+(BOOL)accountIsDuplicate:(id)arg1 inStore:(id)arg2 ;
+(id)_uniqueStringsForUsername:(id)arg1 ;
+(id)_accountTypeWithIdentifier:(id)arg1 inStore:(id)arg2 ;
+(id)_accountsWithAccountType:(id)arg1 inStore:(id)arg2 error:(id*)arg3 ;
+(id)_existingAccountForAccount:(id)arg1 inStore:(id)arg2 ;
+(id)defaultProvider;
+(id)uniqueStringsForPrincipalPath:(id)arg1 ;
+(id)calDAVChildForParentAccount:(id)arg1 ;
+(id)verboseDescriptionForAccount:(id)arg1 ;
-(id)init;
-(id)_accountWithIdentifier:(id)arg1 ;
-(id)allAccountsWithError:(id*)arg1 ;
-(id)_supportedDataclassesForMainBundleID;
-(NSArray *)allAccounts;
-(id)accountsWithServerURL:(id)arg1 ;
-(id)accountsWithUsername:(id)arg1 ;
-(id)accountWithIdentifier:(id)arg1 returnCachedVersion:(BOOL)arg2 ;
-(BOOL)runningUnitTests;
-(NSMutableArray *)accountsWhenRunningUnitTests;
-(id)_cachedAccountWithIdentifier:(id)arg1 ;
-(id)_providerForCalDAVAccount:(id)arg1 ;
-(BOOL)renewCredentialsForAccount:(id)arg1 forceRenewal:(BOOL)arg2 ;
-(void)renewCredentialsForAccount:(id)arg1 forceRenewal:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)saveAccount:(id)arg1 verify:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(BOOL)saveAccount:(id)arg1 verify:(BOOL)arg2 withError:(id*)arg3 ;
-(id)_supportedDataclassesForBundleID:(id)arg1 ;
-(BOOL)account:(id)arg1 hasServerURL:(id)arg2 ;
-(BOOL)accountIsDuplicate:(id)arg1 ;
-(id)accountsWithServerURL:(id)arg1 username:(id)arg2 returnCachedVersions:(BOOL)arg3 ;
-(id)clientTokenForAccountWithIdentifier:(id)arg1 ;
-(id)delegatePrincipalUIDsForAccount:(id)arg1 ;
-(id)existingAccountForAccount:(id)arg1 ;
-(void)messageTraceCurrentAccounts;
-(id)oauthTokenForAccount:(id)arg1 tokenType:(id)arg2 ;
-(BOOL)removeAccount:(id)arg1 withError:(id*)arg2 ;
-(BOOL)renewCredentialsForAccount:(id)arg1 ;
-(BOOL)saveAccount:(id)arg1 withError:(id*)arg2 ;
-(void)setAccountsWhenRunningUnitTests:(NSMutableArray *)arg1 ;
-(void)setRunningUnitTests:(BOOL)arg1 ;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(ACAccountStore *)accountStore;
-(id)accountTypeWithIdentifier:(id)arg1 ;
-(NSArray *)enabledAccounts;
-(void)saveAccount:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)removeAccount:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end

