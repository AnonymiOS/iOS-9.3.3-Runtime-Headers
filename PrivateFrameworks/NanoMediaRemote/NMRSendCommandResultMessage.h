/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:48 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NMRMediaRemoteProtobufCodable.h>

@class _NMRSendCommandResultMessageProtobuf, NSArray, NSDate, NSString;

@interface NMRSendCommandResultMessage : NSObject <NMRMediaRemoteProtobufCodable> {

	_NMRSendCommandResultMessageProtobuf* _protobuf;

}

@property (nonatomic,readonly) unsigned errorCode; 
@property (nonatomic,readonly) NSArray * handlerReturnStatuses; 
@property (nonatomic,readonly) NSDate * serializationDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)messageWithErrorCode:(unsigned)arg1 handlerReturnStatuses:(id)arg2 ;
-(unsigned)errorCode;
-(id)protobufData;
-(NSDate *)serializationDate;
-(id)initWithProtobufData:(id)arg1 ;
-(id)_initWithErrorCode:(unsigned)arg1 handlerReturnStatuses:(id)arg2 ;
-(NSArray *)handlerReturnStatuses;
@end

