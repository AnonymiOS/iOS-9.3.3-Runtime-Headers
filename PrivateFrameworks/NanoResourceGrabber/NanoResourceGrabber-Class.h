/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:49 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NanoResourceGrabber.framework/NanoResourceGrabber
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface NanoResourceGrabber : NSObject {

	BOOL _connectionMayBeValid;
	NSXPCConnection* _nrgdConnection;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSXPCConnection * nrgdConnection;                //@synthesize nrgdConnection=_nrgdConnection - In the implementation block
@property (assign) BOOL connectionMayBeValid;                                 //@synthesize connectionMayBeValid=_connectionMayBeValid - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
+(id)sharedInstance;
+(BOOL)isFirstParty:(id)arg1 ;
+(id)firstPartyBundleIDs;
-(void)dealloc;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)connectionMayBeValid;
-(void)setConnectionMayBeValid:(BOOL)arg1 ;
-(NSXPCConnection *)nrgdConnection;
-(void)setNrgdConnection:(NSXPCConnection *)arg1 ;
-(id)connectToService;
-(void)getCachedIconForBundleID:(id)arg1 iconVariant:(int)arg2 outIconImage:(id*)arg3 updateBlock:(/*^block*/id)arg4 timeout:(double)arg5 ;
-(void)getCachedIconForBundleID:(id)arg1 iconVariant:(int)arg2 outIconImage:(id*)arg3 updateBlock:(/*^block*/id)arg4 ;
-(id)_getCachedIconForBundleID:(id)arg1 iconVariant:(int)arg2 ;
-(void)_setCachedIcon:(id)arg1 forIconVariant:(int)arg2 inBundleID:(id)arg3 ;
-(void)_getLocalIconForBundleID:(id)arg1 iconVariant:(int)arg2 block:(/*^block*/id)arg3 withTimeout:(double)arg4 ;
-(void)getRemoteIconForBundleIDThread:(id)arg1 iconVariant:(int)arg2 block:(/*^block*/id)arg3 timeout:(double)arg4 ;
-(void)getIconForBundleID:(id)arg1 iconVariant:(int)arg2 block:(/*^block*/id)arg3 timeout:(double)arg4 ;
-(void)getRemoteIconForBundleID:(id)arg1 iconVariant:(int)arg2 block:(/*^block*/id)arg3 timeout:(double)arg4 ;
-(id)grabIconForBundleID:(id)arg1 iconVariant:(int)arg2 updateBlock:(/*^block*/id)arg3 ;
@end

