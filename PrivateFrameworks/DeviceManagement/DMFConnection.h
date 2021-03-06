/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:13:05 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CATTaskClientDelegate.h>

@class CATTaskClient, CATOperationQueue, NSString;

@interface DMFConnection : NSObject <CATTaskClientDelegate> {

	CATTaskClient* mTaskClient;
	CATOperationQueue* mOperationQueue;
	BOOL mConnected;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedConnection;
-(id)init;
-(void)invalidate;
-(id)initWithServiceName:(id)arg1 ;
-(id)initWithXPCConnection:(id)arg1 ;
-(void)clientDidConnect:(id)arg1 ;
-(void)client:(id)arg1 didInterruptWithError:(id)arg2 ;
-(void)clientDidInvalidate:(id)arg1 ;
-(id)initWithTransport:(id)arg1 ;
-(id)prepareOperationForRequest:(id)arg1 ;
-(void)operationDidProgress:(id)arg1 progressBlock:(id)arg2 ;
-(void)operationDidFinish:(id)arg1 runLoop:(id)arg2 ;
-(void)runRequest:(id)arg1 progress:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(id)runRequestSync:(id)arg1 error:(id*)arg2 ;
-(id)progressForAllInflightRequests;
-(void)client:(id)arg1 didDisconnectWithError:(id)arg2 ;
@end

