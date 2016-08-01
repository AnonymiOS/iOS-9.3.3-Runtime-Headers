/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:09 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOComposedWalkingRouteStep.h>

@protocol GEOTransitRoutingIncidentMessage, GEOTransitArtworkDataSource;
@class GEOTransitStep, NSArray;

@interface GEOComposedTransitWalkingRouteStep : GEOComposedWalkingRouteStep {

	GEOTransitStep* _transitStep;
	SCD_Struct_GE16 _startCoordinate;
	SCD_Struct_GE16 _endCoordinate;
	id<GEOTransitRoutingIncidentMessage> _steppingIncidentMessage;
	id<GEOTransitRoutingIncidentMessage> _routeDetailsIncidentMessage;
	NSArray* _steppingArtwork;
	NSArray* _routeDetailsPrimaryArtwork;
	id<GEOTransitArtworkDataSource> _routeDetailsSecondaryArtwork;

}

@property (nonatomic,readonly) id<GEOTransitRoutingIncidentMessage> steppingIncidentMessage;                  //@synthesize steppingIncidentMessage=_steppingIncidentMessage - In the implementation block
@property (nonatomic,readonly) id<GEOTransitRoutingIncidentMessage> routeDetailsIncidentMessage;              //@synthesize routeDetailsIncidentMessage=_routeDetailsIncidentMessage - In the implementation block
-(void)dealloc;
-(unsigned)distance;
-(id)instructions;
-(id)routeDetailsPrimaryArtwork;
-(id<GEOTransitRoutingIncidentMessage>)routeDetailsIncidentMessage;
-(id<GEOTransitRoutingIncidentMessage>)steppingIncidentMessage;
-(SCD_Struct_GE16)endGeoCoordinate;
-(id)transitStep;
-(id)routeDetailsSecondaryArtwork;
-(id)steppingArtwork;
-(SCD_Struct_GE16)startGeoCoordinate;
-(BOOL)isArrivalStep;
-(id)initWithComposedRoute:(id)arg1 transitStep:(id)arg2 stepIndex:(unsigned long long)arg3 startCoordinate:(SCD_Struct_GE16)arg4 endCoordinate:(SCD_Struct_GE16)arg5 pointRange:(NSRange)arg6 ;
-(void)_commonInitWithDecoderData:(id)arg1 ;
-(id)initWithComposedRoute:(id)arg1 transitStep:(id)arg2 stepIndex:(unsigned long long)arg3 geoStep:(id)arg4 pointRange:(NSRange)arg5 maneuverPointRange:(NSRange)arg6 ;
@end

