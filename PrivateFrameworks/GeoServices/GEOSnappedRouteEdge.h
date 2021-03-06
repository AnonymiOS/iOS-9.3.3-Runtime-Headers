/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:04 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEOSnappedRouteEdge : NSObject {

	SCD_Struct_GE56 _localBounds;
	shared_ptr<geo::MapEdgeRoad>* _mapEdge;
	vector<GEOVectorTilePoint, std::__1::allocator<GEOVectorTilePoint> >* _points;
	vector<geo::PolylineCoordinate, std::__1::allocator<geo::PolylineCoordinate> >* _routeOffsets;
	unsigned long long _mapEdgeOffset;
	BOOL _clippedFront;
	BOOL _clippedBack;

}

@property (nonatomic,readonly) shared_ptr<geo::MapEdgeRoad>* mapEdge;              //@synthesize mapEdge=_mapEdge - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE113* feature; 
@property (nonatomic,readonly) SCD_Struct_GE97* points; 
@property (nonatomic,readonly) unsigned long long pointCount; 
@property (nonatomic,readonly) PolylineCoordinate routeOffsetA; 
@property (nonatomic,readonly) PolylineCoordinate routeOffsetB; 
@property (nonatomic,readonly) PolylineCoordinate* routeOffsets; 
@property (nonatomic,readonly) unsigned long long mapEdgeOffset;                   //@synthesize mapEdgeOffset=_mapEdgeOffset - In the implementation block
@property (nonatomic,readonly) BOOL clippedFront;                                  //@synthesize clippedFront=_clippedFront - In the implementation block
@property (nonatomic,readonly) BOOL clippedBack;                                   //@synthesize clippedBack=_clippedBack - In the implementation block
-(void)dealloc;
-(id)description;
-(unsigned long long)pointCount;
-(BOOL)clippedBack;
-(PolylineCoordinate)routeOffsetB;
-(PolylineCoordinate)routeOffsetA;
-(void)calculateRouteOffsetsBetweenA:(PolylineCoordinate)arg1 andB:(PolylineCoordinate)arg2 overLength:(float)arg3 onRoute:(id)arg4 ;
-(SCD_Struct_GE97*)points;
-(BOOL)clippedFront;
-(SCD_Struct_GE113*)feature;
-(id)initWithRoadPath:(const RoadPathElement<std::__1::shared_ptr<geo::MapEdge> >*)arg1 sectionRect:(const SCD_Struct_GE56*)arg2 ;
-(shared_ptr<geo::MapEdgeRoad>*)mapEdge;
-(unsigned long long)mapEdgeOffset;
-(PolylineCoordinate*)routeOffsets;
@end

