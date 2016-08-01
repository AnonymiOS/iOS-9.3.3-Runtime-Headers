/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:19 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/__NSCFURLSessionTask.h>

@class NSError, NSData;

@interface __NSCFTCPIOStreamTask : __NSCFURLSessionTask {

	/*^block*/id _disavow;
	shared_ptr<TCPIO_EstablishBase>* _establish;
	shared_ptr<TCPIOConnectionObjCPP>* _ios;
	unsigned char _captureStreamsUponCompletion;
	unsigned char _secure;
	NSError* _cancelError;
	NSData* _TCPConnectionMetadata;

}

@property (copy) NSData * _TCPConnectionMetadata;              //@synthesize TCPConnectionMetadata=_TCPConnectionMetadata - In the implementation block
-(void)_onSessionQueue_disavow;
-(void)_onqueue_suspend;
-(void)_onqueue_resume;
-(void)_task_onqueue_didFinish;
-(void)_onqueue_cancel;
-(void)_onqueue_cancel_with_error:(id)arg1 ;
-(void)_onqueue_adjustPoolPriority;
-(void)_onqueue_adjustLoadingPoolPriority;
-(void)_onSessionQueue_cleanupAndBreakCycles;
-(void)_onqueue_dealWithSessionTrustAuth:(long long)arg1 credential:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)_onqueue_sendSessionChallenge:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithHost:(id)arg1 port:(long long)arg2 session:(id)arg3 disavow:(/*^block*/id)arg4 ;
-(shared_ptr<TCPIOConnectionObjCPP>*)ios;
-(void)readDataOfMinLength:(unsigned long long)arg1 maxLength:(unsigned long long)arg2 timeout:(double)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)writeData:(id)arg1 timeout:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)captureStreams;
-(void)closeWrite;
-(void)closeRead;
-(void)startSecureConnection;
-(void)stopSecureConnection;
-(void)_onqueue_preConnectionConfiguration:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_onqueue_needServerTrust:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_onqueue_needClientCert:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_onqueue_postConnectConfiguration:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_onqueue_connectionEstablishedWithError:(SCD_Struct_NS17)arg1 callbackReferent:(id)arg2 ;
-(NSData *)_TCPConnectionMetadata;
-(void)set_TCPConnectionMetadata:(NSData *)arg1 ;
-(void)cancel;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

