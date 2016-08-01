/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:04 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MKMapItem, NSDate, NSArray, GEOAutomobileOptions, GEOTransitOptions, GEOWalkingOptions;

@interface MKDirectionsRequest : NSObject <NSCopying> {

	MKMapItem* _source;
	MKMapItem* _destination;
	unsigned long long _transportType;
	BOOL _requestsAlternateRoutes;
	BOOL _includeTravelTimes;
	BOOL _includeTrafficIncidents;
	BOOL _includeZilchRoutePoints;
	BOOL _includeBasicRoutePoints;
	BOOL _includeEntryPoints;
	BOOL _includeDistanceInETA;
	NSDate* _departureDate;
	NSDate* _arrivalDate;
	NSArray* _additionalTransportTypesRequested;
	GEOAutomobileOptions* _automobileOptions;
	GEOTransitOptions* _transitOptions;
	GEOWalkingOptions* _walkingOptions;

}

@property (nonatomic,retain) MKMapItem * source;                                                                                                                               //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) MKMapItem * destination;                                                                                                                          //@synthesize destination=_destination - In the implementation block
@property (assign,setter=_setIncludeDistanceInETA:,getter=_includeDistanceInETA,nonatomic) BOOL includeDistanceInETA;                                                          //@synthesize includeDistanceInETA=_includeDistanceInETA - In the implementation block
@property (setter=_setAdditionalTransportTypesRequested:,getter=_additionalTransportTypesRequested,nonatomic,retain) NSArray * additionalTransportTypesRequested;              //@synthesize additionalTransportTypesRequested=_additionalTransportTypesRequested - In the implementation block
@property (nonatomic,readonly) BOOL _includeTypicalRouteDuration; 
@property (nonatomic,readonly) BOOL _includeTravelTimes;                                                                                                                       //@synthesize includeTravelTimes=_includeTravelTimes - In the implementation block
@property (nonatomic,readonly) BOOL _includeTrafficIncidents;                                                                                                                  //@synthesize includeTrafficIncidents=_includeTrafficIncidents - In the implementation block
@property (nonatomic,readonly) BOOL _includeZilchRoutePoints;                                                                                                                  //@synthesize includeZilchRoutePoints=_includeZilchRoutePoints - In the implementation block
@property (nonatomic,readonly) BOOL _includeBasicRoutePoints;                                                                                                                  //@synthesize includeBasicRoutePoints=_includeBasicRoutePoints - In the implementation block
@property (nonatomic,readonly) BOOL _includeEntryPoints;                                                                                                                       //@synthesize includeEntryPoints=_includeEntryPoints - In the implementation block
@property (setter=_setAutomobileOptions:,getter=_automobileOptions,nonatomic,retain) GEOAutomobileOptions * automobileOptions;                                                 //@synthesize automobileOptions=_automobileOptions - In the implementation block
@property (setter=_setTransitOptions:,getter=_transitOptions,nonatomic,retain) GEOTransitOptions * transitOptions;                                                             //@synthesize transitOptions=_transitOptions - In the implementation block
@property (setter=_setWalkingOptions:,getter=_walkingOptions,nonatomic,retain) GEOWalkingOptions * walkingOptions;                                                             //@synthesize walkingOptions=_walkingOptions - In the implementation block
+(BOOL)isDirectionsRequestURL:(id)arg1 ;
-(id)init;
-(id)description;
-(void)setSource:(MKMapItem *)arg1 ;
-(MKMapItem *)source;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(MKMapItem *)destination;
-(void)setDestination:(MKMapItem *)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(id)arrivalDate;
-(void)setArrivalDate:(id)arg1 ;
-(unsigned long long)transportType;
-(unsigned long long)_transportType;
-(void)setTransportType:(unsigned long long)arg1 ;
-(id)departureDate;
-(id)_transitOptions;
-(BOOL)_includeEntryPoints;
-(id)_mapkit_initWithSource:(id)arg1 destination:(id)arg2 transportType:(unsigned long long)arg3 arrivalDate:(id)arg4 ;
-(BOOL)_includeDistanceInETA;
-(void)_setTransitOptions:(id)arg1 ;
-(id)_mapkit_initWithSource:(id)arg1 destination:(id)arg2 transportType:(unsigned long long)arg3 arrivalDate:(id)arg4 includeTravelTimes:(BOOL)arg5 includeTrafficIncidents:(BOOL)arg6 includeEntryPoints:(BOOL)arg7 includeRoutePoints:(BOOL)arg8 ;
-(void)_setIncludeDistanceInETA:(BOOL)arg1 ;
-(BOOL)_includeTravelTimes;
-(void)_setAutomobileOptions:(id)arg1 ;
-(void)setRequestsAlternateRoutes:(BOOL)arg1 ;
-(id)_mapkit_initWithSource:(id)arg1 destination:(id)arg2 transportType:(unsigned long long)arg3 departureDate:(id)arg4 includeTravelTimes:(BOOL)arg5 includeTrafficIncidents:(BOOL)arg6 includeEntryPoints:(BOOL)arg7 includeRoutePoints:(BOOL)arg8 ;
-(id)_mapkit_initWithAllTransportTypesSource:(id)arg1 destination:(id)arg2 arrivalDate:(id)arg3 ;
-(id)_departureDate;
-(BOOL)_includeTypicalRouteDuration;
-(void)setDepartureDate:(id)arg1 ;
-(BOOL)_includeBasicRoutePoints;
-(void)_setAdditionalTransportTypesRequested:(id)arg1 ;
-(id)_mapkit_initWithAllTransportTypesSource:(id)arg1 destination:(id)arg2 departureDate:(id)arg3 ;
-(BOOL)requestsAlternateRoutes;
-(id)_automobileOptions;
-(id)_arrivalDate;
-(void)_setWalkingOptions:(id)arg1 ;
-(BOOL)_includeTrafficIncidents;
-(id)_walkingOptions;
-(id)_mapkit_initWithSource:(id)arg1 destination:(id)arg2 transportType:(unsigned long long)arg3 departureDate:(id)arg4 ;
-(BOOL)_includeZilchRoutePoints;
-(id)_additionalTransportTypesRequested;
-(BOOL)writeToURL:(id)arg1 error:(id*)arg2 ;
@end

