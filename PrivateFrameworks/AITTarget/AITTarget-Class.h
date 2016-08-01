/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:18 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AITTarget.framework/AITTarget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AITTarget/AITTarget-Structs.h>
#import <AITTarget/AITXPCConnectionDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSMutableDictionary, AITXPCConnection, NSObject, NSMutableArray, NSString;

@interface AITTarget : NSObject <AITXPCConnectionDelegate> {

	int _notifyToken;
	NSMutableDictionary* _observerRecords;
	AITXPCConnection* _xpcConnection;
	NSObject*<OS_dispatch_queue> _clientQueue;
	double _startTime;
	NSMutableArray* _queuedProbes;
	NSObject*<OS_dispatch_queue> _rpcDispatchQueue;
	NSString* _rpcSelectorPrefix;
	id _rpcTarget;
	NSObject*<OS_dispatch_source> _watchdogSource;

}

@property (nonatomic,retain) id rpcTarget; 
@property (nonatomic,copy) NSString * rpcSelectorPrefix; 
@property (assign,nonatomic) NSObject*<OS_dispatch_queue> rpcDispatchQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedTarget;
-(id)init;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)_probeIsEnabled:(id)arg1 ;
-(void)_fireProbe:(id)arg1 withArgumentDictionary:(id)arg2 ;
-(void)_probeBarrier:(/*^block*/id)arg1 ;
-(BOOL)_appIsWhitelisted;
-(void)_setupWatchdog;
-(void)_flushQueuedProbes;
-(void)_setupXPCConnectionIfNeeded;
-(id)_rpcTarget;
-(void)_sendAckForToken:(id)arg1 success:(BOOL)arg2 returnValue:(id)arg3 details:(id)arg4 ;
-(void)xpcConnection:(id)arg1 receivedMessage:(id)arg2 userInfo:(id)arg3 ;
-(void)xpcConnectionUnhandledMessage:(id)arg1 ;
-(void)xpcConnectionFailed:(id)arg1 ;
-(void)removeObserver:(id)arg1 forMessage:(id)arg2 ;
-(void)setRpcTarget:(id)arg1 ;
-(id)rpcTarget;
-(void)setRpcSelectorPrefix:(NSString *)arg1 ;
-(NSString *)rpcSelectorPrefix;
-(void)setRpcDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)rpcDispatchQueue;
-(void)addObserver:(id)arg1 forMessage:(id)arg2 dispatchQueue:(id)arg3 block:(/*^block*/id)arg4 ;
@end

