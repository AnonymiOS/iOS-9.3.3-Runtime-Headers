/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:56 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMMessageReceiver.h>

@protocol OS_dispatch_queue;
@class NSObject, HMXpcClient, HMMessageDispatcher, NSUUID, NSString;

@interface HMClientConnection : NSObject <HMMessageReceiver> {

	NSObject*<OS_dispatch_queue> _clientQueue;
	HMXpcClient* _xpcClient;
	HMMessageDispatcher* _msgDispatcher;
	NSUUID* _uuid;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                      //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,retain) HMXpcClient * xpcClient;                                         //@synthesize xpcClient=_xpcClient - In the implementation block
@property (nonatomic,retain) HMMessageDispatcher * msgDispatcher;                             //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                                   //@synthesize uuid=_uuid - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
-(void)_registerToDaemon;
-(void)dealloc;
-(id)init;
-(void)_start;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(HMXpcClient *)xpcClient;
-(void)setXpcClient:(HMXpcClient *)arg1 ;
-(void)_reportResultsTohandler:(/*^block*/id)arg1 ;
-(id)initWithNoValidation;
-(void)sendSiriCommand:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(HMMessageDispatcher *)msgDispatcher;
-(void)setMsgDispatcher:(HMMessageDispatcher *)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(NSObject*<OS_dispatch_queue>)clientQueue;
@end

