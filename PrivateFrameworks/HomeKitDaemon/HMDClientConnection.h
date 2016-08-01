/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:44 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMMessageReceiver.h>

@protocol OS_dispatch_queue;
@class NSObject, HMMessageDispatcher, HMDHomeManager, NSMutableArray, NSString, NSUUID;

@interface HMDClientConnection : NSObject <HMMessageReceiver> {

	NSObject*<OS_dispatch_queue> _workQueue;
	HMMessageDispatcher* _msgDispatcher;
	HMDHomeManager* _homeManager;
	NSMutableArray* _commandsBeingExecuted;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                          //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) HMMessageDispatcher * msgDispatcher;                             //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (assign,nonatomic,__weak) HMDHomeManager * homeManager;                             //@synthesize homeManager=_homeManager - In the implementation block
@property (nonatomic,retain) NSMutableArray * commandsBeingExecuted;                          //@synthesize commandsBeingExecuted=_commandsBeingExecuted - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
-(HMDHomeManager *)homeManager;
-(HMMessageDispatcher *)msgDispatcher;
-(void)setMsgDispatcher:(HMMessageDispatcher *)arg1 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_registerForMessages;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)setHomeManager:(HMDHomeManager *)arg1 ;
-(void)_handleSiriCommand:(id)arg1 ;
-(void)_handleDaemonRequest:(id)arg1 ;
-(NSMutableArray *)commandsBeingExecuted;
-(id)initWithHomeManager:(id)arg1 queue:(id)arg2 messageDispatcher:(id)arg3 ;
-(void)setCommandsBeingExecuted:(NSMutableArray *)arg1 ;
@end
