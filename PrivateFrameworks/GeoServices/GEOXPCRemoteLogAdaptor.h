/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:05 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEOBaseLogAdaptor.h>
#import <libobjc.A.dylib/PBRequesterDelegate.h>

@protocol OS_dispatch_queue;
@class NSURL, NSString, NSLock, GEOLogMessageCacheManager, GEORequester, NSObject;

@interface GEOXPCRemoteLogAdaptor : GEOBaseLogAdaptor <PBRequesterDelegate> {

	NSURL* _remoteURL;
	NSString* _debugRequestName;
	NSLock* _xpcActivityInfoLock;
	NSString* _logMessageCacheFilePath;
	GEOLogMessageCacheManager* _logMessageCacheManager;
	GEORequester* _logMessageCollectionRequester;
	NSLock* _logMessageCollectionRequesterLock;
	NSObject*<OS_dispatch_queue> _logMessageSendQueue;
	NSString* _adaptorIdentifier;
	NSString* _xpcActivityName;

}

@property (nonatomic,retain) NSURL * remoteURL;                              //@synthesize remoteURL=_remoteURL - In the implementation block
@property (nonatomic,retain) NSString * debugRequestName;                    //@synthesize debugRequestName=_debugRequestName - In the implementation block
@property (assign,nonatomic) long long xpcActivityTriggerCount; 
@property (readonly) NSString * adaptorIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)_deviceLocking;
-(void)requesterDidFinish:(id)arg1 ;
-(void)requester:(id)arg1 didFailWithError:(id)arg2 ;
-(void)requesterDidCancel:(id)arg1 ;
-(void)setDebugRequestName:(NSString *)arg1 ;
-(NSString *)debugRequestName;
-(void)_setupLogMessageCache;
-(long long)xpcActivityTriggerCount;
-(void)setXpcActivityTriggerCount:(long long)arg1 ;
-(void)incrementXpcActivityTriggerCount;
-(void)_registerXPCActivityTimer;
-(void)_beginSendingLogMessageChunks;
-(void)setRemoteURL:(NSURL *)arg1 ;
-(long long)_sizeOfLogMessageRequest:(id)arg1 ;
-(void)_initializeAdaptor;
-(void)flushLogs;
-(void)_setupXPCActivity;
-(void)_unregisterXPCActivityTimer;
-(NSURL *)remoteURL;
-(void)_purgeExpiredLogMessagesFromCache;
-(void)_requesterDidCompleteHandler:(id)arg1 ;
-(NSString *)adaptorIdentifier;
-(BOOL)_isLogMessageCollectionRequesterPending;
-(BOOL)_useInMemoryLogMessageCache;
-(id)initWithRemoteURL:(id)arg1 debugRequestName:(id)arg2 supportedTypes:(id)arg3 supportedSubTypes:(id)arg4 ;
-(void)_sendLogMessageRequest:(id)arg1 ;
-(void)_purgeAndSendLogMessages;
-(void)_requesterStartSend;
-(void)queueLogMessage:(id)arg1 ;
-(void)_queueNextLogMessagesChunkForSending;
-(void)_setupQueueAndNotifications;
-(void)_cleanupLogMessageCollectionRequester;
-(void)_deviceUnlocked;
-(BOOL)isLogFrameworkAdaptor;
-(void)_sendNextLogMessageChunk;
@end

