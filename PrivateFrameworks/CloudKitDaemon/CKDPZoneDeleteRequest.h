/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:35 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPRecordZoneIdentifier;

@interface CKDPZoneDeleteRequest : PBRequest <NSCopying> {

	CKDPRecordZoneIdentifier* _zoneIdentifier;
	BOOL _userPurge;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasZoneIdentifier; 
@property (nonatomic,retain) CKDPRecordZoneIdentifier * zoneIdentifier;              //@synthesize zoneIdentifier=_zoneIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasUserPurge; 
@property (assign,nonatomic) BOOL userPurge;                                         //@synthesize userPurge=_userPurge - In the implementation block
+(id)options;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)setZoneIdentifier:(CKDPRecordZoneIdentifier *)arg1 ;
-(BOOL)hasZoneIdentifier;
-(CKDPRecordZoneIdentifier *)zoneIdentifier;
-(void)setUserPurge:(BOOL)arg1 ;
-(void)setHasUserPurge:(BOOL)arg1 ;
-(BOOL)hasUserPurge;
-(BOOL)userPurge;
@end

