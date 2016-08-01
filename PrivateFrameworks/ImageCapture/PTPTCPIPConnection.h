/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:10 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
#import <ImageCapture/ImageCapture-Structs.h>
@class PTPTCPIPTransport, NSTimer, NSObject, NSMutableData;

@interface PTPTCPIPConnection : NSObject {

	PTPTCPIPTransport* _transport;
	NSTimer* _inactivityTimer;
	NSTimer* _receiveTimer;
	NSTimer* _transmitTimer;
	CFReadStreamRef _inStream;
	CFWriteStreamRef _outStream;
	NSObject*<OS_dispatch_semaphore> _receiveBufferSemaphore;
	NSMutableData* _recieveBuffer;
	unsigned _bytesReceived;
	NSObject*<OS_dispatch_semaphore> _transmitBufferSemaphore;
	NSMutableData* _transmitBuffer;
	unsigned _bytesSent;

}
-(void)dealloc;
-(void)close;
-(BOOL)open;
-(void)handleCanAcceptBytes;
-(void)handleErrorOccurred:(SCD_Struct_PT2)arg1 ;
-(id)initWithNativeSocket:(int)arg1 transport:(id)arg2 ;
-(id)initWithSocketToHost:(id)arg1 port:(unsigned)arg2 transport:(id)arg3 ;
-(void)handleHasBytesAvailable;
-(void)handleEndEncountered;
-(void)inactivityTimerCallBack:(id)arg1 ;
-(BOOL)writeData:(id)arg1 ;
@end

