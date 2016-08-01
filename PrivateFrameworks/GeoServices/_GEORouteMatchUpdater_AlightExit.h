/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:07 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/_GEORouteMatchUpdater.h>

@class GEOPBTransitStop, GEOPBTransitStation, GEOComposedRouteStep;

@interface _GEORouteMatchUpdater_AlightExit : _GEORouteMatchUpdater {

	GEOPBTransitStop* _alightStop;
	GEOPBTransitStation* _alightStation;
	PolylineCoordinate _routeCoordinateAlightStation;
	GEOComposedRouteStep* _alightStep;
	GEOComposedRouteStep* _postAlightStep;
	GEOComposedRouteStep* _postAlightWalkingStep;

}
-(void)dealloc;
-(BOOL)updateRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3 ;
-(id)initWithTransitRouteMatcher:(id)arg1 alightStep:(id)arg2 ;
-(BOOL)_isLocationNearAlightNode:(id)arg1 ;
@end

