/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:06 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOPlaceDataCacheLogMessage, GEOStateTimingUsageLogMessage, GEOSuggestionsUsageLogMessage, GEOTileSetStateUsageLogMessage, GEOABExperimentAssignment, GEOUserActionUsageLogMessage;

@interface GEOShortSessionUsageLogMessage : PBCodable <NSCopying> {

	SCD_Struct_GE4 _sessionId;
	double _relativeTimestamp;
	GEOPlaceDataCacheLogMessage* _placeDataCacheLogMessage;
	unsigned _sequenceNumber;
	GEOStateTimingUsageLogMessage* _stateTimingLogMessage;
	GEOSuggestionsUsageLogMessage* _suggestionsLogMessage;
	GEOTileSetStateUsageLogMessage* _tileSetStateUsageLogMessage;
	GEOABExperimentAssignment* _tilesAbExperimentAssignment;
	GEOUserActionUsageLogMessage* _userActionLogMessage;
	SCD_Struct_GE49 _has;

}

@property (assign,nonatomic) BOOL hasSessionId; 
@property (assign,nonatomic) SCD_Struct_GE4 sessionId;                                                  //@synthesize sessionId=_sessionId - In the implementation block
@property (assign,nonatomic) BOOL hasSequenceNumber; 
@property (assign,nonatomic) unsigned sequenceNumber;                                                   //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (assign,nonatomic) BOOL hasRelativeTimestamp; 
@property (assign,nonatomic) double relativeTimestamp;                                                  //@synthesize relativeTimestamp=_relativeTimestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasTilesAbExperimentAssignment; 
@property (nonatomic,retain) GEOABExperimentAssignment * tilesAbExperimentAssignment;                   //@synthesize tilesAbExperimentAssignment=_tilesAbExperimentAssignment - In the implementation block
@property (nonatomic,readonly) BOOL hasUserActionLogMessage; 
@property (nonatomic,retain) GEOUserActionUsageLogMessage * userActionLogMessage;                       //@synthesize userActionLogMessage=_userActionLogMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasStateTimingLogMessage; 
@property (nonatomic,retain) GEOStateTimingUsageLogMessage * stateTimingLogMessage;                     //@synthesize stateTimingLogMessage=_stateTimingLogMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasSuggestionsLogMessage; 
@property (nonatomic,retain) GEOSuggestionsUsageLogMessage * suggestionsLogMessage;                     //@synthesize suggestionsLogMessage=_suggestionsLogMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasTileSetStateUsageLogMessage; 
@property (nonatomic,retain) GEOTileSetStateUsageLogMessage * tileSetStateUsageLogMessage;              //@synthesize tileSetStateUsageLogMessage=_tileSetStateUsageLogMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaceDataCacheLogMessage; 
@property (nonatomic,retain) GEOPlaceDataCacheLogMessage * placeDataCacheLogMessage;                    //@synthesize placeDataCacheLogMessage=_placeDataCacheLogMessage - In the implementation block
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
-(SCD_Struct_GE4)sessionId;
-(void)setHasSessionId:(BOOL)arg1 ;
-(BOOL)hasSessionId;
-(void)setSessionId:(SCD_Struct_GE4)arg1 ;
-(BOOL)hasSequenceNumber;
-(void)setHasSequenceNumber:(BOOL)arg1 ;
-(unsigned)sequenceNumber;
-(void)setSequenceNumber:(unsigned)arg1 ;
-(GEOABExperimentAssignment *)tilesAbExperimentAssignment;
-(void)setTilesAbExperimentAssignment:(GEOABExperimentAssignment *)arg1 ;
-(BOOL)hasTilesAbExperimentAssignment;
-(GEOTileSetStateUsageLogMessage *)tileSetStateUsageLogMessage;
-(void)setPlaceDataCacheLogMessage:(GEOPlaceDataCacheLogMessage *)arg1 ;
-(BOOL)hasRelativeTimestamp;
-(BOOL)hasPlaceDataCacheLogMessage;
-(double)relativeTimestamp;
-(GEOSuggestionsUsageLogMessage *)suggestionsLogMessage;
-(BOOL)hasUserActionLogMessage;
-(void)setSuggestionsLogMessage:(GEOSuggestionsUsageLogMessage *)arg1 ;
-(void)setTileSetStateUsageLogMessage:(GEOTileSetStateUsageLogMessage *)arg1 ;
-(GEOStateTimingUsageLogMessage *)stateTimingLogMessage;
-(BOOL)hasSuggestionsLogMessage;
-(BOOL)hasStateTimingLogMessage;
-(GEOPlaceDataCacheLogMessage *)placeDataCacheLogMessage;
-(void)setRelativeTimestamp:(double)arg1 ;
-(void)setUserActionLogMessage:(GEOUserActionUsageLogMessage *)arg1 ;
-(GEOUserActionUsageLogMessage *)userActionLogMessage;
-(void)setStateTimingLogMessage:(GEOStateTimingUsageLogMessage *)arg1 ;
-(BOOL)hasTileSetStateUsageLogMessage;
-(void)setHasRelativeTimestamp:(BOOL)arg1 ;
@end

