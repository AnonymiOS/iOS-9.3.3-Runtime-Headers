/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:05 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLock, BLTCircularBitBuffer, NSURL, NSString, NSUUID;

@interface BLTPBProtobufSequenceNumberManager : NSObject {

	unsigned long long _sendSequenceNumber;
	unsigned long long _recvSequenceNumber;
	NSLock* _sequenceNumberAccess;
	BLTCircularBitBuffer* _duplicateEntries;
	NSURL* _sequenceNumbersURL;
	unsigned long long _sessionState;
	NSString* _serviceName;
	NSUUID* _currentSessionIdentifier;
	NSUUID* _recvSessionIdentifier;

}

@property (assign,nonatomic) unsigned long long sessionState;                  //@synthesize sessionState=_sessionState - In the implementation block
@property (nonatomic,copy,readonly) NSString * serviceName;                    //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,readonly) NSUUID * currentSessionIdentifier;              //@synthesize currentSessionIdentifier=_currentSessionIdentifier - In the implementation block
@property (nonatomic,readonly) NSUUID * recvSessionIdentifier;                 //@synthesize recvSessionIdentifier=_recvSessionIdentifier - In the implementation block
-(NSString *)serviceName;
-(id)initWithServiceName:(id)arg1 ;
-(unsigned long long)sessionState;
-(void)setSessionState:(unsigned long long)arg1 ;
-(NSUUID *)recvSessionIdentifier;
-(NSUUID *)currentSessionIdentifier;
-(id)initWithServiceName:(id)arg1 duplicateCapacity:(unsigned long long)arg2 ;
-(void)_readSequenceNumbersFromStoreWithInitialDuplicateCapacity:(unsigned long long)arg1 ;
-(BOOL)_isSequenceNumberInOrder:(unsigned long long)arg1 ;
-(void)_writeSequenceNumbersToStore;
-(id)_sequenceNumbersURL;
-(long long)setRecvSequenceNumber:(unsigned long long)arg1 recvSessionIdentifier:(id)arg2 force:(BOOL)arg3 ;
-(unsigned long long)nextSendSequenceNumber;
@end

