/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:06 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEORouteHypothesizerUpdaterDelegate.h>
#import <libobjc.A.dylib/GEOETAUpdaterDelegate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class GEODirectionsRequestFeedback, GEOComposedWaypoint, NSDate, GEORouteHypothesis, GEOLocation, GEOETAUpdater, GEOETARoute, GEORouteAttributes, GEORouteHypothesizerUpdater, GEORoute, NSData, GEOMapServiceTraits, GEORouteHypothesizerAnalyticsStore, GEOComposedRoute, NSString;

@interface GEORouteHypothesisMonitor : NSObject <GEORouteHypothesizerUpdaterDelegate, GEOETAUpdaterDelegate, NSSecureCoding> {

	/*^block*/id _handler;
	/*^block*/id _errorHandler;
	GEODirectionsRequestFeedback* _feedback;
	GEOComposedWaypoint* _source;
	GEOComposedWaypoint* _destination;
	int _transportType;
	NSDate* _departureDate;
	NSDate* _arrivalDate;
	GEORouteHypothesis* _hypothesis;
	GEOLocation* _lastLocation;
	GEOETAUpdater* _etaUpdater;
	GEOETARoute* _liveETARoute;
	GEOETARoute* _baselineETARoute;
	GEORouteAttributes* _routeAttributes;
	GEORouteHypothesizerUpdater* _updater;
	GEORoute* _existingRoute;
	NSData* _usualRouteData;
	GEOMapServiceTraits* _traits;
	GEORouteHypothesizerAnalyticsStore* _analyticsStore;

}

@property (nonatomic,retain) GEODirectionsRequestFeedback * feedback;              //@synthesize feedback=_feedback - In the implementation block
@property (nonatomic,readonly) BOOL supportsLiveTraffic; 
@property (nonatomic,readonly) BOOL supportsDirections; 
@property (nonatomic,readonly) GEOComposedWaypoint * source;                       //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) GEOComposedWaypoint * destination;                  //@synthesize destination=_destination - In the implementation block
@property (nonatomic,readonly) int transportType;                                  //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,readonly) NSDate * departureDate;                             //@synthesize departureDate=_departureDate - In the implementation block
@property (nonatomic,readonly) NSDate * arrivalDate;                               //@synthesize arrivalDate=_arrivalDate - In the implementation block
@property (nonatomic,readonly) GEOComposedRoute * route; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(GEOComposedWaypoint *)source;
-(void)_commonInit;
-(GEOComposedWaypoint *)destination;
-(NSDate *)arrivalDate;
-(GEOComposedRoute *)route;
-(int)transportType;
-(void)setFeedback:(GEODirectionsRequestFeedback *)arg1 ;
-(GEODirectionsRequestFeedback *)feedback;
-(void)_createUpdaterWithStartingLocation:(id)arg1 ;
-(NSDate *)departureDate;
-(void)etaUpdaterReceivedInvalidRoute:(id)arg1 newRoute:(id)arg2 incidentsOnRoute:(id)arg3 incidentsOffRoute:(id)arg4 ;
-(void)etaUpdaterUpdatedETA:(id)arg1 ;
-(void)etaUpdater:(id)arg1 receivedError:(id)arg2 ;
-(void)routeHypothesizerUpdaterDidArrive:(id)arg1 ;
-(void)etaUpdater:(id)arg1 receivedETATrafficUpdateResponse:(id)arg2 ;
-(void)routeHypothesizerUpdater:(id)arg1 faultedWithError:(id)arg2 ;
-(void)routeHypothesizerUpdater:(id)arg1 didChangeTravelState:(BOOL)arg2 ;
-(void)etaUpdater:(id)arg1 willSendETATrafficUpdateRequest:(id)arg2 ;
-(BOOL)supportsLiveTraffic;
-(BOOL)supportsDirections;
-(void)_refreshETAWithRouteMatch:(id)arg1 ;
-(void)routeHypothesizerUpdater:(id)arg1 receivedNewRoute:(id)arg2 request:(id)arg3 response:(id)arg4 ;
-(id)etaUpdaterRoutesForETATrafficUpdateRequest:(id)arg1 ;
-(void)updateLocation:(id)arg1 hypothesisHandler:(/*^block*/id)arg2 ;
-(void)routeHypothesizerUpdater:(id)arg1 willRequestNewRoute:(id)arg2 ;
-(void)_updateETAWithRouteMatch:(id)arg1 ;
-(void)_createRouteAttributes;
-(id)initWithSource:(id)arg1 toDestination:(id)arg2 transportType:(int)arg3 departureDate:(id)arg4 usualRouteData:(id)arg5 traits:(id)arg6 ;
-(id)initWithSource:(id)arg1 toDestination:(id)arg2 transportType:(int)arg3 arrivalDate:(id)arg4 usualRouteData:(id)arg5 traits:(id)arg6 ;
-(id)initWithExistingRoute:(id)arg1 source:(id)arg2 destination:(id)arg3 etaUpdater:(id)arg4 traits:(id)arg5 ;
-(void)_createFeedback;
-(void)_updateLocation:(id)arg1 hypothesisHandler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)recordETAUpdatesAfterEventStart;
-(void)updateLocation:(id)arg1 hypothesisHandler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)stopMonitoring;
-(void)clientDisplayedUINotification:(unsigned long long)arg1 ;
-(void)_finishEtaUpdaterInit;
@end

