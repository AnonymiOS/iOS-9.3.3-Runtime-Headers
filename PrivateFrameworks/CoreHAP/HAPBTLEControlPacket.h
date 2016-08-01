/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:07 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HAPBTLETransactionIdentifier, NSData;

@interface HAPBTLEControlPacket : NSObject {

	unsigned char _type;
	BOOL _continuationPacket;
	HAPBTLETransactionIdentifier* _transactionIdentifier;
	NSData* _payload;

}

@property (nonatomic,readonly) unsigned char type;                                                //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) HAPBTLETransactionIdentifier * transactionIdentifier;              //@synthesize transactionIdentifier=_transactionIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSData * payload;                                             //@synthesize payload=_payload - In the implementation block
@property (getter=isContinuationPacket,nonatomic,readonly) BOOL continuationPacket;               //@synthesize continuationPacket=_continuationPacket - In the implementation block
+(id)shortDescription;
+(id)packetWithSerializedData:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(id)description;
-(id)debugDescription;
-(NSData *)payload;
-(unsigned char)type;
-(id)shortDescription;
-(id)initWithControlType:(unsigned char)arg1 transactionIdentifier:(id)arg2 continuationPacket:(BOOL)arg3 packetPayload:(id)arg4 maximumLength:(unsigned long long)arg5 ;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(BOOL)isContinuationPacket;
-(HAPBTLETransactionIdentifier *)transactionIdentifier;
-(id)serialize;
@end

