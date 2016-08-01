/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:10 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _IDSAccount, NSString, NSArray, NSDictionary, NSData, NSDate;

@interface IDSAccount : NSObject {

	_IDSAccount* _internal;

}

@property (nonatomic,retain) NSString * loginID; 
@property (nonatomic,retain,readonly) NSString * serviceName; 
@property (nonatomic,readonly) BOOL isActive; 
@property (nonatomic,readonly) BOOL canSend; 
@property (nonatomic,retain,readonly) NSArray * devices; 
@property (nonatomic,retain,readonly) NSArray * nearbyDevices; 
@property (nonatomic,retain,readonly) NSArray * aliases; 
@property (nonatomic,retain,readonly) NSArray * aliasStrings; 
@property (nonatomic,retain,readonly) NSArray * vettedAliases; 
@property (nonatomic,retain,readonly) NSDictionary * profileInfo; 
@property (nonatomic,retain) NSDictionary * accountInfo; 
@property (nonatomic,readonly) int accountType; 
@property (nonatomic,retain,readonly) NSString * uniqueID; 
@property (nonatomic,retain,readonly) NSString * displayName; 
@property (nonatomic,readonly) int registrationStatus; 
@property (nonatomic,readonly) NSArray * registeredURIs; 
@property (nonatomic,readonly) NSData * registrationCertificate; 
@property (nonatomic,readonly) NSDate * dateRegistered; 
@property (nonatomic,readonly) NSDate * nextRegistrationDate; 
@property (nonatomic,readonly) NSData * pushToken; 
@property (nonatomic,readonly) NSString * regionID; 
@property (nonatomic,readonly) NSString * regionBasePhoneNumber; 
@property (nonatomic,readonly) NSDictionary * regionServerContext; 
@property (nonatomic,readonly) NSString * profileID; 
@property (nonatomic,retain,readonly) NSString * primaryServiceName; 
-(void)setPassword:(id)arg1 ;
-(NSString *)serviceName;
-(void)dealloc;
-(id)description;
-(BOOL)isActive;
-(BOOL)_isEnabled;
-(NSString *)displayName;
-(id)_internal;
-(void)setAuthToken:(id)arg1 ;
-(NSArray *)aliasStrings;
-(id)_initWithDictionary:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3 ;
-(void)setAccountInfo:(NSDictionary *)arg1 ;
-(void)_setIsEnabled:(BOOL)arg1 ;
-(void)setLoginID:(NSString *)arg1 ;
-(NSString *)primaryServiceName;
-(BOOL)canSend;
-(NSArray *)nearbyDevices;
-(NSDate *)nextRegistrationDate;
-(NSDate *)dateRegistered;
-(NSString *)regionBasePhoneNumber;
-(NSDictionary *)regionServerContext;
-(NSString *)profileID;
-(void)deactivateAndPurgeIdentify;
-(void)_callNearbyDevicesChanged;
-(void)_reloadCachedDevices;
-(id)initWithLoginID:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3 ;
-(NSArray *)registeredURIs;
-(void)removeDelegate:(id)arg1 ;
-(NSString *)regionID;
-(NSDictionary *)profileInfo;
-(NSArray *)aliases;
-(NSArray *)vettedAliases;
-(void)authenticateAccount;
-(void)addAliases:(id)arg1 ;
-(void)removeAliases:(id)arg1 ;
-(void)unvalidateAliases:(id)arg1 ;
-(void)validateAliases:(id)arg1 ;
-(void)registerAccount;
-(void)unregisterAccount;
-(void)updateAuthorizationCredentials:(id)arg1 token:(id)arg2 ;
-(void)validateProfile;
-(NSDictionary *)accountInfo;
-(int)accountType;
-(NSString *)loginID;
-(void)updateAccountWithAccountInfo:(id)arg1 ;
-(void)addRegistrationDelegate:(id)arg1 queue:(id)arg2 ;
-(void)removeRegistrationDelegate:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3 ;
-(void)passwordUpdated;
-(NSData *)registrationCertificate;
-(void)_reregisterAndReidentify:(BOOL)arg1 ;
-(int)registrationStatus;
-(NSString *)uniqueID;
-(NSData *)pushToken;
-(NSArray *)devices;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
@end

