/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:48 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoMediaRemote/NanoMediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _NMRSpecializedQueueProtobuf : PBCodable <NSCopying> {

	NSString* _identifier;
	NSString* _localizedTitle;
	unsigned _queueType;
	NSString* _radioStationID;
	SCD_Struct_NM1 _has;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL hasQueueType; 
@property (assign,nonatomic) unsigned queueType;                     //@synthesize queueType=_queueType - In the implementation block
@property (nonatomic,readonly) BOOL hasLocalizedTitle; 
@property (nonatomic,retain) NSString * localizedTitle;              //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,readonly) BOOL hasRadioStationID; 
@property (nonatomic,retain) NSString * radioStationID;              //@synthesize radioStationID=_radioStationID - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)localizedTitle;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasLocalizedTitle;
-(BOOL)hasIdentifier;
-(BOOL)hasRadioStationID;
-(void)setQueueType:(unsigned)arg1 ;
-(unsigned)queueType;
-(NSString *)radioStationID;
-(void)setRadioStationID:(NSString *)arg1 ;
-(void)setHasQueueType:(BOOL)arg1 ;
-(BOOL)hasQueueType;
@end

