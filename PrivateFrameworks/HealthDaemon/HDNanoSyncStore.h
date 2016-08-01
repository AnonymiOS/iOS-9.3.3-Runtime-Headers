/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:43 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NRDevicePropertyObserver.h>
#import <libobjc.A.dylib/HDSyncStore.h>

@protocol HDNanoSyncStoreDelegate;
@class NSString, HDNanoPairingEntity, NSMutableDictionary, NSMutableArray, NSUUID, NSDate, NSError, HDNanoSyncRestoreSession, HDDaemon, IDSDevice, NRDevice;

@interface HDNanoSyncStore : NSObject <NRDevicePropertyObserver, HDSyncStore> {

	NSString* _remoteSystemBuildVersion;
	NSString* _remoteProductType;
	HDNanoPairingEntity* _pairingEntity;
	NSMutableDictionary* _pendingRequestContexts;
	int _protocolVersion;
	BOOL _active;
	BOOL _invalidated;
	NSMutableArray* _incomingSyncObserverTimers;
	NSUUID* _lastIncompleteIncomingSyncUUID;
	NSDate* _lastIncompleteIncomingSyncDate;
	NSDate* _lastCompleteIncomingSyncDate;
	NSError* _lastCompleteIncomingSyncError;
	BOOL _master;
	BOOL _needsSyncOnUnlock;
	id<HDNanoSyncStoreDelegate> _delegate;
	long long _restoreState;
	HDNanoSyncRestoreSession* _restoreSession;
	HDDaemon* _daemon;
	IDSDevice* _identityServicesDevice;
	NRDevice* _nanoRegistryDevice;

}

@property (readonly) NSUUID * nanoRegistryUUID; 
@property (copy,readonly) NSString * remoteSystemBuildVersion; 
@property (copy,readonly) NSString * sourceBundleIdentifier; 
@property (readonly) int protocolVersion; 
@property (getter=isActive,readonly) BOOL active; 
@property (getter=isMaster,readonly) BOOL master;                                          //@synthesize master=_master - In the implementation block
@property (copy,readonly) NSString * deviceName; 
@property (readonly) NSDate * lastInactiveDate; 
@property (assign,nonatomic,__weak) id<HDNanoSyncStoreDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (readonly) IDSDevice * device; 
@property (nonatomic,retain) NSUUID * persistentUUID; 
@property (nonatomic,retain) NSUUID * healthUUID; 
@property (getter=isRestoreComplete,nonatomic,readonly) BOOL restoreComplete; 
@property (nonatomic,readonly) long long restoreState;                                     //@synthesize restoreState=_restoreState - In the implementation block
@property (nonatomic,readonly) HDNanoSyncRestoreSession * restoreSession;                  //@synthesize restoreSession=_restoreSession - In the implementation block
@property (assign,nonatomic) BOOL needsSyncOnUnlock;                                       //@synthesize needsSyncOnUnlock=_needsSyncOnUnlock - In the implementation block
@property (getter=isInvalidated,readonly) BOOL invalidated; 
@property (assign,nonatomic,__weak) HDDaemon * daemon;                                     //@synthesize daemon=_daemon - In the implementation block
@property (nonatomic,retain) IDSDevice * identityServicesDevice;                           //@synthesize identityServicesDevice=_identityServicesDevice - In the implementation block
@property (nonatomic,retain) NRDevice * nanoRegistryDevice;                                //@synthesize nanoRegistryDevice=_nanoRegistryDevice - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)nanoSyncStoreWithDevice:(id)arg1 delegate:(id)arg2 daemon:(id)arg3 error:(id*)arg4 ;
+(id)_observedDeviceProperties;
+(id)orderedSyncEntitiesForProtocolVersion:(int)arg1 companion:(BOOL)arg2 ;
+(id)_bondiVersionSyncEntityClassesForCompanion:(BOOL)arg1 ;
+(id)_coralVersionSyncEntityClassesForCompanion:(BOOL)arg1 ;
+(id)restoreSyncEntitiesForProtocolVersion:(int)arg1 ;
+(id)_orderedNanoSyncEntitiesForProtocolVersion:(int)arg1 direction:(unsigned long long)arg2 ;
-(void)setDelegate:(id<HDNanoSyncStoreDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id<HDNanoSyncStoreDelegate>)delegate;
-(BOOL)isActive;
-(void)invalidate;
-(int)protocolVersion;
-(BOOL)isMaster;
-(long long)syncProvenance;
-(HDDaemon *)daemon;
-(BOOL)needsSyncOnUnlock;
-(void)setNeedsSyncOnUnlock:(BOOL)arg1 ;
-(void)configureOutgoingResponse:(id)arg1 ;
-(IDSDevice *)device;
-(BOOL)isInvalidated;
-(NSString *)sourceBundleIdentifier;
-(long long)restoreState;
-(HDNanoSyncRestoreSession *)restoreSession;
-(NSUUID *)nanoRegistryUUID;
-(void)removeExpiredIncomingSyncObservers;
-(void)addIncomingSyncObserverWithTimeout:(double)arg1 timeoutHandler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)finishRestoreSessionWithError:(id)arg1 ;
-(void)setHealthUUID:(NSUUID *)arg1 ;
-(id)beginRestoreSessionWithUUID:(id)arg1 timeout:(double)arg2 timeoutHandler:(/*^block*/id)arg3 ;
-(id)restoreSyncEntities;
-(BOOL)validateVersionWithIncomingMessage:(id)arg1 ;
-(NSUUID *)persistentUUID;
-(NSUUID *)healthUUID;
-(void)setPersistentUUID:(NSUUID *)arg1 ;
-(BOOL)validatePairingUUIDsWithIncomingMessage:(id)arg1 ;
-(void)didReceiveRequestWithChangeSet:(id)arg1 ;
-(BOOL)isRestoreComplete;
-(NSDate *)lastInactiveDate;
-(BOOL)supportsSpeculativeChangesForSyncEntityClass:(Class)arg1 ;
-(id)createRequestWithMessageID:(unsigned short)arg1 ;
-(void)addPendingRequestContext:(id)arg1 forUUID:(id)arg2 ;
-(id)pendingRequestContextForUUID:(id)arg1 ;
-(void)removePendingRequestContextForUUID:(id)arg1 ;
-(NSString *)deviceName;
-(id)diagnosticDescription;
-(void)setDaemon:(HDDaemon *)arg1 ;
-(id)syncStoreDefaultSourceBundleIdentifier;
-(id)syncStoreIdentifier;
-(Class)receivingSyncEntityClassForIncomingClass:(Class)arg1 ;
-(id)orderedSyncEntities;
-(BOOL)enforceSyncEntityOrdering;
-(id)_initWithIdentityServicesDevice:(id)arg1 nanoRegistryDevice:(id)arg2 pairingEntity:(id)arg3 protocolVersion:(int)arg4 delegate:(id)arg5 daemon:(id)arg6 ;
-(BOOL)_savePairingEntity;
-(void)_setRestoreState:(long long)arg1 ;
-(void)_notifyIncomingSyncObservers;
-(NRDevice *)nanoRegistryDevice;
-(NSString *)remoteSystemBuildVersion;
-(void)device:(id)arg1 propertyDidChange:(id)arg2 fromValue:(id)arg3 ;
-(id)remoteProductType;
-(id)syncStoreDefaultSourceUUID;
-(IDSDevice *)identityServicesDevice;
-(void)setIdentityServicesDevice:(IDSDevice *)arg1 ;
-(void)setNanoRegistryDevice:(NRDevice *)arg1 ;
@end

