/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:00 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOMapRegion : PBCodable <NSCopying> {

	double _eastLng;
	double _northLat;
	double _southLat;
	double _westLng;
	NSMutableArray* _vertexs;
	SCD_Struct_GE6 _has;

}

@property (nonatomic,readonly) double centerLat; 
@property (nonatomic,readonly) double centerLng; 
@property (nonatomic,readonly) double spanLat; 
@property (nonatomic,readonly) double spanLng; 
@property (assign,nonatomic) BOOL hasSouthLat; 
@property (assign,nonatomic) double southLat;                       //@synthesize southLat=_southLat - In the implementation block
@property (assign,nonatomic) BOOL hasWestLng; 
@property (assign,nonatomic) double westLng;                        //@synthesize westLng=_westLng - In the implementation block
@property (assign,nonatomic) BOOL hasNorthLat; 
@property (assign,nonatomic) double northLat;                       //@synthesize northLat=_northLat - In the implementation block
@property (assign,nonatomic) BOOL hasEastLng; 
@property (assign,nonatomic) double eastLng;                        //@synthesize eastLng=_eastLng - In the implementation block
@property (nonatomic,retain) NSMutableArray * vertexs;              //@synthesize vertexs=_vertexs - In the implementation block
+(id)_geo_mapRegionForGEOCoordinateRegion:(SCD_Struct_GE56)arg1 ;
-(id)_initWithCLRegion:(id)arg1 ;
-(id)initWithCoordinateRegion:(SCD_Struct_GE56)arg1 ;
-(double)spanLat;
-(id)initWithRadialPlace:(id)arg1 ;
-(BOOL)containsMapRect:(SCD_Struct_GE56)arg1 ;
-(double)spanLng;
-(double)centerLng;
-(void)setMapRect:(SCD_Struct_GE56)arg1 ;
-(double)centerLat;
-(id)initWithMapRect:(SCD_Struct_GE56)arg1 ;
-(BOOL)containsCoordinate:(SCD_Struct_GE16)arg1 ;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 ;
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
-(void)addVertex:(id)arg1 ;
-(id)vertexAtIndex:(unsigned long long)arg1 ;
-(void)setVertexs:(NSMutableArray *)arg1 ;
-(void)setWestLng:(double)arg1 ;
-(BOOL)hasNorthLat;
-(double)southLat;
-(void)setSouthLat:(double)arg1 ;
-(void)setHasWestLng:(BOOL)arg1 ;
-(double)eastLng;
-(void)setHasEastLng:(BOOL)arg1 ;
-(NSMutableArray *)vertexs;
-(void)setEastLng:(double)arg1 ;
-(unsigned long long)vertexsCount;
-(void)setHasSouthLat:(BOOL)arg1 ;
-(void)setNorthLat:(double)arg1 ;
-(BOOL)hasEastLng;
-(BOOL)hasWestLng;
-(void)clearVertexs;
-(double)northLat;
-(void)setHasNorthLat:(BOOL)arg1 ;
-(BOOL)hasSouthLat;
-(double)westLng;
@end

