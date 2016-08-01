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

@class NSString, NSData, CKDPProtectionInfo, CKDPShareIdentifier;

@interface CKDPShareTokenRetrieveResponse : PBCodable <NSCopying> {

	NSString* _container;
	int _containerEnvironment;
	NSString* _etag;
	NSString* _ownerFirstName;
	NSString* _ownerLastName;
	int _participantState;
	int _participantType;
	int _permission;
	NSData* _protectedFullToken;
	CKDPProtectionInfo* _selfAddedPcs;
	CKDPShareIdentifier* _shareId;
	SCD_Struct_CK18 _has;

}

@property (nonatomic,readonly) BOOL hasContainer; 
@property (nonatomic,retain) NSString * container;                           //@synthesize container=_container - In the implementation block
@property (assign,nonatomic) BOOL hasContainerEnvironment; 
@property (assign,nonatomic) int containerEnvironment;                       //@synthesize containerEnvironment=_containerEnvironment - In the implementation block
@property (nonatomic,readonly) BOOL hasShareId; 
@property (nonatomic,retain) CKDPShareIdentifier * shareId;                  //@synthesize shareId=_shareId - In the implementation block
@property (nonatomic,readonly) BOOL hasEtag; 
@property (nonatomic,retain) NSString * etag;                                //@synthesize etag=_etag - In the implementation block
@property (assign,nonatomic) BOOL hasParticipantType; 
@property (assign,nonatomic) int participantType;                            //@synthesize participantType=_participantType - In the implementation block
@property (assign,nonatomic) BOOL hasParticipantState; 
@property (assign,nonatomic) int participantState;                           //@synthesize participantState=_participantState - In the implementation block
@property (assign,nonatomic) BOOL hasPermission; 
@property (assign,nonatomic) int permission;                                 //@synthesize permission=_permission - In the implementation block
@property (nonatomic,readonly) BOOL hasSelfAddedPcs; 
@property (nonatomic,retain) CKDPProtectionInfo * selfAddedPcs;              //@synthesize selfAddedPcs=_selfAddedPcs - In the implementation block
@property (nonatomic,readonly) BOOL hasProtectedFullToken; 
@property (nonatomic,retain) NSData * protectedFullToken;                    //@synthesize protectedFullToken=_protectedFullToken - In the implementation block
@property (nonatomic,readonly) BOOL hasOwnerFirstName; 
@property (nonatomic,retain) NSString * ownerFirstName;                      //@synthesize ownerFirstName=_ownerFirstName - In the implementation block
@property (nonatomic,readonly) BOOL hasOwnerLastName; 
@property (nonatomic,retain) NSString * ownerLastName;                       //@synthesize ownerLastName=_ownerLastName - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)container;
-(void)setContainer:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)etag;
-(void)setEtag:(NSString *)arg1 ;
-(BOOL)hasEtag;
-(BOOL)hasContainer;
-(NSString *)ownerFirstName;
-(NSString *)ownerLastName;
-(int)participantType;
-(void)setParticipantType:(int)arg1 ;
-(int)permission;
-(NSData *)protectedFullToken;
-(void)setShareId:(CKDPShareIdentifier *)arg1 ;
-(void)setProtectedFullToken:(NSData *)arg1 ;
-(BOOL)hasShareId;
-(BOOL)hasProtectedFullToken;
-(CKDPShareIdentifier *)shareId;
-(void)setSelfAddedPcs:(CKDPProtectionInfo *)arg1 ;
-(BOOL)hasSelfAddedPcs;
-(CKDPProtectionInfo *)selfAddedPcs;
-(void)setPermission:(int)arg1 ;
-(void)setHasPermission:(BOOL)arg1 ;
-(BOOL)hasPermission;
-(void)setOwnerFirstName:(NSString *)arg1 ;
-(void)setOwnerLastName:(NSString *)arg1 ;
-(int)containerEnvironment;
-(void)setContainerEnvironment:(int)arg1 ;
-(void)setHasContainerEnvironment:(BOOL)arg1 ;
-(BOOL)hasContainerEnvironment;
-(void)setHasParticipantType:(BOOL)arg1 ;
-(BOOL)hasParticipantType;
-(int)participantState;
-(void)setParticipantState:(int)arg1 ;
-(void)setHasParticipantState:(BOOL)arg1 ;
-(BOOL)hasParticipantState;
-(BOOL)hasOwnerFirstName;
-(BOOL)hasOwnerLastName;
@end

