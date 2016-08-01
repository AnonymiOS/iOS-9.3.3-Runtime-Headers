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

@class CKDPContactInformation, CKDPIdentifier, CKDPProtectionInfo;

@interface CKDPParticipant : PBCodable <NSCopying> {

	long long _acceptTimestamp;
	CKDPContactInformation* _contactInformation;
	CKDPIdentifier* _inviterId;
	CKDPIdentifier* _participantId;
	int _participantType;
	int _permission;
	CKDPProtectionInfo* _publicKey;
	int _state;
	CKDPIdentifier* _userId;
	BOOL _createdOutOfProcess;
	SCD_Struct_CK20 _has;

}

@property (nonatomic,readonly) BOOL hasParticipantId; 
@property (nonatomic,retain) CKDPIdentifier * participantId;                           //@synthesize participantId=_participantId - In the implementation block
@property (nonatomic,readonly) BOOL hasUserId; 
@property (nonatomic,retain) CKDPIdentifier * userId;                                  //@synthesize userId=_userId - In the implementation block
@property (nonatomic,readonly) BOOL hasContactInformation; 
@property (nonatomic,retain) CKDPContactInformation * contactInformation;              //@synthesize contactInformation=_contactInformation - In the implementation block
@property (assign,nonatomic) BOOL hasState; 
@property (assign,nonatomic) int state;                                                //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL hasParticipantType; 
@property (assign,nonatomic) int participantType;                                      //@synthesize participantType=_participantType - In the implementation block
@property (assign,nonatomic) BOOL hasPermission; 
@property (assign,nonatomic) int permission;                                           //@synthesize permission=_permission - In the implementation block
@property (nonatomic,readonly) BOOL hasInviterId; 
@property (nonatomic,retain) CKDPIdentifier * inviterId;                               //@synthesize inviterId=_inviterId - In the implementation block
@property (assign,nonatomic) BOOL hasCreatedOutOfProcess; 
@property (assign,nonatomic) BOOL createdOutOfProcess;                                 //@synthesize createdOutOfProcess=_createdOutOfProcess - In the implementation block
@property (nonatomic,readonly) BOOL hasPublicKey; 
@property (nonatomic,retain) CKDPProtectionInfo * publicKey;                           //@synthesize publicKey=_publicKey - In the implementation block
@property (assign,nonatomic) BOOL hasAcceptTimestamp; 
@property (assign,nonatomic) long long acceptTimestamp;                                //@synthesize acceptTimestamp=_acceptTimestamp - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)state;
-(void)setState:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)participantType;
-(void)setParticipantType:(int)arg1 ;
-(int)permission;
-(void)setPublicKey:(CKDPProtectionInfo *)arg1 ;
-(BOOL)hasPublicKey;
-(CKDPProtectionInfo *)publicKey;
-(void)setPermission:(int)arg1 ;
-(void)setHasPermission:(BOOL)arg1 ;
-(BOOL)hasPermission;
-(void)setUserId:(CKDPIdentifier *)arg1 ;
-(BOOL)hasUserId;
-(CKDPIdentifier *)userId;
-(void)setHasParticipantType:(BOOL)arg1 ;
-(BOOL)hasParticipantType;
-(void)setParticipantId:(CKDPIdentifier *)arg1 ;
-(void)setContactInformation:(CKDPContactInformation *)arg1 ;
-(void)setInviterId:(CKDPIdentifier *)arg1 ;
-(BOOL)hasParticipantId;
-(BOOL)hasContactInformation;
-(void)setHasState:(BOOL)arg1 ;
-(BOOL)hasState;
-(BOOL)hasInviterId;
-(void)setCreatedOutOfProcess:(BOOL)arg1 ;
-(void)setHasCreatedOutOfProcess:(BOOL)arg1 ;
-(BOOL)hasCreatedOutOfProcess;
-(void)setAcceptTimestamp:(long long)arg1 ;
-(void)setHasAcceptTimestamp:(BOOL)arg1 ;
-(BOOL)hasAcceptTimestamp;
-(CKDPIdentifier *)participantId;
-(CKDPContactInformation *)contactInformation;
-(CKDPIdentifier *)inviterId;
-(BOOL)createdOutOfProcess;
-(long long)acceptTimestamp;
@end

