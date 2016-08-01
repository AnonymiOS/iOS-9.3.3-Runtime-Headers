/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:35 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface CKDPMescalSessionInfoResponse : PBCodable <NSCopying> {

	NSData* _sessionInfo;
	int _status;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasSessionInfo; 
@property (nonatomic,retain) NSData * sessionInfo;               //@synthesize sessionInfo=_sessionInfo - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status;                         //@synthesize status=_status - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(NSData *)sessionInfo;
-(void)setSessionInfo:(NSData *)arg1 ;
-(BOOL)hasSessionInfo;
@end

