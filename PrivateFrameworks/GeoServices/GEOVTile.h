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

@class NSMutableArray, GEOVConnectivity, NSData;

@interface GEOVTile : PBCodable <NSCopying> {

	NSMutableArray* _coastlines;
	GEOVConnectivity* _connectivity;
	NSMutableArray* _labelLanguages;
	NSData* _labels;
	NSMutableArray* _lines;
	int _minZ;
	NSMutableArray* _points;
	NSMutableArray* _polygons;
	unsigned _sectionDeltaLengthBits;
	unsigned _vertexBits;
	NSData* _vertices;
	int _zBits;
	SCD_Struct_GE6 _has;

}

@property (nonatomic,retain) NSMutableArray * lines;                       //@synthesize lines=_lines - In the implementation block
@property (nonatomic,retain) NSMutableArray * polygons;                    //@synthesize polygons=_polygons - In the implementation block
@property (nonatomic,retain) NSMutableArray * points;                      //@synthesize points=_points - In the implementation block
@property (nonatomic,readonly) BOOL hasLabels; 
@property (nonatomic,retain) NSData * labels;                              //@synthesize labels=_labels - In the implementation block
@property (nonatomic,readonly) BOOL hasVertices; 
@property (nonatomic,retain) NSData * vertices;                            //@synthesize vertices=_vertices - In the implementation block
@property (nonatomic,readonly) BOOL hasConnectivity; 
@property (nonatomic,retain) GEOVConnectivity * connectivity;              //@synthesize connectivity=_connectivity - In the implementation block
@property (assign,nonatomic) BOOL hasMinZ; 
@property (assign,nonatomic) int minZ;                                     //@synthesize minZ=_minZ - In the implementation block
@property (assign,nonatomic) BOOL hasZBits; 
@property (assign,nonatomic) int zBits;                                    //@synthesize zBits=_zBits - In the implementation block
@property (nonatomic,retain) NSMutableArray * coastlines;                  //@synthesize coastlines=_coastlines - In the implementation block
@property (nonatomic,retain) NSMutableArray * labelLanguages;              //@synthesize labelLanguages=_labelLanguages - In the implementation block
@property (assign,nonatomic) BOOL hasVertexBits; 
@property (assign,nonatomic) unsigned vertexBits;                          //@synthesize vertexBits=_vertexBits - In the implementation block
@property (assign,nonatomic) BOOL hasSectionDeltaLengthBits; 
@property (assign,nonatomic) unsigned sectionDeltaLengthBits;              //@synthesize sectionDeltaLengthBits=_sectionDeltaLengthBits - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addPoint:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)clearPoints;
-(BOOL)hasVertices;
-(void)setVertices:(NSData *)arg1 ;
-(NSData *)vertices;
-(unsigned long long)linesCount;
-(NSMutableArray *)lines;
-(NSMutableArray *)points;
-(void)clearLines;
-(void)setLines:(NSMutableArray *)arg1 ;
-(id)lineAtIndex:(unsigned long long)arg1 ;
-(void)setLabels:(NSData *)arg1 ;
-(NSData *)labels;
-(void)addLine:(id)arg1 ;
-(unsigned long long)coastlinesCount;
-(NSMutableArray *)coastlines;
-(unsigned long long)polygonsCount;
-(NSMutableArray *)polygons;
-(id)coastlinesAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)labelLanguages;
-(unsigned)vertexBits;
-(BOOL)hasConnectivity;
-(void)setMinZ:(int)arg1 ;
-(int)zBits;
-(void)addLabelLanguage:(id)arg1 ;
-(void)setVertexBits:(unsigned)arg1 ;
-(id)polygonAtIndex:(unsigned long long)arg1 ;
-(void)setConnectivity:(GEOVConnectivity *)arg1 ;
-(void)clearCoastlines;
-(void)setHasMinZ:(BOOL)arg1 ;
-(void)setHasVertexBits:(BOOL)arg1 ;
-(BOOL)hasVertexBits;
-(unsigned)sectionDeltaLengthBits;
-(void)setLabelLanguages:(NSMutableArray *)arg1 ;
-(BOOL)hasMinZ;
-(void)clearPolygons;
-(void)setCoastlines:(NSMutableArray *)arg1 ;
-(void)setZBits:(int)arg1 ;
-(void)setSectionDeltaLengthBits:(unsigned)arg1 ;
-(unsigned long long)labelLanguagesCount;
-(unsigned long long)pointsCount;
-(BOOL)hasSectionDeltaLengthBits;
-(BOOL)hasZBits;
-(void)addCoastlines:(id)arg1 ;
-(void)setPoints:(NSMutableArray *)arg1 ;
-(void)setHasZBits:(BOOL)arg1 ;
-(id)pointAtIndex:(unsigned long long)arg1 ;
-(void)setHasSectionDeltaLengthBits:(BOOL)arg1 ;
-(void)addPolygon:(id)arg1 ;
-(void)clearLabelLanguages;
-(GEOVConnectivity *)connectivity;
-(BOOL)hasLabels;
-(int)minZ;
-(id)labelLanguageAtIndex:(unsigned long long)arg1 ;
-(void)setPolygons:(NSMutableArray *)arg1 ;
@end

