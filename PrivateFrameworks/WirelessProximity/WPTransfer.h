/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:42 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/XPCClientDelegate.h>

@protocol WPTransferDelegate, OS_dispatch_queue, OS_xpc_object;
@class NSObject, XPCClient, NSString;

@interface WPTransfer : NSObject <XPCClientDelegate> {

	long long _advertiserState;
	long long _scannerState;
	id<WPTransferDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	XPCClient* _connection;
	NSObject*<OS_xpc_object> _server;

}

@property (assign) long long advertiserState;                       //@synthesize advertiserState=_advertiserState - In the implementation block
@property (assign) long long scannerState;                          //@synthesize scannerState=_scannerState - In the implementation block
@property (__weak) id<WPTransferDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (retain) XPCClient * connection;                          //@synthesize connection=_connection - In the implementation block
@property (retain) NSObject*<OS_xpc_object> server;                 //@synthesize server=_server - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<WPTransferDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id<WPTransferDelegate>)delegate;
-(NSObject*<OS_xpc_object>)server;
-(XPCClient *)connection;
-(void)setConnection:(XPCClient *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)stopAdvertising;
-(void)messageArrived:(id)arg1 ;
-(void)connectionDied;
-(void)initXPCHandler:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 machName:(id)arg3 ;
-(id)stateToString:(long long)arg1 ;
-(void)updateAdvertiserState:(long long)arg1 ;
-(void)updateScannerState:(long long)arg1 ;
-(void)setScannerState:(long long)arg1 ;
-(void)setAdvertiserState:(long long)arg1 ;
-(void)connectionInterrupted;
-(void)startScan;
-(void)setServer:(NSObject*<OS_xpc_object>)arg1 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)stopScan;
-(long long)scannerState;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 machName:(id)arg3 options:(id)arg4 ;
-(void)ignoreDevice;
-(long long)advertiserState;
-(void)startAdvertising;
@end

