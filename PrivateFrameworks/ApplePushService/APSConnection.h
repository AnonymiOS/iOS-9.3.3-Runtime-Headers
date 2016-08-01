/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:12 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source, OS_xpc_object;
#import <ApplePushService/ApplePushService-Structs.h>
@class CUTWeakReference, NSObject, NSString, NSData, NSArray, NSMutableDictionary, NSMutableArray;

@interface APSConnection : NSObject {

	CUTWeakReference* _delegateReference;
	NSObject*<OS_dispatch_queue> _ivarQueue;
	NSString* _environmentName;
	NSData* _publicToken;
	unsigned long long _messageSize;
	unsigned long long _largeMessageSize;
	NSString* _connectionPortName;
	unsigned _connectionPort;
	NSArray* _enabledTopics;
	NSArray* _ignoredTopics;
	NSArray* _opportunisticTopics;
	BOOL _enableCriticalReliability;
	BOOL _enableStatusNotifications;
	BOOL _isConnected;
	BOOL _usesAppLaunchStats;
	NSMutableDictionary* _idsToOutgoingMessages;
	unsigned long long _nextOutgoingMessageID;
	NSObject*<OS_dispatch_queue> _machQueue;
	NSObject*<OS_dispatch_source> _mach_source;
	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	BOOL _everHadDelegate;
	NSMutableArray* _queuedDelegateBlocks;

}

@property (nonatomic,retain,readonly) NSData * publicToken; 
@property (assign,nonatomic) unsigned long long messageSize; 
@property (assign,nonatomic) unsigned long long largeMessageSize; 
@property (assign,nonatomic) id<APSConnectionDelegate> delegate; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;              //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> ivarQueue;                  //@synthesize ivarQueue=_ivarQueue - In the implementation block
@property (assign,nonatomic) BOOL usesAppLaunchStats; 
+(void)_safelyCancelAndReleaseAfterBarrierConnection:(id)arg1 ;
+(void)_safelyCancelAndReleaseConnection:(id)arg1 ;
+(void)_blockingXPCCallWithArgumentBlock:(/*^block*/id)arg1 resultHandler:(/*^block*/id)arg2 ;
+(void)_setTokenState;
+(BOOL)isValidEnvironment:(id)arg1 ;
+(double)serverTime;
+(void)requestCourierConnection;
+(void)invalidateDeviceIdentity;
+(id)connectionsDebuggingState;
+(SecIdentityRef)copyIdentity;
+(double)keepAliveIntervalForEnvironmentName:(id)arg1 ;
+(void)notifySafeToSendFilter;
-(void)_disconnect;
-(void)_callDelegateOnIvarQueueWithBlock:(/*^block*/id)arg1 ;
-(void)setDelegate:(id<APSConnectionDelegate>)arg1 ;
-(void)dealloc;
-(id<APSConnectionDelegate>)delegate;
-(unsigned long long)messageSize;
-(void)setMessageSize:(unsigned long long)arg1 ;
-(void)_cancelConnection;
-(void)_connectIfNecessaryOnIvarQueue;
-(void)_disconnectOnIvarQueue;
-(void)_shutdownOnIvarQueue;
-(void)_shutdownFromDealloc;
-(void)setEnableStatusNotifications:(BOOL)arg1 ;
-(void)_noteDisconnectedFromDaemonOnIvarQueue;
-(void)_deliverOutgoingMessageResultWithID:(unsigned long long)arg1 error:(id)arg2 ;
-(void)_addEnableCriticalReliabilityToXPCMessage:(id)arg1 ;
-(void)_addEnableStatusNotificationsToXPCMessage:(id)arg1 ;
-(void)_addUsesAppLaunchStatsToXPCMessage:(id)arg1 ;
-(void)_setEnabledTopics:(id)arg1 ignoredTopics:(id)arg2 opportunisticTopics:(id)arg3 sendToDaemon:(BOOL)arg4 ;
-(void)_setEnableCriticalReliability:(BOOL)arg1 sendToDaemon:(BOOL)arg2 ;
-(void)_setUsesAppLaunchStats:(BOOL)arg1 sendToDaemon:(BOOL)arg2 ;
-(void)_setEnableStatusNotifications:(BOOL)arg1 sendToDaemon:(BOOL)arg2 ;
-(void)setLargeMessageSize:(unsigned long long)arg1 ;
-(void)_deliverDidReconnectOnIvarQueue;
-(void)_deliverPublicTokenOnIvarQueue:(id)arg1 ;
-(void)_deliverConnectionStatusChange:(BOOL)arg1 ;
-(void)_cancelConnectionOnIvarQueue;
-(void)_handleEvent:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_onIvarQueue_setEnabledTopics:(id)arg1 ignoredTopics:(id)arg2 opportunisticTopics:(id)arg3 sendToDaemon:(BOOL)arg4 ;
-(id)_listForIdentifierOnIvarQueue:(unsigned long long)arg1 ;
-(void)_sendOutgoingMessage:(id)arg1 fake:(BOOL)arg2 ;
-(void)_disconnectFromDealloc;
-(id)ignoredTopics;
-(id)opportunisticTopics;
-(BOOL)usesAppLaunchStats;
-(void)_deliverMessage:(id)arg1 ;
-(void)_deliverPublicToken:(id)arg1 ;
-(void)_deliverConnectionStatusFromDealloc:(BOOL)arg1 ;
-(void)_deliverToken:(id)arg1 forTopic:(id)arg2 identifier:(id)arg3 ;
-(BOOL)hasIdentity;
-(void)sendFakeMessage:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)ivarQueue;
-(id)initWithEnvironmentName:(id)arg1 ;
-(void)cancelOutgoingMessage:(id)arg1 ;
-(void)sendOutgoingMessage:(id)arg1 ;
-(unsigned long long)largeMessageSize;
-(void)_connectIfNecessary;
-(void)shutdown;
-(void)setEnabledTopics:(id)arg1 ignoredTopics:(id)arg2 ;
-(void)setEnableCriticalReliability:(BOOL)arg1 ;
-(id)initWithEnvironmentName:(id)arg1 namedDelegatePort:(id)arg2 ;
-(void)removeFromRunLoop;
-(id)initWithEnvironmentName:(id)arg1 queue:(id)arg2 ;
-(BOOL)isConnected;
-(void)setEnabledTopics:(id)arg1 ignoredTopics:(id)arg2 opportunisticTopics:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(id)initWithEnvironmentName:(id)arg1 namedDelegatePort:(id)arg2 queue:(id)arg3 ;
-(NSData *)publicToken;
-(id)enabledTopics;
-(void)requestTokenForTopic:(id)arg1 identifier:(id)arg2 ;
-(void)invalidateTokenForTopic:(id)arg1 identifier:(id)arg2 ;
-(void)setEnabledTopics:(id)arg1 ;
-(void)scheduleInRunLoop:(id)arg1 ;
-(void)moveTopic:(id)arg1 fromList:(unsigned long long)arg2 toList:(unsigned long long)arg3 ;
-(void)setUsesAppLaunchStats:(BOOL)arg1 ;
@end

