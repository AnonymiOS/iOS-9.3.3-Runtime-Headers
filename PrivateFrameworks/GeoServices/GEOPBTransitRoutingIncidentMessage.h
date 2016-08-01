/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:01 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOPBTransitRoutingIncidentMessage : PBCodable <NSCopying> {

	SCD_Struct_GE59* _transitIncidentIndexs;
	unsigned _routingIncidentMessageIndex;
	NSString* _routingMessage;
	SCD_Struct_GE3 _has;

}

@property (assign,nonatomic) BOOL hasRoutingIncidentMessageIndex; 
@property (assign,nonatomic) unsigned routingIncidentMessageIndex;                         //@synthesize routingIncidentMessageIndex=_routingIncidentMessageIndex - In the implementation block
@property (nonatomic,readonly) BOOL hasRoutingMessage; 
@property (nonatomic,retain) NSString * routingMessage;                                    //@synthesize routingMessage=_routingMessage - In the implementation block
@property (nonatomic,readonly) unsigned long long transitIncidentIndexsCount; 
@property (nonatomic,readonly) unsigned* transitIncidentIndexs; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasRoutingMessage;
-(void)setHasRoutingIncidentMessageIndex:(BOOL)arg1 ;
-(unsigned*)transitIncidentIndexs;
-(unsigned)transitIncidentIndexAtIndex:(unsigned long long)arg1 ;
-(NSString *)routingMessage;
-(void)clearTransitIncidentIndexs;
-(unsigned)routingIncidentMessageIndex;
-(void)setTransitIncidentIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)hasRoutingIncidentMessageIndex;
-(unsigned long long)transitIncidentIndexsCount;
-(void)setRoutingMessage:(NSString *)arg1 ;
-(void)setRoutingIncidentMessageIndex:(unsigned)arg1 ;
-(void)addTransitIncidentIndex:(unsigned)arg1 ;
@end

