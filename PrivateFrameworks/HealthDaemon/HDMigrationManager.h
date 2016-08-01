/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:41 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDContentProtectionObserver.h>
#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>

@protocol OS_dispatch_queue;
@class HDDaemon, NSObject, NSString;

@interface HDMigrationManager : NSObject <HDContentProtectionObserver, HDHealthDaemonReadyObserver> {

	BOOL _needsProtectedDataMigration;
	HDDaemon* _daemon;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign,nonatomic,__weak) HDDaemon * daemon;                        //@synthesize daemon=_daemon - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) BOOL needsProtectedDataMigration;                //@synthesize needsProtectedDataMigration=_needsProtectedDataMigration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(HDDaemon *)daemon;
-(void)performMigrationWithCompletion:(/*^block*/id)arg1 ;
-(void)daemonReady:(id)arg1 ;
-(void)setDaemon:(HDDaemon *)arg1 ;
-(id)initWithDaemon:(id)arg1 ;
-(void)contentProtectionStateChanged:(long long)arg1 previousState:(long long)arg2 ;
-(void)_queue_performMigrationWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)needsProtectedDataMigration;
-(void)setNeedsProtectedDataMigration:(BOOL)arg1 ;
@end

