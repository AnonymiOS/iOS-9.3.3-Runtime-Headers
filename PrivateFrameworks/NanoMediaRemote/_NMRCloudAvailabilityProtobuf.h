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

@interface _NMRCloudAvailabilityProtobuf : PBCodable <NSCopying> {

	BOOL _canShowCloudMusic;
	BOOL _hasProperNetworkConditionsToPlayMedia;
	SCD_Struct_NM2 _has;

}

@property (assign,nonatomic) BOOL hasHasProperNetworkConditionsToPlayMedia; 
@property (assign,nonatomic) BOOL hasProperNetworkConditionsToPlayMedia;                 //@synthesize hasProperNetworkConditionsToPlayMedia=_hasProperNetworkConditionsToPlayMedia - In the implementation block
@property (assign,nonatomic) BOOL hasCanShowCloudMusic; 
@property (assign,nonatomic) BOOL canShowCloudMusic;                                     //@synthesize canShowCloudMusic=_canShowCloudMusic - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)canShowCloudMusic;
-(BOOL)hasProperNetworkConditionsToPlayMedia;
-(void)setHasProperNetworkConditionsToPlayMedia:(BOOL)arg1 ;
-(void)setHasHasProperNetworkConditionsToPlayMedia:(BOOL)arg1 ;
-(BOOL)hasHasProperNetworkConditionsToPlayMedia;
-(void)setCanShowCloudMusic:(BOOL)arg1 ;
-(void)setHasCanShowCloudMusic:(BOOL)arg1 ;
-(BOOL)hasCanShowCloudMusic;
@end

