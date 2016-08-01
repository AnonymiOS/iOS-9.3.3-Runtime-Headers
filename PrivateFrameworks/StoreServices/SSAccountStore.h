/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:33 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, SSKeyValueStore, NSMutableArray, SSAccount, NSArray;

@interface SSAccountStore : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	SSKeyValueStore* _keyValueStore;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	NSMutableArray* _notifyTokens;

}

@property (readonly) SSAccount * activeAccount; 
@property (readonly) SSAccount * activeLockerAccount; 
@property (copy,readonly) NSArray * accounts; 
@property (getter=isExpired,readonly) BOOL expired; 
@property (getter=isAuthenticationActive,readonly) BOOL authenticationActive; 
+(BOOL)isExpiredForTokenType:(long long)arg1 ;
+(void)resetExpirationForTokenType:(long long)arg1 ;
+(double)tokenExpirationInterval;
+(void)setDefaultStore:(id)arg1 ;
+(id)defaultStore;
+(void)resetExpiration;
+(id)existingDefaultStore;
+(BOOL)isExpired;
-(id)_keyValueStore;
-(BOOL)isExpiredForTokenType:(long long)arg1 ;
-(void)resetExpirationForTokenType:(long long)arg1 ;
-(id)accountWithUniqueIdentifier:(id)arg1 scope:(long long)arg2 ;
-(id)accountWithUniqueIdentifier:(id)arg1 reloadIfNecessary:(BOOL)arg2 ;
-(void)getDefaultAccountNameUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)isAuthenticationActive;
-(void)setAccountCredits:(id)arg1 forAccountWithUniqueIdentifier:(id)arg2 ;
-(void)setDefaultAccountName:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(BOOL)sdk_hasActiveLockerAccount;
-(id)_accountsFromDaemon;
-(void)_dispatchAsync:(/*^block*/id)arg1 ;
-(void)_dispatchSync:(/*^block*/id)arg1 ;
-(void)_postAccountStoreChangeNotification;
-(void)dealloc;
-(id)init;
-(SSAccount *)activeLockerAccount;
-(void)signOutAllAccounts;
-(id)accountWithUniqueIdentifier:(id)arg1 ;
-(NSArray *)accounts;
-(id)setActiveAccount:(SSAccount *)arg1 ;
-(id)setActiveLockerAccount:(SSAccount *)arg1 ;
-(void)resetExpiration;
-(SSAccount *)activeAccount;
-(id)addAccount:(id)arg1 ;
-(void)signOutAccount:(id)arg1 ;
-(void)reloadAccounts;
-(BOOL)isExpired;
@end

