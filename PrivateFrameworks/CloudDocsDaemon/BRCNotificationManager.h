/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:33 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BRCModule.h>

@protocol OS_dispatch_queue;
@class BRCAccountSession, BRCClientRanksPersistedState, NSHashTable, NSObject, BRNotificationQueue, NSMutableDictionary, BRCXPCClient, NSString;

@interface BRCNotificationManager : NSObject <BRCModule> {

	BRCAccountSession* _session;
	BRCClientRanksPersistedState* _state;
	NSHashTable* _pipes;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _cacheQueue;
	BRNotificationQueue* _notifs;
	NSMutableDictionary* _transferCache;
	BRCXPCClient* _client;
	AQ _activeAliasQueries;
	BOOL _isCancelled;

}

@property (readonly) BOOL hasActiveAliasWatchers; 
@property (nonatomic,readonly) BRCAccountSession * session;              //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL isCancelled;                           //@synthesize isCancelled=_isCancelled - In the implementation block
-(void)cancel;
-(void)suspend;
-(BOOL)isCancelled;
-(void)resume;
-(void)close;
-(BRCAccountSession *)session;
-(void)flushUpdates;
-(id)initWithAccountSession:(id)arg1 ;
-(BOOL)hasActiveAliasWatchers;
-(void)registerContainers:(id)arg1 forFlags:(unsigned long long)arg2 ;
-(void)unregisterContainers:(id)arg1 forFlags:(unsigned long long)arg2 ;
-(void)getPipeWithXPCReceiver:(id)arg1 client:(id)arg2 root:(id)arg3 reply:(/*^block*/id)arg4 ;
-(id)pipeWithReceiver:(id)arg1 root:(id)arg2 ;
-(void)queueUpdate:(id)arg1 ;
-(void)invalidatePipesWatchingContainerID:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setIsCancelled:(BOOL)arg1 ;
@end

