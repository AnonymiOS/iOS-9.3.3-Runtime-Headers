/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:22 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_xpc_object;
@class NSObject;

@interface MSService : NSObject {

	int _canceled;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	NSObject*<OS_dispatch_queue> _replyQueue;
	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_xpc_object> _responseListener;
	NSObject*<OS_xpc_object> _responseHandler;

}

@property (getter=isCanceled,readonly) BOOL canceled; 
-(void)cancel;
-(void)dealloc;
-(id)init;
-(void)stop;
-(void)start;
-(id)_connection;
-(BOOL)isCanceled;
-(BOOL)_unitTestsAreEnabled;
-(id)_generateUnitTestReplyForMethod:(id)arg1 arg:(id)arg2 error:(id*)arg3 ;
-(void)_generateUnitTestResponsesForResultArray:(id)arg1 ;
-(id)_handleMessageSendFailure:(id)arg1 message:(id)arg2 messageIndex:(long long)arg3 context:(inout id*)arg4 ;
-(id)_createServiceOnQueue:(id)arg1 ;
-(void)_callServicesMethod:(id)arg1 arguments:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)_simulateServicesMethod:(id)arg1 arguments:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)_callServicesMethod:(id)arg1 arguments:(id)arg2 replyHandler:(/*^block*/id)arg3 ;
-(void)responseConnection:(id)arg1 handleError:(id)arg2 ;
-(void)_registerConnection:(id)arg1 onQueue:(id)arg2 ;
-(void)responseConnection:(id)arg1 handleResponse:(id)arg2 ;
-(id)_createMessageForService:(id)arg1 arguments:(id)arg2 index:(long long*)arg3 ;
-(void)setupResponseConnectionOnQueue:(id)arg1 ;
@end

