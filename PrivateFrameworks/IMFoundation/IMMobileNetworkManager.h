/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:00 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMFoundation/IMFoundation-Structs.h>
#import <IMFoundation/IMNetworkManager.h>
#import <libobjc.A.dylib/RadiosPreferencesDelegate.h>

@class NSRecursiveLock, NSMutableSet, RadiosPreferences, NSNumber;

@interface IMMobileNetworkManager : IMNetworkManager <RadiosPreferencesDelegate> {

	BOOL _registered;
	BOOL _shouldBringUpDataContext;
	BOOL _dataContextActive;
	int _applySkipCount;
	NSRecursiveLock* _lock;
	NSMutableSet* _disableFastDormancyTokens;
	NSMutableSet* _wiFiAutoAssociationTokens;
	NSMutableSet* _cellAutoAssociationTokens;
	void* _serverConnection;
	void* _suspendDormancyAssertion;
	RadiosPreferences* _radiosPreferences;
	CTServerConnectionRef _ctServerConnection;
	void* _cellAssertion;

}

@property (nonatomic,readonly) BOOL isAirplaneModeEnabled; 
@property (nonatomic,readonly) BOOL isWiFiEnabled; 
@property (nonatomic,readonly) BOOL isWiFiUsable; 
@property (nonatomic,readonly) BOOL isWiFiAssociated; 
@property (nonatomic,readonly) BOOL isWiFiCaptive; 
@property (nonatomic,readonly) BOOL isHostingWiFiHotSpot; 
@property (nonatomic,readonly) BOOL autoAssociateWiFi; 
@property (nonatomic,readonly) BOOL autoAssociateCellular; 
@property (nonatomic,readonly) BOOL disableFastDormancy; 
@property (nonatomic,readonly) BOOL willTryToSearchForWiFiNetwork; 
@property (nonatomic,readonly) BOOL willTryToAutoAssociateWiFiNetwork; 
@property (nonatomic,retain,readonly) NSNumber * wiFiSignalStrength; 
@property (nonatomic,retain,readonly) NSNumber * wiFiScaledRSSI; 
@property (nonatomic,retain,readonly) NSNumber * wiFiScaledRate; 
@property (nonatomic,readonly) BOOL dataConnectionExists; 
@property (nonatomic,readonly) BOOL has2GDataConnection; 
@property (nonatomic,readonly) BOOL hasLTEDataConnection; 
@property (nonatomic,readonly) BOOL isDataSwitchEnabled; 
@property (nonatomic,readonly) BOOL isDataConnectionActive; 
@property (nonatomic,readonly) BOOL inValidSIMState; 
@property (nonatomic,readonly) BOOL requiresSIMInserted; 
@property (nonatomic,readonly) BOOL isSIMLocked; 
@property (nonatomic,readonly) BOOL isSIMRemoved; 
@property (nonatomic,retain) RadiosPreferences * _radiosPreferences;                    //@synthesize radiosPreferences=_radiosPreferences - In the implementation block
@property (assign,nonatomic) void* _cellAssertion;                                      //@synthesize cellAssertion=_cellAssertion - In the implementation block
@property (assign,nonatomic) CTServerConnectionRef _ctServerConnection;                 //@synthesize ctServerConnection=_ctServerConnection - In the implementation block
@property (assign,nonatomic) int _applySkipCount;                                       //@synthesize applySkipCount=_applySkipCount - In the implementation block
@property (assign,nonatomic) void* _serverConnection;                                   //@synthesize serverConnection=_serverConnection - In the implementation block
@property (assign,nonatomic) void* _suspendDormancyAssertion;                           //@synthesize suspendDormancyAssertion=_suspendDormancyAssertion - In the implementation block
@property (nonatomic,retain) NSRecursiveLock * lock;                                    //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) NSMutableSet * wiFiAutoAssociationTokens;                  //@synthesize wiFiAutoAssociationTokens=_wiFiAutoAssociationTokens - In the implementation block
@property (nonatomic,retain) NSMutableSet * cellularAutoAssociationTokens;              //@synthesize cellAutoAssociationTokens=_cellAutoAssociationTokens - In the implementation block
@property (nonatomic,retain) NSMutableSet * disableFastDormancyTokens;                  //@synthesize disableFastDormancyTokens=_disableFastDormancyTokens - In the implementation block
@property (assign,nonatomic) BOOL registered;                                           //@synthesize registered=_registered - In the implementation block
@property (assign,nonatomic) BOOL shouldBringUpDataContext;                             //@synthesize shouldBringUpDataContext=_shouldBringUpDataContext - In the implementation block
@property (assign,nonatomic) BOOL dataContextActive;                                    //@synthesize dataContextActive=_dataContextActive - In the implementation block
-(void)dealloc;
-(id)init;
-(NSRecursiveLock *)lock;
-(void)setDataConnectionActive:(BOOL)arg1 ;
-(BOOL)isDataConnectionActive;
-(void)_createCTServerConnection;
-(void)_releaseCTServerConnection;
-(void)_adjustCellularAutoAssociation;
-(void)_adjustFastDormancyTokens;
-(BOOL)autoAssociateCellular;
-(BOOL)disableFastDormancy;
-(void)_setFastDormancySuspended:(BOOL)arg1 ;
-(void)__adjustFastDormancyTokens;
-(BOOL)isHostingWiFiHotSpot;
-(BOOL)willTryToAutoAssociateWiFiNetwork;
-(BOOL)willTryToSearchForWiFiNetwork;
-(NSNumber *)wiFiSignalStrength;
-(NSNumber *)wiFiScaledRSSI;
-(NSNumber *)wiFiScaledRate;
-(BOOL)isWiFiAssociated;
-(BOOL)isWiFiCaptive;
-(BOOL)autoAssociateWiFi;
-(void)addWiFiAutoAssociationClientToken:(id)arg1 ;
-(void)removeWiFiAutoAssociationClientToken:(id)arg1 ;
-(void)showNetworkOptions;
-(void)_adjustCelluarAutoAssociation;
-(BOOL)isSIMLocked;
-(BOOL)isSIMRemoved;
-(BOOL)_isDataConnectionAvailable;
-(void)_makeDataConnectionAvailable:(BOOL)arg1 ;
-(void)cutWiFiManagerLinkDidChange:(id)arg1 context:(id)arg2 ;
-(void)addFastDormancyDisableToken:(id)arg1 ;
-(void)removeFastDormancyDisableToken:(id)arg1 ;
-(BOOL)isWiFiUsable;
-(void)addCellularAutoAssociationClientToken:(id)arg1 ;
-(void)removeCellularAutoAssociationClientToken:(id)arg1 ;
-(void)_ctServerCallBack:(id)arg1 object:(id)arg2 userInfo:(id)arg3 ;
-(BOOL)requiresSIMInserted;
-(void)showSIMUnlock;
-(BOOL)inValidSIMState;
-(BOOL)dataConnectionExists;
-(BOOL)has2GDataConnection;
-(BOOL)hasLTEDataConnection;
-(BOOL)isDataSwitchEnabled;
-(NSMutableSet *)disableFastDormancyTokens;
-(void)setDisableFastDormancyTokens:(NSMutableSet *)arg1 ;
-(NSMutableSet *)wiFiAutoAssociationTokens;
-(void)setWiFiAutoAssociationTokens:(NSMutableSet *)arg1 ;
-(NSMutableSet *)cellularAutoAssociationTokens;
-(void)setCellularAutoAssociationTokens:(NSMutableSet *)arg1 ;
-(void*)_serverConnection;
-(void)set_serverConnection:(void*)arg1 ;
-(void*)_suspendDormancyAssertion;
-(void)set_suspendDormancyAssertion:(void*)arg1 ;
-(RadiosPreferences *)_radiosPreferences;
-(void)set_radiosPreferences:(RadiosPreferences *)arg1 ;
-(CTServerConnectionRef)_ctServerConnection;
-(void)set_ctServerConnection:(CTServerConnectionRef)arg1 ;
-(void*)_cellAssertion;
-(void)set_cellAssertion:(void*)arg1 ;
-(int)_applySkipCount;
-(void)set_applySkipCount:(int)arg1 ;
-(BOOL)shouldBringUpDataContext;
-(void)setShouldBringUpDataContext:(BOOL)arg1 ;
-(BOOL)dataContextActive;
-(void)setDataContextActive:(BOOL)arg1 ;
-(void)airplaneModeChanged;
-(BOOL)isWiFiEnabled;
-(void)setRegistered:(BOOL)arg1 ;
-(BOOL)isAirplaneModeEnabled;
-(void)setLock:(NSRecursiveLock *)arg1 ;
-(BOOL)registered;
@end

