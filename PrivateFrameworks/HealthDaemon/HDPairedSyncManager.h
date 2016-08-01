/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:42 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PSYSyncCoordinatorDelegate.h>
#import <libobjc.A.dylib/HDDiagnosticObject.h>

@protocol OS_dispatch_queue;
@class PSYSyncCoordinator, HDDaemon, NSObject, NSHashTable, NSString;

@interface HDPairedSyncManager : NSObject <PSYSyncCoordinatorDelegate, HDDiagnosticObject> {

	PSYSyncCoordinator* _pairedSyncCoordinator;
	HDDaemon* _daemon;
	NSObject*<OS_dispatch_queue> _queue;
	NSHashTable* _unfinishedSyncSessions;

}

@property (readonly) PSYSyncCoordinator * syncCoordinator; 
@property (nonatomic,retain) PSYSyncCoordinator * pairedSyncCoordinator;              //@synthesize pairedSyncCoordinator=_pairedSyncCoordinator - In the implementation block
@property (assign,nonatomic,__weak) HDDaemon * daemon;                                //@synthesize daemon=_daemon - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                      //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSHashTable * unfinishedSyncSessions;                    //@synthesize unfinishedSyncSessions=_unfinishedSyncSessions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)syncCoordinatorWithServiceName:(id)arg1 ;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(HDDaemon *)daemon;
-(id)initWithDaemon:(id)arg1 queue:(id)arg2 ;
-(BOOL)permitSynchronization;
-(id)diagnosticDescription;
-(void)setDaemon:(HDDaemon *)arg1 ;
-(id)_typeStringForSyncSession:(id)arg1 ;
-(void)_queue_didSendRestoreMessagesForSession:(id)arg1 error:(id)arg2 ;
-(void)_queue_didFinishRestoreForSession:(id)arg1 error:(id)arg2 ;
-(void)_queue_pairedSyncDidStartWithSession:(id)arg1 ;
-(id)_syncRestrictionString;
-(void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2 ;
-(void)syncCoordinator:(id)arg1 didInvalidateSyncSession:(id)arg2 ;
-(void)syncCoordinatorDidChangeSyncRestriction:(id)arg1 ;
-(PSYSyncCoordinator *)syncCoordinator;
-(PSYSyncCoordinator *)pairedSyncCoordinator;
-(void)setPairedSyncCoordinator:(PSYSyncCoordinator *)arg1 ;
-(NSHashTable *)unfinishedSyncSessions;
-(void)setUnfinishedSyncSessions:(NSHashTable *)arg1 ;
@end

