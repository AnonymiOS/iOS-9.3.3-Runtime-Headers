/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:42 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDDatabaseProtectedDataObserver.h>
#import <libobjc.A.dylib/HDDiagnosticObject.h>
#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, HDDaemon, NSString;

@interface HDServiceConnectionManager : NSObject <HDDatabaseProtectedDataObserver, HDDiagnosticObject, HDHealthDaemonReadyObserver> {

	BOOL _connecting;
	BOOL _BTLEEnabled;
	NSMutableDictionary* _activeServices;
	NSObject*<OS_dispatch_queue> _deviceQueue;
	HDDaemon* _daemon;

}

@property (assign,nonatomic,__weak) HDDaemon * daemon;              //@synthesize daemon=_daemon - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_transactionName:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(HDDaemon *)daemon;
-(id)diagnosticDescription;
-(void)daemonReady:(id)arg1 ;
-(void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2 ;
-(void)setDaemon:(HDDaemon *)arg1 ;
-(id)initWithDaemon:(id)arg1 ;
-(void)disconnectFromServices;
-(void)_connectToServices;
-(void)_disconnectFromServices;
-(void)_disconnectFromService:(id)arg1 ;
-(void)_connectToService:(id)arg1 ;
-(void)_handleBluetoothUpdates:(long long)arg1 ;
-(void)_subscribeBluetoothStateUpdates;
-(void)reconnectToServices;
-(void)disconnectFromService:(id)arg1 ;
-(void)connectToService:(id)arg1 ;
@end

