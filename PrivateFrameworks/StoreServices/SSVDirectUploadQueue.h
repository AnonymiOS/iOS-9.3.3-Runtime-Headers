/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:34 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, SSXPCConnection, NSHashTable, NSArray, NSMutableArray;

@interface SSVDirectUploadQueue : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	int _daemonLaunchToken;
	SSXPCConnection* _inboundConnection;
	NSObject*<OS_dispatch_queue> _observerQueue;
	NSHashTable* _observers;
	SSXPCConnection* _outboundConnection;
	NSArray* _uploadKinds;
	NSMutableArray* _uploads;

}

@property (copy,readonly) NSArray * uploadKinds; 
-(void)_establishInboundConnection;
-(void)_sendSimpleMessage:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)_outboundConnection;
-(void)_handleInboundMessage:(id)arg1 connection:(id)arg2 ;
-(void)_sendObserversUploadsDidChange;
-(void)_handleAddUploadsMessage:(id)arg1 ;
-(void)_handleChangeUploadsMessage:(id)arg1 ;
-(void)_handleRemoveUploadsMessage:(id)arg1 ;
-(void)cancelAllUploadsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)pauseAllUploadsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)resumeAllUploadsWithCompletionBlock:(/*^block*/id)arg1 ;
-(NSArray *)uploadKinds;
-(void)dealloc;
-(id)init;
-(id)initWithUploadKinds:(id)arg1 ;
-(void)addUploadObserver:(id)arg1 ;
-(void)removeUploadObserver:(id)arg1 ;
-(void)getUploadsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)cancelUploads:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)pauseUploads:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)resumeUploads:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end

