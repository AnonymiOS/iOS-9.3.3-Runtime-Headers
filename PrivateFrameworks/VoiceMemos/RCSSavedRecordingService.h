/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:15 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <libobjc.A.dylib/RCSSavedRecordingServiceClientProtocol.h>
#import <libobjc.A.dylib/RCSSavedRecordingServiceProtocol.h>

@protocol OS_dispatch_queue, RCSSavedRecordingServiceProtocol;
@class NSObject, NSXPCConnection, NSMutableDictionary, NSSet, NSString;

@interface RCSSavedRecordingService : NSObject <RCSSavedRecordingServiceClientProtocol, RCSSavedRecordingServiceProtocol> {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_queue> _completionQueue;
	int _compositionAVURLsBeingExportedDistributedNotificationToken;
	int _compositionAVURLsBeingModifiedDistributedNotificationToken;
	NSXPCConnection* _xpcConnection;
	id<RCSSavedRecordingServiceProtocol> _serviceProxy;
	NSMutableDictionary* _pendingServiceCompletionHandlers;
	NSSet* _compositionAVURLsBeingExported;
	NSSet* _compositionAVURLsBeingModified;

}

@property (nonatomic,retain) NSSet * compositionAVURLsBeingExported;              //@synthesize compositionAVURLsBeingExported=_compositionAVURLsBeingExported - In the implementation block
@property (nonatomic,retain) NSSet * compositionAVURLsBeingModified;              //@synthesize compositionAVURLsBeingModified=_compositionAVURLsBeingModified - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedService;
+(BOOL)isRunningInSavedRecordingDaemon;
-(void)dealloc;
-(id)init;
-(oneway void)clearAndReloadSearchMetadataWithCompletionBlock:(/*^block*/id)arg1 ;
-(oneway void)importRecordingWithSourceAudioURL:(id)arg1 name:(id)arg2 date:(id)arg3 importCompletionBlock:(/*^block*/id)arg4 ;
-(oneway void)updateSearchMetadataWithRecordingURIsToInsert:(id)arg1 recordingURIsToUpdate:(id)arg2 recordingURIsToDelete:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(oneway void)disableOrphanedFragmentCleanupForCompositionAVURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(oneway void)enableOrphanedFragmentCleanupForCompositionAVURL:(id)arg1 ;
-(oneway void)endAccessSessionWithToken:(id)arg1 ;
-(oneway void)prepareToCaptureToCompositionAVURL:(id)arg1 accessRequestHandler:(/*^block*/id)arg2 ;
-(oneway void)prepareToPreviewCompositionAVURL:(id)arg1 accessRequestHandler:(/*^block*/id)arg2 ;
-(oneway void)prepareToExportCompositionAVURL:(id)arg1 cacheWaveform:(BOOL)arg2 accessRequestHandler:(/*^block*/id)arg3 ;
-(oneway void)prepareToTrimCompositionAVURL:(id)arg1 accessRequestHandler:(/*^block*/id)arg2 ;
-(oneway void)removeAllUserDataWithCompletion:(/*^block*/id)arg1 ;
-(oneway void)disableOrphanHandlingWithCompletionBlock:(/*^block*/id)arg1 ;
-(oneway void)enableOrphanHandlingWithCompletionBlock:(/*^block*/id)arg1 ;
-(oneway void)fetchCompositionAVURLsBeingExported:(/*^block*/id)arg1 ;
-(oneway void)fetchCompositionAVURLsBeingModified:(/*^block*/id)arg1 ;
-(oneway void)reloadExistingSearchMetadataWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)openServiceConnection;
-(void)closeServiceConnection;
-(void)_handleCompositionAVURLsBeingExportedDidChange;
-(void)_handleCompositionAVURLsBeingModifiedDidChange;
-(void)_onQueueCloseServiceConnection;
-(void)_sendServiceMessage:(SEL)arg1 importRequestReplyBlock:(/*^block*/id)arg2 messagingBlock:(/*^block*/id)arg3 ;
-(void)_sendServiceMessage:(SEL)arg1 accessRequestReplyBlock:(/*^block*/id)arg2 messagingBlock:(/*^block*/id)arg3 ;
-(void)_sendServiceMessage:(SEL)arg1 withBasicReplyBlock:(/*^block*/id)arg2 messagingBlock:(/*^block*/id)arg3 ;
-(void)setCompositionAVURLsBeingExported:(NSSet *)arg1 ;
-(void)setCompositionAVURLsBeingModified:(NSSet *)arg1 ;
-(void)_onQueueInvalidatePendingCompletionHandlersWithError:(id)arg1 ;
-(NSNumber*)_onQueueAddPendingServiceMessageReplyBlockInvalidationHandler:(/*^block*/id)arg1 ;
-(void)_onQueueRemovePendingServiceMessageReplyBlockInvalidationHandlerForToken:(NSNumber*)arg1 ;
-(void)_sendServiceMessage:(SEL)arg1 connectionFailureReplyInfo:(id)arg2 infoAndErrorReplyHandler:(/*^block*/id)arg3 messagingBlock:(/*^block*/id)arg4 ;
-(void)_onQueueInvalidatePendingCompletionHandlerWithToken:(id)arg1 withError:(id)arg2 ;
-(NSSet *)compositionAVURLsBeingExported;
-(NSSet *)compositionAVURLsBeingModified;
-(id)serviceProxy;
@end

