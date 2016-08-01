/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:02 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOTransitDecoderData, GEOMapItemStorage, NSString, GEOTransitSuggestedRoute, NSData, NSMutableArray;

@interface GEOCompanionRouteDetails : PBCodable <NSCopying> {

	SCD_Struct_GE100* _coordinates;
	SCD_Struct_GE59* _trafficColorOffsets;
	SCD_Struct_GE59* _trafficColors;
	GEOTransitDecoderData* _decoderData;
	GEOMapItemStorage* _destination;
	NSString* _destinationName;
	unsigned _distance;
	unsigned _historicalDuration;
	NSString* _name;
	GEOMapItemStorage* _origin;
	unsigned _originalDuration;
	GEOTransitSuggestedRoute* _originalSuggestedRoute;
	NSData* _routeID;
	NSMutableArray* _steps;
	int _transportType;
	BOOL _canNavigate;
	BOOL _showTransitSchedules;
	SCD_Struct_GE60 _has;

}

@property (nonatomic,readonly) BOOL hasDestinationName; 
@property (nonatomic,retain) NSString * destinationName;                                     //@synthesize destinationName=_destinationName - In the implementation block
@property (assign,nonatomic) BOOL hasOriginalDuration; 
@property (assign,nonatomic) unsigned originalDuration;                                      //@synthesize originalDuration=_originalDuration - In the implementation block
@property (nonatomic,retain) NSMutableArray * steps;                                         //@synthesize steps=_steps - In the implementation block
@property (nonatomic,readonly) unsigned long long coordinatesCount; 
@property (nonatomic,readonly) double* coordinates; 
@property (nonatomic,readonly) BOOL hasRouteID; 
@property (nonatomic,retain) NSData * routeID;                                               //@synthesize routeID=_routeID - In the implementation block
@property (nonatomic,readonly) BOOL hasDestination; 
@property (nonatomic,retain) GEOMapItemStorage * destination;                                //@synthesize destination=_destination - In the implementation block
@property (nonatomic,readonly) BOOL hasOrigin; 
@property (nonatomic,retain) GEOMapItemStorage * origin;                                     //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly) unsigned long long trafficColorsCount; 
@property (nonatomic,readonly) unsigned* trafficColors; 
@property (nonatomic,readonly) unsigned long long trafficColorOffsetsCount; 
@property (nonatomic,readonly) unsigned* trafficColorOffsets; 
@property (assign,nonatomic) BOOL hasHistoricalDuration; 
@property (assign,nonatomic) unsigned historicalDuration;                                    //@synthesize historicalDuration=_historicalDuration - In the implementation block
@property (assign,nonatomic) BOOL hasCanNavigate; 
@property (assign,nonatomic) BOOL canNavigate;                                               //@synthesize canNavigate=_canNavigate - In the implementation block
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                                                //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL hasDistance; 
@property (assign,nonatomic) unsigned distance;                                              //@synthesize distance=_distance - In the implementation block
@property (nonatomic,readonly) BOOL hasOriginalSuggestedRoute; 
@property (nonatomic,retain) GEOTransitSuggestedRoute * originalSuggestedRoute;              //@synthesize originalSuggestedRoute=_originalSuggestedRoute - In the implementation block
@property (nonatomic,readonly) BOOL hasDecoderData; 
@property (nonatomic,retain) GEOTransitDecoderData * decoderData;                            //@synthesize decoderData=_decoderData - In the implementation block
@property (assign,nonatomic) BOOL hasShowTransitSchedules; 
@property (assign,nonatomic) BOOL showTransitSchedules;                                      //@synthesize showTransitSchedules=_showTransitSchedules - In the implementation block
@property (assign,nonatomic) BOOL hasTransportType; 
@property (assign,nonatomic) int transportType;                                              //@synthesize transportType=_transportType - In the implementation block
-(id)initWithRoute:(id)arg1 destinationName:(id)arg2 ;
-(BOOL)isSyntheticRoute;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GEOMapItemStorage *)origin;
-(void)setOrigin:(GEOMapItemStorage *)arg1 ;
-(id)dictionaryRepresentation;
-(GEOMapItemStorage *)destination;
-(void)setDestination:(GEOMapItemStorage *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setRouteID:(NSData *)arg1 ;
-(BOOL)hasRouteID;
-(NSData *)routeID;
-(NSString *)destinationName;
-(BOOL)hasTransportType;
-(void)setHasTransportType:(BOOL)arg1 ;
-(int)transportType;
-(void)setTransportType:(int)arg1 ;
-(BOOL)hasName;
-(void)setDecoderData:(GEOTransitDecoderData *)arg1 ;
-(BOOL)hasDecoderData;
-(GEOTransitDecoderData *)decoderData;
-(void)clearTrafficColorOffsets;
-(void)setTrafficColorOffsets:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)addTrafficColorOffset:(unsigned)arg1 ;
-(unsigned long long)trafficColorsCount;
-(unsigned)trafficColorAtIndex:(unsigned long long)arg1 ;
-(void)setDistance:(unsigned)arg1 ;
-(unsigned*)trafficColorOffsets;
-(unsigned)distance;
-(void)clearTrafficColors;
-(void)addTrafficColor:(unsigned)arg1 ;
-(BOOL)hasDistance;
-(unsigned long long)stepsCount;
-(NSMutableArray *)steps;
-(void)setTrafficColors:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setHasDistance:(BOOL)arg1 ;
-(unsigned)trafficColorOffsetAtIndex:(unsigned long long)arg1 ;
-(id)stepAtIndex:(unsigned long long)arg1 ;
-(void)setSteps:(NSMutableArray *)arg1 ;
-(unsigned*)trafficColors;
-(void)clearSteps;
-(unsigned long long)trafficColorOffsetsCount;
-(void)addStep:(id)arg1 ;
-(GEOTransitSuggestedRoute *)originalSuggestedRoute;
-(BOOL)hasDestination;
-(void)setHasShowTransitSchedules:(BOOL)arg1 ;
-(BOOL)hasOriginalDuration;
-(BOOL)hasOrigin;
-(void)setCanNavigate:(BOOL)arg1 ;
-(void)setShowTransitSchedules:(BOOL)arg1 ;
-(void)setHasOriginalDuration:(BOOL)arg1 ;
-(void)setHasHistoricalDuration:(BOOL)arg1 ;
-(unsigned)originalDuration;
-(BOOL)showTransitSchedules;
-(void)setHistoricalDuration:(unsigned)arg1 ;
-(void)setCoordinates:(double*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)hasOriginalSuggestedRoute;
-(void)setDestinationName:(NSString *)arg1 ;
-(void)setOriginalDuration:(unsigned)arg1 ;
-(void)setOriginalSuggestedRoute:(GEOTransitSuggestedRoute *)arg1 ;
-(unsigned long long)coordinatesCount;
-(double)coordinatesAtIndex:(unsigned long long)arg1 ;
-(unsigned)historicalDuration;
-(BOOL)hasDestinationName;
-(double*)coordinates;
-(BOOL)canNavigate;
-(void)addCoordinates:(double)arg1 ;
-(BOOL)hasCanNavigate;
-(void)clearCoordinates;
-(void)setHasCanNavigate:(BOOL)arg1 ;
-(BOOL)hasShowTransitSchedules;
-(BOOL)hasHistoricalDuration;
@end
