/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:10 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ImageCapture/ImageCapture-Structs.h>
@class NSString;

@interface PTPDataPacket : NSObject {

	unsigned short _operationCode;
	unsigned _transactionID;
	id _data;
	NSString* _filepath;
	int _fd;
	long long _bufferSize;
	long long _offsetInBuffer;
	PTPRange _range;
	long long _bytesTransferred;

}
-(void)dealloc;
-(id)description;
-(id)data;
-(void)setData:(id)arg1 ;
-(PTPRange)range;
-(int)setRange:(PTPRange)arg1 ;
-(id)contentForTCP;
-(long long)copyToWrappedBytes:(id)arg1 forTransport:(unsigned short)arg2 ;
-(void)setBytesTransferred:(long long)arg1 ;
-(id)initWithTCPBuffer:(void*)arg1 ;
-(unsigned short)operationCode;
-(id)initWithOperationCode:(unsigned short)arg1 transactionID:(unsigned)arg2 andData:(id)arg3 ;
-(long long)copyToBuffer:(void*)arg1 numBytes:(long long)arg2 ;
-(id)filepath;
-(id)initWithOperationCode:(unsigned short)arg1 transactionID:(unsigned)arg2 andFilepath:(id)arg3 ;
-(id)initWithUSBBuffer:(void*)arg1 ;
-(id)contentForUSB;
-(id)contentForUSBUsingBuffer:(void*)arg1 capacity:(unsigned)arg2 ;
-(void)setOperationCode:(unsigned short)arg1 ;
-(long long)offsetInBuffer;
-(long long)bytesTransferred;
-(long long)copyDataToWrappedBytes:(id)arg1 forTransport:(unsigned short)arg2 fromOffset:(unsigned long long)arg3 ;
-(long long)copyHeaderToWrappedBytes:(id)arg1 forTransport:(unsigned short)arg2 ;
-(long long)copyFromBuffer:(void*)arg1 numBytes:(long long)arg2 ;
-(void)setTransactionID:(unsigned)arg1 ;
-(unsigned)transactionID;
-(long long)bufferSize;
@end

