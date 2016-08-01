/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:47 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NanoBackup.framework/NanoBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection;

@interface NBManager : NSObject {

	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_queue> _externalQueue;
	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;              //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> externalQueue;              //@synthesize externalQueue=_externalQueue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;                         //@synthesize xpcConnection=_xpcConnection - In the implementation block
+(id)deviceForPairingID:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)initWithQueue:(id)arg1 ;
-(id)connection;
-(void)unsafe_invalidate;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(void)listBackupsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)createBackupForPairingID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)restoreFromBackup:(id)arg1 forDevice:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)createBackupForDevice:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)restoreFromDevice:(id)arg1 forDevice:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)deleteBackup:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)restoreFromBackup:(id)arg1 forPairingID:(id)arg2 pairingDataStore:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSObject*<OS_dispatch_queue>)externalQueue;
-(void)setExternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

