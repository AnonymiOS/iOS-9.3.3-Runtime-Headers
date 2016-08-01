/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:48 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/NPKTransientPassAssertionConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class NSXPCListener, NSMutableSet, NSObject, NSMutableArray, BKSApplicationStateMonitor, NSString;

@interface NPKTransientPassAssertionServer : NSObject <NSXPCListenerDelegate, NPKTransientPassAssertionConnectionDelegate> {

	NSXPCListener* _xpcListener;
	NSMutableSet* _connections;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _transientPaymentRequests;
	BKSApplicationStateMonitor* _appStateMonitor;

}

@property (nonatomic,retain) NSXPCListener * xpcListener;                               //@synthesize xpcListener=_xpcListener - In the implementation block
@property (nonatomic,retain) NSMutableSet * connections;                                //@synthesize connections=_connections - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                        //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableArray * transientPaymentRequests;                 //@synthesize transientPaymentRequests=_transientPaymentRequests - In the implementation block
@property (nonatomic,retain) BKSApplicationStateMonitor * appStateMonitor;              //@synthesize appStateMonitor=_appStateMonitor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSMutableSet *)connections;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BKSApplicationStateMonitor *)appStateMonitor;
-(void)setAppStateMonitor:(BKSApplicationStateMonitor *)arg1 ;
-(NSXPCListener *)xpcListener;
-(void)setXpcListener:(NSXPCListener *)arg1 ;
-(void)setConnections:(NSMutableSet *)arg1 ;
-(void)connectionDied:(id)arg1 ;
-(void)handleNewConnection:(id)arg1 ;
-(void)connection:(id)arg1 hasNewTransientPassRequest:(id)arg2 ;
-(void)_handleAppStateChangeWithStateDictionary:(id)arg1 ;
-(NSMutableArray *)transientPaymentRequests;
-(id)transientPassUniqueID;
-(void)setTransientPaymentRequests:(NSMutableArray *)arg1 ;
@end

