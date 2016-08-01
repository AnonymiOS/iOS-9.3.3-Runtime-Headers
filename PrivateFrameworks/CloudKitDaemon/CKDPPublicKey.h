/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:36 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString, CKDPIdentifier;

@interface CKDPPublicKey : PBCodable <NSCopying> {

	NSData* _keyData;
	NSString* _keyHash;
	CKDPIdentifier* _userId;

}

@property (nonatomic,readonly) BOOL hasUserId; 
@property (nonatomic,retain) CKDPIdentifier * userId;              //@synthesize userId=_userId - In the implementation block
@property (nonatomic,readonly) BOOL hasKeyData; 
@property (nonatomic,retain) NSData * keyData;                     //@synthesize keyData=_keyData - In the implementation block
@property (nonatomic,readonly) BOOL hasKeyHash; 
@property (nonatomic,retain) NSString * keyHash;                   //@synthesize keyHash=_keyHash - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setUserId:(CKDPIdentifier *)arg1 ;
-(void)setKeyData:(NSData *)arg1 ;
-(void)setKeyHash:(NSString *)arg1 ;
-(BOOL)hasUserId;
-(BOOL)hasKeyData;
-(BOOL)hasKeyHash;
-(CKDPIdentifier *)userId;
-(NSString *)keyHash;
-(NSData *)keyData;
@end
