/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:34 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/BRCProcessMonitorDelegate.h>
#import <libobjc.A.dylib/BRCForegroundClient.h>

@class BRCClientPrivilegesDescriptor, BRCAccountSession, NSCountedSet, NSOperationQueue, NSMutableDictionary, brc_task_tracker, NSXPCConnection, NSString, NSSet;

@interface BRCXPCClient : NSObject <BRCProcessMonitorDelegate, BRCForegroundClient> {

	BRCClientPrivilegesDescriptor* _clientPriviledgesDescriptor;
	BRCAccountSession* _session;
	BOOL _dieOnInvalidate;
	unsigned _isForeground : 1;
	unsigned _invalidated : 1;
	int _clientPid;
	SCD_Struct_BR20 auditToken;
	NSCountedSet* _containers;
	NSOperationQueue* _acceptOperationQueue;
	NSMutableDictionary* _runningAcceptOperations;
	brc_task_tracker* _tracker;
	BOOL _isUsingUbiquity;
	NSXPCConnection* _connection;

}

@property (nonatomic,readonly) NSString * defaultContainerID; 
@property (nonatomic,readonly) NSSet * entitledContainerIDs; 
@property (nonatomic,readonly) NSString * bundleID; 
@property (assign,nonatomic) BOOL isUsingUbiquity;                                      //@synthesize isUsingUbiquity=_isUsingUbiquity - In the implementation block
@property (nonatomic,readonly) BOOL hasPrivateSharingInterfaceEntitlement; 
@property (nonatomic,__weak,readonly) NSXPCConnection * connection;                     //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) BOOL dieOnInvalidate;                                    //@synthesize dieOnInvalidate=_dieOnInvalidate - In the implementation block
@property (nonatomic,retain) BRCAccountSession * session;                               //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * identifier; 
-(NSString *)description;
-(void)invalidate;
-(NSString *)identifier;
-(char)cloudEnabledStatus;
-(NSXPCConnection *)connection;
-(NSString *)bundleID;
-(BRCAccountSession *)session;
-(void)setSession:(BRCAccountSession *)arg1 ;
-(void)dumpToContext:(id)arg1 ;
-(void)addContainer:(id)arg1 ;
-(BOOL)hasPrivateSharingInterfaceEntitlement;
-(void)removeContainer:(id)arg1 ;
-(NSSet *)entitledContainerIDs;
-(void)setPrivilegesDescriptor:(id)arg1 ;
-(BOOL)dieOnInvalidate;
-(BOOL)isUsingUbiquity;
-(void)_stopMonitoringProcess;
-(BOOL)_isAutomationEntitled;
-(void)process:(int)arg1 didBecomeForeground:(BOOL)arg2 ;
-(void)_startMonitoringProcessIfNeeded;
-(BOOL)_hasPrivateIPCEntitlementForSelector:(SEL)arg1 error:(id*)arg2 ;
-(BOOL)_isContainerProxyEntitled;
-(BOOL)_hasAccessToContainerID:(id)arg1 error:(id*)arg2 ;
-(BOOL)_canCreateContainerWithID:(id)arg1 error:(id*)arg2 ;
-(BOOL)_isContainerProxyWithError:(id*)arg1 ;
-(void)accessLogicalOrPhysicalURL:(id)arg1 needsWrite:(BOOL)arg2 asynchronously:(BOOL)arg3 handler:(/*^block*/id)arg4 ;
-(BOOL)_entitlementBooleanValueForKey:(id)arg1 ;
-(id)_entitlementValueForKey:(id)arg1 ofClass:(Class)arg2 ;
-(NSString *)defaultContainerID;
-(BOOL)canAccessPath:(const char*)arg1 needsWrite:(BOOL)arg2 ;
-(void)_startDownloadItemsAtURLs:(id)arg1 pos:(unsigned long long)arg2 options:(unsigned long long)arg3 error:(id)arg4 reply:(/*^block*/id)arg5 ;
-(id)setupPrivateContainer:(id)arg1 root:(id)arg2 error:(id*)arg3 ;
-(BOOL)canAccessPhysicalURL:(id)arg1 ;
-(id)issueContainerExtensionForURL:(id)arg1 error:(id*)arg2 ;
-(void)_addExternalDocumentReferenceTo:(id)arg1 underParent:(id)arg2 forceReparent:(BOOL)arg3 reply:(/*^block*/id)arg4 ;
-(void)_setupContainerID:(id)arg1 andSendReply:(/*^block*/id)arg2 ;
-(id)_disabledBundleIDs;
-(void)setupNonSandboxedAccessForUbiquityContainers:(id)arg1 forBundleID:(id)arg2 ;
-(void)setIsUsingUbiquity:(BOOL)arg1 ;
-(BOOL)isSandboxed;
-(id)initWithConnection:(id)arg1 ;
-(void)wait;
@end

